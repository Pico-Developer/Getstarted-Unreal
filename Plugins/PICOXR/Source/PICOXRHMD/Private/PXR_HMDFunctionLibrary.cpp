// Copyright® 2015-2023 PICO Technology Co., Ltd. All rights reserved.
// This plugin incorporates portions of the Unreal® Engine. Unreal® is a trademark or registered trademark of Epic Games, Inc. in the United States of America and elsewhere.
// Unreal® Engine, Copyright 1998 – 2023, Epic Games, Inc. All rights reserved. 

#include "PXR_HMDFunctionLibrary.h"
#include <list>
#include "PXR_HMD.h"
#include "PXR_Log.h"
#include "PXR_HMDRuntimeSettings.h"
#include "PXR_BoundarySystem.h"
#include "PXR_Utils.h"

FPICOXRIPDChangedDelegate UPICOXRHMDFunctionLibrary::PICOXRIPDChangedCallback;
FPICOXRHMD* UPICOXRHMDFunctionLibrary::PICOXRHMD = nullptr;
UPICOXRHMDFunctionLibrary::UPICOXRHMDFunctionLibrary()
{
}

FPICOXRHMD* UPICOXRHMDFunctionLibrary::GetPICOXRHMD()
{
    if (!PICOXRHMD)
    {
        static FName SystemName(TEXT("PICOXRHMD"));
        if (GEngine)
        {
            if (GEngine->XRSystem.IsValid() && (GEngine->XRSystem->GetSystemName() == SystemName))
            {
                PICOXRHMD =  static_cast<FPICOXRHMD*>(GEngine->XRSystem.Get());  
            }
            if (PICOXRHMD == nullptr)
            {
                PXR_LOGI(PxrUnreal, "GetPICOXRHMD Failed!");
            }
        } 
    }
    return PICOXRHMD;
}

FQuat UPICOXRHMDFunctionLibrary::PXR_GetCurrentOrientation()
{
    FVector Position;
    FQuat Orientation;
    GetPICOXRHMD()->GetCurrentPose(IXRTrackingSystem::HMDDeviceId,Orientation,Position);
    return  Orientation;
}

FVector UPICOXRHMDFunctionLibrary::PXR_GetCurrentPosition()
{
    FVector Position;
    FQuat Orientation;
    GetPICOXRHMD()->GetCurrentPose(IXRTrackingSystem::HMDDeviceId,Orientation,Position);
    return  Position;
}

bool UPICOXRHMDFunctionLibrary::PXR_DoesSupportPositionalTracking()
{  
    return  GetPICOXRHMD()->DoesSupportPositionalTracking();
}

FVector UPICOXRHMDFunctionLibrary::PXR_GetAngularVelocity()
{
    FVector AngularVelocity;
    GetPICOXRHMD()->UPxr_GetAngularVelocity(AngularVelocity);
    return AngularVelocity;
}

FVector UPICOXRHMDFunctionLibrary::PXR_GetAcceleration()
{
    FVector Acceleration;
    GetPICOXRHMD()->UPxr_GetAcceleration(Acceleration);
    return Acceleration;
}

FVector UPICOXRHMDFunctionLibrary::PXR_GetVelocity()
{
    FVector Velocity;
    GetPICOXRHMD()->UPxr_GetVelocity(Velocity);
    return Velocity;
}

FVector UPICOXRHMDFunctionLibrary::PXR_GetAngularAcceleration()
{
    FVector AngularAcceleration;
    GetPICOXRHMD()->UPxr_GetAngularAcceleration(AngularAcceleration);
    return AngularAcceleration;
}

EHMDWornState::Type UPICOXRHMDFunctionLibrary::PXR_GetHMDWornState()
{  
    return GetPICOXRHMD()->GetHMDWornState();
}

bool UPICOXRHMDFunctionLibrary::PXR_ResetHMDSensor()
{
    GetPICOXRHMD()->ResetOrientationAndPosition(0);
    return true;
}

