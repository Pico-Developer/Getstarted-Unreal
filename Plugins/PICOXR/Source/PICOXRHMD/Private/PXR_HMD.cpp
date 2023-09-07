// Copyright® 2015-2023 PICO Technology Co., Ltd. All rights reserved.
// This plugin incorporates portions of the Unreal® Engine. Unreal® is a trademark or registered trademark of Epic Games, Inc. in the United States of America and elsewhere.
// Unreal® Engine, Copyright 1998 – 2023, Epic Games, Inc. All rights reserved. 

#include "PXR_HMD.h"
#include "PXR_HMDPrivateRHI.h"

#include "PXR_HMDRenderBridge.h"
#include "PXR_HMDRuntimeSettings.h"
#include "PostProcess/RenderingCompositionGraph.h"
#include "XRThreadUtils.h"
#include "PXR_Input.h"
#include "IHeadMountedDisplayVulkanExtensions.h"
#include "PXR_Log.h"
#include "PXR_StereoLayer.h"
#include "PXR_HMDFunctionLibrary.h"
#include "GameFramework/WorldSettings.h"
#include "Misc/EngineVersion.h"
#include "PXR_Utils.h"
#include "HardwareInfo.h"
#include "Misc/CoreDelegates.h"
#include "GameFramework/GameUserSettings.h"

#define PICO_PAUSED_IDLE_FPS 10

static TAutoConsoleVariable<int32> CVarPICOEnableSubsampledLayout(
	TEXT("r.Mobile.PICO.EnableSubsampled"),
	0,
	TEXT("0: Disable subsampled layout (Default)\n")
	TEXT("1: Enable subsampled layout on supported platforms\n"),
	ECVF_Scalability | ECVF_RenderThreadSafe);

#ifdef PICO_CUSTOM_ENGINE
	//PICO AppSpaceWarp
static TAutoConsoleVariable<int32> CVarPICOEnableSpaceWarpUser(
	TEXT("r.Mobile.PICO.SpaceWarp.Enable"),
	0,
	TEXT("0 Disable spacewarp at runtime.\n")
	TEXT("1 Enable spacewarp at runtime.\n"),
	ECVF_Scalability | ECVF_RenderThreadSafe);

static TAutoConsoleVariable<int32> CVarPICOEnableSpaceWarpInternal(
	TEXT("r.Mobile.PICO.SpaceWarp.EnableInternal"),
	0,
	TEXT("0 Disable spacewarp, for internal engine checking, don't modify.\n")
	TEXT("1 Enable spacewarp, for internal enegine checking, don't modify.\n"),
	ECVF_Scalability | ECVF_RenderThreadSafe);

static TAutoConsoleVariable<int32> CVarPICOEnableStaticSpaceWarpUser(
	TEXT("r.Mobile.PICO.StaticSpaceWarp.Enable"),
	0,
	TEXT("0 Disable Static spacewarp.\n")
	TEXT("1 Enable Static spacewarp.\n"),
	ECVF_Scalability | ECVF_RenderThreadSafe);

static TAutoConsoleVariable<bool> CVarPICOEnableEyeTrackedFoveatedRendering(
	TEXT("r.Mobile.PICO.EnableEyeTrackedFoveatedRendering"),
	true,
	TEXT("Whether to use eye tracked foveated rendering"),
	ECVF_Default);
#endif

float FPICOXRHMD::IpdValue = 0.f;
FName FPICOXRHMD::GetSystemName() const
{
    static FName DefaultName(TEXT("PICOXRHMD"));
    return DefaultName;
}

bool FPICOXRHMD::EnumerateTrackedDevices(TArray<int32>& OutDevices, EXRTrackedDeviceType Type /*= EXRTrackedDeviceType::Any*/)
{
	if (Type == EXRTrackedDeviceType::Any || Type == EXRTrackedDeviceType::HeadMountedDisplay)
	{
		OutDevices.Add(HMDDeviceId);
		return true;
	}
	return false;
}

void FPICOXRHMD::SetInterpupillaryDistance(float NewIPD)
{
	//TODO:SetIPD(NewIPD);
}

float FPICOXRHMD::GetInterpupillaryDistance() const
{
	return UPxr_GetIPD();
}

bool FPICOXRHMD::IsHMDConnected()
{
	CheckInGameThread();

	return GameSettings->Flags.bHMDEnabled && IsPICOHMDConnected();
}

bool FPICOXRHMD::GetRelativeEyePose(int32 InDeviceId, EStereoscopicPass InEye, FQuat& OutOrientation, FVector& OutPosition)
{
	OutOrientation = FQuat::Identity;
	OutPosition = FVector::ZeroVector;
	if (InDeviceId != HMDDeviceId)
	{
		return false;
	}
	FPXRGameFrame* CurrentFrame;
	if (IsInRenderingThread())
	{
		CurrentFrame = GameFrame_RenderThread.Get();
	}
	else if (IsInGameThread())
	{
		CurrentFrame = NextGameFrameToRender_GameThread.Get();
	}
	else
	{
		return false;
	}
	if (!CurrentFrame)
	{
		return false;
	}
	if (InDeviceId == HMDDeviceId && (InEye == eSSP_LEFT_EYE || InEye == eSSP_RIGHT_EYE))
	{
		OutPosition = FVector(0, (InEye == eSSP_LEFT_EYE ? -.5 : .5) * GetInterpupillaryDistance() * CurrentFrame->WorldToMetersScale, 0);
#if PLATFORM_ANDROID
		if (FPICOXRVersionHelper::IsThisVersionOrGreater(0x2000306))
		{
			PxrQuaternionf quaternion;
			quaternion.x = 0;
			quaternion.y = 0;
			quaternion.z = 0;
			quaternion.w = 1.0f;
			switch (InEye)
			{
			case eSSP_LEFT_EYE:
				{
				FPICOXRHMDModule::GetPluginWrapper().GetEyeOrientation((int)0, &quaternion);
				}
				break;
			case eSSP_RIGHT_EYE:
				{
				FPICOXRHMDModule::GetPluginWrapper().GetEyeOrientation((int)1, &quaternion);
				}
				break;
			default:
				break;
			}
			OutOrientation=FQuat(quaternion.z,quaternion.x,quaternion.y,quaternion.w);
		}
#endif
		return true;
	}
	return false;
}

bool FPICOXRHMD::GetTrackingSensorProperties(int32 InDeviceId, FQuat& OutOrientation, FVector& OutPosition, FXRSensorProperties& OutSensorProperties)
{
	check(IsInGameThread());

	FPICOXRFrustum FOV;
	switch (InDeviceId)
	{
	case 0:
		FOV.FovLeft = (LeftFrustum.FovLeft + RightFrustum.FovLeft) / 2;
		FOV.FovRight = (LeftFrustum.FovRight + RightFrustum.FovRight) / 2;
		FOV.FovUp = (LeftFrustum.FovUp + RightFrustum.FovUp) / 2;
		FOV.FovDown = (LeftFrustum.FovDown + RightFrustum.FovDown) / 2;
		FOV.Near = (LeftFrustum.Near + RightFrustum.Near) / 2;
		FOV.Far = (LeftFrustum.Far + RightFrustum.Far) / 2;
		break;
	case 1:
		FOV = LeftFrustum;
		break;
	case 2:
		FOV = RightFrustum;
		break;
	default:
		return false;
		break;
	}

	if (InDeviceId == 0)
	{
		if (GetCurrentPose(InDeviceId, OutOrientation, OutPosition))
		{
			OutSensorProperties.LeftFOV = FMath::RadiansToDegrees(FOV.FovLeft);
			OutSensorProperties.RightFOV = FMath::RadiansToDegrees(FOV.FovRight);
			OutSensorProperties.TopFOV = FMath::RadiansToDegrees(FOV.FovUp);
			OutSensorProperties.BottomFOV = FMath::RadiansToDegrees(FOV.FovDown);
			OutSensorProperties.NearPlane = FOV.Near * NextGameFrameToRender_GameThread->WorldToMetersScale;
			OutSensorProperties.FarPlane = FOV.Far * NextGameFrameToRender_GameThread->WorldToMetersScale;
			OutSensorProperties.CameraDistance = 1.0f * NextGameFrameToRender_GameThread->WorldToMetersScale;
			return true;
		}
	}
	return false;
}

void FPICOXRHMD::ResetOrientationAndPosition(float Yaw /*= 0.f*/)
{
	Recenter(RecenterOrientationAndPosition, Yaw);
}

void FPICOXRHMD::ResetOrientation(float Yaw /*= 0.f*/)
{
	Recenter(RecenterOrientation, Yaw);
}

void FPICOXRHMD::ResetPosition()
{
	Recenter(RecenterPosition, 0);
}

bool FPICOXRHMD::GetCurrentPose(int32 DeviceId, FQuat& CurrentOrientation, FVector& CurrentPosition)
{
	if (DeviceId != HMDDeviceId)
	{
		return false;
	}
	CurrentOrientation = FQuat::Identity;
	CurrentPosition = FVector::ZeroVector;
	FPXRGameFrame* CurrentFrame = NULL;
	if (IsInRenderingThread())
	{
		CurrentFrame = GameFrame_RenderThread.Get();
		LateUpdatePose();
	}
	else if (IsInGameThread())
	{
		CurrentFrame = NextGameFrameToRender_GameThread.Get();
	}
	else
	{
		return false;
	}
	if (CurrentFrame)
	{
		CurrentOrientation = CurrentFrame->Orientation;
		CurrentPosition = CurrentFrame->Position;
		PXR_LOGV(PxrUnreal, "GetCurrentPose Frame:%u Rotation:%s,Position:%s", CurrentFrame->FrameNumber, PLATFORM_CHAR(*CurrentOrientation.Rotator().ToString()), PLATFORM_CHAR(*CurrentPosition.ToString()));
		return true;
	}
	return false;
}

void FPICOXRHMD::UPxr_GetAngularAcceleration(FVector& AngularAcceleration)
{
	FPXRGameFrame* CurrentFrame = NULL;
	if (IsInGameThread())
	{
		CurrentFrame = NextGameFrameToRender_GameThread.Get();
	}
	else if (IsInRenderingThread())
	{
		CurrentFrame = GameFrame_RenderThread.Get();
	}
	if (CurrentFrame)
	{
		AngularAcceleration = CurrentFrame->AngularAcceleration;
	}
	else
	{
		AngularAcceleration = FVector::ZeroVector;
	}
}

void FPICOXRHMD::UPxr_GetVelocity(FVector& Velocity)
{
	FPXRGameFrame* CurrentFrame = NULL;
	if (IsInGameThread())
	{
		CurrentFrame = NextGameFrameToRender_GameThread.Get();
	}
	else if (IsInRenderingThread())
	{
		CurrentFrame = GameFrame_RenderThread.Get();
	}
	if (CurrentFrame)
	{
		Velocity = CurrentFrame->Velocity;
	}
	else
	{
		Velocity = FVector::ZeroVector;
	}
}

void FPICOXRHMD::UPxr_GetAcceleration(FVector& Acceleration)
{
	FPXRGameFrame* CurrentFrame = NULL;
	if (IsInGameThread())
	{
		CurrentFrame = NextGameFrameToRender_GameThread.Get();
	}
	else if (IsInRenderingThread())
	{
		CurrentFrame = GameFrame_RenderThread.Get();
	}
	if (CurrentFrame)
	{
		Acceleration = CurrentFrame->Acceleration;
	}
	else
	{
		Acceleration = FVector::ZeroVector;
	}
}

void FPICOXRHMD::UPxr_GetAngularVelocity(FVector& AngularVelocity)
{
	FPXRGameFrame* CurrentFrame = NULL;
	if (IsInGameThread())
	{
		CurrentFrame = NextGameFrameToRender_GameThread.Get();
	}
	else if (IsInRenderingThread())
	{
		CurrentFrame = GameFrame_RenderThread.Get();
	}
	if (CurrentFrame)
	{
		AngularVelocity = CurrentFrame->AngularVelocity;
	}
	else
	{
		AngularVelocity = FVector::ZeroVector;
	}
}

int32 FPICOXRHMD::UPxr_SetFieldOfView(EPICOXREyeType Eye, float FovLeftInDegrees, float FovRightInDegrees, float FovUpInDegrees, float FovDownInDegrees)
{
	int res = 0;
#if PLATFORM_ANDROID
	if (FPICOXRVersionHelper::IsThisVersionOrGreater(0x2000300))
	{
		PxrConfigType type;

		switch (Eye)
		{
		case EPICOXREyeType::LeftEye:
			{
				type = PxrConfigType::PXR_LEFT_EYE_FOV;
			}
			break;
		case EPICOXREyeType::RightEye:
			{
				type = PxrConfigType::PXR_RIGHT_EYE_FOV;
			}
			break;
		case EPICOXREyeType::BothEye:
			{
				type = PxrConfigType::PXR_BOTH_EYE_FOV;
			}
			break;
		default:;
		}

		TArray<float> FovData;
		FovData.Add(-FMath::DegreesToRadians(FovLeftInDegrees));
		FovData.Add(FMath::DegreesToRadians(FovRightInDegrees));

		FovData.Add(FMath::DegreesToRadians(FovUpInDegrees));

		FovData.Add(-FMath::DegreesToRadians(FovDownInDegrees));
		
		res = FPICOXRHMDModule::GetPluginWrapper().SetConfigFloatArray(type, FovData.GetData(), 4);
	}
#endif
	return res;
}

FString FPICOXRHMD::UPxr_GetDeviceModel()
{
	return DeviceModel;
}

void FPICOXRHMD::SetBaseRotation(const FRotator& BaseRot)
{
	SetBaseOrientation(BaseRot.Quaternion());
}

FRotator FPICOXRHMD::GetBaseRotation() const
{
	return GetBaseOrientation().Rotator();
}

void FPICOXRHMD::SetBaseOrientation(const FQuat& BaseOrient)
{
	CheckInGameThread();

	GameSettings->BaseOrientation = BaseOrient;
}

FQuat FPICOXRHMD::GetBaseOrientation() const
{
	CheckInGameThread();

	return GameSettings->BaseOrientation;
}

void FPICOXRHMD::SetTrackingOrigin(EHMDTrackingOrigin::Type NewOrigin)
{
	TrackingOrigin = NewOrigin;
	PxrTrackingOrigin Origin = PxrTrackingOrigin::PXR_EYE_LEVEL;
	switch (NewOrigin)
	{
	case EHMDTrackingOrigin::Eye:
	{
		PXR_LOGD(PxrUnreal, "SetTrackingOrigin:EHMDTrackingOrigin::Eye");
		Origin = PxrTrackingOrigin::PXR_EYE_LEVEL;
		break;
	}
	case EHMDTrackingOrigin::Floor:
	{
		PXR_LOGD(PxrUnreal, "SetTrackingOrigin:EHMDTrackingOrigin::Floor");
		Origin = PxrTrackingOrigin::PXR_FLOOR_LEVEL;
		break;
	}
	case EHMDTrackingOrigin::Stage:
	{
		PXR_LOGD(PxrUnreal, "SetTrackingOrigin:EHMDTrackingOrigin::Stage");
		Origin = PxrTrackingOrigin::PXR_STAGE_LEVEL;
		break;
	}
	default:
		break;
	}
	if (FPICOXRHMDModule::GetPluginWrapper().bIsSessionInitialized)
	{
		EHMDTrackingOrigin::Type lastOrigin = GetTrackingOrigin();
		FPICOXRHMDModule::GetPluginWrapper().SetTrackingOrigin(Origin);
		PICOFlags.NeedSetTrackingOrigin = false;
		if (lastOrigin != NewOrigin)
		{
			GameSettings->BaseOffset = FVector::ZeroVector;
		}
	}
	OnTrackingOriginChanged();
}

EHMDTrackingOrigin::Type FPICOXRHMD::GetTrackingOrigin() const
{
	EHMDTrackingOrigin::Type to = EHMDTrackingOrigin::Eye;
	PxrTrackingOrigin Origin = PxrTrackingOrigin::PXR_EYE_LEVEL;

	if (FPICOXRHMDModule::GetPluginWrapper().bIsSessionInitialized && FPICOXRHMDModule::GetPluginWrapper().GetTrackingOrigin(&Origin) == 0)
	{
		switch (Origin)
		{
		case PxrTrackingOrigin::PXR_EYE_LEVEL:
			to = EHMDTrackingOrigin::Eye;
			break;
		case PxrTrackingOrigin::PXR_FLOOR_LEVEL:
			to = EHMDTrackingOrigin::Floor;
			break;
		case PxrTrackingOrigin::PXR_STAGE_LEVEL:
			to = EHMDTrackingOrigin::Stage;
			break;
		default:
			PXR_LOGE(PxrUnreal, "Unsupported ovr tracking origin type %d", int(Origin));
			break;
		}
	}
	return to;
}

