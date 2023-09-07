// Copyright® 2015-2023 PICO Technology Co., Ltd. All rights reserved.
// This plugin incorporates portions of the Unreal® Engine. Unreal® is a trademark or registered trademark of Epic Games, Inc. in the United States of America and elsewhere.
// Unreal® Engine, Copyright 1998 – 2023, Epic Games, Inc. All rights reserved. 

#pragma once
#include "PXR_HMDTypes.h"
#include "PXR_HMDRuntimeSettings.generated.h"

UENUM(BlueprintType)
enum class EFoveationRenderingMode : uint8
{
	FixedFoveationRendering UMETA(DisplayName = "Fixed Foveated Rendering", ToolTip = "Fixed Foveated Rendering"),
	EyeTrackingFoveationRendering   UMETA(DisplayName = "Eye Tracked Foveated Rendering", ToolTip = "Eye Tracked Foveated Rendering")
};

UENUM(meta = (DisplayName = "EFoveatedRenderingLevel", ToolTip = "Foveated Rendering Level"))
namespace EFoveationLevel
{
	enum Type
	{
		None,
		Low,
		Med,
		High,
		TopHigh
	};
}

UENUM()
namespace ERefreshRate
{
	enum Type
	{
		Default,
		RefreshRate72,
		RefreshRate90,
		RefreshRate120
	};
}
UENUM()
enum class EPICOXRHandTrackingSupport : uint8
{
	ControllersOnly,
	ControllersAndHands
};

UENUM()
enum class EPICOXRAdaptiveResolutionPowerSetting : uint8
{
	HighQuality UMETA(ToolTip = "Optimize for high resolution"),
	Balanced UMETA(ToolTip = "Balance quality with power consumption"),
	BatterySaving UMETA(ToolTip = "Optimize for low power consumption")
};