bool UPICOXRHMDFunctionLibrary::PXR_GetFieldOfView(float& HFOVInDegrees, float& VFOVInDegrees)
{
    GetPICOXRHMD()->GetFieldOfView(HFOVInDegrees,VFOVInDegrees);
    return true;
}

bool UPICOXRHMDFunctionLibrary::PXR_SetFieldOfView(EPICOXREyeType Eye, float FovLeftInDegrees, float FovRightInDegrees, float FovUpInDegrees, float FovDownInDegrees)
{
   return GetPICOXRHMD()->UPxr_SetFieldOfView(Eye, FovLeftInDegrees, FovRightInDegrees, FovUpInDegrees, FovDownInDegrees)?false:true;
}

float UPICOXRHMDFunctionLibrary::PXR_GetIPD()
{
    return GetPICOXRHMD()->UPxr_GetIPD();
}

void UPICOXRHMDFunctionLibrary::PXR_IPDChangedDelegates(FPICOXRIPDChangedDelegate OnPICOXRIPDChanged)
{
#if PLATFORM_ANDROID
	PICOXRIPDChangedCallback = OnPICOXRIPDChanged;
#endif
}

FString UPICOXRHMDFunctionLibrary::PXR_GetDeviceModel()
{
    return GetPICOXRHMD()->UPxr_GetDeviceModel();
}

float UPICOXRHMDFunctionLibrary::PXR_GetCurrentDisplayFrequency()
{
    float frequency = 1.0f;
#if PLATFORM_ANDROID
    FPICOXRHMDModule::GetPluginWrapper().GetConfigFloat(PxrConfigType::PXR_DISPLAY_REFRESH_RATE, &frequency);
#endif
    return  frequency;
}

void UPICOXRHMDFunctionLibrary::PXR_SetCPUAndGPULevels(int32 CPULevel, int32 GPULevel)
{
#if PLATFORM_ANDROID
    FPICOXRHMDModule::GetPluginWrapper().SetPerformanceLevels(PxrPerfSettings::PXR_PERF_SETTINGS_CPU,CPULevel);
    FPICOXRHMDModule::GetPluginWrapper().SetPerformanceLevels(PxrPerfSettings::PXR_PERF_SETTINGS_GPU,GPULevel);
#endif
}

bool UPICOXRHMDFunctionLibrary::PXR_SetPerformanceLevel(EPerformanceSettingTypes SettingType, EPerfSettingsLevel Level)
{
#if PLATFORM_ANDROID
	const int32 SettingLevel=static_cast<int32>(Level);
	switch (SettingType) {
		case EPerformanceSettingTypes::CPULevel:
			{
				return FPICOXRHMDModule::GetPluginWrapper().SetPerformanceLevels(PxrPerfSettings::PXR_PERF_SETTINGS_CPU,SettingLevel)?false:true;
			}
		case EPerformanceSettingTypes::GPULevel:
			{
				return FPICOXRHMDModule::GetPluginWrapper().SetPerformanceLevels(PxrPerfSettings::PXR_PERF_SETTINGS_GPU,SettingLevel)?false:true;
			}
	default:
	return false;
	}
#endif
	return  false;
}

bool UPICOXRHMDFunctionLibrary::PXR_GetPerformanceLevel(EPerformanceSettingTypes SettingType, EPerfSettingsLevel& Level)
{
#if PLATFORM_ANDROID
	int32 SettingLevel;

	switch (SettingType) {
	case EPerformanceSettingTypes::CPULevel:
		{
			bool result= FPICOXRHMDModule::GetPluginWrapper().GetPerformanceLevels(PxrPerfSettings::PXR_PERF_SETTINGS_CPU,&SettingLevel)?false:true;
			Level=static_cast<EPerfSettingsLevel>(SettingLevel);
			return result;
		}
	case EPerformanceSettingTypes::GPULevel:
		{
			bool result= FPICOXRHMDModule::GetPluginWrapper().GetPerformanceLevels(PxrPerfSettings::PXR_PERF_SETTINGS_GPU,&SettingLevel)?false:true;
			Level=static_cast<EPerfSettingsLevel>(SettingLevel);
			return result;
		}
	default:
		return false;
	}
#endif
	return false;
}