class TSharedPtr< class IStereoRendering, ESPMode::ThreadSafe > FPICOXRHMD::GetStereoRenderingDevice()
{
	return SharedThis(this);
}

float FPICOXRHMD::GetWorldToMetersScale() const
{
	if (NextGameFrameToRender_GameThread.IsValid())
	{
		return NextGameFrameToRender_GameThread->WorldToMetersScale;
	}

	if (GWorld != nullptr)
	{
		return GWorld->GetWorldSettings()->WorldToMeters;
	}

	return 100.0f;
}

bool FPICOXRHMD::DoesSupportPositionalTracking() const
{
	return !PICOXRSetting->bIsHMD3Dof;
}

bool FPICOXRHMD::IsHMDEnabled() const
{
	CheckInGameThread();

	return (GameSettings->Flags.bHMDEnabled);
}

void FPICOXRHMD::EnableHMD(bool Allow /*= true*/)
{
	CheckInGameThread();

	GameSettings->Flags.bHMDEnabled = Allow;
	if (!GameSettings->Flags.bHMDEnabled)
	{
		EnableStereo(false);
	}
}

bool FPICOXRHMD::GetHMDMonitorInfo(MonitorInfo &MonitorDesc)
{
	check(IsInGameThread());
	MonitorDesc.MonitorName = FString("PICOXR Window");
	MonitorDesc.MonitorId = 0;
	MonitorDesc.DesktopX = MonitorDesc.DesktopY = 0;
	MonitorDesc.ResolutionX = MonitorDesc.ResolutionY = 0;
	MonitorDesc.WindowSizeX = MonitorDesc.WindowSizeY = 0;

	if (GameSettings.IsValid())
	{
		MonitorDesc.ResolutionX = MonitorDesc.WindowSizeX = GameSettings->RenderTargetSize.X;
		MonitorDesc.ResolutionY = MonitorDesc.WindowSizeY = GameSettings->RenderTargetSize.Y;
	}

	return true;
}

void FPICOXRHMD::GetFieldOfView(float& OutHFOVInDegrees, float& OutVFOVInDegrees) const
{
	const float LeftHFOVInDegrees = FMath::RadiansToDegrees(LeftFrustum.FovRight - LeftFrustum.FovLeft);
	const float LeftVFOVInDegrees = FMath::RadiansToDegrees(LeftFrustum.FovUp - LeftFrustum.FovDown);

	const float RightHFOVInDegrees = FMath::RadiansToDegrees(RightFrustum.FovRight - RightFrustum.FovLeft);
	const float RightVFOVInDegrees = FMath::RadiansToDegrees(RightFrustum.FovUp - RightFrustum.FovDown);

	OutHFOVInDegrees = (LeftHFOVInDegrees+RightHFOVInDegrees)/2;
	OutVFOVInDegrees = (LeftVFOVInDegrees+RightVFOVInDegrees)/2;
}

bool FPICOXRHMD::IsChromaAbCorrectionEnabled() const
{
	return false;
}

/*
 * Gets the ideal render target size for this device.
 * This value is obtained from the default runtime config.
 * NOTE: This function does not account for a double-wide render target format
 */
FIntPoint FPICOXRHMD::GetIdealRenderTargetSize() const
{
	FIntPoint IdealRenderTargetSize;
	FPICOXRHMDModule::GetPluginWrapper().GetConfigInt(PXR_RENDER_TEXTURE_WIDTH, &IdealRenderTargetSize.X);
	FPICOXRHMDModule::GetPluginWrapper().GetConfigInt(PXR_RENDER_TEXTURE_HEIGHT, &IdealRenderTargetSize.Y);

	PXR_LOGV(PxrUnreal, "IdealRenderTargetSize:(%d,%d)", IdealRenderTargetSize.X, IdealRenderTargetSize.Y);
	return IdealRenderTargetSize;
}

/*
 * Gets the maximum render target size for this device.
 */
FIntPoint FPICOXRHMD::GetMaxRenderTargetSize() const
{
	FIntPoint MaxRenderTargetSize(4096 * 2, 4096);

	PXR_LOGV(PxrUnreal, "MaxRenderTargetSize:(%d,%d)", MaxRenderTargetSize.X, MaxRenderTargetSize.Y);
	return MaxRenderTargetSize;
}

void FPICOXRHMD::OnBeginRendering_GameThread()
{
}

void FPICOXRHMD::OnBeginRendering_RenderThread(FRHICommandListImmediate& RHICmdList, FSceneViewFamily& ViewFamily)
{
	
}

bool FPICOXRHMD::OnStartGameFrame(FWorldContext& WorldContext)
{
	PXR_LOGV(PxrUnreal, "OnStartGameFrame");
	if (IsEngineExitRequested())
	{
		return false;
	}
	RefreshTrackingToWorldTransform(WorldContext);

	check(GameSettings.IsValid());		
	if (!GameSettings->IsStereoEnabled())
	{
		FApp::SetUseVRFocus(false);
		FApp::SetHasVRFocus(false);
	}

	if (bShutdownRequestQueued)
	{
		bShutdownRequestQueued = false;
		DoSessionShutdown();
	}

	if (!WorldContext.World() || (!(GEnableVREditorHacks && WorldContext.WorldType == EWorldType::Editor) && !WorldContext.World()->IsGameWorld()))
	{
		return false;
	}
	CachedWorldToMetersScale = WorldContext.World()->GetWorldSettings()->WorldToMeters;
	OnGameFrameBegin_GameThread();

	if (FPICOXRHMDModule::GetPluginWrapper().bIsSessionInitialized)
	{
		if (PICOFlags.NeedSetTrackingOrigin)
		{
			SetTrackingOrigin(TrackingOrigin);
		}

		bool bAppHasVRFocus = true;
		//bAppHasVRFocus = FPICOXRHMDModule::GetPluginWrapper().GetAppHasFocus();
		if (GameSettings->SeeThroughState == 2)
		{
			//bAppHasVRFocus = false;
		}

		FApp::SetUseVRFocus(true);
		FApp::SetHasVRFocus(bAppHasVRFocus != false);

		if (!GIsEditor)
		{
			if (!bAppHasVRFocus)
			{
				// not visible,
				if (!GameSettings->Flags.bPauseRendering)
				{
					PXR_LOGI(PxrUnreal, "The app went out of VR focus, seizing rendering...");
				}
			}
			else if (GameSettings->Flags.bPauseRendering)
			{
				PXR_LOGI(PxrUnreal, "The app got VR focus, restoring rendering...");
			}

			bool bPrevPause = GameSettings->Flags.bPauseRendering;
			GameSettings->Flags.bPauseRendering = !bAppHasVRFocus;

			if (GameSettings->Flags.bPauseRendering && (GEngine->GetMaxFPS() != PICO_PAUSED_IDLE_FPS))
			{
				GEngine->SetMaxFPS(PICO_PAUSED_IDLE_FPS);
			}

			if (bPrevPause != GameSettings->Flags.bPauseRendering)
			{
				APlayerController* const PC = GEngine->GetFirstLocalPlayerController(WorldContext.World());
				if (GameSettings->Flags.bPauseRendering)
				{
					// focus is lost
					GEngine->SetMaxFPS(PICO_PAUSED_IDLE_FPS);

					if (!FCoreDelegates::ApplicationWillEnterBackgroundDelegate.IsBound())
					{
						PICOFlags.AppIsPaused = false;
						if (PC && !PC->IsPaused())
						{
							PC->SetPause(true);
							PICOFlags.AppIsPaused = true;
						}
					}
					else
					{
						FCoreDelegates::ApplicationWillEnterBackgroundDelegate.Broadcast();
					}
				}
				else
				{
					GEngine->SetMaxFPS(0);

					if (!FCoreDelegates::ApplicationHasEnteredForegroundDelegate.IsBound())
					{
						if (PC && PICOFlags.AppIsPaused)
						{
							PC->SetPause(false);
						}
						PICOFlags.AppIsPaused = false;
					}
					else
					{
						FCoreDelegates::ApplicationHasEnteredForegroundDelegate.Broadcast();
					}
				}
			}
		}

	}

  	return true;
}

bool FPICOXRHMD::OnEndGameFrame(FWorldContext& WorldContext)
{
	FPXRGameFrame* const CurrentGameFrame = GameFrame_GameThread.Get();
	if (CurrentGameFrame)
	{
		CurrentGameFrame->TrackingToWorld = ComputeTrackingToWorldTransform(WorldContext);
#ifdef PICO_CUSTOM_ENGINE
		CurrentGameFrame->LastTrackingToWorld = LastTrackingToWorld;
		LastTrackingToWorld = CurrentGameFrame->TrackingToWorld;
#endif

	}
	else
	{
		return false;
	}
	OnGameFrameEnd_GameThread();
	return true;
}

bool FPICOXRHMD::IsStereoEnabled() const
{
	if (IsInGameThread())
	{
		return GameSettings.IsValid() && GameSettings->IsStereoEnabled();
	}
	else
	{
		return GameSettings_RenderThread.IsValid() && GameSettings_RenderThread->IsStereoEnabled();
	}
}

bool FPICOXRHMD::EnableStereo(bool Stereo /*= true*/)
{
	GameSettings->Flags.bStereoEnabled = Stereo;
	return GameSettings->Flags.bStereoEnabled;
}

void FPICOXRHMD::AdjustViewRect(EStereoscopicPass StereoPass, int32& X, int32& Y, uint32& SizeX, uint32& SizeY) const
{
	if (GameSettings.IsValid())
	{
		const int32 ViewIndex = GetViewIndexForPass(StereoPass);
		X = GameSettings->EyeUnscaledRenderViewport[ViewIndex].Min.X;
		Y = GameSettings->EyeUnscaledRenderViewport[ViewIndex].Min.Y;
		SizeX = GameSettings->EyeUnscaledRenderViewport[ViewIndex].Size().X;
		SizeY = GameSettings->EyeUnscaledRenderViewport[ViewIndex].Size().Y;
	}
	else
	{
		SizeX = SizeX / 2;
		if (StereoPass == eSSP_RIGHT_EYE)
		{
			X += SizeX;
		}
	}
	PXR_LOGV(PxrUnreal,"AdjustViewRect StereoPass:%d ,X: %d,Y: %d ,SizeX: %d,SizeY: %d)", (int)StereoPass, X, Y, SizeX, SizeY);
}

void FPICOXRHMD::SetFinalViewRect(FRHICommandListImmediate& RHICmdList, const EStereoscopicPass StereoPass, const FIntRect& FinalViewRect)
{
	CheckInRenderThread();
	const int32 ViewIndex = GetViewIndexForPass(StereoPass);
	if (GameSettings_RenderThread.IsValid() && GameSettings_RenderThread->IsAdaptiveResolutionEnabled())
	{
		GameSettings_RenderThread->EyeRenderViewport[ViewIndex] = FinalViewRect;
	}

	ExecuteOnRHIThread_DoNotWait([this, ViewIndex, FinalViewRect]()
		{
			CheckInRHIThread();

			if (GameSettings_RHIThread.IsValid() && GameSettings_RHIThread->IsAdaptiveResolutionEnabled())
			{
				GameSettings_RHIThread->EyeRenderViewport[ViewIndex] = FinalViewRect;
			}
		});
}

FMatrix FPICOXRHMD::GetStereoProjectionMatrix(const enum EStereoscopicPass StereoPassType) const
{
	FPICOXRFrustum Frustum = (StereoPassType == eSSP_LEFT_EYE) ? LeftFrustum : RightFrustum;
	const float ProjectionCenterOffset = 0;// 0.151976421f;
	const float PassProjectionOffset = (StereoPassType == eSSP_LEFT_EYE) ? ProjectionCenterOffset : -ProjectionCenterOffset;
	// correct far and near planes for reversed-Z projection matrix
	const float WorldScale = GetWorldToMetersScale() * (1.0 / 100.0f); // physical scale is 100 UUs/meter
	float ZNear = GNearClippingPlane * WorldScale;
	Frustum.FovUp = tan(Frustum.FovUp);
	Frustum.FovDown = tan(Frustum.FovDown);
	Frustum.FovLeft = tan(Frustum.FovLeft);
	Frustum.FovRight = tan(Frustum.FovRight);
	float SumRL = (Frustum.FovRight + Frustum.FovLeft);
	float SumTB = (Frustum.FovUp + Frustum.FovDown);
	float InvRL = (1.0f / (Frustum.FovRight - Frustum.FovLeft));
	float InvTB = (1.0f / (Frustum.FovUp - Frustum.FovDown));
	FMatrix ProjectionMatrix = FMatrix(
		FPlane((2.0f * InvRL), 0.0f, 0.0f, 0.0f),
		FPlane(0.0f, (2.0f * InvTB), 0.0f, 0.0f),
		FPlane((SumRL * -InvRL), (SumTB * -InvTB), 0.0f, 1.0f),
		FPlane(0.0f, 0.0f, ZNear, 0.0f)) * FTranslationMatrix(FVector(PassProjectionOffset, 0, 0));
	return ProjectionMatrix;
}

void FPICOXRHMD::GetEyeRenderParams_RenderThread(const struct FRenderingCompositePassContext& Context, FVector2D& EyeToSrcUVScaleValue, FVector2D& EyeToSrcUVOffsetValue) const
{
	if (Context.View.StereoPass == eSSP_LEFT_EYE)
	{
		EyeToSrcUVOffsetValue.X = 0.0f;
		EyeToSrcUVOffsetValue.Y = 0.0f;

		EyeToSrcUVScaleValue.X = 0.5f;
		EyeToSrcUVScaleValue.Y = 1.0f;
	}
	else
	{
		EyeToSrcUVOffsetValue.X = 0.5f;
		EyeToSrcUVOffsetValue.Y = 0.0f;

		EyeToSrcUVScaleValue.X = 0.5f;
		EyeToSrcUVScaleValue.Y = 1.0f;
	}
}

FPICOXRHMD::FPICOXRHMD(const FAutoRegister&AutoRegister)
	: FHeadMountedDisplayBase(nullptr)
	, FSceneViewExtensionBase(AutoRegister)
	, inputFocusState(true)
	, DisplayRefreshRate(72.0f)
	, CurrentHMDBatteryLevel(0)
	, bSeeThroughIsShown(false)
	, bIsUsingMobileMultiView(false)
	, CurrentCoordinateType(EPICOXRCoordinateType::Local)
	, RTSize(FIntPoint(4096, 2048))
	, NeckOffset(FVector::ZeroVector)
	, RenderBridge(nullptr)
	, PICOXRSetting(nullptr)
	, bIsEndGameFrame(false)
	, TrackingOrigin(EHMDTrackingOrigin::Eye)
	, PlayerController(nullptr)
	, PICOSplash(nullptr)
	, ContentResourceFinder(nullptr)
	, bShutdownRequestQueued(false)
{
	PICOFlags.Raw = 0;
	EventManager = UPICOXREventManager::GetInstance();
	PICOXRSetting = GetMutableDefault<UPICOXRSettings>();
#if PLATFORM_ANDROID
	DeviceModel = FAndroidMisc::GetDeviceModel();
#endif
	NextGameFrameNumber = 1;
	WaitedFrameNumber = 0;
	NextLayerId = 0;
	GameSettings = CreateNewSettings();
}

FPICOXRHMD::~FPICOXRHMD()
{
	Shutdown();

	if (bShutdownRequestQueued)
	{
		DoSessionShutdown();
	}
}

