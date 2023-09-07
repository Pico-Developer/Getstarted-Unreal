// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRHMD/Public/PXR_HMDRuntimeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_HMDRuntimeSettings() {}
// Cross Module References
	PICOXRHMD_API UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRAdaptiveResolutionPowerSetting();
	UPackage* Z_Construct_UPackage__Script_PICOXRHMD();
	PICOXRHMD_API UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRHandTrackingSupport();
	PICOXRHMD_API UEnum* Z_Construct_UEnum_PICOXRHMD_ERefreshRate();
	PICOXRHMD_API UEnum* Z_Construct_UEnum_PICOXRHMD_EFoveationLevel();
	PICOXRHMD_API UEnum* Z_Construct_UEnum_PICOXRHMD_EFoveationRenderingMode();
	PICOXRHMD_API UClass* Z_Construct_UClass_UPICOXRSettings_NoRegister();
	PICOXRHMD_API UClass* Z_Construct_UClass_UPICOXRSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PICOXRHMD_API UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRCoordinateType();
	PICOXRHMD_API UScriptStruct* Z_Construct_UScriptStruct_FPXRSplashDesc();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
// End Cross Module References
	static UEnum* EPICOXRAdaptiveResolutionPowerSetting_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRHMD_EPICOXRAdaptiveResolutionPowerSetting, Z_Construct_UPackage__Script_PICOXRHMD(), TEXT("EPICOXRAdaptiveResolutionPowerSetting"));
		}
		return Singleton;
	}
	template<> PICOXRHMD_API UEnum* StaticEnum<EPICOXRAdaptiveResolutionPowerSetting>()
	{
		return EPICOXRAdaptiveResolutionPowerSetting_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRAdaptiveResolutionPowerSetting(EPICOXRAdaptiveResolutionPowerSetting_StaticEnum, TEXT("/Script/PICOXRHMD"), TEXT("EPICOXRAdaptiveResolutionPowerSetting"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRHMD_EPICOXRAdaptiveResolutionPowerSetting_Hash() { return 3278127012U; }
	UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRAdaptiveResolutionPowerSetting()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRHMD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRAdaptiveResolutionPowerSetting"), 0, Get_Z_Construct_UEnum_PICOXRHMD_EPICOXRAdaptiveResolutionPowerSetting_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRAdaptiveResolutionPowerSetting::HighQuality", (int64)EPICOXRAdaptiveResolutionPowerSetting::HighQuality },
				{ "EPICOXRAdaptiveResolutionPowerSetting::Balanced", (int64)EPICOXRAdaptiveResolutionPowerSetting::Balanced },
				{ "EPICOXRAdaptiveResolutionPowerSetting::BatterySaving", (int64)EPICOXRAdaptiveResolutionPowerSetting::BatterySaving },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Balanced.Name", "EPICOXRAdaptiveResolutionPowerSetting::Balanced" },
				{ "Balanced.ToolTip", "Balance quality with power consumption" },
				{ "BatterySaving.Name", "EPICOXRAdaptiveResolutionPowerSetting::BatterySaving" },
				{ "BatterySaving.ToolTip", "Optimize for low power consumption" },
				{ "HighQuality.Name", "EPICOXRAdaptiveResolutionPowerSetting::HighQuality" },
				{ "HighQuality.ToolTip", "Optimize for high resolution" },
				{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD,
				nullptr,
				"EPICOXRAdaptiveResolutionPowerSetting",
				"EPICOXRAdaptiveResolutionPowerSetting",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPICOXRHandTrackingSupport_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRHMD_EPICOXRHandTrackingSupport, Z_Construct_UPackage__Script_PICOXRHMD(), TEXT("EPICOXRHandTrackingSupport"));
		}
		return Singleton;
	}
	template<> PICOXRHMD_API UEnum* StaticEnum<EPICOXRHandTrackingSupport>()
	{
		return EPICOXRHandTrackingSupport_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRHandTrackingSupport(EPICOXRHandTrackingSupport_StaticEnum, TEXT("/Script/PICOXRHMD"), TEXT("EPICOXRHandTrackingSupport"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRHMD_EPICOXRHandTrackingSupport_Hash() { return 2763068829U; }
	UEnum* Z_Construct_UEnum_PICOXRHMD_EPICOXRHandTrackingSupport()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRHMD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRHandTrackingSupport"), 0, Get_Z_Construct_UEnum_PICOXRHMD_EPICOXRHandTrackingSupport_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRHandTrackingSupport::ControllersOnly", (int64)EPICOXRHandTrackingSupport::ControllersOnly },
				{ "EPICOXRHandTrackingSupport::ControllersAndHands", (int64)EPICOXRHandTrackingSupport::ControllersAndHands },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ControllersAndHands.Name", "EPICOXRHandTrackingSupport::ControllersAndHands" },
				{ "ControllersOnly.Name", "EPICOXRHandTrackingSupport::ControllersOnly" },
				{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD,
				nullptr,
				"EPICOXRHandTrackingSupport",
				"EPICOXRHandTrackingSupport",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERefreshRate_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRHMD_ERefreshRate, Z_Construct_UPackage__Script_PICOXRHMD(), TEXT("ERefreshRate"));
		}
		return Singleton;
	}
	template<> PICOXRHMD_API UEnum* StaticEnum<ERefreshRate::Type>()
	{
		return ERefreshRate_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERefreshRate(ERefreshRate_StaticEnum, TEXT("/Script/PICOXRHMD"), TEXT("ERefreshRate"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRHMD_ERefreshRate_Hash() { return 3982245962U; }
	UEnum* Z_Construct_UEnum_PICOXRHMD_ERefreshRate()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRHMD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERefreshRate"), 0, Get_Z_Construct_UEnum_PICOXRHMD_ERefreshRate_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERefreshRate::Default", (int64)ERefreshRate::Default },
				{ "ERefreshRate::RefreshRate72", (int64)ERefreshRate::RefreshRate72 },
				{ "ERefreshRate::RefreshRate90", (int64)ERefreshRate::RefreshRate90 },
				{ "ERefreshRate::RefreshRate120", (int64)ERefreshRate::RefreshRate120 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Default.Name", "ERefreshRate::Default" },
				{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
				{ "RefreshRate120.Name", "ERefreshRate::RefreshRate120" },
				{ "RefreshRate72.Name", "ERefreshRate::RefreshRate72" },
				{ "RefreshRate90.Name", "ERefreshRate::RefreshRate90" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD,
				nullptr,
				"ERefreshRate",
				"ERefreshRate::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFoveationLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRHMD_EFoveationLevel, Z_Construct_UPackage__Script_PICOXRHMD(), TEXT("EFoveationLevel"));
		}
		return Singleton;
	}
	template<> PICOXRHMD_API UEnum* StaticEnum<EFoveationLevel::Type>()
	{
		return EFoveationLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFoveationLevel(EFoveationLevel_StaticEnum, TEXT("/Script/PICOXRHMD"), TEXT("EFoveationLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRHMD_EFoveationLevel_Hash() { return 3654467895U; }
	UEnum* Z_Construct_UEnum_PICOXRHMD_EFoveationLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRHMD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFoveationLevel"), 0, Get_Z_Construct_UEnum_PICOXRHMD_EFoveationLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFoveationLevel::None", (int64)EFoveationLevel::None },
				{ "EFoveationLevel::Low", (int64)EFoveationLevel::Low },
				{ "EFoveationLevel::Med", (int64)EFoveationLevel::Med },
				{ "EFoveationLevel::High", (int64)EFoveationLevel::High },
				{ "EFoveationLevel::TopHigh", (int64)EFoveationLevel::TopHigh },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DisplayName", "EFoveatedRenderingLevel" },
				{ "High.Name", "EFoveationLevel::High" },
				{ "Low.Name", "EFoveationLevel::Low" },
				{ "Med.Name", "EFoveationLevel::Med" },
				{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
				{ "None.Name", "EFoveationLevel::None" },
				{ "ToolTip", "Foveated Rendering Level" },
				{ "TopHigh.Name", "EFoveationLevel::TopHigh" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD,
				nullptr,
				"EFoveationLevel",
				"EFoveationLevel::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFoveationRenderingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRHMD_EFoveationRenderingMode, Z_Construct_UPackage__Script_PICOXRHMD(), TEXT("EFoveationRenderingMode"));
		}
		return Singleton;
	}
	template<> PICOXRHMD_API UEnum* StaticEnum<EFoveationRenderingMode>()
	{
		return EFoveationRenderingMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFoveationRenderingMode(EFoveationRenderingMode_StaticEnum, TEXT("/Script/PICOXRHMD"), TEXT("EFoveationRenderingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRHMD_EFoveationRenderingMode_Hash() { return 1543222883U; }
	UEnum* Z_Construct_UEnum_PICOXRHMD_EFoveationRenderingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRHMD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFoveationRenderingMode"), 0, Get_Z_Construct_UEnum_PICOXRHMD_EFoveationRenderingMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFoveationRenderingMode::FixedFoveationRendering", (int64)EFoveationRenderingMode::FixedFoveationRendering },
				{ "EFoveationRenderingMode::EyeTrackingFoveationRendering", (int64)EFoveationRenderingMode::EyeTrackingFoveationRendering },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EyeTrackingFoveationRendering.DisplayName", "Eye Tracked Foveated Rendering" },
				{ "EyeTrackingFoveationRendering.Name", "EFoveationRenderingMode::EyeTrackingFoveationRendering" },
				{ "EyeTrackingFoveationRendering.ToolTip", "Eye Tracked Foveated Rendering" },
				{ "FixedFoveationRendering.DisplayName", "Fixed Foveated Rendering" },
				{ "FixedFoveationRendering.Name", "EFoveationRenderingMode::FixedFoveationRendering" },
				{ "FixedFoveationRendering.ToolTip", "Fixed Foveated Rendering" },
				{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD,
				nullptr,
				"EFoveationRenderingMode",
				"EFoveationRenderingMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UPICOXRSettings::StaticRegisterNativesUPICOXRSettings()
	{
	}
	UClass* Z_Construct_UClass_UPICOXRSettings_NoRegister()
	{
		return UPICOXRSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPICOXRSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePSensor_MetaData[];
#endif
		static void NewProp_bEnablePSensor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePSensor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHMD3Dof_MetaData[];
#endif
		static void NewProp_bIsHMD3Dof_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHMD3Dof;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableHomeKey_MetaData[];
#endif
		static void NewProp_bEnableHomeKey_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableHomeKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsController3Dof_MetaData[];
#endif
		static void NewProp_bIsController3Dof_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsController3Dof;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HandTrackingSupport_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandTrackingSupport_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HandTrackingSupport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoKeyMapping_MetaData[];
#endif
		static void NewProp_bEnableAutoKeyMapping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoKeyMapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLateLatching_MetaData[];
#endif
		static void NewProp_bEnableLateLatching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLateLatching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHWsRGBEncoding_MetaData[];
#endif
		static void NewProp_bUseHWsRGBEncoding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHWsRGBEncoding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRecommendedMSAA_MetaData[];
#endif
		static void NewProp_bUseRecommendedMSAA_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRecommendedMSAA;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CoordinateType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoordinateType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CoordinateType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableEyeTracking_MetaData[];
#endif
		static void NewProp_bEnableEyeTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableEyeTracking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableEyeTrackingCalibration_MetaData[];
#endif
		static void NewProp_bEnableEyeTrackingCalibration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableEyeTrackingCalibration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableFaceTracking_MetaData[];
#endif
		static void NewProp_bEnableFaceTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableFaceTracking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableBodyTracking_MetaData[];
#endif
		static void NewProp_bEnableBodyTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableBodyTracking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAdvanceInterface_MetaData[];
#endif
		static void NewProp_bUseAdvanceInterface_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAdvanceInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseContentProtect_MetaData[];
#endif
		static void NewProp_bUseContentProtect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseContentProtect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSplashScreenAutoShow_MetaData[];
#endif
		static void NewProp_bSplashScreenAutoShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSplashScreenAutoShow;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplashDescs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplashDescs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SplashDescs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_refreshRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_refreshRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableVST_MetaData[];
#endif
		static void NewProp_bEnableVST_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableVST;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAnchor_MetaData[];
#endif
		static void NewProp_bEnableAnchor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAnchor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OSSplashScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OSSplashScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsingOSSplash_MetaData[];
#endif
		static void NewProp_bUsingOSSplash_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsingOSSplash;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FoveationRenderingMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoveationRenderingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FoveationRenderingMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoveationLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FoveationLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableEyeTrackingFoveationRendering_MetaData[];
#endif
		static void NewProp_bEnableEyeTrackingFoveationRendering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableEyeTrackingFoveationRendering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAdaptiveResolutionEnabled_MetaData[];
#endif
		static void NewProp_bAdaptiveResolutionEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdaptiveResolutionEnabled;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AdaptiveResolutionPowerSetting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdaptiveResolutionPowerSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AdaptiveResolutionPowerSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PixelDensityMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PixelDensityMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PixelDensityMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PixelDensityMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPICOXRSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRHMD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PXR_HMDRuntimeSettings.h" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnablePSensor_MetaData[] = {
		{ "Category", "HMD" },
		{ "DisplayName", "Enable PSensor?" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
		{ "ToolTip", "If you want to get PSensor state,Please enable it!" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnablePSensor_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bEnablePSensor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnablePSensor = { "bEnablePSensor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnablePSensor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnablePSensor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnablePSensor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsHMD3Dof_MetaData[] = {
		{ "Category", "HMD" },
		{ "DisplayName", "HMD Only Tracking Rotation" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsHMD3Dof_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bIsHMD3Dof = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsHMD3Dof = { "bIsHMD3Dof", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsHMD3Dof_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsHMD3Dof_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsHMD3Dof_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableHomeKey_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "//Controller\n" },
		{ "DisplayName", "Receive HomeKey Event" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
		{ "ToolTip", "Controller" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableHomeKey_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bEnableHomeKey = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableHomeKey = { "bEnableHomeKey", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableHomeKey_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableHomeKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableHomeKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsController3Dof_MetaData[] = {
		{ "Category", "Controller" },
		{ "DisplayName", "Controller Only Tracking Rotation" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsController3Dof_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bIsController3Dof = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsController3Dof = { "bIsController3Dof", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsController3Dof_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsController3Dof_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsController3Dof_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_HandTrackingSupport_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_HandTrackingSupport_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "/** Whether controllers and/or hands can be used with the app */" },
		{ "DisplayName", "HandTracking Support" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
		{ "ToolTip", "Whether controllers and/or hands can be used with the app" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_HandTrackingSupport = { "HandTrackingSupport", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPICOXRSettings, HandTrackingSupport), Z_Construct_UEnum_PICOXRHMD_EPICOXRHandTrackingSupport, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_HandTrackingSupport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_HandTrackingSupport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableAutoKeyMapping_MetaData[] = {
		{ "Category", "Controller" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Enable AutoKeyMapping" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
		{ "ToolTip", "When enabled, A set of key mappings will be generated automatically,and default controller animation will work." },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableAutoKeyMapping_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bEnableAutoKeyMapping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableAutoKeyMapping = { "bEnableAutoKeyMapping", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableAutoKeyMapping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableAutoKeyMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableAutoKeyMapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableLateLatching_MetaData[] = {
		{ "Category", "Feature" },
		{ "DisplayName", "Enable LateLatching" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
		{ "ToolTip", "Only support UE4.27 + Vulkan + Multi-View + Disable Occlusion Culling." },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableLateLatching_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bEnableLateLatching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableLateLatching = { "bEnableLateLatching", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableLateLatching_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableLateLatching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableLateLatching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseHWsRGBEncoding_MetaData[] = {
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseHWsRGBEncoding_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bUseHWsRGBEncoding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseHWsRGBEncoding = { "bUseHWsRGBEncoding", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseHWsRGBEncoding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseHWsRGBEncoding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseHWsRGBEncoding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseRecommendedMSAA_MetaData[] = {
		{ "Category", "Feature" },
		{ "DisplayName", "Use Recommended MSAA Level" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseRecommendedMSAA_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bUseRecommendedMSAA = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseRecommendedMSAA = { "bUseRecommendedMSAA", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseRecommendedMSAA_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseRecommendedMSAA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseRecommendedMSAA_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_CoordinateType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_CoordinateType_MetaData[] = {
		{ "Category", "Feature" },
		{ "DisplayName", "Coordinate Space" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_CoordinateType = { "CoordinateType", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPICOXRSettings, CoordinateType), Z_Construct_UEnum_PICOXRHMD_EPICOXRCoordinateType, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_CoordinateType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_CoordinateType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTracking_MetaData[] = {
		{ "Category", "Feature" },
		{ "DisplayName", "Enable Eye Tracking" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
		{ "ToolTip", "Enable Eye Tracking" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTracking_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bEnableEyeTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTracking = { "bEnableEyeTracking", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTracking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTracking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTrackingCalibration_MetaData[] = {
		{ "Category", "Feature" },
		{ "DisplayName", "Enable Eye Tracking Calibration" },
		{ "EditCondition", "bEnableEyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
		{ "ToolTip", "Enable Eye Tracking Calibration" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTrackingCalibration_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bEnableEyeTrackingCalibration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTrackingCalibration = { "bEnableEyeTrackingCalibration", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTrackingCalibration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTrackingCalibration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTrackingCalibration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableFaceTracking_MetaData[] = {
		{ "Category", "Feature" },
		{ "DisplayName", "Enable Face Tracking" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
		{ "ToolTip", "Enable Face Tracking" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableFaceTracking_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bEnableFaceTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableFaceTracking = { "bEnableFaceTracking", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableFaceTracking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableFaceTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableFaceTracking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableBodyTracking_MetaData[] = {
		{ "Category", "Feature" },
		{ "DisplayName", "Enable Body Tracking" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
		{ "ToolTip", "Enable Tracking Function related to Fitness Band" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableBodyTracking_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bEnableBodyTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableBodyTracking = { "bEnableBodyTracking", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableBodyTracking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableBodyTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableBodyTracking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseAdvanceInterface_MetaData[] = {
		{ "Category", "Feature" },
		{ "DisplayName", "Use PICO Advance Interface" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseAdvanceInterface_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bUseAdvanceInterface = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseAdvanceInterface = { "bUseAdvanceInterface", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseAdvanceInterface_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseAdvanceInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseAdvanceInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseContentProtect_MetaData[] = {
		{ "Category", "Feature" },
		{ "DisplayName", "Use Content Protect" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseContentProtect_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bUseContentProtect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseContentProtect = { "bUseContentProtect", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseContentProtect_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseContentProtect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseContentProtect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bSplashScreenAutoShow_MetaData[] = {
		{ "Category", "Feature" },
		{ "DisplayName", "Auto Show Splash Screen" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bSplashScreenAutoShow_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bSplashScreenAutoShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bSplashScreenAutoShow = { "bSplashScreenAutoShow", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bSplashScreenAutoShow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bSplashScreenAutoShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bSplashScreenAutoShow_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_SplashDescs_Inner = { "SplashDescs", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPXRSplashDesc, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_SplashDescs_MetaData[] = {
		{ "Category", "Feature" },
		{ "DisplayName", "SplashDescs" },
		{ "EditCondition", "bSplashScreenAutoShow" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_SplashDescs = { "SplashDescs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPICOXRSettings, SplashDescs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_SplashDescs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_SplashDescs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_refreshRate_MetaData[] = {
		{ "Category", "Feature" },
		{ "DisplayName", "Display Refresh Rates" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_refreshRate = { "refreshRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPICOXRSettings, refreshRate), Z_Construct_UEnum_PICOXRHMD_ERefreshRate, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_refreshRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_refreshRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableVST_MetaData[] = {
		{ "Category", "MixedReality" },
		{ "DisplayName", "Enable VST" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableVST_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bEnableVST = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableVST = { "bEnableVST", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableVST_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableVST_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableVST_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableAnchor_MetaData[] = {
		{ "Category", "MixedReality" },
		{ "DisplayName", "Enable Anchor" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableAnchor_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bEnableAnchor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableAnchor = { "bEnableAnchor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableAnchor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableAnchor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableAnchor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_OSSplashScreen_MetaData[] = {
		{ "Category", "Mobile" },
		{ "DisplayName", "OS Splash Screen" },
		{ "FilePathFilter", "png" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_OSSplashScreen = { "OSSplashScreen", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPICOXRSettings, OSSplashScreen), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_OSSplashScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_OSSplashScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUsingOSSplash_MetaData[] = {
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUsingOSSplash_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bUsingOSSplash = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUsingOSSplash = { "bUsingOSSplash", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUsingOSSplash_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUsingOSSplash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUsingOSSplash_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_FoveationRenderingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_FoveationRenderingMode_MetaData[] = {
		{ "Category", "FoveatedRendering" },
		{ "DisplayName", "Foveated Rendering Mode" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_FoveationRenderingMode = { "FoveationRenderingMode", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPICOXRSettings, FoveationRenderingMode), Z_Construct_UEnum_PICOXRHMD_EFoveationRenderingMode, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_FoveationRenderingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_FoveationRenderingMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_FoveationLevel_MetaData[] = {
		{ "Category", "FoveatedRendering" },
		{ "DisplayName", "Foveated Rendering Level" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
		{ "ToolTip", "Foveated Rendering Level" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_FoveationLevel = { "FoveationLevel", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPICOXRSettings, FoveationLevel), Z_Construct_UEnum_PICOXRHMD_EFoveationLevel, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_FoveationLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_FoveationLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTrackingFoveationRendering_MetaData[] = {
		{ "Category", "FoveatedRendering" },
		{ "DisplayName", "Enable Eye Tracked Foveated Rendering" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
		{ "ToolTip", "Enable Eye Tracked Foveated Rendering" },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTrackingFoveationRendering_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bEnableEyeTrackingFoveationRendering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTrackingFoveationRendering = { "bEnableEyeTrackingFoveationRendering", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTrackingFoveationRendering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTrackingFoveationRendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTrackingFoveationRendering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bAdaptiveResolutionEnabled_MetaData[] = {
		{ "Category", "AdaptiveResolution" },
		{ "DisplayName", "Enable Adaptive Resolution" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
		{ "ToolTip", "Choose whether resolution is enabled.\n\nNOTE: Adaptive Resolution is currently only supported on the PICO fork of Unreal Engine. It cannot be enabled when Foveation is enabled." },
	};
#endif
	void Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bAdaptiveResolutionEnabled_SetBit(void* Obj)
	{
		((UPICOXRSettings*)Obj)->bAdaptiveResolutionEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bAdaptiveResolutionEnabled = { "bAdaptiveResolutionEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPICOXRSettings), &Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bAdaptiveResolutionEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bAdaptiveResolutionEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bAdaptiveResolutionEnabled_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_AdaptiveResolutionPowerSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_AdaptiveResolutionPowerSetting_MetaData[] = {
		{ "Category", "AdaptiveResolution" },
		{ "DisplayName", "Adaptive Resolution Power Setting" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
		{ "ToolTip", "Choose between high resolution and low power consumption.\n\nNOTE: Adaptive Resolution is currently only supported on the PICO fork of Unreal Engine. It cannot be enabled when Foveation is enabled." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_AdaptiveResolutionPowerSetting = { "AdaptiveResolutionPowerSetting", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPICOXRSettings, AdaptiveResolutionPowerSetting), Z_Construct_UEnum_PICOXRHMD_EPICOXRAdaptiveResolutionPowerSetting, METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_AdaptiveResolutionPowerSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_AdaptiveResolutionPowerSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_PixelDensityMin_MetaData[] = {
		{ "Category", "AdaptiveResolution" },
		{ "ClampMax", "1.26" },
		{ "ClampMin", "0.7" },
		{ "DisplayName", "Min Pixel Density" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
		{ "ToolTip", "Minimum pixel density allowed for adaptive resolution." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_PixelDensityMin = { "PixelDensityMin", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPICOXRSettings, PixelDensityMin), METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_PixelDensityMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_PixelDensityMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_PixelDensityMax_MetaData[] = {
		{ "Category", "AdaptiveResolution" },
		{ "ClampMax", "1.26" },
		{ "ClampMin", "0.7" },
		{ "DisplayName", "Max Pixel Density" },
		{ "ModuleRelativePath", "Public/PXR_HMDRuntimeSettings.h" },
		{ "ToolTip", "Maximum pixel density allowed for adaptive resolution." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_PixelDensityMax = { "PixelDensityMax", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPICOXRSettings, PixelDensityMax), METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_PixelDensityMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_PixelDensityMax_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPICOXRSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnablePSensor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsHMD3Dof,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableHomeKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bIsController3Dof,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_HandTrackingSupport_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_HandTrackingSupport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableAutoKeyMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableLateLatching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseHWsRGBEncoding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseRecommendedMSAA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_CoordinateType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_CoordinateType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTrackingCalibration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableFaceTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableBodyTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseAdvanceInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUseContentProtect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bSplashScreenAutoShow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_SplashDescs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_SplashDescs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_refreshRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableVST,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableAnchor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_OSSplashScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bUsingOSSplash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_FoveationRenderingMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_FoveationRenderingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_FoveationLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bEnableEyeTrackingFoveationRendering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_bAdaptiveResolutionEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_AdaptiveResolutionPowerSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_AdaptiveResolutionPowerSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_PixelDensityMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOXRSettings_Statics::NewProp_PixelDensityMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPICOXRSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPICOXRSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPICOXRSettings_Statics::ClassParams = {
		&UPICOXRSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPICOXRSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UPICOXRSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPICOXRSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPICOXRSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPICOXRSettings, 3900072891);
	template<> PICOXRHMD_API UClass* StaticClass<UPICOXRSettings>()
	{
		return UPICOXRSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPICOXRSettings(Z_Construct_UClass_UPICOXRSettings, &UPICOXRSettings::StaticClass, TEXT("/Script/PICOXRHMD"), TEXT("UPICOXRSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPICOXRSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