void UPICOXRHMDFunctionLibrary::PXR_GetCPUAndGPULevels(int32& CPULevel, int32& GPULevel)
{
#if PLATFORM_ANDROID
    int32 cpuLevel, gpuLevel = -1;
    FPICOXRHMDModule::GetPluginWrapper().GetPerformanceLevels(PXR_PERF_SETTINGS_CPU, &cpuLevel);
    FPICOXRHMDModule::GetPluginWrapper().GetPerformanceLevels(PXR_PERF_SETTINGS_GPU, &gpuLevel);

    CPULevel = cpuLevel;
    GPULevel = gpuLevel;
#endif
}

float UPICOXRHMDFunctionLibrary::PXR_GetSystemDisplayFrequency()
{
	float frequency = 0.f;
#if PLATFORM_ANDROID
    FPICOXRHMDModule::GetPluginWrapper().GetConfigFloat(PxrConfigType::PXR_GET_DISPLAY_RATE, &frequency);
#endif
	return  frequency;
}

void UPICOXRHMDFunctionLibrary::PXR_SetSystemDisplayFrequency(float Rate)
{
#if PLATFORM_ANDROID
    FPICOXRHMDModule::GetPluginWrapper().SetDisplayRefreshRate(Rate);
#endif
}

void UPICOXRHMDFunctionLibrary::PXR_SetColorScaleAndOffset(FLinearColor ColorScale, FLinearColor ColorOffset, bool bApplyToAllLayers)
{
#if PLATFORM_ANDROID
    GetPICOXRHMD()->SetColorScaleAndOffset(ColorScale,ColorOffset,bApplyToAllLayers);
#endif
}

bool UPICOXRHMDFunctionLibrary::GetFocusState()
{
    const FPICOXRHMD* const PICOXRHMDInstance = GetPICOXRHMD();
    if (PICOXRHMDInstance != nullptr && PICOXRHMDInstance->IsHMDEnabled())
    {
        return PICOXRHMDInstance->inputFocusState;
    }
    return false;
}

UPICOXRBoundarySystem* UPICOXRHMDFunctionLibrary::GetBoundarySystemInterface()
{
    return UPICOXRBoundarySystem::GetInstance();
}

bool UPICOXRHMDFunctionLibrary::PXR_GetBoundaryConfigured()
{
    return GetBoundarySystemInterface()->UPxr_GetConfigured();
}

bool UPICOXRHMDFunctionLibrary::PXR_GetBoundaryEnabled()
{
    return GetBoundarySystemInterface()->UPxr_GetEnabled();
}

void UPICOXRHMDFunctionLibrary::PXR_SetBoundaryVisible(bool NewVisible)
{
    GetBoundarySystemInterface()->UPxr_SetVisible(NewVisible);
}

bool UPICOXRHMDFunctionLibrary::PXR_GetBoundaryVisible()
{
    return GetBoundarySystemInterface()->UPxr_GetVisible();
}

bool UPICOXRHMDFunctionLibrary::PXR_BoundaryTestNode(EPICOXRNodeType DeviceType,
    EPICOXRBoundaryType BoundaryType, bool& IsTriggering, float& ClosestDistance, FVector& ClosestPoint,
    FVector& ClosestPointNormal)
{
    return GetBoundarySystemInterface()->UPxr_TestNode(static_cast<int32>(DeviceType),BoundaryType == EPICOXRBoundaryType::PlayArea,IsTriggering,ClosestDistance,ClosestPoint,ClosestPointNormal);
}

bool UPICOXRHMDFunctionLibrary::PXR_BoundaryTestPoint(FVector Point, EPICOXRBoundaryType BoundaryType,
    bool& IsTriggering, float& ClosestDistance, FVector& ClosestPoint, FVector& ClosestPointNormal)
{
    return GetBoundarySystemInterface()->UPxr_TestPoint(Point,BoundaryType == EPICOXRBoundaryType::PlayArea,IsTriggering,ClosestDistance,ClosestPoint,ClosestPointNormal);
}