void FPICOXRHMD::BeginXR()
{
	//Frustum
	FPICOXRHMDModule::GetPluginWrapper().GetFrustum(PXR_EYE_LEFT, &LeftFrustum.FovLeft, &LeftFrustum.FovRight, &LeftFrustum.FovUp, &LeftFrustum.FovDown, &LeftFrustum.Near, &LeftFrustum.Far);
	FPICOXRHMDModule::GetPluginWrapper().GetFrustum(PXR_EYE_RIGHT, &RightFrustum.FovLeft, &RightFrustum.FovRight, &RightFrustum.FovUp, &RightFrustum.FovDown, &RightFrustum.Near, &RightFrustum.Far);

	LeftFrustum.FovLeft = FMath::Atan(LeftFrustum.FovLeft / LeftFrustum.Near);
	LeftFrustum.FovRight = FMath::Atan(LeftFrustum.FovRight / LeftFrustum.Near);
	LeftFrustum.FovUp = FMath::Atan(LeftFrustum.FovUp / LeftFrustum.Near);
	LeftFrustum.FovDown = FMath::Atan(LeftFrustum.FovDown / LeftFrustum.Near);

	RightFrustum.FovLeft = FMath::Atan(RightFrustum.FovLeft / RightFrustum.Near);
	RightFrustum.FovRight = FMath::Atan(RightFrustum.FovRight / RightFrustum.Near);
	RightFrustum.FovUp = FMath::Atan(RightFrustum.FovUp / RightFrustum.Near);
	RightFrustum.FovDown = FMath::Atan(RightFrustum.FovDown / RightFrustum.Near);

	IpdValue = FPICOXRHMDModule::GetPluginWrapper().GetIPD();
	PXR_LOGI(PxrUnreal, "Startup Get ipd = %f", IpdValue);

	ExecuteOnRenderThread([this]()
		{
			ExecuteOnRHIThread([this]()
				{
					if (!FPICOXRHMDModule::GetPluginWrapper().IsRunning())
					{
						if (true)
						{
							SetRefreshRate();
							PXR_LOGI(PxrUnreal, "BeginXr Call!");
							FPICOXRHMDModule::GetPluginWrapper().BeginXr();
							PXR_LOGI(PxrUnreal, "BeginXr Return!");
							float RefreshRate = 72.0f;
							FPICOXRHMDModule::GetPluginWrapper().GetDisplayRefreshRate(&RefreshRate);
							DisplayRefreshRate = RefreshRate != 0 ? RefreshRate : 72.0f;
							PXR_LOGI(PxrUnreal, "Pxr_GetDisplayRefreshRate:%f", DisplayRefreshRate);
						}
						else
						{
							PXR_LOGF(PxrUnreal, "BeginVR: Pxr_CanBeginVR return false");
						}
					}
				});
		});
	FPICOXRHMDModule::GetPluginWrapper().SetControllerEnableKey(PICOXRSetting->bEnableHomeKey, PxrControllerKeyMap::PXR_CONTROLLER_KEY_HOME);
	uint32_t device;
	FPICOXRHMDModule::GetPluginWrapper().GetControllerMainInputHandle(&device);
}

void FPICOXRHMD::EndXR()
{
#if PLATFORM_ANDROID
	FPICOXRHMDModule::GetPluginWrapper().SetControllerEnableKey(false, PxrControllerKeyMap::PXR_CONTROLLER_KEY_HOME);
	if (IsInGameThread())
	{
		ExecuteOnRenderThread([this]()
        {
			ExecuteOnRHIThread([this]()
	        {
					PXR_LOGI(PxrUnreal, "EndXr Call!");
					FPICOXRHMDModule::GetPluginWrapper().EndXr();
					PXR_LOGI(PxrUnreal, "EndXr Return!");
	        });
        });
	}
#endif
}

FPICOXRInput* FPICOXRHMD::GetPICOXRInput()
{
	TArray<IMotionController*> MotionControllers = IModularFeatures::Get().GetModularFeatureImplementations<IMotionController>(IMotionController::GetModularFeatureName());
	for (auto MotionController : MotionControllers)
	{
		if (MotionController != nullptr && MotionController->GetMotionControllerDeviceTypeName() == FName(TEXT("PICOXRInput")))
		{
			return static_cast<FPICOXRInput*>(MotionController);
		}else
		{
			PXR_LOGE(PxrUnreal,"GetPICOXRInput failed");
		}
	}
	return nullptr;
}

FPXRGameFramePtr FPICOXRHMD::MakeNewGameFrame() const
{
	FPXRGameFramePtr Result(MakeShareable(new FPXRGameFrame()));
	Result->FrameNumber = NextGameFrameNumber;
	Result->predictedDisplayTimeMs = CurrentFramePredictedTime + 1000.0f / DisplayRefreshRate;
	Result->WorldToMetersScale = CachedWorldToMetersScale;
	Result->Flags.bSplashIsShown = PICOSplash->IsShown();
	Result->Flags.bSeeThroughIsShown=bSeeThroughIsShown;
	Result->Flags.bHasWaited = NextGameFrameNumber == WaitedFrameNumber ? true : false;
	return Result;
}

void FPICOXRHMD::UpdateStereoRenderingParams()
{
	CheckInGameThread();

	FPICOLayerPtr* EyeLayerFound = PXRLayerMap.Find(0);
	FPICOXRStereoLayer* EyeLayer = new FPICOXRStereoLayer(**EyeLayerFound);
	*EyeLayerFound = MakeShareable(EyeLayer);

	uint32 Layout = 1;

	static const auto CVarMobileMultiView = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("vr.MobileMultiView"));
	const bool bIsMobileMultiViewEnabled = (CVarMobileMultiView && CVarMobileMultiView->GetValueOnAnyThread() != 0);

	bIsUsingMobileMultiView = (GSupportsMobileMultiView || GRHISupportsArrayIndexFromAnyShader) && bIsMobileMultiViewEnabled;
	PXR_LOGV(PxrUnreal, "vr.MobileMultiView=%d,bIsUsingMobileMultiView=%d", bIsMobileMultiViewEnabled, bIsUsingMobileMultiView);

	if (bIsUsingMobileMultiView && IsMobilePlatform(GameSettings->CurrentShaderPlatform))
	{
		FPICOXRHMDModule::GetPluginWrapper().EnableMultiview(true);

		Layout = 2;
	}
	else
	{
		FPICOXRHMDModule::GetPluginWrapper().EnableMultiview(false);
	}

#if PLATFORM_ANDROID
	static const auto CVarMobileHDR = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("r.MobileHDR"));
	const bool bMobileHDR = CVarMobileHDR && CVarMobileHDR->GetValueOnAnyThread() == 1;

	if (bMobileHDR)
	{
		static bool bDisplayedHDRError = false;
		bDisplayedHDRError = true;
	}

	if (!bIsUsingMobileMultiView && GameSettings->bLateLatching)
	{
		GameSettings->bLateLatching = false;
	}

	static const auto AllowOcclusionQueriesCVar = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("r.AllowOcclusionQueries"));
	const bool bAllowOcclusionQueries = AllowOcclusionQueriesCVar && (AllowOcclusionQueriesCVar->GetValueOnAnyThread() != 0);
	if (bAllowOcclusionQueries && GameSettings->bLateLatching)
	{
		GameSettings->bLateLatching = false;
	}
#endif

	// Update render target and viewport
	UpdateRenderTargetAndViewport();

	{
		if (RHIString == TEXT("Vulkan"))
		{
			//Vulkan needs to detect whether there is a change in tracking mode. If there is a change, it needs to recreate the SwapChain of FFR.
#ifdef PICO_CUSTOM_ENGINE
			FPICOXRHMDModule::GetPluginWrapper().GetEyeTrackingFoveationRenderingState(&EyeLayer->bEnableEyeTrackingFoveationRendering);
#endif
		}

		const bool EnableSubsampled = CVarPICOEnableSubsampledLayout.GetValueOnAnyThread() == 1&&GameSettings->FoveatedRenderingLevel!=PxrFoveationLevel::PXR_FOVEATION_LEVEL_NONE;
		
		EyeLayer->SetEyeLayerDesc(GameSettings->RenderTargetSize.X, GameSettings->RenderTargetSize.Y, Layout, 1, 1, RHIString,EnableSubsampled);
		EyeLayer->bNeedsTexSrgbCreate = GameSettings->Flags.bsRGBEyeBuffer;
		
	}
	if (!EyeLayer->IfCanReuseLayers(PXREyeLayer_RenderThread.Get()))
	{
		AllocateEyeLayer();
	}

#ifdef PICO_CUSTOM_ENGINE
	//PICO AppSpaceWarp
	if (IsSupportsSpaceWarp())
	{
		bool spaceWarpEnabledByUser = CVarPICOEnableSpaceWarpUser.GetValueOnAnyThread()!=0;
		bool spaceWarpEnabledInternal = CVarPICOEnableSpaceWarpInternal.GetValueOnAnyThread()!=0;
		if (spaceWarpEnabledByUser != spaceWarpEnabledInternal)
		{
			CVarPICOEnableSpaceWarpInternal->Set(spaceWarpEnabledByUser);
			CVarPICOEnableStaticSpaceWarpUser->Set(spaceWarpEnabledByUser);
		}
	}
#endif

}

bool FPICOXRHMD::Startup()
{
	PXR_LOGI(PxrUnreal, "Startup");

	check(!RenderBridge.IsValid());

	FString HardwareDetails = FHardwareInfo::GetHardwareDetailsString();
	FString RHILookup = NAME_RHI.ToString() + TEXT("=");
	if (!FParse::Value(*HardwareDetails, *RHILookup, RHIString))
	{
		return false;
	}
#if PICO_HMD_SUPPORTED_PLATFORMS_OPENGL
	if (RHIString == TEXT("OpenGL"))
	{
		PXR_LOGI(PxrUnreal, "RHIString OpenGL");
		RenderBridge = CreateRenderBridge_OpenGL(this);
	}
	else
#endif
#if PICO_HMD_SUPPORTED_PLATFORMS_VULKAN
	if (RHIString == TEXT("Vulkan"))
	{
		PXR_LOGI(PxrUnreal, "RHIString Vulkan");
		RenderBridge = CreateRenderBridge_Vulkan(this);
	}
	else
#endif
	{
		PXR_LOGF(PxrUnreal, "%s is not currently supported by the PICOXR runtime", PLATFORM_CHAR(*RHIString));
		return false;
	}

#if PLATFORM_ANDROID
	FCoreDelegates::ApplicationWillEnterBackgroundDelegate.AddRaw(this, &FPICOXRHMD::ApplicationPauseDelegate);
	FCoreDelegates::ApplicationHasEnteredForegroundDelegate.AddRaw(this, &FPICOXRHMD::ApplicationResumeDelegate);
#endif

	if (!PreLoadLevelDelegate.IsValid())
	{
		PreLoadLevelDelegate = FCoreUObjectDelegates::PreLoadMap.AddRaw(this, &FPICOXRHMD::OnPreLoadMap);
	}

	IStereoLayers::FLayerDesc EyeLayerDesc;
	EyeLayerDesc.Priority = INT_MIN;
	EyeLayerDesc.Flags = LAYER_FLAG_TEX_CONTINUOUS_UPDATE;
	const uint32 EyeLayerId = CreateLayer(EyeLayerDesc);
	check(EyeLayerId == 0);

	ContentResourceFinder = NewObject<UPICOContentResourceFinder>();
	ContentResourceFinder->AddToRoot();

	PICOSplash = MakeShareable(new FPXRSplash(this));
	PICOSplash->InitSplash();

#ifdef PICO_CUSTOM_ENGINE
	// Initialize Dynamic Resolution
	GRHISupportsDynamicResolution = true;
	GEngine->ChangeDynamicResolutionStateAtNextFrame(
		MakeShareable(new FPXR_DynamicResolutionState(GameSettings, this))
	);
#endif

	return true;
}

void FPICOXRHMD::Shutdown()
{
	CheckInGameThread();

	if (PreLoadLevelDelegate.IsValid())
	{
		FCoreUObjectDelegates::PreLoadMap.Remove(PreLoadLevelDelegate);
		PreLoadLevelDelegate.Reset();
	}

	if (ContentResourceFinder)
	{
		ContentResourceFinder->ConditionalBeginDestroy();
		ContentResourceFinder = NULL;
	}

	if (PICOSplash.IsValid())
	{
		PICOSplash->ShutDownSplash();
		PICOSplash = nullptr;
		LoadingScreen = nullptr;
	}

	if (RenderBridge.IsValid())
	{
		RenderBridge->Shutdown();
		RenderBridge = nullptr;
	}

	ReleaseDevice();

	GameSettings.Reset();
	PXRLayerMap.Reset();
}

void FPICOXRHMD::PollEvent()
{
#if PLATFORM_ANDROID
	int32 EventCount = 0;
	PxrEventDataBuffer* EventData[PXR_MAX_EVENT_COUNT];
	bool Ret = FPICOXRHMDModule::GetPluginWrapper().PollEvent(PXR_MAX_EVENT_COUNT, &EventCount, EventData);
	if (Ret)
	{
		PXR_LOGD(PxrUnreal,"PollEvent EventCount :%d",EventCount);
		ProcessEvent(EventCount, EventData);
	}
#endif
}

void FPICOXRHMD::AllocateEyeLayer()
{
	check(IsInGameThread());

	ExecuteOnRenderThread([&]()
		{
			InitEyeLayer_RenderThread(GetImmediateCommandList_ForRenderCommand());

			const FXRSwapChainPtr& SwapChain = PXREyeLayer_RenderThread->GetSwapChain();
			if (SwapChain.IsValid())
			{
				const FRHITexture2D* const SwapChainTexture = SwapChain->GetTexture2DArray() ? SwapChain->GetTexture2DArray() : SwapChain->GetTexture2D();
				PXR_LOGI(PxrUnreal, "Allocating PICOXR %d x %d RenderTarget SwapChain!", SwapChainTexture->GetSizeX(), SwapChainTexture->GetSizeY());
			}
		});

	bNeedReAllocateViewportRenderTarget = true;
}

/*
 * Returns the render target size given the current PICOXR settings.
 */
FIntPoint FPICOXRHMD::GetRenderTargetSize() const
{
	// First, start with the ideal render target size for this device
	FIntPoint RenderTargetSize = GetIdealRenderTargetSize();

	// Rescale render target based on maximum pixel density (if adaptive resolution enabled)
	// or pixel density (if adaptive resolution disabled).
	const float RenderTargetScale = GameSettings->IsAdaptiveResolutionEnabled() ? GameSettings->PixelDensityMax : GameSettings->PixelDensity;
	if (!FMath::IsNearlyEqual(RenderTargetScale, 1.0f))
	{
		RenderTargetSize = (FVector2D(RenderTargetSize) * RenderTargetScale).IntPoint();
	}

	// Align render target size to 16x16 tiles.
	// This fixes issues with buffer sizing.
	RenderTargetSize = (RenderTargetSize / 16) * 16;

	// Allocate double space for both eyes (if multiview disabled)
	if (!bIsUsingMobileMultiView)
	{
		RenderTargetSize.X *= 2;
	}

	// Return if render target size not too big
	const FIntPoint MaxRenderTargetSize = GetMaxRenderTargetSize();
	if (RenderTargetSize.X < MaxRenderTargetSize.X && RenderTargetSize.Y < MaxRenderTargetSize.Y)
	{
		return RenderTargetSize;
	}

	// Otherwise, clamp to max
	PXR_LOGW(PxrUnreal, "Requested RenderTargetSize(%d,%d) exceeds MaxRenderTargetSize(%d,%d)"
		, RenderTargetSize.X
		, RenderTargetSize.Y
		, MaxRenderTargetSize.X
		, MaxRenderTargetSize.Y
	);

	// Use component min to clamp (if multiview enabled)
	// or overwrite with max render target size (if multiview disabled)
	RenderTargetSize = (bIsUsingMobileMultiView ? RenderTargetSize.ComponentMin(MaxRenderTargetSize) : MaxRenderTargetSize);
	return RenderTargetSize;
}

FIntPoint FPICOXRHMD::GetRenderViewportSize(const FIntPoint& RenderTargetSize) const
{
	FIntPoint RenderViewportSize = RenderTargetSize;
	const FIntPoint PrevRenderViewportSize = GameSettings->EyeRenderViewport[0].Size();

	// If using double wide (i.e. not using mobile multiview),
	// Then use only half the width
	if (!bIsUsingMobileMultiView)
	{
		RenderViewportSize.X /= 2;
	}

	// Return if adaptive resolution is disabled
	if (!GameSettings->IsAdaptiveResolutionEnabled())
	{
		return RenderViewportSize;
	}

	const float RenderViewportScale = GameSettings->PixelDensity / GameSettings->PixelDensityMax;
	if (!FMath::IsNearlyEqual(RenderViewportScale, 1.0f))
	{
		RenderViewportSize = (FVector2D(RenderViewportSize) * RenderViewportScale).IntPoint();
	}

	// Align render target size to 16x16 tiles.
	// This fixes issues with buffer sizing.
	RenderViewportSize = ((RenderViewportSize + 8) / 16) * 16;

	// Only resize by 32 pixels each frame
	RenderViewportSize = RenderViewportSize.ComponentMax(PrevRenderViewportSize - 32);
	RenderViewportSize = RenderViewportSize.ComponentMin(PrevRenderViewportSize + 32);

	return RenderViewportSize;
}