UCLASS(config = Engine, defaultconfig)
class PICOXRHMD_API UPICOXRSettings : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	//Sensor
	UPROPERTY(Config, EditAnywhere, Category = HMD, Meta = (DisplayName = "Enable PSensor?", ToolTip = "If you want to get PSensor state,Please enable it!"))
		bool bEnablePSensor;

	UPROPERTY(Config, EditAnywhere, Category = HMD, Meta = (DisplayName = "HMD Only Tracking Rotation"))
		bool bIsHMD3Dof;

	//Controller
	UPROPERTY(Config, EditAnywhere, Category = Controller, Meta = (DisplayName = "Receive HomeKey Event"))
		bool bEnableHomeKey;

	UPROPERTY(Config, EditAnywhere, Category = Controller, Meta = (DisplayName = "Controller Only Tracking Rotation"))
		bool bIsController3Dof;
	/** Whether controllers and/or hands can be used with the app */
	UPROPERTY(Config, EditAnywhere, Category = Controller, Meta = (DisplayName = "HandTracking Support"))
	EPICOXRHandTrackingSupport HandTrackingSupport;
	
	UPROPERTY(config, EditAnywhere, Category = Controller, meta = (DisplayName = "Enable AutoKeyMapping",
		ToolTip = "When enabled, A set of key mappings will be generated automatically,and default controller animation will work.",
		ConfigRestartRequired = true))
		bool bEnableAutoKeyMapping;
	//Feature
	UPROPERTY(Config, EditAnywhere, Category = Feature, Meta = (DisplayName = "Enable LateLatching",ToolTip = "Only support UE4.27 + Vulkan + Multi-View + Disable Occlusion Culling."))
		bool bEnableLateLatching;

	UPROPERTY(Config)
		bool bUseHWsRGBEncoding;

	UPROPERTY(Config, EditAnywhere, Category = Feature, Meta = (DisplayName = "Use Recommended MSAA Level"))
		bool bUseRecommendedMSAA;
	
	UPROPERTY(Config, EditAnywhere, Category = Feature, Meta = (DisplayName = "Coordinate Space"))
		EPICOXRCoordinateType CoordinateType;

	UPROPERTY(Config, EditAnywhere, Category = Feature, Meta = (DisplayName = "Enable Eye Tracking", ToolTip = "Enable Eye Tracking"))
		bool bEnableEyeTracking;

	UPROPERTY(Config, EditAnywhere, Category = Feature, Meta = (EditCondition = "bEnableEyeTracking",DisplayName = "Enable Eye Tracking Calibration", ToolTip = "Enable Eye Tracking Calibration"))
		bool bEnableEyeTrackingCalibration;

	UPROPERTY(Config, EditAnywhere, Category = Feature, Meta = (DisplayName = "Enable Face Tracking", ToolTip = "Enable Face Tracking"))
		bool bEnableFaceTracking;

	UPROPERTY(Config, EditAnywhere, Category = Feature, Meta = (DisplayName = "Enable Body Tracking", ToolTip = "Enable Tracking Function related to Fitness Band"))
		bool bEnableBodyTracking;

	UPROPERTY(Config, EditAnywhere, Category = Feature, Meta = (DisplayName = "Use PICO Advance Interface"))
		bool bUseAdvanceInterface;

	UPROPERTY(Config, EditAnywhere, Category = Feature, Meta = (DisplayName = "Use Content Protect"))
		bool bUseContentProtect;

	UPROPERTY(config, EditAnywhere, Category = Feature, Meta = (DisplayName = "Auto Show Splash Screen"))
		bool bSplashScreenAutoShow;

	UPROPERTY(Config, EditAnywhere, Category = Feature, Meta = (EditCondition = "bSplashScreenAutoShow", DisplayName = "SplashDescs"))
		TArray<FPXRSplashDesc> SplashDescs;

	UPROPERTY(Config, EditAnywhere, Category = Feature, Meta = (DisplayName = "Display Refresh Rates"))
		TEnumAsByte<ERefreshRate::Type> refreshRate;

	UPROPERTY(Config, EditAnywhere, Category = MixedReality, Meta = (DisplayName = "Enable VST"))
		bool bEnableVST;

	UPROPERTY(Config, EditAnywhere, Category = MixedReality, Meta = (DisplayName = "Enable Anchor"))
		bool bEnableAnchor;

	UPROPERTY(config, EditAnywhere, Category = Mobile, meta = (DisplayName = "OS Splash Screen", FilePathFilter = "png"))
		FFilePath OSSplashScreen;
	
	UPROPERTY(config)
		bool bUsingOSSplash;

	UPROPERTY(Config, EditAnywhere, Category = FoveatedRendering, Meta = (DisplayName = "Foveated Rendering Mode"))
		EFoveationRenderingMode FoveationRenderingMode;

	UPROPERTY(Config, EditAnywhere, Category = FoveatedRendering, Meta = (DisplayName = "Foveated Rendering Level", ToolTip = "Foveated Rendering Level"))
		TEnumAsByte<EFoveationLevel::Type> FoveationLevel;

	UPROPERTY(Config, EditAnywhere, Category = FoveatedRendering, Meta = (DisplayName = "Enable Eye Tracked Foveated Rendering", ToolTip = "Enable Eye Tracked Foveated Rendering"))
		bool bEnableEyeTrackingFoveationRendering;

	UPROPERTY(Config, EditAnywhere, Category = AdaptiveResolution, Meta = (DisplayName = "Enable Adaptive Resolution"
		, ToolTip = "Choose whether resolution is enabled.\n\nNOTE: Adaptive Resolution is currently only supported on the PICO fork of Unreal Engine. It cannot be enabled when Foveation is enabled."))
		bool bAdaptiveResolutionEnabled = false;

	UPROPERTY(Config, EditAnywhere, Category = AdaptiveResolution, Meta = (DisplayName = "Adaptive Resolution Power Setting"
		, ToolTip = "Choose between high resolution and low power consumption.\n\nNOTE: Adaptive Resolution is currently only supported on the PICO fork of Unreal Engine. It cannot be enabled when Foveation is enabled."))
		EPICOXRAdaptiveResolutionPowerSetting AdaptiveResolutionPowerSetting = EPICOXRAdaptiveResolutionPowerSetting::Balanced;

	UPROPERTY(Config, EditAnywhere, Category = AdaptiveResolution, Meta = (DisplayName = "Min Pixel Density"
		, ToolTip = "Minimum pixel density allowed for adaptive resolution."
		, ClampMin = "0.7"
		, ClampMax = "1.26"))
		float PixelDensityMin = 0.7f;

	UPROPERTY(Config, EditAnywhere, Category = AdaptiveResolution, Meta = (DisplayName = "Max Pixel Density"
		, ToolTip = "Maximum pixel density allowed for adaptive resolution."
		, ClampMin = "0.7"
		, ClampMax = "1.26"))
		float PixelDensityMax = 1.26f;
		
	virtual void PostInitProperties() override;
	
#if WITH_EDITOR
	virtual bool CanEditChange(const FProperty* InProperty) const override;
	
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	
	void HandlesRGBHWSupport();

private:
	void ResetsRGBConfig();
#endif 
};