TArray<FVector> UPICOXRHMDFunctionLibrary::PXR_GetBoundaryGeometry(EPICOXRBoundaryType BoundaryType)
{
   return GetBoundarySystemInterface()->UPxr_GetGeometry(BoundaryType == EPICOXRBoundaryType::PlayArea);
}

FVector UPICOXRHMDFunctionLibrary::PXR_GetBoundaryDimensions(EPICOXRBoundaryType BoundaryType)
{
    return GetBoundarySystemInterface()->UPxr_GetDimensions(BoundaryType == EPICOXRBoundaryType::PlayArea);
}

int UPICOXRHMDFunctionLibrary::PXR_SetSeeThroughBackground(bool Value)
{
    return GetBoundarySystemInterface()->UPxr_SetSeeThroughBackground(Value);
}

bool UPICOXRHMDFunctionLibrary::PXR_GetFoveationLevel(EPICOXRFoveationLevel &FoveationLevel)
{
#if PLATFORM_ANDROID
	int32 Foveation = -1;
	Foveation = (int32)FPICOXRHMDModule::GetPluginWrapper().GetFoveationLevel();
	switch (Foveation)
	{
	case -1:
		FoveationLevel = EPICOXRFoveationLevel::None;
		PXR_LOGI(PxrUnreal, "Foveation disabled!");
		return false;
	case 0:
		FoveationLevel = EPICOXRFoveationLevel::Low;
		return true;
	case 1:
		FoveationLevel = EPICOXRFoveationLevel::Medium;
		return true;
	case 2:
		FoveationLevel = EPICOXRFoveationLevel::High;
		return true;
	case 3:
		FoveationLevel = EPICOXRFoveationLevel::TopHigh;
		return true;
	default:
		return false;
		break;
	}
#endif
	return false;
}

bool UPICOXRHMDFunctionLibrary::PXR_SetFoveationLevel(EPICOXRFoveationLevel InLevel)
{
#if PLATFORM_ANDROID
	PxrFoveationLevel Level = PxrFoveationLevel::PXR_FOVEATION_LEVEL_NONE;
	switch (InLevel)
	{
	case EPICOXRFoveationLevel::None:
		Level = PxrFoveationLevel::PXR_FOVEATION_LEVEL_NONE;
		break;
	case EPICOXRFoveationLevel::Low:
		Level = PxrFoveationLevel::PXR_FOVEATION_LEVEL_LOW;
		break;
	case EPICOXRFoveationLevel::Medium:
		Level = PxrFoveationLevel::PXR_FOVEATION_LEVEL_MID;
		break;
	case EPICOXRFoveationLevel::High:
		Level = PxrFoveationLevel::PXR_FOVEATION_LEVEL_HIGH;
		break;
	case EPICOXRFoveationLevel::TopHigh:
		Level = PxrFoveationLevel::PXR_FOVEATION_LEVEL_TOP_HIGH;
		break;
	default:
		break;
	}
	if (FPICOXRHMDModule::GetPluginWrapper().SetFoveationLevel(Level) == 0)
	{
        FPICOXRHMD* PICOHMD = GetPICOXRHMD();
        PICOHMD->GameSettings->FoveatedRenderingLevel = Level;
		return true;
	}
#endif
	return false;
}

bool UPICOXRHMDFunctionLibrary::PXR_SetFoveationParameter(FVector2D FoveationGainValue, float FoveationAreaValue, float FoveationMinimumValue)
{
#if PLATFORM_ANDROID
	PxrFoveationParams FoveationParams;
	FoveationParams.foveationGainX = FoveationGainValue.X;
	FoveationParams.foveationGainY = FoveationGainValue.Y;
	FoveationParams.foveationArea = FoveationAreaValue;
	FoveationParams.foveationMinimum = FoveationMinimumValue;
	if (FPICOXRHMDModule::GetPluginWrapper().SetFoveationParams(FoveationParams) == 0)
	{
		return true;
	}
#endif
	return false;
}