void FPICOXRHMD::UpdateRenderTargetAndViewport()
{
	// Update pixel density from console variable
	static const auto PixelDensityCVar = IConsoleManager::Get().FindConsoleVariable(TEXT("vr.PixelDensity"));
	float PixelDensityRaw = (PixelDensityCVar ? PixelDensityCVar->GetFloat() : 1.0f);

	PXR_LOGV(PxrUnreal, "PixelDensityRaw=%d", PixelDensityRaw);

	// If adaptive resolution is enabled and vr.PixelDensity == 0, then get Adaptive Resolution value from Runtime
	if (GameSettings->IsAdaptiveResolutionEnabled() && FMath::IsNearlyZero(PixelDensityRaw))
	{
		UpdateAdaptiveResolution(PixelDensityRaw);
	}
	else
	{
		GameSettings->SetPixelDensity(PixelDensityRaw);
	}

	// Get render target and render viewport sizes
	const FIntPoint RenderTargetSize = GetRenderTargetSize();
	const FIntPoint RenderViewportSize = GetRenderViewportSize(RenderTargetSize);

	// Set render target and render viewport
	GameSettings->RenderTargetSize = RenderTargetSize;
	GameSettings->EyeRenderViewport[0] = GameSettings->EyeRenderViewport[1] = FIntRect(FIntPoint(0), RenderViewportSize);
	
	// Offset right viewport (if multiview disabled)
	if (!bIsUsingMobileMultiView)
	{
		FIntPoint Offset(RenderViewportSize.X, 0);
		GameSettings->EyeRenderViewport[1] = FIntRect(Offset, RenderViewportSize + Offset);
	}

	GameSettings->EyeUnscaledRenderViewport[0] = GameSettings->EyeRenderViewport[0];
	GameSettings->EyeUnscaledRenderViewport[1] = GameSettings->EyeRenderViewport[1];

	PXR_LOGV(PxrUnreal, "RenderTargetSize:(%d,%d) and RenderViewportSize:(%d,%d)", 
		RenderTargetSize.X, 
		RenderTargetSize.Y, 
		RenderViewportSize.X, 
		RenderViewportSize.Y
	);

	PXR_LOGV(PxrUnreal, "LeftViewport:(%s) and RightViewport:(%s)",
		*GameSettings->EyeRenderViewport[0].ToString(),
		*GameSettings->EyeRenderViewport[1].ToString()
	);

}

void FPICOXRHMD::UpdateAdaptiveResolution(float PixelDensityRaw)
{
	PxrExtent2Di ViewportDimensions = { GameSettings->EyeRenderViewport[0].Width(), GameSettings->EyeRenderViewport[0].Height() };
	PxrAdaptiveResolutionPowerSetting PowerSetting={};

	switch (GameSettings->AdaptiveResolutionPowerSetting)
	{
	case EPICOXRAdaptiveResolutionPowerSetting::BatterySaving:
		PowerSetting = PXR_ADAPTIVE_RESOLUTION_BATTERY_SAVING;
		break;
	case EPICOXRAdaptiveResolutionPowerSetting::Balanced:
		PowerSetting = PXR_ADAPTIVE_RESOLUTION_BALANCED;
		break;
	case EPICOXRAdaptiveResolutionPowerSetting::HighQuality:
		PowerSetting = PXR_ADAPTIVE_RESOLUTION_HIGH_QUALITY;
		break;
	}

	// Get Adaptive Resolution value from runtime
	if (FPICOXRHMDModule::GetPluginWrapper().UpdateAdaptiveResolution(&ViewportDimensions, PowerSetting) != 0)
	{
		// Return if error
		return;
	}

	FIntPoint DefaultDimensions = GetIdealRenderTargetSize();

	PixelDensityRaw = float(ViewportDimensions.width) / float(DefaultDimensions.X);

	GameSettings->SetPixelDensity(PixelDensityRaw);
}

void FPICOXRHMD::OnHomeKeyRecentered()
{
	if (GetTrackingOrigin()!=EHMDTrackingOrigin::Type::Stage)
	{
		GameSettings->BaseOffset=FVector::ZeroVector;
		GameSettings->BaseOrientation = FRotator(0,  - GameSettings->CustomOffsetYaw, 0).Quaternion();
	}
}

void FPICOXRHMD::Recenter(PxrRecenterTypes RecenterType, float Yaw)
{
	CheckInGameThread();
	if (NextGameFrameToRender_GameThread.IsValid())
	{
		PxrPosef RuntimePose={};
		FPose UnrealPose=FPose(NextGameFrameToRender_GameThread->Orientation,NextGameFrameToRender_GameThread->Position);
		ConvertPose_Internal(UnrealPose, RuntimePose, GameSettings.Get(), NextGameFrameToRender_GameThread->WorldToMetersScale);
		if (RecenterType & RecenterPosition)
		{
			const bool floorLevel = GetTrackingOrigin() != EHMDTrackingOrigin::Eye;
			
			GameSettings->BaseOffset = ToFVector(RuntimePose.position);
			if (floorLevel)
				GameSettings->BaseOffset.Z = 0;
		}

		if (RecenterType & RecenterOrientation)
		{
			GameSettings->CustomOffsetYaw=Yaw;
			GameSettings->BaseOrientation = FRotator(0, FRotator(ToFQuat(RuntimePose.orientation)).Yaw - Yaw, 0).Quaternion();
		}
		UpdateSensorValue(GameSettings.Get(), NextGameFrameToRender_GameThread.Get());
	}
}

void FPICOXRHMD::InitEyeLayer_RenderThread(FRHICommandListImmediate& RHICmdList)
{
	check(!InGameThread());
	CheckInRenderThread();

	if (PXRLayerMap[0].IsValid())
	{
		FPICOLayerPtr EyeLayer = PXRLayerMap[0]->CloneMyself();
		EyeLayer->InitPXRLayer_RenderThread(GameSettings_RenderThread.Get(), RenderBridge, &DelayDeletion, RHICmdList, PXREyeLayer_RenderThread.Get());

		if (PXRLayers_RenderThread.Num() > 0)
		{
			PXRLayers_RenderThread[0] = EyeLayer;
		}
		else
		{
			PXRLayers_RenderThread.Add(EyeLayer);
		}
#ifdef PICO_CUSTOM_ENGINE
		if (EyeLayer->GetMotionVectorSwapChain().IsValid())
		{
			if (!PXREyeLayer_RenderThread.IsValid() || EyeLayer->GetMotionVectorSwapChain() != PXREyeLayer_RenderThread->GetMotionVectorSwapChain()
				|| EyeLayer->GetMotionVectorDepthSwapChain() != PXREyeLayer_RenderThread->GetMotionVectorDepthSwapChain())
			{
				bNeedReAllocateMotionVectorTexture_RenderThread = true;
				PXR_LOGI(PxrUnreal, "[Mobile SpaceWarp]  request to re-allocate motionVector textures");
			}
		}
#endif

		if (EyeLayer->GetFoveationSwapChain().IsValid())
		{
			if (!PXREyeLayer_RenderThread.IsValid() || EyeLayer->GetFoveationSwapChain() != PXREyeLayer_RenderThread->GetFoveationSwapChain())
			{
				bNeedReAllocateFoveationTexture_RenderThread = true;
			}
		}

		DelayDeletion.AddLayerToDeferredDeletionQueue(PXREyeLayer_RenderThread);

		PXREyeLayer_RenderThread = EyeLayer;
	}
}

#if PLATFORM_ANDROID
void FPICOXRHMD::ProcessEvent(int32 EventCount, PxrEventDataBuffer** EventData)
{
	if (EventCount ==0 || !EventData)
	{
		return;
	}
	for (int i = 0; i < EventCount; i++)
	{
		PxrEventDataBuffer* Event = EventData[i];
		PXR_LOGD(PxrUnreal,"ProcessEvent EventCount:%d,EventType[%d]:%d",EventCount,i,Event->type);
		switch(Event->type)
		{
		case PXR_TYPE_EVENT_DATA_SESSION_STATE_READY:
		{
			PXR_LOGI(PxrUnreal, "Session Ready!");
			BeginXR();
			break;
		}
		case PXR_TYPE_EVENT_DATA_SESSION_STATE_STOPPING:
		{
			PXR_LOGI(PxrUnreal, "Session Stopping!");
			EndXR();
			break;
		}
		case PXR_TYPE_EVENT_DATA_SEETHROUGH_STATE_CHANGED:
		{
			const PxrEventDataSeethroughStateChanged SeeThroughData = *reinterpret_cast<const PxrEventDataSeethroughStateChanged*>(Event);
			OnSeeThroughStateChange(SeeThroughData.state);
			break;
		}
		case PXR_TYPE_EVENT_FOVEATION_LEVEL_CHANGED:
		{
			const PxrEventDataFoveationLevelChanged FoveationData = *reinterpret_cast<const PxrEventDataFoveationLevelChanged*>(Event);
			OnFoveationLevelChange(FoveationData.level);
			break;
		}
		case PXR_TYPE_EVENT_FRUSTUM_STATE_CHANGED:
		{
			const PxrEventDataFrustumChanged FrustumData = *reinterpret_cast<const PxrEventDataFrustumChanged*>(Event);
			OnFrustumStateChange();
			break;
		}
		case PXR_TYPE_EVENT_RENDER_TEXTURE_CHANGED:
		{
			const PxrEventDataRenderTextureChanged RenderTextureChanged = *reinterpret_cast<const PxrEventDataRenderTextureChanged*>(Event);
			OnRenderTextureChange(RenderTextureChanged.width,RenderTextureChanged.height);
			break;
		}
		case PXR_TYPE_EVENT_TARGET_FRAME_RATE_STATE_CHANGED:
		{
			const PxrEventDataTargetFrameRateChanged FrameRateChanged = *reinterpret_cast<const PxrEventDataTargetFrameRateChanged*>(Event);
			OnTargetFrameRateChange(FrameRateChanged.frameRate);
			break;
		}

		case PXR_TYPE_EVENT_DATA_CONTROLLER:
		{
			const PxrEventDataControllerChanged Controller = *reinterpret_cast<const PxrEventDataControllerChanged*>(Event);
			ProcessControllerEvent(Controller);
			break;
		}

		case PXR_TYPE_EVENT_HARDIPD_STATE_CHANGED:
		{
			const PxrEventDataHardIPDStateChanged IPDState = *reinterpret_cast<const PxrEventDataHardIPDStateChanged*>(Event);
			IpdValue = IPDState.ipd;
			PXR_LOGD(PxrUnreal,"ProcessEvent PXR_TYPE_EVENT_HARDIPD_STATE_CHANGED IPD:%f",IPDState.ipd);
			EventManager->IpdChangedDelegate.Broadcast(IPDState.ipd);
			UPICOXRHMDFunctionLibrary::PICOXRIPDChangedCallback.ExecuteIfBound(IPDState.ipd);
			break;
		}
		case PXR_TYPE_EVENT_DATA_HMD_KEY:
		{
			const PxrEventDataHmdKey HomeKey = *reinterpret_cast<const PxrEventDataHmdKey*>(Event);
			EventManager->LongHomePressedDelegate.Broadcast();
			EventManager->RawLongHomePressedDelegate.Broadcast();
			if (FCoreDelegates::VRHeadsetRecenter.IsBound())
			{
				FCoreDelegates::VRHeadsetRecenter.Broadcast();
			}
			break;
		}
		case PXR_TYPE_EVENT_DATA_MRC_STATUS:
		{
			const PxrEventDataMrcStatusChanged MRC = *reinterpret_cast<const PxrEventDataMrcStatusChanged*>(Event);
			MRCEnabled = MRC.mrc_status == 0 ? true : false;
			break;
		}
		case PXR_TYPE_EVENT_DATA_REFRESH_RATE_CHANGED:
		{
			const PxrEventDataRefreshRateChanged RateState = *reinterpret_cast<const PxrEventDataRefreshRateChanged*>(Event);
			PXR_LOGD(PxrUnreal, "ProcessEvent PXR_TYPE_EVENT_DATA_REFRESH_RATE_CHANGED Rate:%f", RateState.refrashRate);
			DisplayRefreshRate = RateState.refrashRate;
			EventManager->RefreshRateChangedDelegate.Broadcast(RateState.refrashRate);
			break;
		}
		case PXR_TYPE_EVENT_DATA_SESSION_STATE_CHANGED:
		{
			const PxrEventDataSessionStateChanged sessionStateChanged = *reinterpret_cast<const PxrEventDataSessionStateChanged*>(Event);
			inputFocusState = sessionStateChanged.state == PXR_SESSION_STATE_FOCUSED;
			break;
		}
		case PXR_TYPE_EVENT_HMD_BATTERY_CHANGED:
		{
			const PxrEventHmdBatteryChanged BatteryStateChanged = *reinterpret_cast<const PxrEventHmdBatteryChanged*>(Event);
			PXR_LOGD(PxrUnreal, "ProcessEvent PXR_TYPE_EVENT_HMD_BATTERY_CHANGED BatteryState:%d", BatteryStateChanged.value);
			EventManager->BatteryStateChangedDelegate.Broadcast(BatteryStateChanged.value);
			CurrentHMDBatteryLevel=BatteryStateChanged.value;
			break;
		}
		default:
		{
			PollEventDelegate.Broadcast(Event);
			break;
		}
		}
	}
}

void FPICOXRHMD::ProcessControllerEvent(const PxrEventDataControllerChanged EventData)
{
	PXR_LOGD(PxrUnreal,"ProcessControllerEvent eventtype:%d,Handness:%d,State:%d",EventData.eventtype,EventData.controller,EventData.status);
	FPICOXRInput* PICOInput = GetPICOXRInput();
	switch (EventData.eventtype)
	{
	case PXR_DEVICE_CONNECTCHANGED:
		{
			PXR_LOGD(PxrUnreal,"ProcessControllerEvent PXR_DEVICE_CONNECTCHANGED  controller:%d,State:%d",EventData.controller,EventData.status);
			PICOInput->OnControllerConnectChangedDelegate(EventData.controller, EventData.status);
			EventManager->DeviceConnectChangedDelegate.Broadcast(EventData.controller, EventData.status);
			break;
		}
	case PXR_DEVICE_MAIN_CHANGED:
		{
			PXR_LOGD(PxrUnreal, "ProcessControllerEvent PXR_DEVICE_MAIN_CHANGED controller:%d", EventData.controller);
			PICOInput->OnControllerMainChangedDelegate(EventData.controller);
			EventManager->DeviceMainChangedDelegate.Broadcast(EventData.controller);
			break;
		}
	case PXR_DEVICE_INPUTDEVICE_CHANGED :
    	{
    		PXR_LOGD(PxrUnreal, "ProcessControllerEvent PXR_DEVICE_INPUTDEVICE_CHANGED status:%d", EventData.status);
			EventManager->InputDeviceChangedDelegate.Broadcast(EventData.status);
    		break;
    	}
	case PXR_DEVICE_HANDNESS_CHANGED:
		{
			PXR_LOGD(PxrUnreal, "ProcessControllerEvent PXR_DEVICE_HANDNESS_CHANGED controller:%d", EventData.controller);
			EventManager->HandnessChangedDelegate.Broadcast(EventData.controller);
			break;
		}
	case PXR_DEVICE_FITNESSBAND_STATE:
		{
			PXR_LOGD(PxrUnreal, "PXR PXR_DEVICE_FITNESSBAND_STATE Count:%d Status:%d",EventData.varying[0],EventData.status);
			EventData.status==2?(EventManager->FitnessRecalibrationBandDelegate.Broadcast()):(EventManager->FitnessBandConnectionDelegate.Broadcast(EventData.varying[0],EventData.status));
			break;
		}
	case PXR_DEVICE_FITNESSBAND_BATTERY:
		{
			PXR_LOGD(PxrUnreal, "PXR PXR_DEVICE_FITNESSBAND_BATTERY ID:%d batteryStatus:%d",EventData.status,EventData.varying[0]);
			EventManager->FitnessBandBatteryDelegate.Broadcast(EventData.status,EventData.varying[0]);
			break;
		}
	default:
		break;
	}
}
#endif

void FPICOXRHMD::OnSeeThroughStateChange(int SeeThroughState)
{
	PXR_LOGD(PxrUnreal, "OnSeeThroughStateChange SeeThroughState:%d", SeeThroughState);
	bSeeThroughIsShown = SeeThroughState ? true : false;
	if (SeeThroughState == 2)
	{
		bNeedDrawBlackEye = true;
	}
	else
	{
		bNeedDrawBlackEye = false;
	}

	CheckInGameThread();
	check(GameSettings.IsValid());
	GameSettings->SeeThroughState = SeeThroughState;
}

void FPICOXRHMD::OnFoveationLevelChange(int32 NewFoveationLevel)
{
	GameSettings->FoveatedRenderingLevel = static_cast<PxrFoveationLevel>(NewFoveationLevel);
	FPICOXRHMDModule::GetPluginWrapper().SetFoveationLevel(GameSettings->FoveatedRenderingLevel);
}

void FPICOXRHMD::OnFrustumStateChange()
{
#if PLATFORM_ANDROID
	FPICOXRHMDModule::GetPluginWrapper().GetFrustum(PXR_EYE_LEFT, &LeftFrustum.FovLeft, &LeftFrustum.FovRight, &LeftFrustum.FovUp, &LeftFrustum.FovDown,&LeftFrustum.Near,&LeftFrustum.Far);
	FPICOXRHMDModule::GetPluginWrapper().GetFrustum(PXR_EYE_RIGHT, &RightFrustum.FovLeft, &RightFrustum.FovRight, &RightFrustum.FovUp, &RightFrustum.FovDown,&RightFrustum.Near,&RightFrustum.Far);
 	LeftFrustum.FovLeft = FMath::Atan(LeftFrustum.FovLeft/LeftFrustum.Near);
 	LeftFrustum.FovRight = FMath::Atan(LeftFrustum.FovRight/LeftFrustum.Near);
 	LeftFrustum.FovUp = FMath::Atan(LeftFrustum.FovUp/LeftFrustum.Near);
 	LeftFrustum.FovDown = FMath::Atan(LeftFrustum.FovDown/LeftFrustum.Near);

 	RightFrustum.FovLeft = FMath::Atan(RightFrustum.FovLeft/RightFrustum.Near);
 	RightFrustum.FovRight = FMath::Atan(RightFrustum.FovRight/RightFrustum.Near);
 	RightFrustum.FovUp = FMath::Atan(RightFrustum.FovUp/RightFrustum.Near);
 	RightFrustum.FovDown = FMath::Atan(RightFrustum.FovDown/RightFrustum.Near);
#endif
}

void FPICOXRHMD::OnRenderTextureChange(int32 Width, int32 Height)
{
 	RTSize.X = Width * 2;
 	RTSize.Y = Height;
 	PXR_LOGI(PxrUnreal,"OnRenderTextureChange RenderTextureSize:(%d,%d)",RTSize.X,RTSize.Y);
}

void FPICOXRHMD::OnTargetFrameRateChange(int32 NewFrameRate)
{
 	GEngine->SetMaxFPS(NewFrameRate);
}

bool FPICOXRHMD::InitializeSession()
{
	if (FPICOXRHMDModule::GetPluginWrapper().IsInitialized() && !FPICOXRHMDModule::GetPluginWrapper().bIsSessionInitialized)
	{
#if PLATFORM_ANDROID
		if (RenderBridge.IsValid())
		{
			if (RHIString == TEXT("Vulkan"))
			{
				RenderBridge->GetGraphics();
			}
			FPICOXRHMDModule::GetPluginWrapper().bIsSessionInitialized = true;
		}
#endif
		PXR_LOGI(PxrUnreal, "InitializeSession OK!");
	}

	{
		//SetAppEngineInfo2
		FString UnrealSDKVersion = "UE4_2.3.4";
		FString UnrealVersion = FString::FromInt(ENGINE_MINOR_VERSION);
		UnrealSDKVersion = UnrealSDKVersion + UnrealVersion;
		PXR_LOGI(PxrUnreal, "%s,xrVersion:%s", PLATFORM_CHAR(*FEngineVersion::Current().ToString()), PLATFORM_CHAR(*UnrealSDKVersion));
		FPICOXRHMDModule::GetPluginWrapper().SetConfigString(PXR_ENGINE_VERSION, TCHAR_TO_UTF8(*UnrealSDKVersion));
	}

#if PLATFORM_ANDROID
	//Config MobileMultiView
	GSupportsMobileMultiView = FPICOXRHMDModule::GetPluginWrapper().GetFeatureSupported(PXR_FEATURE_MULTIVIEW);
#endif

	{
		//ffr
		PXR_LOGI(PxrUnreal, "FoveationLevel=%d", GameSettings->FoveatedRenderingLevel);
		FPICOXRHMDModule::GetPluginWrapper().SetFoveationLevel(GameSettings->FoveatedRenderingLevel);
	}

	{		
		//Config about OpenGL Context NoError
#if PICO_HMD_SUPPORTED_PLATFORMS_OPENGL && USE_ANDROID_EGL_NO_ERROR_CONTEXT
		bool bUseNoErrorContext = true;
		bUseNoErrorContext = AndroidEGL::GetInstance()->GetSupportsNoErrorContext();
		PXR_LOGI(PxrUnreal, "bUseNoErrorContext = %d", bUseNoErrorContext);
		FPICOXRHMDModule::GetPluginWrapper().SetConfigInt(PXR_UNREAL_OPENGL_NOERROR, bUseNoErrorContext ? 1 : 0);
#endif
	}

	{
		//waitframe version call WaitFrame();
		bWaitFrameVersion = FPICOXRVersionHelper::IsThisVersionOrGreater(0x2000304)? true : false;
		if (FPICOXRVersionHelper::IsThisVersionOrGreater(0x2000305))
		{
			FString TempString;
			int Value = 1024;
			if (GConfig->GetString(FPlatformProperties::GetRuntimeSettingsClassName(), TEXT("AudioCallbackBufferFrameSize"), TempString, GEngineIni))
			{
				Value = FCString::Atoi(*TempString);
				PXR_LOGI(PxrUnreal, "AudioCallbackBufferFrameSize = %d", Value);
			}
			int level = 0;
			if (Value <= 768)
			{
				level = 2;
			}
			else if (Value <= 1536)
			{
				level = 3;
			}
			else
			{
				level = 4;
			}
			PXR_LOGI(PxrUnreal, "AudioCallbackBufferFrameSize = %d", Value);
			FPICOXRHMDModule::GetPluginWrapper().SetControllerDelay(level);
		}
	}

	{
		//Clamp MSAA to MAX Support
		int MobileMSAAValue = 1;
		static const auto CVarMobileMSAA = IConsoleManager::Get().FindConsoleVariable(TEXT("r.MobileMSAA"));
		if (CVarMobileMSAA && PICOXRSetting && RenderBridge)
		{
			MobileMSAAValue = PICOXRSetting->bUseRecommendedMSAA ? RenderBridge->GetSystemRecommendedMSAA() : CVarMobileMSAA->GetInt();
#if PICO_HMD_SUPPORTED_PLATFORMS_OPENGL
			if (RHIString == TEXT("OpenGL"))
			{
				int32 MaxMSAASamplesSupported = 0;
				MaxMSAASamplesSupported = FOpenGL::GetMaxMSAASamplesTileMem();
				MobileMSAAValue = MobileMSAAValue > MaxMSAASamplesSupported ? MaxMSAASamplesSupported : MobileMSAAValue;
			}
#endif
			CVarMobileMSAA->Set(MobileMSAAValue);
		}
		PXR_LOGI(PxrUnreal, "Final MSAA = %d", MobileMSAAValue);
	}

	PICOFlags.NeedSetTrackingOrigin = true;

	NextGameFrameNumber = 1;
	WaitedFrameNumber = 0;

	FPICOXRHMDModule::GetPluginWrapper().SetColorSpace(IsMobileColorsRGB() ? PXR_COLOR_SPACE_SRGB : PXR_COLOR_SPACE_LINEAR);

	return true;
}

void FPICOXRHMD::DoSessionShutdown()
{	
	PXR_LOGI(PxrUnreal, "DoSessionShutdown");
	ExecuteOnRenderThread([this]()
		{
			ExecuteOnRHIThread([this]()
				{
					for (int32 LayerIndex = 0; LayerIndex < PXRLayers_RenderThread.Num(); LayerIndex++)
					{
						PXRLayers_RenderThread[LayerIndex]->ReleaseResources_RHIThread();
					}

					for (int32 LayerIndex = 0; LayerIndex < PXRLayers_RHIThread.Num(); LayerIndex++)
					{
						PXRLayers_RHIThread[LayerIndex]->ReleaseResources_RHIThread();
					}

					if (PICOSplash.IsValid())
					{
						PICOSplash->ReleaseResources_RHIThread();
					}

					if (RenderBridge)
					{
						RenderBridge->ReleaseResources_RHIThread();
					}

					GameSettings_RHIThread.Reset();
					GameFrame_RHIThread.Reset();
					PXRLayers_RHIThread.Reset();
				});

			GameSettings_RenderThread.Reset();
			GameFrame_GameThread.Reset();
			PXRLayers_RenderThread.Reset();
			PXREyeLayer_RenderThread.Reset();

			DelayDeletion.HandleLayerDeferredDeletionQueue_RenderThread(true);
		});

	GameFrame_GameThread.Reset();
	NextGameFrameToRender_GameThread.Reset();
	LastGameFrameToRender_GameThread.Reset();

	// The Editor may release VR focus in OnEndPlay
	if (!GIsEditor)
	{
		FApp::SetUseVRFocus(false);
		FApp::SetHasVRFocus(false);
	}
	ShutdownSession();
}

void FPICOXRHMD::ShutdownSession()
{
	FPICOXRHMDModule::GetPluginWrapper().bIsSessionInitialized = false;
	FPICOXRHMDModule::GetPluginWrapper().Shutdown();
}

bool FPICOXRHMD::InitDevice()
{
	CheckInGameThread();
	if (FPICOXRHMDModule::GetPluginWrapper().bIsSessionInitialized)
	{
		return true;
	}
	if (!IsHMDEnabled())
	{
		return false;
	}

	LoadFromSettings();

	if (!InitializeSession())
	{
		PXR_LOGI(PxrUnreal, "HMD InitializeSession failed!");
		return false;
	}

	bNeedReAllocateViewportRenderTarget = true;
	bNeedReAllocateFoveationTexture_RenderThread = false;

#ifdef PICO_CUSTOM_ENGINE
	bool bSupportFoveationRendering = false;
	FPICOXRHMDModule::GetPluginWrapper().GetEyeTrackingFoveationRenderingSupported(&bSupportFoveationRendering);
	bool bEnableFoveationRendering = bSupportFoveationRendering && PICOXRSetting->bEnableEyeTrackingFoveationRendering && PICOXRSetting->FoveationRenderingMode == EFoveationRenderingMode::EyeTrackingFoveationRendering;
	if (bEnableFoveationRendering)
	{
		FPICOXRHMDModule::GetPluginWrapper().SetEyeTrackingFoveationRenderingState(true);
	}
#endif

	UpdateStereoRenderingParams();

	ExecuteOnRenderThread([this](FRHICommandListImmediate& RHICmdList)
		{
			InitEyeLayer_RenderThread(RHICmdList);
		});

	if (!PXREyeLayer_RenderThread.IsValid() || !PXREyeLayer_RenderThread->GetSwapChain().IsValid())
	{
		PXR_LOGE(PxrUnreal, "Failed to create eye layer swap chain.");
		ShutdownSession();
		return false;
	}

	if (!GIsEditor)
	{
		FApp::SetUseVRFocus(true);
		FApp::SetHasVRFocus(true);
	}

	EnableContentProtect(PICOXRSetting->bUseContentProtect);

	FPICOXRHMDModule::GetPluginWrapper().SetColorSpace(IsMobileColorsRGB() ? PXR_COLOR_SPACE_SRGB : PXR_COLOR_SPACE_LINEAR);

	if (PICOXRSetting && PICOXRSetting->bEnableEyeTracking)
	{
		FPICOXRHMDModule::GetPluginWrapper().WantEyeTrackingService();
	}

	if (PICOXRSetting && PICOXRSetting->bEnableFaceTracking)
	{
		FPICOXRHMDModule::GetPluginWrapper().WantFaceTrackingService();
	}

	return true;
}

void FPICOXRHMD::ReleaseDevice()
{
	CheckInGameThread();
	if (FPICOXRHMDModule::GetPluginWrapper().bIsSessionInitialized)
	{
		bShutdownRequestQueued = true;
	}
}

void FPICOXRHMD::LoadFromSettings()
{
	UPICOXRSettings* HMDSettings = GetMutableDefault<UPICOXRSettings>();
	check(HMDSettings);
	GameSettings->FoveatedRenderingLevel = static_cast<PxrFoveationLevel>(int(HMDSettings->FoveationLevel.GetValue()) - 1);
	GameSettings->bLateLatching = HMDSettings->bEnableLateLatching;
	GameSettings->CoordinateType = HMDSettings->CoordinateType;

	GameSettings->PixelDensityMin = FMath::Min(HMDSettings->PixelDensityMin, HMDSettings->PixelDensityMax);
	GameSettings->PixelDensityMax = FMath::Max(HMDSettings->PixelDensityMin, HMDSettings->PixelDensityMax);
	GameSettings->bAdaptiveResolutionEnabled = HMDSettings->bAdaptiveResolutionEnabled;
	GameSettings->AdaptiveResolutionPowerSetting = HMDSettings->AdaptiveResolutionPowerSetting;
}

void FPICOXRHMD::ApplicationPauseDelegate()
{
	PXR_LOGI(PxrUnreal,"FPICOXRHMD::ApplicationPauseDelegate");
	PICOFlags.AppIsPaused = true;
}

void FPICOXRHMD::ApplicationResumeDelegate()
{
	PXR_LOGI(PxrUnreal, "FPICOXRHMD::ApplicationResumeDelegate");
	if (EventManager)
	{
		EventManager->ResumeDelegate.Broadcast();
	}
	if (PICOFlags.AppIsPaused && !InitializeSession())
	{
		PXR_LOGI(PxrUnreal, "HMD InitializeSession failed!!!");
	}
	PICOFlags.AppIsPaused = false;

#ifdef PICO_CUSTOM_ENGINE
	bool bSupportFoveationRendering = false;
	FPICOXRHMDModule::GetPluginWrapper().GetEyeTrackingFoveationRenderingSupported(&bSupportFoveationRendering);
	bool bEnableFoveationRendering = bSupportFoveationRendering && PICOXRSetting->bEnableEyeTrackingFoveationRendering && PICOXRSetting->FoveationRenderingMode == EFoveationRenderingMode::EyeTrackingFoveationRendering;
	if (bEnableFoveationRendering)
	{
		FPICOXRHMDModule::GetPluginWrapper().SetEyeTrackingFoveationRenderingState(true);
	}
#endif
}

void FPICOXRHMD::UpdateSensorValue(const FGameSettings* InSettings, FPXRGameFrame* InFrame)
{
	int32 ViewNumber = 0;
	int eyeCount = 1;
	PxrPosef PoseNoUse;
	FPose Pose;
	switch (InSettings->CoordinateType)
	{
	case EPICOXRCoordinateType::Local:
		{
			PxrSensorState SensorState;
			FPICOXRHMDModule::GetPluginWrapper().GetPredictedMainSensorStateWithEyePose(InFrame->predictedDisplayTimeMs, &SensorState, &ViewNumber, eyeCount, &PoseNoUse);
			InFrame->Acceleration = ToFVector(SensorState.linearAcceleration);
			InFrame->AngularAcceleration = ToFVector(SensorState.angularAcceleration);
			InFrame->AngularVelocity = ToFVector(SensorState.angularVelocity);
			InFrame->Velocity = ToFVector(SensorState.linearVelocity);
			ConvertPose_Internal(SensorState.pose, Pose, InSettings, InFrame->WorldToMetersScale);
		}
		break;
	case EPICOXRCoordinateType::Global_BoundarySystem:
		{
			PxrSensorState2 SensorState2;
			FPICOXRHMDModule::GetPluginWrapper().GetPredictedMainSensorState2(InFrame->predictedDisplayTimeMs, &SensorState2, &ViewNumber);
			InFrame->Acceleration = ToFVector(SensorState2.linearAcceleration);
			InFrame->AngularAcceleration = ToFVector(SensorState2.angularAcceleration);
			InFrame->AngularVelocity = ToFVector(SensorState2.angularVelocity);
			InFrame->Velocity = ToFVector(SensorState2.linearVelocity);
			ConvertPose_Internal(SensorState2.globalPose, Pose, InSettings, InFrame->WorldToMetersScale);
		}
		break;
	default:
		{
			PxrSensorState SensorState;
			FPICOXRHMDModule::GetPluginWrapper().GetPredictedMainSensorStateWithEyePose(InFrame->predictedDisplayTimeMs, &SensorState, &ViewNumber, eyeCount, &PoseNoUse);
			InFrame->Acceleration = ToFVector(SensorState.linearAcceleration);
			InFrame->AngularAcceleration = ToFVector(SensorState.angularAcceleration);
			InFrame->AngularVelocity = ToFVector(SensorState.angularVelocity);
			InFrame->Velocity = ToFVector(SensorState.linearVelocity);
			ConvertPose_Internal(SensorState.pose, Pose, InSettings, InFrame->WorldToMetersScale);
		}
		break;
	}

	InFrame->ViewNumber = ViewNumber;
	InFrame->Position = Pose.Position;
	InFrame->Orientation = Pose.Orientation;
	PXR_LOGV(PxrUnreal, "UpdateSensorValue:%u,PredtTime:%f,ViewNumber:%d,Rotation:%s,Position:%s", InFrame->FrameNumber, InFrame->predictedDisplayTimeMs, ViewNumber, PLATFORM_CHAR(*InFrame->Orientation.Rotator().ToString()), PLATFORM_CHAR(*InFrame->Position.ToString()));

}