int UPICOXRHMDFunctionLibrary::PXR_SetSensorLostCustomMode(bool Value)
{
#if PLATFORM_ANDROID
    return FPICOXRHMDModule::GetPluginWrapper().SetSensorLostCustomMode(Value);
#endif
    return 0;
}

int UPICOXRHMDFunctionLibrary::PXR_SetSensorLostCMST(bool Value)
{
#if PLATFORM_ANDROID
    return FPICOXRHMDModule::GetPluginWrapper().SetSensorLostCMST(Value);
#endif
    return 0;
}

void UPICOXRHMDFunctionLibrary::PXR_GetVFov(float & VFOVInDegrees)
{
	float drop;
	GetPICOXRHMD()->GetFieldOfView(drop, VFOVInDegrees);
}

void UPICOXRHMDFunctionLibrary::PXR_GetHFov(float & HFOVInDegrees)
{
	float drop;
	GetPICOXRHMD()->GetFieldOfView(HFOVInDegrees, drop);
}

bool UPICOXRHMDFunctionLibrary::PXR_GetDisplayFrequenciesAvailable(int& Count, TArray<float>& AvailableRates)
{
    bool result = false;
#if PLATFORM_ANDROID
    float* temp = nullptr;
    uint32_t* number = (uint32_t*)(&Count);
    if (!FPICOXRHMDModule::GetPluginWrapper().GetDisplayRefreshRatesAvailable(number, &temp))
    {
        if (!Count) { return result; }
        AvailableRates.Init(0, Count);
        FMemory::Memcpy(AvailableRates.GetData(), temp, sizeof(float) * Count);
        result = true;
    }

#endif
    return result;
}

bool UPICOXRHMDFunctionLibrary::PXR_SetExtraLatencyMode(int Mode)
{
#if PLATFORM_ANDROID
    return FPICOXRHMDModule::GetPluginWrapper().SetExtraLatencyMode(Mode);
#endif
    return false;
}

UPICOXREventManager* UPICOXRHMDFunctionLibrary::PXR_GetEventManager()
{
    return UPICOXREventManager::GetInstance();
}

void UPICOXRHMDFunctionLibrary::PXR_GetPredictedMainSensorState(FPxrSensorState& sensorState, int& sensorFrameIndex) {
#if PLATFORM_ANDROID
	if (FPICOXRVersionHelper::IsThisVersionOrGreater(0x2000201))
	{
        double predictTimeMs = 0.0;
        FPICOXRHMDModule::GetPluginWrapper().GetPredictedDisplayTime(&predictTimeMs);
        PxrSensorState2 sensorState2;
        FPICOXRHMDModule::GetPluginWrapper().GetPredictedMainSensorState2(predictTimeMs, &sensorState2, &sensorFrameIndex);
        sensorState.status = sensorState2.status;
        sensorState.poseQuat.X = sensorState2.pose.orientation.x;
        sensorState.poseQuat.Y = sensorState2.pose.orientation.y;
        sensorState.poseQuat.Z = sensorState2.pose.orientation.z;
        sensorState.poseQuat.W = sensorState2.pose.orientation.w;
        sensorState.poseVector.X = sensorState2.pose.position.x;
        sensorState.poseVector.Y = sensorState2.pose.position.y;
        sensorState.poseVector.Z = sensorState2.pose.position.z;
        sensorState.globalPoseQuat.X = sensorState2.globalPose.orientation.x;
        sensorState.globalPoseQuat.Y = sensorState2.globalPose.orientation.y;
        sensorState.globalPoseQuat.Z = sensorState2.globalPose.orientation.z;
        sensorState.globalPoseQuat.W = sensorState2.globalPose.orientation.w;
        sensorState.globalPoseVector.X = sensorState2.globalPose.position.x;
        sensorState.globalPoseVector.Y = sensorState2.globalPose.position.y;
        sensorState.globalPoseVector.Z = sensorState2.globalPose.position.z;
        sensorState.angularVelocity.X = sensorState2.angularVelocity.x;
        sensorState.angularVelocity.Y = sensorState2.angularVelocity.y;
        sensorState.angularVelocity.Z = sensorState2.angularVelocity.z;
        sensorState.linearVelocity.X = sensorState2.linearVelocity.x;
        sensorState.linearVelocity.Y = sensorState2.linearVelocity.y;
        sensorState.linearVelocity.Z = sensorState2.linearVelocity.z;
        sensorState.angularAcceleration.X = sensorState2.angularAcceleration.x;
        sensorState.angularAcceleration.Y = sensorState2.angularAcceleration.y;
        sensorState.angularAcceleration.Z = sensorState2.angularAcceleration.z;
        sensorState.linearAcceleration.X = sensorState2.linearAcceleration.x;
        sensorState.linearAcceleration.Y = sensorState2.linearAcceleration.y;
        sensorState.linearAcceleration.Z = sensorState2.linearAcceleration.z;
        sensorState.poseTimeStampNs = sensorState2.poseTimeStampNs;
    }
#endif
}