void FPICOXRHMD::SetBaseOffsetInMeters(const FVector& BaseOffset)
{
	CheckInGameThread();

	GameSettings->BaseOffset = BaseOffset;
}

FVector FPICOXRHMD::GetBaseOffsetInMeters() const
{
	CheckInGameThread();

	return GameSettings->BaseOffset;
}

bool FPICOXRHMD::ConvertPose(const PxrPosef& InPose, FPose& OutPose) const
{
	CheckInGameThread();

	if (!NextGameFrameToRender_GameThread.IsValid())
	{
		return false;
	}

	return ConvertPose_Internal(InPose, OutPose, GameSettings.Get(), NextGameFrameToRender_GameThread->WorldToMetersScale);
}


bool FPICOXRHMD::ConvertPose(const FPose& InPose, PxrPosef& OutPose) const
{
	CheckInGameThread();

	if (!NextGameFrameToRender_GameThread.IsValid())
	{
		return false;
	}

	return ConvertPose_Internal(InPose, OutPose, GameSettings.Get(), NextGameFrameToRender_GameThread->WorldToMetersScale);
}

bool FPICOXRHMD::ConvertPose_Internal(const PxrPosef& InPose, FPose& OutPose, const FGameSettings* Settings, float WorldToMetersScale)
{
	return ConvertPose_Private(InPose, OutPose, Settings->BaseOrientation, Settings->BaseOffset, WorldToMetersScale);
}

bool FPICOXRHMD::ConvertPose_Internal(const FPose& InPose, PxrPosef& OutPose, const FGameSettings* Settings, float WorldToMetersScale)
{
	return ConvertPose_Private(InPose, OutPose, Settings->BaseOrientation, Settings->BaseOffset, WorldToMetersScale);
}

void FPICOXRHMD::UpdateSplashScreen()
 {
 	if (!GetSplash() || !IsInGameThread())
 	{
 		return;
 	}
 	if (bSplashIsShown)
 	{
 		PXR_LOGD(PxrUnreal, "UpdateSplashScreen Splash->Show()");
 	}
 	else
 	{
 		PXR_LOGD(PxrUnreal, "UpdateSplashScreen Splash->Hide()");
 	}

 }

void FPICOXRHMD::EnableContentProtect(bool bEnable)
{
#if PLATFORM_ANDROID
 	if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
 	{
 		static jmethodID Method = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "EnableContentProtect", "(Z)V", false);
 		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, Method, bEnable);
 	}
#endif
}

void FPICOXRHMD::ClearTexture_RHIThread(FRHITexture2D* SrcTexture)
{

	if (RHIString == TEXT("Vulkan"))
	{
		UE_LOG(LogHMD,Log,TEXT("PICO XR Vulkan, Cannot Clear Texture"));
		return;
	}

    check(IsInRenderingThread());

    FRHICommandListImmediate& CommandList = FRHICommandListExecutor::GetImmediateCommandList();
    const FRHIRenderPassInfo RenderPassInfo(SrcTexture, ERenderTargetActions::Clear_Store);
    CommandList.BeginRenderPass(RenderPassInfo, TEXT("ClearTexture"));
    CommandList.EndRenderPass();
    CommandList.SetViewport(0, 0, 0.0f, SrcTexture->GetSizeX(), SrcTexture->GetSizeY(), 1.0f);
    CommandList.Transition(FRHITransitionInfo(SrcTexture, ERHIAccess::Unknown, ERHIAccess::SRVMask));
}

float FPICOXRHMD::UPxr_GetIPD() const
{
 	PXR_LOGV(PxrUnreal,"const GetIPD %f", IpdValue);
 	return IpdValue;
}

void FPICOXRHMD::RenderTexture_RenderThread(class FRHICommandListImmediate& RHICmdList, class FRHITexture2D* BackBuffer, class FRHITexture2D* SrcTexture, FVector2D WindowSize) const
{
}

void FPICOXRHMD::SetupViewFamily(FSceneViewFamily& InViewFamily)
{
	CheckInGameThread();

	if (GameSettings->IsAdaptiveResolutionEnabled())
	{
		InViewFamily.EngineShowFlags.ScreenPercentage = 1;
	}

	if (GameSettings->Flags.bPauseRendering)
	{
		InViewFamily.EngineShowFlags.Rendering = 0;
	}
}

void FPICOXRHMD::SetupView(FSceneViewFamily& InViewFamily, FSceneView& InView)
{
	check(IsInGameThread());
}

void FPICOXRHMD::BeginRenderViewFamily(FSceneViewFamily& InViewFamily)
{
	CheckInGameThread();

	if (GameSettings.IsValid() && GameSettings->IsStereoEnabled())
	{
		GameSettings->CurrentShaderPlatform = InViewFamily.Scene->GetShaderPlatform();
		GameSettings->Flags.bsRGBEyeBuffer = IsMobilePlatform(GameSettings->CurrentShaderPlatform) && IsMobileColorsRGB();

		if (NextGameFrameToRender_GameThread.IsValid())
		{
			NextGameFrameToRender_GameThread->ShowFlags = InViewFamily.EngineShowFlags;
		}

		if (SpectatorScreenController != nullptr)
		{
			SpectatorScreenController->BeginRenderViewFamily();
		}
	}

	OnRenderFrameBegin_GameThread();

}

void FPICOXRHMD::PreRenderView_RenderThread(FRHICommandListImmediate& RHICmdList, FSceneView& InView)
{
}

void FPICOXRHMD::PreRenderViewFamily_RenderThread(FRHICommandListImmediate& RHICmdList, FSceneViewFamily& InViewFamily)
{
	CheckInRenderThread();
	if (!GameFrame_RenderThread.IsValid())
	{
		return;
	}

	if (!GameSettings_RenderThread.IsValid() || !GameSettings_RenderThread->IsStereoEnabled())
	{
		return;
	}

#if PLATFORM_ANDROID
	FAndroidApplication::GetJavaEnv();
#endif
	OnRHIFrameBegin_RenderThread();
}

void FPICOXRHMD::PostRenderViewFamily_RenderThread(FRHICommandListImmediate& RHICmdList, FSceneViewFamily& InViewFamily)
{
	OnRenderFrameEnd_RenderThread(RHICmdList);
}

void FPICOXRHMD::PostRenderView_RenderThread(FRHICommandListImmediate& RHICmdList, FSceneView& InView)
{
}

#ifdef PICO_CUSTOM_ENGINE
void FPICOXRHMD::PostRenderBasePass_RenderThread(FRHICommandListImmediate& RHICmdList, FSceneView& InView)
{
	if (RHIString != TEXT("Vulkan") ||
		PICOXRSetting->FoveationRenderingMode != EFoveationRenderingMode::EyeTrackingFoveationRendering ||
		PICOXRSetting->FoveationLevel == EFoveationLevel::Type::None ||
		!PICOXRSetting->bEnableEyeTrackingFoveationRendering ||
		!CVarPICOEnableEyeTrackedFoveatedRendering.GetValueOnRenderThread())
	{
		if (RenderBridge.IsValid())
		{
			PXR_LOGV(PxrUnreal, "FPICOXRHMD::PostRenderBasePass_RenderThread: UpdateFoveationOffsetsUsage_RHIThread Condition = false");
			RenderBridge->UpdateFoveationOffsetsUsage_RHIThread(false);
		}
		return;
	}

	const FXRSwapChainPtr& EyeLayerSwapChain = PXREyeLayer_RenderThread.IsValid() ? PXREyeLayer_RenderThread->GetSwapChain() : nullptr;
	if (!EyeLayerSwapChain.IsValid())
	{
		PXR_LOGV(PxrUnreal, "FPICOXRHMD::PostRenderBasePass_RenderThread: EyeLayerSwapChain is Invalid");
		RenderBridge->UpdateFoveationOffsetsUsage_RHIThread(false);
		return;
	}

	const FRHITexture2D* EyeLayerTexture = EyeLayerSwapChain->GetTexture2DArray() ? EyeLayerSwapChain->GetTexture2DArray() : EyeLayerSwapChain->GetTexture2D();
	if (!EyeLayerTexture)
	{
		PXR_LOGV(PxrUnreal, "FPICOXRHMD::PostRenderBasePass_RenderThread: EyeLayerTexture is Invalid");
		RenderBridge->UpdateFoveationOffsetsUsage_RHIThread(false);
		return;
	}

	const FIntPoint EyeLayerTextureSize = EyeLayerTexture->GetSizeXY();
	ExecuteOnRHIThread_DoNotWait([this, EyeLayerTextureSize]()
	{
		bool bUseOffset = false;
		FIntPoint LeftOffset, RightOffset;
		LeftOffset = RightOffset = FIntPoint::ZeroValue;

		bool bEnableEyeTrackingFoveationRenderingState = false;
		if (FPICOXRHMDModule::GetPluginWrapper().GetEyeTrackingFoveationRenderingState(&bEnableEyeTrackingFoveationRenderingState) >= 0 &&
			bEnableEyeTrackingFoveationRenderingState)
		{
			PXR_LOGV(PxrUnreal, "FPICOXRHMD::PostRenderBasePass_RenderThread: GetEyeTrackingFoveationRenderingState = true Success");

			PxrVector2f CenterOffset[2];
			PxrFoveationStateCode Result = (PxrFoveationStateCode)FPICOXRHMDModule::GetPluginWrapper().GetEyeTrackingFoveationRenderingCenter(CenterOffset);
			if (PXRP_SUCCESS(Result))
			{
				bUseOffset = true;

				LeftOffset.X = Align((int32)(EyeLayerTextureSize.X / 2 * CenterOffset[0].x), 8);
				LeftOffset.Y = Align(0 - (int32)(EyeLayerTextureSize.Y / 2 * CenterOffset[0].y), 8);

				RightOffset.X = Align((int32)(EyeLayerTextureSize.X / 2 * CenterOffset[1].x), 8);
				RightOffset.Y = Align(0 - (int32)(EyeLayerTextureSize.Y / 2 * CenterOffset[1].y), 8);

				PXR_LOGV(PxrUnreal, "FPICOXRHMD::PostRenderBasePass_RenderThread: GetEyeTrackingFoveationRenderingCenter Success: bUseOffset[%d], TargetLeft[%s], TargetRight[%s]",
					bUseOffset ? 1 : 0, *LeftOffset.ToString(), *RightOffset.ToString());
			}
			else if (Result != PxrFoveationStateCode::PXR_FOVEATION_InvalidData)
			{
				PICOXRSetting->FoveationRenderingMode = EFoveationRenderingMode::FixedFoveationRendering;
				PICOXRSetting->bEnableEyeTrackingFoveationRendering = false;
				FPICOXRHMDModule::GetPluginWrapper().SetEyeTrackingFoveationRenderingState(false);

				PXR_LOGI(PxrUnreal, "FPICOXRHMD::PostRenderBasePass_RenderThread: GetEyeTrackingFoveationRenderingCenter != PXR_FOVEATION_InvalidData Failed");
			}
			else
			{
				PXR_LOGV(PxrUnreal, "FPICOXRHMD::PostRenderBasePass_RenderThread: GetEyeTrackingFoveationRenderingCenter == PXR_FOVEATION_InvalidData Failed");
			}
		}
		if (RenderBridge.IsValid())
		{
			RenderBridge->UpdateFoveationOffsetsUsage_RHIThread(bUseOffset);
			RenderBridge->UpdateFoveationOffsets_RHIThread(LeftOffset, RightOffset);
		}
	});
}
#endif

bool FPICOXRHMD::LateLatchingEnabled() const
{
#if PLATFORM_ANDROID && PICO_HMD_SUPPORTED_PLATFORMS_VULKAN
	if (RHIString == TEXT("Vulkan"))
	{
		return GameSettings->bLateLatching;
	}
#endif
	return false;
}

void FPICOXRHMD::PreLateLatchingViewFamily_RenderThread(FRHICommandListImmediate& RHICmdList, FSceneViewFamily& InViewFamily)
{
	check(IsInRenderingThread());
	FPXRGameFrame* CurrentFrame = GameFrame_RenderThread.Get();
	if (CurrentFrame)
	{
		PXR_LOGV(PxrUnreal, "PreLateLatchingViewFamily_RenderThread:%u", CurrentFrame->FrameNumber);
		CurrentFrame->Flags.bLateUpdateOK = false;
	}
}
#ifdef PICO_CUSTOM_ENGINE
//PICO AppSpaceWarp
bool FPICOXRHMD::AllocateMotionVectorTexture(uint32 Index, uint8 Format, uint32 NumMips, uint32 InTexFlags, uint32 InTargetableTextureFlags, FTexture2DRHIRef& OutTexture, FIntPoint& OutTextureSize, FTexture2DRHIRef& OutDepthTexture, FIntPoint& OutDepthTextureSize)
{
	PXR_LOGI(PxrUnreal, "AllocateMotionVectorTexture Index=%d, Format=%d, NumMips=%d",Index, Format, NumMips);
	check(IsInRenderingThread())

	check(Index == 0);
	if (PXREyeLayer_RenderThread.IsValid())
	{
		const FXRSwapChainPtr& SwapChain = PXREyeLayer_RenderThread->GetMotionVectorSwapChain();
		if (SwapChain.IsValid())
		{
			FTexture2DRHIRef Texture = SwapChain->GetTexture2DArray() ? SwapChain->GetTexture2DArray() : SwapChain->GetTexture2D();
			FIntPoint TexSize = Texture->GetSizeXY();
			
			const FXRSwapChainPtr& DepthSwapChain = PXREyeLayer_RenderThread->GetMotionVectorDepthSwapChain();
			if (DepthSwapChain.IsValid())
			{
				FTexture2DRHIRef DepthTexture = DepthSwapChain->GetTexture2DArray() ? DepthSwapChain->GetTexture2DArray() : DepthSwapChain->GetTexture2D();
				FIntPoint DepthTexSize = DepthTexture->GetSizeXY();

				if (DepthTexture->IsValid() && DepthTexSize.X > 0 && DepthTexSize.Y > 0)
				{
					OutDepthTextureSize = DepthTexSize;
					OutDepthTexture = DepthTexture;
				}
				else
				{
					return false;
				}
			}

			// Only set texture and return true if we have a valid texture of compatible size
			if (Texture->IsValid() && TexSize.X > 0 && TexSize.Y > 0)
			{
				if (bNeedReAllocateMotionVectorTexture_RenderThread)
				{
					PXR_LOGI(PxrUnreal, "[Mobile SpaceWarp] Allocating PICO %d x %d motion vector swapchain", TexSize.X, TexSize.Y, Index);
					bNeedReAllocateMotionVectorTexture_RenderThread = false;
				}

				OutTexture = Texture;
				OutTextureSize = TexSize;

				return true;
			}
		}
	}

	return false;
};


bool FPICOXRHMD::NeedReAllocateMotionVectorTexture(const TRefCountPtr<IPooledRenderTarget>& MotionVectorTarget, const TRefCountPtr<IPooledRenderTarget>& MotionVectorDepthTarget)
{
	check(IsInRenderingThread())

	return bNeedReAllocateMotionVectorTexture_RenderThread;
}
#endif
bool FPICOXRHMD::NeedReAllocateDepthTexture(const TRefCountPtr<IPooledRenderTarget>& DepthTarget)
{
	check(IsInRenderingThread())

	return bNeedReAllocateDepthTexture_RenderThread;
}

bool FPICOXRHMD::AllocateDepthTexture(uint32 Index, uint32 SizeX, uint32 SizeY, uint8 Format, uint32 NumMips, ETextureCreateFlags InTexFlags, ETextureCreateFlags TargetableTextureFlags, FTexture2DRHIRef& OutTargetableTexture, FTexture2DRHIRef& OutShaderResourceTexture, uint32 NumSamples)
{
	check(IsInRenderingThread())
	check(Index == 0);
	
	return false;
}

bool FPICOXRHMD::AllocateRenderTargetTexture(uint32 Index, uint32 SizeX, uint32 SizeY, uint8 Format, uint32 NumMips, ETextureCreateFlags Flags, ETextureCreateFlags TargetableTextureFlags, FTexture2DRHIRef& OutTargetableTexture, FTexture2DRHIRef& OutShaderResourceTexture, uint32 NumSamples)
{
    PXR_LOGI(PxrUnreal, "AllocateRenderTargetTexture Index=%d, SizeX=%d, SizeY=%d, Format=%d, NumMips=%d, Flags=%d, TargetableTextureFlags=%d, NumSamples=%d",
                        Index, SizeX, SizeY, Format, NumMips, Flags, TargetableTextureFlags, NumSamples);

    check(IsInGameThread());
    check(IsInRenderingThread());

	check(Index == 0);

	if (PXRLayerMap[0].IsValid() && PXREyeLayer_RenderThread.IsValid())
	{
		const FXRSwapChainPtr& SwapChain = PXREyeLayer_RenderThread->GetSwapChain();
		if (SwapChain.IsValid())
		{
			OutTargetableTexture = OutShaderResourceTexture = SwapChain->GetTexture2DArray() ? SwapChain->GetTexture2DArray() : SwapChain->GetTexture2D();
			bNeedReAllocateViewportRenderTarget = false;
			return true;
		}
	}

	return false;
}

bool FPICOXRHMD::NeedReAllocateShadingRateTexture(const TRefCountPtr<IPooledRenderTarget>& FoveationTarget)
{
	CheckInRenderThread();
	return GameSettings_RenderThread->IsStereoEnabled() && bNeedReAllocateFoveationTexture_RenderThread;
}

bool FPICOXRHMD::AllocateShadingRateTexture(uint32 Index, uint32 RenderSizeX, uint32 RenderSizeY, uint8 Format, uint32 NumMips, ETextureCreateFlags InTexFlags, ETextureCreateFlags InTargetableTextureFlags, FTexture2DRHIRef& OutTexture, FIntPoint& OutTextureSize)
{
	check(Index == 0 && (IsInRenderingThread() || IsInRHIThread()));

#if PLATFORM_ANDROID

    if (RHIString == TEXT("OpenGL") || !FPICOXRHMDModule::GetPluginWrapper().GetFeatureSupported(PXR_FEATURE_FOVEATION))
	{
        PXR_LOGI(PxrUnreal, "AllocateFoveationTexture OpenGL Graphics & Feature Foveation is Not Supportted");
        return false;
    }

	if (PXREyeLayer_RenderThread && PXREyeLayer_RenderThread.IsValid())
    {
        const FXRSwapChainPtr& SwapChain = PXREyeLayer_RenderThread->GetFoveationSwapChain();

        if (SwapChain.IsValid())
        {
            PXR_LOGI(PxrUnreal, "AllocateFoveationTexture SwapChain.IsValid");

			FTexture2DRHIRef Texture=nullptr;
			Texture = SwapChain->GetTexture2DArray() ? SwapChain->GetTexture2DArray() : SwapChain->GetTexture2D();
            FIntPoint TexSize = Texture->GetSizeXY();

            if (Texture->IsValid() && TexSize.X > 0 && TexSize.Y > 0 )
            {
				if (bNeedReAllocateFoveationTexture_RenderThread)
				{
					bNeedReAllocateFoveationTexture_RenderThread = false;
				}

				if (RenderSizeX % TexSize.X != 0 || RenderSizeY % TexSize.Y != 0)
				{
					PXR_LOGI(PxrUnreal, "%d x %d variable resolution swapchain is not a divider of %d x %d color swapchain, potential edge problems", TexSize.X, TexSize.Y, RenderSizeX, RenderSizeY);
				}
				else
				{
					PXR_LOGI(PxrUnreal, "%d x %d variable resolution swapchain is a divider of %d x %d color swapchain, no edge problems", TexSize.X, TexSize.Y, RenderSizeX, RenderSizeY);
				}

                OutTexture = Texture;
                OutTextureSize = TexSize;
                return true;
            }
        }
    }
#endif
    return false;
}

/*
 * Calculates dimensions of the render target texture.
 */
void FPICOXRHMD::CalculateRenderTargetSize(const class FViewport& Viewport, uint32& InOutSizeX, uint32& InOutSizeY)
{
	CheckInGameThread();

	if (!GameSettings->IsStereoEnabled())
	{
		return;
	}

	FIntPoint RenderTargetSize = GetRenderTargetSize();
	// InOutSizeX = RenderTargetSize.X;
	// InOutSizeY = RenderTargetSize.Y;
}

bool FPICOXRHMD::NeedReAllocateViewportRenderTarget(const FViewport& Viewport)
{
	CheckInGameThread();
	return GameSettings->IsStereoEnabled() && bNeedReAllocateViewportRenderTarget;
}

FXRRenderBridge* FPICOXRHMD::GetActiveRenderBridge_GameThread(bool bUseSeparateRenderTarget)
{
	return RenderBridge;
}

uint32 FPICOXRHMD::CreateLayer(const FLayerDesc& InLayerDesc)
{
    check(IsInGameThread());
    uint32 LayerId = NextLayerId++;
    PXRLayerMap.Add(LayerId, MakeShareable(new FPICOXRStereoLayer(this, LayerId, InLayerDesc)));
	PXR_LOGD(PxrUnreal, "Layer Create LayerId=%d", LayerId);
    return LayerId;
}

void FPICOXRHMD::DestroyLayer(uint32 LayerId)
{
	check(IsInGameThread());
    PXR_LOGD(PxrUnreal, "DestroyLayer LayerId=%d", LayerId);
	FPICOLayerPtr* LayerFound = PXRLayerMap.Find(LayerId);
	if (LayerFound)
	{
		(*LayerFound)->DestroyUnderlayMesh();
	}
	PXRLayerMap.Remove(LayerId);
}

void FPICOXRHMD::SetLayerDesc(uint32 LayerId, const FLayerDesc& InLayerDesc)
{
 	check(IsInGameThread());
 	FPICOLayerPtr* LayerFound = PXRLayerMap.Find(LayerId);
	if (LayerFound)
	{
		FPICOXRStereoLayer* Layer = new FPICOXRStereoLayer(**LayerFound);
		Layer->SetPXRLayerDesc(InLayerDesc);
		*LayerFound = MakeShareable(Layer);
	}
}

bool FPICOXRHMD::GetLayerDesc(uint32 LayerId, IStereoLayers::FLayerDesc& OutLayerDesc)
{
 	check(IsInGameThread());
 	FPICOLayerPtr* LayerFound = PXRLayerMap.Find(LayerId);
 	if (LayerFound)
 	{
 		OutLayerDesc = (*LayerFound)->GetPXRLayerDesc();
 		return true;
 	}
 	return false;
}

void FPICOXRHMD::MarkTextureForUpdate(uint32 LayerId)
{
    check(IsInGameThread());
    FPICOLayerPtr* LayerFound = PXRLayerMap.Find(LayerId);
    if (LayerFound)
    {
        (*LayerFound)->MarkTextureForUpdate();
    }
}

IStereoLayers::FLayerDesc FPICOXRHMD::GetDebugCanvasLayerDesc(FTextureRHIRef Texture)
{
 	IStereoLayers::FLayerDesc StereoLayerDesc;
 	StereoLayerDesc.Priority = INT_MAX;
 	StereoLayerDesc.Transform = FTransform(FVector(180.f, 0, 0));
	float scaleZ = -1.0f;
	if (RHIString == TEXT("Vulkan"))
		scaleZ = 1.0f;
 	StereoLayerDesc.Transform.SetScale3D(FVector(1,1, scaleZ));
 	StereoLayerDesc.QuadSize = FVector2D(180.f, 180.f);
 	StereoLayerDesc.LayerSize = Texture->GetTexture2D()->GetSizeXY();
 	StereoLayerDesc.PositionType = IStereoLayers::ELayerType::FaceLocked;
 	StereoLayerDesc.SetShape<FQuadLayer>();
 	StereoLayerDesc.Texture = Texture;
 	StereoLayerDesc.Flags = IStereoLayers::ELayerFlags::LAYER_FLAG_TEX_CONTINUOUS_UPDATE;
 	StereoLayerDesc.Flags |= IStereoLayers::ELayerFlags::LAYER_FLAG_QUAD_PRESERVE_TEX_RATIO;
 	return StereoLayerDesc;
}

void FPICOXRHMD::GetAllocatedTexture(uint32 LayerId, FTextureRHIRef& Texture, FTextureRHIRef& LeftTexture)
{
 	Texture = LeftTexture = nullptr;
}

void FPICOXRHMD::OnBeginPlay(FWorldContext& InWorldContext)
{
	bNeedDrawBlackEye = false;
	IConsoleVariable* CVSynsVar = IConsoleManager::Get().FindConsoleVariable(TEXT("r.VSync"));
	CVSynsVar->Set(0.0f);
	IConsoleVariable* CFCFVar = IConsoleManager::Get().FindConsoleVariable(TEXT("r.FinishCurrentFrame"));
	CFCFVar->Set(0.0f);
 	PlayerController = InWorldContext.World()->GetFirstPlayerController();
	EventManager->RawLongHomePressedDelegate.AddRaw(this,&FPICOXRHMD::OnHomeKeyRecentered);
#ifdef PICO_CUSTOM_ENGINE

	// Sync GameUserSettings with PXR Settings
	UGameUserSettings* GameUserSettings = GEngine->GetGameUserSettings();
	if (GameUserSettings)
	{
		GameUserSettings->SetDynamicResolutionEnabled(GameSettings->IsAdaptiveResolutionEnabled());
		GameUserSettings->ApplyNonResolutionSettings();
	}
#endif
	//Initialize the power of the headset, and update by PollEvent
	UpdateHMDBatteryLevelFromJava(CurrentHMDBatteryLevel);
	
}

void FPICOXRHMD::OnEndPlay(FWorldContext& InWorldContext)
{
}

void FPICOXRHMD::GetMotionControllerData(UObject* WorldContext, const EControllerHand Hand, FXRMotionControllerData& MotionControllerData)
{
	MotionControllerData.DeviceName = GetSystemName();
	MotionControllerData.ApplicationInstanceID = FApp::GetInstanceId();
	MotionControllerData.DeviceVisualType = EXRVisualType::Controller;
	MotionControllerData.TrackingStatus = ETrackingStatus::NotTracked;
	MotionControllerData.HandIndex = Hand;
	
	FName MotionControllerName("PICOXRInput");
	TArray<IMotionController*> MotionControllers = IModularFeatures::Get().GetModularFeatureImplementations<IMotionController>(IMotionController::GetModularFeatureName());
	FXRMotionControllerBase* MotionController = nullptr;
	for (auto Itr : MotionControllers)
	{
		if (Itr->GetMotionControllerDeviceTypeName() == MotionControllerName)
		{
			MotionController = static_cast<FXRMotionControllerBase*>(Itr);
			break;
		}
	}

	if (MotionController)
	{
		FRotator GripTrackingRotation;
		FVector GripTrackingPosition;
		MotionControllerData.bValid = MotionController->GetControllerOrientationAndPosition(0 , Hand, GripTrackingRotation, GripTrackingPosition, GetWorldToMetersScale());
		if (MotionControllerData.bValid)
		{
			MotionControllerData.TrackingStatus=ETrackingStatus::Tracked;
			const FTransform GripTrackingTransform(GripTrackingRotation.Quaternion(), GripTrackingPosition);

			MotionControllerData.GripRotation = GripTrackingTransform.GetRotation();
			MotionControllerData.GripPosition = GripTrackingTransform.GetLocation();
			
			MotionControllerData.AimPosition = MotionControllerData.GripPosition;
			MotionControllerData.AimRotation = MotionControllerData.GripRotation;
		}
	}
}

int32 FPICOXRHMD::GetXRSystemFlags() const
{
 	return EXRSystemFlags::IsHeadMounted;
}

EHMDWornState::Type FPICOXRHMD::GetHMDWornState()
{
	if (PICOXRSetting->bEnablePSensor)
	{
		int32 state = -1;
#if PLATFORM_ANDROID
		if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
		{
			static jmethodID Method = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "GetPsensorState", "()I", false);
			state = FJavaWrapper::CallIntMethod(Env, FJavaWrapper::GameActivityThis, Method);
		}
#endif
		if (state == 0)
		{
			return EHMDWornState::Worn;
		}
		else
		{
			return EHMDWornState::NotWorn;
		}
	}
		return EHMDWornState::Unknown;
}

float FPICOXRHMD::GetPixelDenity() const
{
	if (IsInGameThread())
	{
		return GameSettings.IsValid() ? GameSettings->PixelDensity : 1.0f;
	}
	else
	{
		return GameSettings_RenderThread.IsValid() ? GameSettings_RenderThread->PixelDensity : 1.0f;
	}
}

void FPICOXRHMD::SetPixelDensity(const float NewPixelDensity)
{
	PXR_LOGV(PxrUnreal, "SetPixelDensity = %f", NewPixelDensity);
	CheckInGameThread();
	GameSettings->SetPixelDensity(NewPixelDensity);
}

void FPICOXRHMD::SetRefreshRate()
{
#if PLATFORM_ANDROID
	switch (PICOXRSetting->refreshRate)
	{
	case ERefreshRate::Default:
	{
		FPICOXRHMDModule::GetPluginWrapper().SetDisplayRefreshRate(0.0f);
		break;
	}
	case ERefreshRate::RefreshRate72:
	{
		FPICOXRHMDModule::GetPluginWrapper().SetDisplayRefreshRate(72.0f);
		break;
	}
	case ERefreshRate::RefreshRate90:
	{
		FPICOXRHMDModule::GetPluginWrapper().SetDisplayRefreshRate(90.0f);
		break;
	}
	case ERefreshRate::RefreshRate120:
	{
		FPICOXRHMDModule::GetPluginWrapper().SetDisplayRefreshRate(120.0f);
		break;
	}
	default:
		break;
	}
#endif
}
#ifdef PICO_CUSTOM_ENGINE
 
bool FPICOXRHMD::IsSupportsSpaceWarp() const
{
#if PLATFORM_ANDROID
	static const auto CVarMobileMultiView = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("vr.MobileMultiView"));
	static const auto CVarSupportMobileSpaceWarp = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("vr.SupportMobileSpaceWarp"));
	bool bIsMultiViewEnabled = (CVarMobileMultiView && CVarMobileMultiView->GetValueOnAnyThread() != 0);
	//TODO:Optimize for dynamic fetching
	bool bIsVulkan = RHIString == TEXT("Vulkan");
	bool spaceWarpSupported = bIsVulkan &&bIsUsingMobileMultiView && CVarSupportMobileSpaceWarp && (CVarSupportMobileSpaceWarp->GetValueOnAnyThread() != 0);
	return spaceWarpSupported;
#else
	return false;
#endif
}
#endif
bool FPICOXRHMD::UpdateHMDBatteryLevelFromJava(int32& BatteryLevel)
{
#if PLATFORM_ANDROID
	if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
	{
		static jmethodID Method = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "GetHmdBatteryLevel", "()I", false);
		BatteryLevel=FJavaWrapper::CallIntMethod(Env, FJavaWrapper::GameActivityThis, Method);
		return true;
	}
#endif
	return false;
}

bool FPICOXRHMD::UpdateHMDBatteryLevelFromPollEvent(int32& BatteryLevel)
{
	if (CurrentHMDBatteryLevel)
	{
		BatteryLevel=CurrentHMDBatteryLevel;
		return true;
	}
	return false;
}

bool FPICOXRHMD::SetCurrentCoordinateType(EPICOXRCoordinateType InCoordinateType)
{
	GameSettings->CoordinateType=InCoordinateType;
	return true;
}

void FPICOXRHMD::SetColorScaleAndOffset(FLinearColor ColorScale, FLinearColor ColorOffset, bool bApplyToAllLayers)
{
	PXR_LOGV(PxrUnreal,"PICOXRSetColorScaleAndOffset Scale(RGBA)= %f %f %f %f. Offset = %f %f %f %f,AllLayers = %d",ColorScale.R,ColorScale.G,ColorScale.B,ColorScale.A,ColorOffset.R,ColorOffset.G,ColorOffset.B,ColorOffset.A,bApplyToAllLayers);
	CheckInGameThread();
	GameSettings->bApplyColorScaleAndOffsetToAllLayers = bApplyToAllLayers;
	GameSettings->ColorScale = LinearColorToPxrVector4f(ColorScale);
	GameSettings->ColorOffset = LinearColorToPxrVector4f(ColorOffset);
}

uint32 FPICOXRHMD::CreateMRCStereoLayer(FTextureRHIRef BackgroundRTTexture, FTextureRHIRef ForegroundRTTexture)
{
	IStereoLayers::FLayerDesc StereoLayerDesc;
	StereoLayerDesc.PositionType = IStereoLayers::ELayerType::FaceLocked;
	StereoLayerDesc.Texture = ForegroundRTTexture;
	StereoLayerDesc.LeftTexture = BackgroundRTTexture;
	StereoLayerDesc.Flags = IStereoLayers::ELayerFlags::LAYER_FLAG_TEX_CONTINUOUS_UPDATE | IStereoLayers::ELayerFlags::LAYER_FLAG_QUAD_PRESERVE_TEX_RATIO | IStereoLayers::ELayerFlags::LAYER_FLAG_TEX_NO_ALPHA_CHANNEL;

	check(IsInGameThread());
	if (CurrentMRCLayer)
	{
		return CurrentMRCLayer->GetID();
	}
	const uint32 LayerId = NextLayerId++;
	PXR_LOGD(PxrUnreal, "MRC Layer Create LayerId=%d", LayerId);
	CurrentMRCLayer= MakeShareable(new FPICOXRStereoLayer(this, LayerId, StereoLayerDesc));
	PXRLayerMap.Add(LayerId, CurrentMRCLayer);
	PXRLayerMap[LayerId]->bMRCLayer = true;
	return LayerId;
}