bool UPICOXRHMDFunctionLibrary::PXR_QueryDeviceAbilities(EPICOXRDeviceAbilities DeviceAbility)
{
#if PLATFORM_ANDROID
	if (FPICOXRVersionHelper::IsThisVersionOrGreater(0x2000304))
    {
        PxrTrackingModeFlags SupportTrackingMode;
        FPICOXRHMDModule::GetPluginWrapper().GetTrackingMode(&SupportTrackingMode);
        switch (DeviceAbility)
        {
        case EPICOXRDeviceAbilities::TRACKING_MODE_ROTATION_BIT:
            {
                return (PXR_TRACKING_MODE_ROTATION_BIT & SupportTrackingMode)? true:false;
            }
            break;
        case EPICOXRDeviceAbilities::TRACKING_MODE_POSITION_BIT:
            {
                return (PXR_TRACKING_MODE_POSITION_BIT & SupportTrackingMode)? true:false;
            }
            break;
        case EPICOXRDeviceAbilities::TRACKING_MODE_EYE_BIT:
            {
                return (PXR_TRACKING_MODE_EYE_BIT & SupportTrackingMode)? true:false;
            }
            break;
        case EPICOXRDeviceAbilities::TRACKING_MODE_FACE_BIT:
            {
                return (PXR_TRACKING_MODE_FACE_BIT & SupportTrackingMode)? true:false;
            }
            break;
        case EPICOXRDeviceAbilities::TRACKING_MODE_VCMOTOR_BIT:
            {
                return (PXR_TRACKING_MODE_VCMOTOR_BIT & SupportTrackingMode)? true:false;
            }
            break;
        case EPICOXRDeviceAbilities::TRACKING_MODE_HAND_BIT:
            {
                return (PXR_TRACKING_MODE_HAND_BIT & SupportTrackingMode)? true:false;
            }
            break;
        default:
            ;
        }
    }
#endif

    return false;
}

void UPICOXRHMDFunctionLibrary::PXR_SetLateLatchingEnable(bool Value)
{
    IConsoleVariable* Variable = IConsoleManager::Get().FindConsoleVariable(TEXT("r.EnableLateLatching"));
    if (Variable)
    {
        Variable->Set(Value ? 1 : 0);
    }
}

void UPICOXRHMDFunctionLibrary::PXR_SetBaseRotationAndBaseOffsetInMeters(FRotator Rotation, FVector BaseOffsetInMeters, EOrientPositionSelector::Type Options)
{
#if PICO_HMD_SUPPORTED_PLATFORMS
    FPICOXRHMD* PICOHMD = GetPICOXRHMD();
	if (PICOHMD != nullptr)
	{
		if ((Options == EOrientPositionSelector::Orientation) || (Options == EOrientPositionSelector::OrientationAndPosition))
		{
			PICOHMD->SetBaseRotation(Rotation);
		}
		if ((Options == EOrientPositionSelector::Position) || (Options == EOrientPositionSelector::OrientationAndPosition))
		{
			PICOHMD->SetBaseOffsetInMeters(BaseOffsetInMeters);
		}
	}
#endif // PICO_HMD_SUPPORTED_PLATFORMS
}