void FPICOXRHMD::SetExternalSurfaceLayer(const IStereoLayers::FLayerDesc& InLayerDesc, bool IsDRM, EPICOXRAndroidSurface3DType Type)
{
	CheckInGameThread();
	if (CurrentExternalSurfaceLayer)
	{
		CurrentExternalSurfaceLayer->SetPXRLayerDesc(InLayerDesc);
	}
	else
	{
		const uint32 LayerId = NextLayerId++;
		PXR_LOGI(PxrUnreal, "Create External Surface Layer ID=%d", LayerId);
		CurrentExternalSurfaceLayer = MakeShareable(new FPICOXRStereoLayer(this, LayerId, InLayerDesc));
		CurrentExternalSurfaceLayer->bExternalSurface = true;
		CurrentExternalSurfaceLayer->bIsDRM = IsDRM;
		CurrentExternalSurfaceLayer->SurfaceType = Type;
		PXRLayerMap.Add(LayerId, CurrentExternalSurfaceLayer);
	}
}

void FPICOXRHMD::DestroyMRCLayer()
{
	if (CurrentMRCLayer)
	{
		DestroyLayer(CurrentMRCLayer->GetID());
		CurrentMRCLayer.Reset();
	}
}

void FPICOXRHMD::DestroyExternalSurfaceLayer()
{
	if (CurrentExternalSurfaceLayer)
	{
		uint32 ID = CurrentExternalSurfaceLayer->GetID();
		PXR_LOGI(PxrUnreal, "Destroy External Surface Layer ID=%d", ID);
		DestroyLayer(ID);
		CurrentExternalSurfaceLayer.Reset();
	}
}

FString FPICOXRHMD::GetRHIString()
{
	return RHIString;
}

void FPICOXRHMD::OnPreLoadMap(const FString& MapName)
{
	PXR_LOGD(PxrUnreal, "OnPreLoadMap:%s", PLATFORM_CHAR(*MapName));
	bNeedDrawBlackEye = true;
	if (PICOSplash)
	{
		PICOSplash->OnPreLoadMap(MapName);
	}
}
DECLARE_STATS_GROUP(TEXT("PICOTiming"), STATGROUP_PICOTiming, STATCAT_Advanced);
DECLARE_CYCLE_STAT(TEXT("WaitFrame"), STAT_WaitFrame, STATGROUP_PICOTiming);
void FPICOXRHMD::WaitFrame()
{
	SCOPE_CYCLE_COUNTER(STAT_WaitFrame);
	check(IsInGameThread());
	if (GameFrame_GameThread.IsValid())
	{
		PXR_LOGV(PxrUnreal, "WaitFrame %u", GameFrame_GameThread->FrameNumber);
		if (!PICOSplash->IsShown() && WaitedFrameNumber < GameFrame_GameThread->FrameNumber)
		{
			if (bWaitFrameVersion)
			{
				FPICOXRHMDModule::GetPluginWrapper().WaitFrame();
				FPICOXRHMDModule::GetPluginWrapper().GetPredictedDisplayTime(&CurrentFramePredictedTime);
				GameFrame_GameThread->Flags.bHasWaited = true;
				GameFrame_GameThread->predictedDisplayTimeMs = CurrentFramePredictedTime;
				PXR_LOGV(PxrUnreal, "Pxr_GetPredictedDisplayTime after wait frame %u,Time:%f", GameFrame_GameThread->FrameNumber, CurrentFramePredictedTime);
			}
			else
			{
				GameFrame_GameThread->Flags.bHasWaited = true;
			}
			WaitedFrameNumber = GameFrame_GameThread->FrameNumber;
			PXR_LOGV(PxrUnreal, "Wait frame return %u", GameFrame_GameThread->FrameNumber);
		}
		else
		{
			PXR_LOGV(PxrUnreal, "WaitFrame not wait! %u,bSplashIsShowing:%d,WaitedFrameNumber:%u", GameFrame_GameThread->FrameNumber, PICOSplash->IsShown(), WaitedFrameNumber);
		}
	}
 }

void FPICOXRHMD::LateUpdatePose()
{
	check(IsInRenderingThread());
	FPXRGameFrame* CurrentFrame = GameFrame_RenderThread.Get();
	if (CurrentFrame)
	{
		if (!CurrentFrame->Flags.bLateUpdateOK)
		{
			UpdateSensorValue(GameSettings_RenderThread.Get(), CurrentFrame);
			CurrentFrame->Flags.bLateUpdateOK = true;
			int32 SubmitViewNumber = CurrentFrame->ViewNumber;
			ExecuteOnRHIThread_DoNotWait([=]()
				{
					FPXRGameFrame* CurrentFrame_RHIThread = GameFrame_RHIThread.Get();
					if (CurrentFrame_RHIThread)
					{
						CurrentFrame_RHIThread->ViewNumber = SubmitViewNumber;
					}
				});
		}
	}
}

 void FPICOXRHMD::OnGameFrameBegin_GameThread()
{
	 CheckInGameThread();
	 check(GameSettings.IsValid());

	 if (!GameFrame_GameThread.IsValid() && FPICOXRHMDModule::GetPluginWrapper().IsRunning())
	 {
		 static const auto WaitFrameAtGameFrameTailCVar = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("PICO.WaitFrameAtGameFrameTail"));
		 GameSettings->bWaitFrameAtGameFrameTail = WaitFrameAtGameFrameTailCVar && WaitFrameAtGameFrameTailCVar->GetValueOnAnyThread() != 0;

		 PICOSplash->SwitchActiveSplash_GameThread();
		 if (GameSettings->Flags.bHMDEnabled)
		 {
			 GameFrame_GameThread = MakeNewGameFrame();
			 NextGameFrameToRender_GameThread = GameFrame_GameThread;
			 PXR_LOGV(PxrUnreal, "StartGameFrame %u", GameFrame_GameThread->FrameNumber);
			 if (!PICOSplash->IsShown())
			 {
				 if (!GameSettings->bWaitFrameAtGameFrameTail)
				 {
					 PXR_LOGV(PxrUnreal, "Wait frame at GameFrame head.");
					 WaitFrame();
				 }
				 UpdateSensorValue(GameSettings.Get(), NextGameFrameToRender_GameThread.Get());
			 }
		 }
		 UpdateStereoRenderingParams();
	 }

}

 void FPICOXRHMD::OnGameFrameEnd_GameThread()
 {
	 CheckInGameThread();
	 check(GameSettings.IsValid());

	 if (GameSettings->bWaitFrameAtGameFrameTail)
	 {
		 PXR_LOGV(PxrUnreal, "Wait frame at GameFrame tail.");
		 WaitFrame();
	 }

	 if (GameFrame_GameThread.IsValid())
	 {
		 PXR_LOGV(PxrUnreal, "OnGameFrameEnd %u", GameFrame_GameThread->FrameNumber);
	 }

	 GameFrame_GameThread.Reset();
 }

 void FPICOXRHMD::OnRenderFrameBegin_GameThread()
 {
	 check(IsInGameThread());

	 if (NextGameFrameToRender_GameThread.IsValid() && NextGameFrameToRender_GameThread->Flags.bHasWaited && NextGameFrameToRender_GameThread!=LastGameFrameToRender_GameThread)
	 {
		 LastGameFrameToRender_GameThread = NextGameFrameToRender_GameThread;
		 NextGameFrameToRender_GameThread->Flags.bSplashIsShown = PICOSplash->IsShown();

		 if (NextGameFrameToRender_GameThread->ShowFlags.Rendering && !NextGameFrameToRender_GameThread->Flags.bSplashIsShown)
		 {
			 NextGameFrameNumber++;
		 }
		 FSettingsPtr PXRSettings = GameSettings->Clone();
		 FPXRGameFramePtr PXRFrame = NextGameFrameToRender_GameThread->CloneMyself();
		 PXR_LOGV(PxrUnreal, "OnRenderFrameBegin_GameThread %u has been eaten by render-thread!", NextGameFrameToRender_GameThread->FrameNumber);
		 TArray<FPICOLayerPtr> PXRLayers;

		 PXRLayers.Empty(PXRLayerMap.Num());

		 for (auto Pair : PXRLayerMap)
		 {
			 PXRLayers.Emplace(Pair.Value->CloneMyself());

			 if (Pair.Value->GetPXRLayerDesc().Flags & IStereoLayers::LAYER_FLAG_TEX_CONTINUOUS_UPDATE && Pair.Value->GetPXRLayerDesc().Texture.IsValid())
			 {
				 Pair.Value->MarkTextureForUpdate(true);
			 }
			 else
			 {
				 Pair.Value->MarkTextureForUpdate(false);
			 }
		 }
		 PXRLayers.Sort(FPICOLayerPtr_SortById());

		 ExecuteOnRenderThread_DoNotWait([this, PXRSettings, PXRFrame, PXRLayers](FRHICommandListImmediate& RHICmdList)
			 {
				 if (PXRFrame.IsValid())
				 {
					 GameSettings_RenderThread = PXRSettings;
					 GameFrame_RenderThread = PXRFrame;

					 int32 PXRLayerIndex_Current = 0;
					 int32 PXRLastLayerIndex_RenderThread = 0;
					 TArray<FPICOLayerPtr> ValidXLayers;

					 while (PXRLayerIndex_Current < PXRLayers.Num() && PXRLastLayerIndex_RenderThread < PXRLayers_RenderThread.Num())
					 {
						 uint32 LayerIdX = PXRLayers[PXRLayerIndex_Current]->GetID();
						 uint32 LayerIdY = PXRLayers_RenderThread[PXRLastLayerIndex_RenderThread]->GetID();

						 if (LayerIdX < LayerIdY)
						 {
							 if (PXRLayers[PXRLayerIndex_Current]->InitPXRLayer_RenderThread(GameSettings_RenderThread.Get(), RenderBridge, &DelayDeletion, RHICmdList))
							 {
								 ValidXLayers.Add(PXRLayers[PXRLayerIndex_Current]);
							 }
							 PXRLayerIndex_Current++;
						 }
						 else if (LayerIdX > LayerIdY)
						 {
							 DelayDeletion.AddLayerToDeferredDeletionQueue(PXRLayers_RenderThread[PXRLastLayerIndex_RenderThread++]);
						 }
						 else
						 {
							 if (PXRLayers[PXRLayerIndex_Current]->InitPXRLayer_RenderThread(GameSettings_RenderThread.Get(), RenderBridge, &DelayDeletion, RHICmdList, PXRLayers_RenderThread[PXRLastLayerIndex_RenderThread].Get()))
							 {
								 PXRLastLayerIndex_RenderThread++;
								 ValidXLayers.Add(PXRLayers[PXRLayerIndex_Current]);
							 }
							 PXRLayerIndex_Current++;
						 }
					 }

					 while (PXRLayerIndex_Current < PXRLayers.Num())
					 {
						 if (PXRLayers[PXRLayerIndex_Current]->InitPXRLayer_RenderThread(GameSettings_RenderThread.Get(), RenderBridge, &DelayDeletion, RHICmdList))
						 {
							 ValidXLayers.Add(PXRLayers[PXRLayerIndex_Current]);
						 }
						 PXRLayerIndex_Current++;
					 }

					 while (PXRLastLayerIndex_RenderThread < PXRLayers_RenderThread.Num())
					 {
						 DelayDeletion.AddLayerToDeferredDeletionQueue(PXRLayers_RenderThread[PXRLastLayerIndex_RenderThread++]);
					 }

					 PXRLayers_RenderThread = ValidXLayers;

					 DelayDeletion.HandleLayerDeferredDeletionQueue_RenderThread();
				 }
			 });
	 }
 }

 void FPICOXRHMD::OnRenderFrameEnd_RenderThread(FRHICommandListImmediate& RHICmdList)
 {
	 check(IsInRenderingThread());
	 if (GameFrame_RenderThread.IsValid() && !PICOSplash->IsShown())
	 {
		 if (GameFrame_RenderThread->ShowFlags.Rendering)
		 {
			 for (int32 i = 0; i < PXRLayers_RenderThread.Num(); i++)
			 {
				 PXRLayers_RenderThread[i]->PXRLayersCopy_RenderThread(RenderBridge, RHICmdList);
			 }
		 }
	 }
	 GameFrame_RenderThread.Reset();
 }

 void FPICOXRHMD::OnRHIFrameBegin_RenderThread()
 {
	 check(IsInRenderingThread());
	 if (GameFrame_RenderThread.IsValid())
	 {
		 FSettingsPtr PXRSettings = GameSettings_RenderThread->Clone();
		 FPXRGameFramePtr PXRFrame = GameFrame_RenderThread->CloneMyself();
		 TArray<FPICOLayerPtr> PXRLayers = PXRLayers_RenderThread;

		 for (int32 XLayerIndex = 0; XLayerIndex < PXRLayers.Num(); XLayerIndex++)
		 {
			 PXRLayers[XLayerIndex] = PXRLayers[XLayerIndex]->CloneMyself();
		 }
		 ExecuteOnRHIThread_DoNotWait([this, PXRSettings, PXRFrame, PXRLayers]()
			 {
				 if (PXRFrame.IsValid())
				 {
					 GameSettings_RHIThread = PXRSettings;
					 GameFrame_RHIThread = PXRFrame;
					 PXRLayers_RHIThread = PXRLayers;
					 PXR_LOGV(PxrUnreal, "BeginFrame %u", GameFrame_RHIThread->FrameNumber);
					 if (GameFrame_RHIThread->ShowFlags.Rendering && !GameFrame_RHIThread->Flags.bSplashIsShown) 
					 {
						 if (FPICOXRHMDModule::GetPluginWrapper().IsRunning())
						 {
							 FPICOXRHMDModule::GetPluginWrapper().BeginFrame();
							 if (!bWaitFrameVersion)
							 {
								 FPICOXRHMDModule::GetPluginWrapper().GetPredictedDisplayTime(&CurrentFramePredictedTime);
								 PXR_LOGV(PxrUnreal, "Pxr_GetPredictedDisplayTime after begin frame:%f", CurrentFramePredictedTime);
							 }
							 for (int32 LayerIndex = 0; LayerIndex < PXRLayers_RHIThread.Num(); LayerIndex++)
							 {
								 PXRLayers_RHIThread[LayerIndex]->IncrementSwapChainIndex_RHIThread(RenderBridge);
							 }
						 }
						 else
						 {
							 PXR_LOGE(PxrUnreal, "Pxr Is Not Running!!!");
						 }
					 }
				 }
			 });
	 }
 }

 void FPICOXRHMD::OnRHIFrameEnd_RHIThread()
 {
	 check(IsInRHIThread() || IsInRenderingThread());
	 if (GameFrame_RHIThread.IsValid())
	 {
		 PXR_LOGV(PxrUnreal, "EndFrame %u,SubmitViewNum:%d,Rotation:%s,Position:%s", GameFrame_RHIThread->FrameNumber, GameFrame_RHIThread->ViewNumber,
			 PLATFORM_CHAR(*(GameFrame_RHIThread->Orientation.Rotator().ToString())), PLATFORM_CHAR(*(GameFrame_RHIThread->Position.ToString())));
		 if (GameFrame_RHIThread->ShowFlags.Rendering && !GameFrame_RHIThread->Flags.bSplashIsShown)
		 {
			 TArray<FPICOLayerPtr> Layers = PXRLayers_RHIThread;
			 Layers.Sort(FLayerPtr_CompareByAll());
			 if (FPICOXRHMDModule::GetPluginWrapper().IsRunning())
			 {
				 for (int32 LayerIndex = 0; LayerIndex < Layers.Num(); LayerIndex++)
				 {
					 if (Layers[LayerIndex]->IsVisible())
					 {
						 Layers[LayerIndex]->SubmitLayer_RHIThread(GameSettings_RHIThread.Get(), GameFrame_RHIThread.Get());
					 }
				 }
				 FPICOXRHMDModule::GetPluginWrapper().EndFrame();
			 }
			 else
			 {
				 PXR_LOGE(PxrUnreal, "Pxr Is Not Running!!!");
			 }
		 }
	 }
	 GameFrame_RHIThread.Reset();
 }

 FSettingsPtr FPICOXRHMD::CreateNewSettings() const
 {
	 FSettingsPtr Result(MakeShareable(new FGameSettings()));
	 return Result;
 }