void UPICOXRHMDFunctionLibrary::PXR_GetBaseRotationAndBaseOffsetInMeters(FRotator& OutRotation, FVector& OutBaseOffsetInMeters)
{
#if PICO_HMD_SUPPORTED_PLATFORMS
	FPICOXRHMD* PICOHMD = GetPICOXRHMD();
	if (PICOHMD != nullptr)
	{
		OutRotation = PICOHMD->GetBaseRotation();
		OutBaseOffsetInMeters = PICOHMD->GetBaseOffsetInMeters();
	}
	else
	{
		OutRotation = FRotator::ZeroRotator;
		OutBaseOffsetInMeters = FVector::ZeroVector;
	}
#endif // PICO_HMD_SUPPORTED_PLATFORMS
}

bool UPICOXRHMDFunctionLibrary::PXR_GetHmdBatteryLevel(int32 &Battery)
{
#if PLATFORM_ANDROID
	FPICOXRHMD* PICOHMD = GetPICOXRHMD();
	if (PICOHMD == nullptr)
	{
		return false;
	}
	if (FPICOXRVersionHelper::IsThisVersionOrGreater(0x200030B))
	{
		return PICOHMD->UpdateHMDBatteryLevelFromPollEvent(Battery);
	}
	else
	{
		return PICOHMD->UpdateHMDBatteryLevelFromJava(Battery);
	}
#endif
	return false;
}

bool UPICOXRHMDFunctionLibrary::PXR_SetExternalSurface(FVector Translation, FRotator Rotation, FVector2D Size, bool IsDRM, EPICOXRAndroidSurface3DType Type)
{
	FPICOXRHMD* PICOHMD = GetPICOXRHMD();
	if (PICOHMD != nullptr)
	{
		IStereoLayers::FLayerDesc StereoLayerDesc;
		StereoLayerDesc.PositionType = IStereoLayers::ELayerType::WorldLocked;
		StereoLayerDesc.QuadSize = Size;
		StereoLayerDesc.Transform = FTransform(Rotation, Translation);
		StereoLayerDesc.Flags = IStereoLayers::ELayerFlags::LAYER_FLAG_TEX_CONTINUOUS_UPDATE | IStereoLayers::ELayerFlags::LAYER_FLAG_QUAD_PRESERVE_TEX_RATIO | IStereoLayers::ELayerFlags::LAYER_FLAG_TEX_NO_ALPHA_CHANNEL;
		PICOHMD->SetExternalSurfaceLayer(StereoLayerDesc, IsDRM, Type);
		return true;
	}
	return false;
}

void UPICOXRHMDFunctionLibrary::PXR_DestroyExternalSurface()
{
	FPICOXRHMD* PICOHMD = GetPICOXRHMD();
	if (PICOHMD != nullptr)
	{
		PICOHMD->DestroyExternalSurfaceLayer();
	}
}

bool UPICOXRHMDFunctionLibrary::PXR_SelectCoordinateSpace(const EPICOXRCoordinateType CoordinateType)
{
	FPICOXRHMD* PICOHMD = GetPICOXRHMD();
	if (PICOHMD != nullptr)
	{
		return PICOHMD->SetCurrentCoordinateType(CoordinateType);
	}
	return true;
}

bool UPICOXRHMDFunctionLibrary::PXR_SetFoveatedRenderingMode(EFoveationRenderingMode Mode)
{
#ifdef PICO_CUSTOM_ENGINE
    GetPICOXRHMD()->SetFoveationRenderingMode(Mode);
    return FPICOXRHMDModule::GetPluginWrapper().SetEyeTrackingFoveationRenderingState(Mode == EFoveationRenderingMode::EyeTrackingFoveationRendering ? true : false) >= 0;
#else
    return false;
#endif
}

float UPICOXRHMDFunctionLibrary::PXR_GetTrackingOriginHeight()
{
    float OriginHeight = 0.0f;
    FPICOXRHMDModule::GetPluginWrapper().GetConfigFloat(PxrConfigType::PXR_TRACKING_ORIGIN_HEIGHT, &OriginHeight);
    return OriginHeight;
}
