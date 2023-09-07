// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRMotionTracking/Public/PXR_MotionTrackingTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_MotionTrackingTypes() {}
// Cross Module References
	PICOXRMOTIONTRACKING_API UEnum* Z_Construct_UEnum_PICOXRMotionTracking_EPXREyeTrackingMode();
	UPackage* Z_Construct_UPackage__Script_PICOXRMotionTracking();
	PICOXRMOTIONTRACKING_API UEnum* Z_Construct_UEnum_PICOXRMotionTracking_EPICOEye();
	PICOXRMOTIONTRACKING_API UEnum* Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceTrackingMode();
	PICOXRMOTIONTRACKING_API UEnum* Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceBlendShape();
	PICOXRMOTIONTRACKING_API UEnum* Z_Construct_UEnum_PICOXRMotionTracking_EPXRTrackingStateCode();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXREyePupilInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXREyeTrackingData();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXRPerEyeData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXREyeTrackingState();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXRFaceTrackingData();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXRFaceTrackingState();
// End Cross Module References
	static UEnum* EPXREyeTrackingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMotionTracking_EPXREyeTrackingMode, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("EPXREyeTrackingMode"));
		}
		return Singleton;
	}
	template<> PICOXRMOTIONTRACKING_API UEnum* StaticEnum<EPXREyeTrackingMode>()
	{
		return EPXREyeTrackingMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPXREyeTrackingMode(EPXREyeTrackingMode_StaticEnum, TEXT("/Script/PICOXRMotionTracking"), TEXT("EPXREyeTrackingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRMotionTracking_EPXREyeTrackingMode_Hash() { return 4252483042U; }
	UEnum* Z_Construct_UEnum_PICOXRMotionTracking_EPXREyeTrackingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMotionTracking();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPXREyeTrackingMode"), 0, Get_Z_Construct_UEnum_PICOXRMotionTracking_EPXREyeTrackingMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPXREyeTrackingMode::PXR_ETM_BOTH", (int64)EPXREyeTrackingMode::PXR_ETM_BOTH },
				{ "EPXREyeTrackingMode::PXR_ETM_NONE", (int64)EPXREyeTrackingMode::PXR_ETM_NONE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
				{ "PXR_ETM_BOTH.Name", "EPXREyeTrackingMode::PXR_ETM_BOTH" },
				{ "PXR_ETM_NONE.Name", "EPXREyeTrackingMode::PXR_ETM_NONE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
				nullptr,
				"EPXREyeTrackingMode",
				"EPXREyeTrackingMode",
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
	static UEnum* EPICOEye_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMotionTracking_EPICOEye, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("EPICOEye"));
		}
		return Singleton;
	}
	template<> PICOXRMOTIONTRACKING_API UEnum* StaticEnum<EPICOEye>()
	{
		return EPICOEye_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOEye(EPICOEye_StaticEnum, TEXT("/Script/PICOXRMotionTracking"), TEXT("EPICOEye"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRMotionTracking_EPICOEye_Hash() { return 232857796U; }
	UEnum* Z_Construct_UEnum_PICOXRMotionTracking_EPICOEye()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMotionTracking();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOEye"), 0, Get_Z_Construct_UEnum_PICOXRMotionTracking_EPICOEye_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOEye::Left", (int64)EPICOEye::Left },
				{ "EPICOEye::Right", (int64)EPICOEye::Right },
				{ "EPICOEye::Center", (int64)EPICOEye::Center },
				{ "EPICOEye::COUNT", (int64)EPICOEye::COUNT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Center.Name", "EPICOEye::Center" },
				{ "COUNT.Name", "EPICOEye::COUNT" },
				{ "Left.Name", "EPICOEye::Left" },
				{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
				{ "Right.Name", "EPICOEye::Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
				nullptr,
				"EPICOEye",
				"EPICOEye",
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
	static UEnum* EPXRFaceTrackingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceTrackingMode, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("EPXRFaceTrackingMode"));
		}
		return Singleton;
	}
	template<> PICOXRMOTIONTRACKING_API UEnum* StaticEnum<EPXRFaceTrackingMode>()
	{
		return EPXRFaceTrackingMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPXRFaceTrackingMode(EPXRFaceTrackingMode_StaticEnum, TEXT("/Script/PICOXRMotionTracking"), TEXT("EPXRFaceTrackingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceTrackingMode_Hash() { return 2674377604U; }
	UEnum* Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceTrackingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMotionTracking();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPXRFaceTrackingMode"), 0, Get_Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceTrackingMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPXRFaceTrackingMode::PXR_FTM_NONE", (int64)EPXRFaceTrackingMode::PXR_FTM_NONE },
				{ "EPXRFaceTrackingMode::PXR_FTM_FACE", (int64)EPXRFaceTrackingMode::PXR_FTM_FACE },
				{ "EPXRFaceTrackingMode::PXR_FTM_LIPS", (int64)EPXRFaceTrackingMode::PXR_FTM_LIPS },
				{ "EPXRFaceTrackingMode::PXR_FTM_FACE_LIPS_VIS", (int64)EPXRFaceTrackingMode::PXR_FTM_FACE_LIPS_VIS },
				{ "EPXRFaceTrackingMode::PXR_FTM_FACE_LIPS_BS", (int64)EPXRFaceTrackingMode::PXR_FTM_FACE_LIPS_BS },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
				{ "PXR_FTM_FACE.Name", "EPXRFaceTrackingMode::PXR_FTM_FACE" },
				{ "PXR_FTM_FACE_LIPS_BS.Name", "EPXRFaceTrackingMode::PXR_FTM_FACE_LIPS_BS" },
				{ "PXR_FTM_FACE_LIPS_VIS.Name", "EPXRFaceTrackingMode::PXR_FTM_FACE_LIPS_VIS" },
				{ "PXR_FTM_LIPS.Name", "EPXRFaceTrackingMode::PXR_FTM_LIPS" },
				{ "PXR_FTM_NONE.Name", "EPXRFaceTrackingMode::PXR_FTM_NONE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
				nullptr,
				"EPXRFaceTrackingMode",
				"EPXRFaceTrackingMode",
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
	static UEnum* EPXRFaceBlendShape_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceBlendShape, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("EPXRFaceBlendShape"));
		}
		return Singleton;
	}
	template<> PICOXRMOTIONTRACKING_API UEnum* StaticEnum<EPXRFaceBlendShape>()
	{
		return EPXRFaceBlendShape_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPXRFaceBlendShape(EPXRFaceBlendShape_StaticEnum, TEXT("/Script/PICOXRMotionTracking"), TEXT("EPXRFaceBlendShape"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceBlendShape_Hash() { return 4137601784U; }
	UEnum* Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceBlendShape()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMotionTracking();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPXRFaceBlendShape"), 0, Get_Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceBlendShape_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPXRFaceBlendShape::BrowInnerUp", (int64)EPXRFaceBlendShape::BrowInnerUp },
				{ "EPXRFaceBlendShape::BrowDown_R", (int64)EPXRFaceBlendShape::BrowDown_R },
				{ "EPXRFaceBlendShape::BrowDown_L", (int64)EPXRFaceBlendShape::BrowDown_L },
				{ "EPXRFaceBlendShape::BrowOuterUp_L", (int64)EPXRFaceBlendShape::BrowOuterUp_L },
				{ "EPXRFaceBlendShape::BrowOuterUp_R", (int64)EPXRFaceBlendShape::BrowOuterUp_R },
				{ "EPXRFaceBlendShape::CheekSquint_L", (int64)EPXRFaceBlendShape::CheekSquint_L },
				{ "EPXRFaceBlendShape::CheekSquint_R", (int64)EPXRFaceBlendShape::CheekSquint_R },
				{ "EPXRFaceBlendShape::CheekPuff", (int64)EPXRFaceBlendShape::CheekPuff },
				{ "EPXRFaceBlendShape::EyeLookDown_L", (int64)EPXRFaceBlendShape::EyeLookDown_L },
				{ "EPXRFaceBlendShape::EyeLookIn_L", (int64)EPXRFaceBlendShape::EyeLookIn_L },
				{ "EPXRFaceBlendShape::EyeLookIn_R", (int64)EPXRFaceBlendShape::EyeLookIn_R },
				{ "EPXRFaceBlendShape::EyeLookDown_R", (int64)EPXRFaceBlendShape::EyeLookDown_R },
				{ "EPXRFaceBlendShape::EyeSquint_L", (int64)EPXRFaceBlendShape::EyeSquint_L },
				{ "EPXRFaceBlendShape::EyeBlink_L", (int64)EPXRFaceBlendShape::EyeBlink_L },
				{ "EPXRFaceBlendShape::EyeLookUp_L", (int64)EPXRFaceBlendShape::EyeLookUp_L },
				{ "EPXRFaceBlendShape::EyeLookUp_R", (int64)EPXRFaceBlendShape::EyeLookUp_R },
				{ "EPXRFaceBlendShape::EyeBlink_R", (int64)EPXRFaceBlendShape::EyeBlink_R },
				{ "EPXRFaceBlendShape::EyeSquint_R", (int64)EPXRFaceBlendShape::EyeSquint_R },
				{ "EPXRFaceBlendShape::EyeLookOut_L", (int64)EPXRFaceBlendShape::EyeLookOut_L },
				{ "EPXRFaceBlendShape::EyeLookOut_R", (int64)EPXRFaceBlendShape::EyeLookOut_R },
				{ "EPXRFaceBlendShape::EyeWide_R", (int64)EPXRFaceBlendShape::EyeWide_R },
				{ "EPXRFaceBlendShape::EyeWide_L", (int64)EPXRFaceBlendShape::EyeWide_L },
				{ "EPXRFaceBlendShape::JawOpen", (int64)EPXRFaceBlendShape::JawOpen },
				{ "EPXRFaceBlendShape::JawRight", (int64)EPXRFaceBlendShape::JawRight },
				{ "EPXRFaceBlendShape::JawForward", (int64)EPXRFaceBlendShape::JawForward },
				{ "EPXRFaceBlendShape::JawLeft", (int64)EPXRFaceBlendShape::JawLeft },
				{ "EPXRFaceBlendShape::MouthClose", (int64)EPXRFaceBlendShape::MouthClose },
				{ "EPXRFaceBlendShape::MouthLowerDown_R", (int64)EPXRFaceBlendShape::MouthLowerDown_R },
				{ "EPXRFaceBlendShape::MouthUpperUp_R", (int64)EPXRFaceBlendShape::MouthUpperUp_R },
				{ "EPXRFaceBlendShape::MouthShrugUpper", (int64)EPXRFaceBlendShape::MouthShrugUpper },
				{ "EPXRFaceBlendShape::MouthFunnel", (int64)EPXRFaceBlendShape::MouthFunnel },
				{ "EPXRFaceBlendShape::MouthRollUpper", (int64)EPXRFaceBlendShape::MouthRollUpper },
				{ "EPXRFaceBlendShape::MouthShrugLower", (int64)EPXRFaceBlendShape::MouthShrugLower },
				{ "EPXRFaceBlendShape::MouthRollLower", (int64)EPXRFaceBlendShape::MouthRollLower },
				{ "EPXRFaceBlendShape::MouthSmile_L", (int64)EPXRFaceBlendShape::MouthSmile_L },
				{ "EPXRFaceBlendShape::MouthPress_L", (int64)EPXRFaceBlendShape::MouthPress_L },
				{ "EPXRFaceBlendShape::MouthSmile_R", (int64)EPXRFaceBlendShape::MouthSmile_R },
				{ "EPXRFaceBlendShape::MouthPress_R", (int64)EPXRFaceBlendShape::MouthPress_R },
				{ "EPXRFaceBlendShape::MouthDimple_R", (int64)EPXRFaceBlendShape::MouthDimple_R },
				{ "EPXRFaceBlendShape::MouthLeft", (int64)EPXRFaceBlendShape::MouthLeft },
				{ "EPXRFaceBlendShape::MouthFrown_L", (int64)EPXRFaceBlendShape::MouthFrown_L },
				{ "EPXRFaceBlendShape::MouthStretch_L", (int64)EPXRFaceBlendShape::MouthStretch_L },
				{ "EPXRFaceBlendShape::MouthPucker", (int64)EPXRFaceBlendShape::MouthPucker },
				{ "EPXRFaceBlendShape::MouthUpperUp_L", (int64)EPXRFaceBlendShape::MouthUpperUp_L },
				{ "EPXRFaceBlendShape::MouthFrown_R", (int64)EPXRFaceBlendShape::MouthFrown_R },
				{ "EPXRFaceBlendShape::MouthStretch_R", (int64)EPXRFaceBlendShape::MouthStretch_R },
				{ "EPXRFaceBlendShape::MouthRight", (int64)EPXRFaceBlendShape::MouthRight },
				{ "EPXRFaceBlendShape::MouthDimple_L", (int64)EPXRFaceBlendShape::MouthDimple_L },
				{ "EPXRFaceBlendShape::MouthLowerDown_L", (int64)EPXRFaceBlendShape::MouthLowerDown_L },
				{ "EPXRFaceBlendShape::NoseSneer_L", (int64)EPXRFaceBlendShape::NoseSneer_L },
				{ "EPXRFaceBlendShape::NoseSneer_R", (int64)EPXRFaceBlendShape::NoseSneer_R },
				{ "EPXRFaceBlendShape::TongueOut", (int64)EPXRFaceBlendShape::TongueOut },
				{ "EPXRFaceBlendShape::PP", (int64)EPXRFaceBlendShape::PP },
				{ "EPXRFaceBlendShape::CH", (int64)EPXRFaceBlendShape::CH },
				{ "EPXRFaceBlendShape::o", (int64)EPXRFaceBlendShape::o },
				{ "EPXRFaceBlendShape::O", (int64)EPXRFaceBlendShape::O },
				{ "EPXRFaceBlendShape::I", (int64)EPXRFaceBlendShape::I },
				{ "EPXRFaceBlendShape::u", (int64)EPXRFaceBlendShape::u },
				{ "EPXRFaceBlendShape::RR", (int64)EPXRFaceBlendShape::RR },
				{ "EPXRFaceBlendShape::XX", (int64)EPXRFaceBlendShape::XX },
				{ "EPXRFaceBlendShape::aa", (int64)EPXRFaceBlendShape::aa },
				{ "EPXRFaceBlendShape::i", (int64)EPXRFaceBlendShape::i },
				{ "EPXRFaceBlendShape::FF", (int64)EPXRFaceBlendShape::FF },
				{ "EPXRFaceBlendShape::U", (int64)EPXRFaceBlendShape::U },
				{ "EPXRFaceBlendShape::TH", (int64)EPXRFaceBlendShape::TH },
				{ "EPXRFaceBlendShape::kk", (int64)EPXRFaceBlendShape::kk },
				{ "EPXRFaceBlendShape::SS", (int64)EPXRFaceBlendShape::SS },
				{ "EPXRFaceBlendShape::e", (int64)EPXRFaceBlendShape::e },
				{ "EPXRFaceBlendShape::DD", (int64)EPXRFaceBlendShape::DD },
				{ "EPXRFaceBlendShape::E", (int64)EPXRFaceBlendShape::E },
				{ "EPXRFaceBlendShape::nn", (int64)EPXRFaceBlendShape::nn },
				{ "EPXRFaceBlendShape::sil", (int64)EPXRFaceBlendShape::sil },
				{ "EPXRFaceBlendShape::COUNT", (int64)EPXRFaceBlendShape::COUNT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "aa.Name", "EPXRFaceBlendShape::aa" },
				{ "BlueprintType", "true" },
				{ "BrowDown_L.Name", "EPXRFaceBlendShape::BrowDown_L" },
				{ "BrowDown_R.Name", "EPXRFaceBlendShape::BrowDown_R" },
				{ "BrowInnerUp.Name", "EPXRFaceBlendShape::BrowInnerUp" },
				{ "BrowOuterUp_L.Name", "EPXRFaceBlendShape::BrowOuterUp_L" },
				{ "BrowOuterUp_R.Name", "EPXRFaceBlendShape::BrowOuterUp_R" },
				{ "CH.Name", "EPXRFaceBlendShape::CH" },
				{ "CheekPuff.Name", "EPXRFaceBlendShape::CheekPuff" },
				{ "CheekSquint_L.Name", "EPXRFaceBlendShape::CheekSquint_L" },
				{ "CheekSquint_R.Name", "EPXRFaceBlendShape::CheekSquint_R" },
				{ "COUNT.Name", "EPXRFaceBlendShape::COUNT" },
				{ "DD.Name", "EPXRFaceBlendShape::DD" },
				{ "E.Name", "EPXRFaceBlendShape::E" },
				{ "EyeBlink_L.Name", "EPXRFaceBlendShape::EyeBlink_L" },
				{ "EyeBlink_R.Name", "EPXRFaceBlendShape::EyeBlink_R" },
				{ "EyeLookDown_L.Name", "EPXRFaceBlendShape::EyeLookDown_L" },
				{ "EyeLookDown_R.Name", "EPXRFaceBlendShape::EyeLookDown_R" },
				{ "EyeLookIn_L.Name", "EPXRFaceBlendShape::EyeLookIn_L" },
				{ "EyeLookIn_R.Name", "EPXRFaceBlendShape::EyeLookIn_R" },
				{ "EyeLookOut_L.Name", "EPXRFaceBlendShape::EyeLookOut_L" },
				{ "EyeLookOut_R.Name", "EPXRFaceBlendShape::EyeLookOut_R" },
				{ "EyeLookUp_L.Name", "EPXRFaceBlendShape::EyeLookUp_L" },
				{ "EyeLookUp_R.Name", "EPXRFaceBlendShape::EyeLookUp_R" },
				{ "EyeSquint_L.Name", "EPXRFaceBlendShape::EyeSquint_L" },
				{ "EyeSquint_R.Name", "EPXRFaceBlendShape::EyeSquint_R" },
				{ "EyeWide_L.Name", "EPXRFaceBlendShape::EyeWide_L" },
				{ "EyeWide_R.Name", "EPXRFaceBlendShape::EyeWide_R" },
				{ "FF.Name", "EPXRFaceBlendShape::FF" },
				{ "i.Name", "EPXRFaceBlendShape::i" },
				{ "JawForward.Name", "EPXRFaceBlendShape::JawForward" },
				{ "JawLeft.Name", "EPXRFaceBlendShape::JawLeft" },
				{ "JawOpen.Name", "EPXRFaceBlendShape::JawOpen" },
				{ "JawRight.Name", "EPXRFaceBlendShape::JawRight" },
				{ "kk.Name", "EPXRFaceBlendShape::kk" },
				{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
				{ "MouthClose.Name", "EPXRFaceBlendShape::MouthClose" },
				{ "MouthDimple_L.Name", "EPXRFaceBlendShape::MouthDimple_L" },
				{ "MouthDimple_R.Name", "EPXRFaceBlendShape::MouthDimple_R" },
				{ "MouthFrown_L.Name", "EPXRFaceBlendShape::MouthFrown_L" },
				{ "MouthFrown_R.Name", "EPXRFaceBlendShape::MouthFrown_R" },
				{ "MouthFunnel.Name", "EPXRFaceBlendShape::MouthFunnel" },
				{ "MouthLeft.Name", "EPXRFaceBlendShape::MouthLeft" },
				{ "MouthLowerDown_L.Name", "EPXRFaceBlendShape::MouthLowerDown_L" },
				{ "MouthLowerDown_R.Name", "EPXRFaceBlendShape::MouthLowerDown_R" },
				{ "MouthPress_L.Name", "EPXRFaceBlendShape::MouthPress_L" },
				{ "MouthPress_R.Name", "EPXRFaceBlendShape::MouthPress_R" },
				{ "MouthPucker.Name", "EPXRFaceBlendShape::MouthPucker" },
				{ "MouthRight.Name", "EPXRFaceBlendShape::MouthRight" },
				{ "MouthRollLower.Name", "EPXRFaceBlendShape::MouthRollLower" },
				{ "MouthRollUpper.Name", "EPXRFaceBlendShape::MouthRollUpper" },
				{ "MouthShrugLower.Name", "EPXRFaceBlendShape::MouthShrugLower" },
				{ "MouthShrugUpper.Name", "EPXRFaceBlendShape::MouthShrugUpper" },
				{ "MouthSmile_L.Name", "EPXRFaceBlendShape::MouthSmile_L" },
				{ "MouthSmile_R.Name", "EPXRFaceBlendShape::MouthSmile_R" },
				{ "MouthStretch_L.Name", "EPXRFaceBlendShape::MouthStretch_L" },
				{ "MouthStretch_R.Name", "EPXRFaceBlendShape::MouthStretch_R" },
				{ "MouthUpperUp_L.Name", "EPXRFaceBlendShape::MouthUpperUp_L" },
				{ "MouthUpperUp_R.Name", "EPXRFaceBlendShape::MouthUpperUp_R" },
				{ "nn.Name", "EPXRFaceBlendShape::nn" },
				{ "NoseSneer_L.Name", "EPXRFaceBlendShape::NoseSneer_L" },
				{ "NoseSneer_R.Name", "EPXRFaceBlendShape::NoseSneer_R" },
				{ "O.Name", "EPXRFaceBlendShape::O" },
				{ "PP.Name", "EPXRFaceBlendShape::PP" },
				{ "RR.Name", "EPXRFaceBlendShape::RR" },
				{ "sil.Name", "EPXRFaceBlendShape::sil" },
				{ "SS.Name", "EPXRFaceBlendShape::SS" },
				{ "TH.Name", "EPXRFaceBlendShape::TH" },
				{ "TongueOut.Name", "EPXRFaceBlendShape::TongueOut" },
				{ "U.Name", "EPXRFaceBlendShape::U" },
				{ "XX.Name", "EPXRFaceBlendShape::XX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
				nullptr,
				"EPXRFaceBlendShape",
				"EPXRFaceBlendShape",
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
	static UEnum* EPXRTrackingStateCode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMotionTracking_EPXRTrackingStateCode, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("EPXRTrackingStateCode"));
		}
		return Singleton;
	}
	template<> PICOXRMOTIONTRACKING_API UEnum* StaticEnum<EPXRTrackingStateCode>()
	{
		return EPXRTrackingStateCode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPXRTrackingStateCode(EPXRTrackingStateCode_StaticEnum, TEXT("/Script/PICOXRMotionTracking"), TEXT("EPXRTrackingStateCode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRMotionTracking_EPXRTrackingStateCode_Hash() { return 2273849434U; }
	UEnum* Z_Construct_UEnum_PICOXRMotionTracking_EPXRTrackingStateCode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMotionTracking();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPXRTrackingStateCode"), 0, Get_Z_Construct_UEnum_PICOXRMotionTracking_EPXRTrackingStateCode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPXRTrackingStateCode::PXR_MT_SUCCESS", (int64)EPXRTrackingStateCode::PXR_MT_SUCCESS },
				{ "EPXRTrackingStateCode::PXR_MT_FAILURE", (int64)EPXRTrackingStateCode::PXR_MT_FAILURE },
				{ "EPXRTrackingStateCode::PXR_MT_MODE_NONE", (int64)EPXRTrackingStateCode::PXR_MT_MODE_NONE },
				{ "EPXRTrackingStateCode::PXR_MT_DEVICE_NOT_SUPPORT", (int64)EPXRTrackingStateCode::PXR_MT_DEVICE_NOT_SUPPORT },
				{ "EPXRTrackingStateCode::PXR_MT_SERVICE_NEED_START", (int64)EPXRTrackingStateCode::PXR_MT_SERVICE_NEED_START },
				{ "EPXRTrackingStateCode::PXR_MT_ET_PERMISSION_DENIED", (int64)EPXRTrackingStateCode::PXR_MT_ET_PERMISSION_DENIED },
				{ "EPXRTrackingStateCode::PXR_MT_FT_PERMISSION_DENIED", (int64)EPXRTrackingStateCode::PXR_MT_FT_PERMISSION_DENIED },
				{ "EPXRTrackingStateCode::PXR_MT_MIC_PERMISSION_DENIED", (int64)EPXRTrackingStateCode::PXR_MT_MIC_PERMISSION_DENIED },
				{ "EPXRTrackingStateCode::PXR_MT_SYSTEM_DENIED", (int64)EPXRTrackingStateCode::PXR_MT_SYSTEM_DENIED },
				{ "EPXRTrackingStateCode::PXR_MT_UNKNOW_ERROR", (int64)EPXRTrackingStateCode::PXR_MT_UNKNOW_ERROR },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
				{ "PXR_MT_DEVICE_NOT_SUPPORT.Name", "EPXRTrackingStateCode::PXR_MT_DEVICE_NOT_SUPPORT" },
				{ "PXR_MT_ET_PERMISSION_DENIED.Name", "EPXRTrackingStateCode::PXR_MT_ET_PERMISSION_DENIED" },
				{ "PXR_MT_FAILURE.Name", "EPXRTrackingStateCode::PXR_MT_FAILURE" },
				{ "PXR_MT_FT_PERMISSION_DENIED.Name", "EPXRTrackingStateCode::PXR_MT_FT_PERMISSION_DENIED" },
				{ "PXR_MT_MIC_PERMISSION_DENIED.Name", "EPXRTrackingStateCode::PXR_MT_MIC_PERMISSION_DENIED" },
				{ "PXR_MT_MODE_NONE.Name", "EPXRTrackingStateCode::PXR_MT_MODE_NONE" },
				{ "PXR_MT_SERVICE_NEED_START.Name", "EPXRTrackingStateCode::PXR_MT_SERVICE_NEED_START" },
				{ "PXR_MT_SUCCESS.Name", "EPXRTrackingStateCode::PXR_MT_SUCCESS" },
				{ "PXR_MT_SYSTEM_DENIED.Name", "EPXRTrackingStateCode::PXR_MT_SYSTEM_DENIED" },
				{ "PXR_MT_UNKNOW_ERROR.Name", "EPXRTrackingStateCode::PXR_MT_UNKNOW_ERROR" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
				nullptr,
				"EPXRTrackingStateCode",
				"EPXRTrackingStateCode",
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
class UScriptStruct* FPXREyePupilInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRMOTIONTRACKING_API uint32 Get_Z_Construct_UScriptStruct_FPXREyePupilInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPXREyePupilInfo, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("PXREyePupilInfo"), sizeof(FPXREyePupilInfo), Get_Z_Construct_UScriptStruct_FPXREyePupilInfo_Hash());
	}
	return Singleton;
}
template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<FPXREyePupilInfo>()
{
	return FPXREyePupilInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPXREyePupilInfo(FPXREyePupilInfo::StaticStruct, TEXT("/Script/PICOXRMotionTracking"), TEXT("PXREyePupilInfo"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXREyePupilInfo
{
	FScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXREyePupilInfo()
	{
		UScriptStruct::DeferCppStructOps<FPXREyePupilInfo>(FName(TEXT("PXREyePupilInfo")));
	}
} ScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXREyePupilInfo;
	struct Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftEyePupilDiameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftEyePupilDiameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightEyePupilDiameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightEyePupilDiameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftEyePupilPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftEyePupilPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightEyePupilPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightEyePupilPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPXREyePupilInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_LeftEyePupilDiameter_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_LeftEyePupilDiameter = { "LeftEyePupilDiameter", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPXREyePupilInfo, LeftEyePupilDiameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_LeftEyePupilDiameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_LeftEyePupilDiameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_RightEyePupilDiameter_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_RightEyePupilDiameter = { "RightEyePupilDiameter", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPXREyePupilInfo, RightEyePupilDiameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_RightEyePupilDiameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_RightEyePupilDiameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_LeftEyePupilPosition_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_LeftEyePupilPosition = { "LeftEyePupilPosition", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPXREyePupilInfo, LeftEyePupilPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_LeftEyePupilPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_LeftEyePupilPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_RightEyePupilPosition_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_RightEyePupilPosition = { "RightEyePupilPosition", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPXREyePupilInfo, RightEyePupilPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_RightEyePupilPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_RightEyePupilPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_LeftEyePupilDiameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_RightEyePupilDiameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_LeftEyePupilPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::NewProp_RightEyePupilPosition,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		&NewStructOps,
		"PXREyePupilInfo",
		sizeof(FPXREyePupilInfo),
		alignof(FPXREyePupilInfo),
		Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPXREyePupilInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPXREyePupilInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMotionTracking();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PXREyePupilInfo"), sizeof(FPXREyePupilInfo), Get_Z_Construct_UScriptStruct_FPXREyePupilInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPXREyePupilInfo_Hash() { return 1269245395U; }
class UScriptStruct* FPXREyeTrackingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRMOTIONTRACKING_API uint32 Get_Z_Construct_UScriptStruct_FPXREyeTrackingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPXREyeTrackingData, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("PXREyeTrackingData"), sizeof(FPXREyeTrackingData), Get_Z_Construct_UScriptStruct_FPXREyeTrackingData_Hash());
	}
	return Singleton;
}
template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<FPXREyeTrackingData>()
{
	return FPXREyeTrackingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPXREyeTrackingData(FPXREyeTrackingData::StaticStruct, TEXT("/Script/PICOXRMotionTracking"), TEXT("PXREyeTrackingData"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXREyeTrackingData
{
	FScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXREyeTrackingData()
	{
		UScriptStruct::DeferCppStructOps<FPXREyeTrackingData>(FName(TEXT("PXREyeTrackingData")));
	}
} ScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXREyeTrackingData;
	struct Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerEyeDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerEyeDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerEyeDatas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPXREyeTrackingData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::NewProp_PerEyeDatas_Inner = { "PerEyeDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPXRPerEyeData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::NewProp_PerEyeDatas_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::NewProp_PerEyeDatas = { "PerEyeDatas", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPXREyeTrackingData, PerEyeDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::NewProp_PerEyeDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::NewProp_PerEyeDatas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::NewProp_PerEyeDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::NewProp_PerEyeDatas,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		&NewStructOps,
		"PXREyeTrackingData",
		sizeof(FPXREyeTrackingData),
		alignof(FPXREyeTrackingData),
		Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPXREyeTrackingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPXREyeTrackingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMotionTracking();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PXREyeTrackingData"), sizeof(FPXREyeTrackingData), Get_Z_Construct_UScriptStruct_FPXREyeTrackingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPXREyeTrackingData_Hash() { return 1027790070U; }
class UScriptStruct* FPXRPerEyeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRMOTIONTRACKING_API uint32 Get_Z_Construct_UScriptStruct_FPXRPerEyeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPXRPerEyeData, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("PXRPerEyeData"), sizeof(FPXRPerEyeData), Get_Z_Construct_UScriptStruct_FPXRPerEyeData_Hash());
	}
	return Singleton;
}
template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<FPXRPerEyeData>()
{
	return FPXRPerEyeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPXRPerEyeData(FPXRPerEyeData::StaticStruct, TEXT("/Script/PICOXRMotionTracking"), TEXT("PXRPerEyeData"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXRPerEyeData
{
	FScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXRPerEyeData()
	{
		UScriptStruct::DeferCppStructOps<FPXRPerEyeData>(FName(TEXT("PXRPerEyeData")));
	}
} ScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXRPerEyeData;
	struct Z_Construct_UScriptStruct_FPXRPerEyeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EyeType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EyeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EyeType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPoseValid_MetaData[];
#endif
		static void NewProp_bIsPoseValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPoseValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Openness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Openness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOpennessValid_MetaData[];
#endif
		static void NewProp_bIsOpennessValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOpennessValid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPXRPerEyeData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_EyeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_EyeType_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_EyeType = { "EyeType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPXRPerEyeData, EyeType), Z_Construct_UEnum_PICOXRMotionTracking_EPICOEye, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_EyeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_EyeType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPXRPerEyeData, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPXRPerEyeData, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsPoseValid_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsPoseValid_SetBit(void* Obj)
	{
		((FPXRPerEyeData*)Obj)->bIsPoseValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsPoseValid = { "bIsPoseValid", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPXRPerEyeData), &Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsPoseValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsPoseValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsPoseValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Openness_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Openness = { "Openness", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPXRPerEyeData, Openness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Openness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Openness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsOpennessValid_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsOpennessValid_SetBit(void* Obj)
	{
		((FPXRPerEyeData*)Obj)->bIsOpennessValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsOpennessValid = { "bIsOpennessValid", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPXRPerEyeData), &Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsOpennessValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsOpennessValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsOpennessValid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_EyeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_EyeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsPoseValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_Openness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::NewProp_bIsOpennessValid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		&NewStructOps,
		"PXRPerEyeData",
		sizeof(FPXRPerEyeData),
		alignof(FPXRPerEyeData),
		Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPXRPerEyeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPXRPerEyeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMotionTracking();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PXRPerEyeData"), sizeof(FPXRPerEyeData), Get_Z_Construct_UScriptStruct_FPXRPerEyeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPXRPerEyeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPXRPerEyeData_Hash() { return 410442119U; }
class UScriptStruct* FPXREyeTrackingDataGetInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRMOTIONTRACKING_API uint32 Get_Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("PXREyeTrackingDataGetInfo"), sizeof(FPXREyeTrackingDataGetInfo), Get_Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Hash());
	}
	return Singleton;
}
template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<FPXREyeTrackingDataGetInfo>()
{
	return FPXREyeTrackingDataGetInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPXREyeTrackingDataGetInfo(FPXREyeTrackingDataGetInfo::StaticStruct, TEXT("/Script/PICOXRMotionTracking"), TEXT("PXREyeTrackingDataGetInfo"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXREyeTrackingDataGetInfo
{
	FScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXREyeTrackingDataGetInfo()
	{
		UScriptStruct::DeferCppStructOps<FPXREyeTrackingDataGetInfo>(FName(TEXT("PXREyeTrackingDataGetInfo")));
	}
} ScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXREyeTrackingDataGetInfo;
	struct Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_DisplayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryPosition_MetaData[];
#endif
		static void NewProp_QueryPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_QueryPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryOrientation_MetaData[];
#endif
		static void NewProp_QueryOrientation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_QueryOrientation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPXREyeTrackingDataGetInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_DisplayTime_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_DisplayTime = { "DisplayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPXREyeTrackingDataGetInfo, DisplayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_DisplayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_DisplayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryPosition_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryPosition_SetBit(void* Obj)
	{
		((FPXREyeTrackingDataGetInfo*)Obj)->QueryPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryPosition = { "QueryPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPXREyeTrackingDataGetInfo), &Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryPosition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryOrientation_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryOrientation_SetBit(void* Obj)
	{
		((FPXREyeTrackingDataGetInfo*)Obj)->QueryOrientation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryOrientation = { "QueryOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPXREyeTrackingDataGetInfo), &Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryOrientation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryOrientation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_DisplayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::NewProp_QueryOrientation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		&NewStructOps,
		"PXREyeTrackingDataGetInfo",
		sizeof(FPXREyeTrackingDataGetInfo),
		alignof(FPXREyeTrackingDataGetInfo),
		Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMotionTracking();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PXREyeTrackingDataGetInfo"), sizeof(FPXREyeTrackingDataGetInfo), Get_Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Hash() { return 1828031893U; }
class UScriptStruct* FPXREyeTrackingStopInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRMOTIONTRACKING_API uint32 Get_Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("PXREyeTrackingStopInfo"), sizeof(FPXREyeTrackingStopInfo), Get_Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo_Hash());
	}
	return Singleton;
}
template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<FPXREyeTrackingStopInfo>()
{
	return FPXREyeTrackingStopInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPXREyeTrackingStopInfo(FPXREyeTrackingStopInfo::StaticStruct, TEXT("/Script/PICOXRMotionTracking"), TEXT("PXREyeTrackingStopInfo"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXREyeTrackingStopInfo
{
	FScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXREyeTrackingStopInfo()
	{
		UScriptStruct::DeferCppStructOps<FPXREyeTrackingStopInfo>(FName(TEXT("PXREyeTrackingStopInfo")));
	}
} ScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXREyeTrackingStopInfo;
	struct Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPXREyeTrackingStopInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		&NewStructOps,
		"PXREyeTrackingStopInfo",
		sizeof(FPXREyeTrackingStopInfo),
		alignof(FPXREyeTrackingStopInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMotionTracking();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PXREyeTrackingStopInfo"), sizeof(FPXREyeTrackingStopInfo), Get_Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo_Hash() { return 581119010U; }
class UScriptStruct* FPXREyeTrackingStartInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRMOTIONTRACKING_API uint32 Get_Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("PXREyeTrackingStartInfo"), sizeof(FPXREyeTrackingStartInfo), Get_Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Hash());
	}
	return Singleton;
}
template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<FPXREyeTrackingStartInfo>()
{
	return FPXREyeTrackingStartInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPXREyeTrackingStartInfo(FPXREyeTrackingStartInfo::StaticStruct, TEXT("/Script/PICOXRMotionTracking"), TEXT("PXREyeTrackingStartInfo"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXREyeTrackingStartInfo
{
	FScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXREyeTrackingStartInfo()
	{
		UScriptStruct::DeferCppStructOps<FPXREyeTrackingStartInfo>(FName(TEXT("PXREyeTrackingStartInfo")));
	}
} ScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXREyeTrackingStartInfo;
	struct Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeedCalibration_MetaData[];
#endif
		static void NewProp_NeedCalibration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedCalibration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StartMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StartMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPXREyeTrackingStartInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_NeedCalibration_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_NeedCalibration_SetBit(void* Obj)
	{
		((FPXREyeTrackingStartInfo*)Obj)->NeedCalibration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_NeedCalibration = { "NeedCalibration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPXREyeTrackingStartInfo), &Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_NeedCalibration_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_NeedCalibration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_NeedCalibration_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_StartMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_StartMode_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_StartMode = { "StartMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPXREyeTrackingStartInfo, StartMode), Z_Construct_UEnum_PICOXRMotionTracking_EPXREyeTrackingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_StartMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_StartMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_NeedCalibration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_StartMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::NewProp_StartMode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		&NewStructOps,
		"PXREyeTrackingStartInfo",
		sizeof(FPXREyeTrackingStartInfo),
		alignof(FPXREyeTrackingStartInfo),
		Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMotionTracking();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PXREyeTrackingStartInfo"), sizeof(FPXREyeTrackingStartInfo), Get_Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Hash() { return 883657217U; }
class UScriptStruct* FPXREyeTrackingState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRMOTIONTRACKING_API uint32 Get_Z_Construct_UScriptStruct_FPXREyeTrackingState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPXREyeTrackingState, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("PXREyeTrackingState"), sizeof(FPXREyeTrackingState), Get_Z_Construct_UScriptStruct_FPXREyeTrackingState_Hash());
	}
	return Singleton;
}
template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<FPXREyeTrackingState>()
{
	return FPXREyeTrackingState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPXREyeTrackingState(FPXREyeTrackingState::StaticStruct, TEXT("/Script/PICOXRMotionTracking"), TEXT("PXREyeTrackingState"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXREyeTrackingState
{
	FScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXREyeTrackingState()
	{
		UScriptStruct::DeferCppStructOps<FPXREyeTrackingState>(FName(TEXT("PXREyeTrackingState")));
	}
} ScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXREyeTrackingState;
	struct Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentTrackingMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTrackingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentTrackingMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackingStateCode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingStateCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TrackingStateCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPXREyeTrackingState>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_CurrentTrackingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_CurrentTrackingMode_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_CurrentTrackingMode = { "CurrentTrackingMode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPXREyeTrackingState, CurrentTrackingMode), Z_Construct_UEnum_PICOXRMotionTracking_EPXREyeTrackingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_CurrentTrackingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_CurrentTrackingMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_TrackingStateCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_TrackingStateCode_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_TrackingStateCode = { "TrackingStateCode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPXREyeTrackingState, TrackingStateCode), Z_Construct_UEnum_PICOXRMotionTracking_EPXRTrackingStateCode, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_TrackingStateCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_TrackingStateCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_CurrentTrackingMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_CurrentTrackingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_TrackingStateCode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::NewProp_TrackingStateCode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		&NewStructOps,
		"PXREyeTrackingState",
		sizeof(FPXREyeTrackingState),
		alignof(FPXREyeTrackingState),
		Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPXREyeTrackingState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPXREyeTrackingState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMotionTracking();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PXREyeTrackingState"), sizeof(FPXREyeTrackingState), Get_Z_Construct_UScriptStruct_FPXREyeTrackingState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPXREyeTrackingState_Hash() { return 394862561U; }
class UScriptStruct* FPXRFaceTrackingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRMOTIONTRACKING_API uint32 Get_Z_Construct_UScriptStruct_FPXRFaceTrackingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPXRFaceTrackingData, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("PXRFaceTrackingData"), sizeof(FPXRFaceTrackingData), Get_Z_Construct_UScriptStruct_FPXRFaceTrackingData_Hash());
	}
	return Singleton;
}
template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<FPXRFaceTrackingData>()
{
	return FPXRFaceTrackingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPXRFaceTrackingData(FPXRFaceTrackingData::StaticStruct, TEXT("/Script/PICOXRMotionTracking"), TEXT("PXRFaceTrackingData"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXRFaceTrackingData
{
	FScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXRFaceTrackingData()
	{
		UScriptStruct::DeferCppStructOps<FPXRFaceTrackingData>(FName(TEXT("PXRFaceTrackingData")));
	}
} ScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXRFaceTrackingData;
	struct Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendShapeWeights_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendShapeWeights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlendShapeWeights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_TimeStamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaughingProb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaughingProb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EyeValid_MetaData[];
#endif
		static void NewProp_EyeValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EyeValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceValid_MetaData[];
#endif
		static void NewProp_FaceValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FaceValid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPXRFaceTrackingData>();
	}
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_BlendShapeWeights_Inner = { "BlendShapeWeights", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_BlendShapeWeights_MetaData[] = {
		{ "Category", "PXR|FaceTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_BlendShapeWeights = { "BlendShapeWeights", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPXRFaceTrackingData, BlendShapeWeights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_BlendShapeWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_BlendShapeWeights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_TimeStamp_MetaData[] = {
		{ "Category", "PXR|FaceTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPXRFaceTrackingData, TimeStamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_TimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_TimeStamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_LaughingProb_MetaData[] = {
		{ "Category", "PXR|FaceTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_LaughingProb = { "LaughingProb", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPXRFaceTrackingData, LaughingProb), METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_LaughingProb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_LaughingProb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_EyeValid_MetaData[] = {
		{ "Category", "PXR|FaceTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_EyeValid_SetBit(void* Obj)
	{
		((FPXRFaceTrackingData*)Obj)->EyeValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_EyeValid = { "EyeValid", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPXRFaceTrackingData), &Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_EyeValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_EyeValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_EyeValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_FaceValid_MetaData[] = {
		{ "Category", "PXR|FaceTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_FaceValid_SetBit(void* Obj)
	{
		((FPXRFaceTrackingData*)Obj)->FaceValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_FaceValid = { "FaceValid", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPXRFaceTrackingData), &Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_FaceValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_FaceValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_FaceValid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_BlendShapeWeights_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_BlendShapeWeights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_TimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_LaughingProb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_EyeValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::NewProp_FaceValid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		&NewStructOps,
		"PXRFaceTrackingData",
		sizeof(FPXRFaceTrackingData),
		alignof(FPXRFaceTrackingData),
		Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPXRFaceTrackingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPXRFaceTrackingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMotionTracking();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PXRFaceTrackingData"), sizeof(FPXRFaceTrackingData), Get_Z_Construct_UScriptStruct_FPXRFaceTrackingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPXRFaceTrackingData_Hash() { return 1239023417U; }
class UScriptStruct* FPXRFaceTrackingDataGetInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRMOTIONTRACKING_API uint32 Get_Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("PXRFaceTrackingDataGetInfo"), sizeof(FPXRFaceTrackingDataGetInfo), Get_Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Hash());
	}
	return Singleton;
}
template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<FPXRFaceTrackingDataGetInfo>()
{
	return FPXRFaceTrackingDataGetInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPXRFaceTrackingDataGetInfo(FPXRFaceTrackingDataGetInfo::StaticStruct, TEXT("/Script/PICOXRMotionTracking"), TEXT("PXRFaceTrackingDataGetInfo"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXRFaceTrackingDataGetInfo
{
	FScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXRFaceTrackingDataGetInfo()
	{
		UScriptStruct::DeferCppStructOps<FPXRFaceTrackingDataGetInfo>(FName(TEXT("PXRFaceTrackingDataGetInfo")));
	}
} ScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXRFaceTrackingDataGetInfo;
	struct Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_DisplayTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPXRFaceTrackingDataGetInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::NewProp_DisplayTime_MetaData[] = {
		{ "Category", "PXR|FaceTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::NewProp_DisplayTime = { "DisplayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPXRFaceTrackingDataGetInfo, DisplayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::NewProp_DisplayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::NewProp_DisplayTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::NewProp_DisplayTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		&NewStructOps,
		"PXRFaceTrackingDataGetInfo",
		sizeof(FPXRFaceTrackingDataGetInfo),
		alignof(FPXRFaceTrackingDataGetInfo),
		Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMotionTracking();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PXRFaceTrackingDataGetInfo"), sizeof(FPXRFaceTrackingDataGetInfo), Get_Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Hash() { return 350549028U; }
class UScriptStruct* FPXRFaceTrackingStopInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRMOTIONTRACKING_API uint32 Get_Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("PXRFaceTrackingStopInfo"), sizeof(FPXRFaceTrackingStopInfo), Get_Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Hash());
	}
	return Singleton;
}
template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<FPXRFaceTrackingStopInfo>()
{
	return FPXRFaceTrackingStopInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPXRFaceTrackingStopInfo(FPXRFaceTrackingStopInfo::StaticStruct, TEXT("/Script/PICOXRMotionTracking"), TEXT("PXRFaceTrackingStopInfo"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXRFaceTrackingStopInfo
{
	FScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXRFaceTrackingStopInfo()
	{
		UScriptStruct::DeferCppStructOps<FPXRFaceTrackingStopInfo>(FName(TEXT("PXRFaceTrackingStopInfo")));
	}
} ScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXRFaceTrackingStopInfo;
	struct Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pause_MetaData[];
#endif
		static void NewProp_Pause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Pause;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPXRFaceTrackingStopInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::NewProp_Pause_MetaData[] = {
		{ "Category", "PXR|FaceTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::NewProp_Pause_SetBit(void* Obj)
	{
		((FPXRFaceTrackingStopInfo*)Obj)->Pause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::NewProp_Pause = { "Pause", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPXRFaceTrackingStopInfo), &Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::NewProp_Pause_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::NewProp_Pause_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::NewProp_Pause_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::NewProp_Pause,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		&NewStructOps,
		"PXRFaceTrackingStopInfo",
		sizeof(FPXRFaceTrackingStopInfo),
		alignof(FPXRFaceTrackingStopInfo),
		Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMotionTracking();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PXRFaceTrackingStopInfo"), sizeof(FPXRFaceTrackingStopInfo), Get_Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Hash() { return 2593535857U; }
class UScriptStruct* FPXRFaceTrackingStartInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRMOTIONTRACKING_API uint32 Get_Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("PXRFaceTrackingStartInfo"), sizeof(FPXRFaceTrackingStartInfo), Get_Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Hash());
	}
	return Singleton;
}
template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<FPXRFaceTrackingStartInfo>()
{
	return FPXRFaceTrackingStartInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPXRFaceTrackingStartInfo(FPXRFaceTrackingStartInfo::StaticStruct, TEXT("/Script/PICOXRMotionTracking"), TEXT("PXRFaceTrackingStartInfo"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXRFaceTrackingStartInfo
{
	FScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXRFaceTrackingStartInfo()
	{
		UScriptStruct::DeferCppStructOps<FPXRFaceTrackingStartInfo>(FName(TEXT("PXRFaceTrackingStartInfo")));
	}
} ScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXRFaceTrackingStartInfo;
	struct Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StartMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StartMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPXRFaceTrackingStartInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::NewProp_StartMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::NewProp_StartMode_MetaData[] = {
		{ "Category", "PXR|FaceTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::NewProp_StartMode = { "StartMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPXRFaceTrackingStartInfo, StartMode), Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceTrackingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::NewProp_StartMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::NewProp_StartMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::NewProp_StartMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::NewProp_StartMode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		&NewStructOps,
		"PXRFaceTrackingStartInfo",
		sizeof(FPXRFaceTrackingStartInfo),
		alignof(FPXRFaceTrackingStartInfo),
		Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMotionTracking();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PXRFaceTrackingStartInfo"), sizeof(FPXRFaceTrackingStartInfo), Get_Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Hash() { return 3923816141U; }
class UScriptStruct* FPXRFaceTrackingState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRMOTIONTRACKING_API uint32 Get_Z_Construct_UScriptStruct_FPXRFaceTrackingState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPXRFaceTrackingState, Z_Construct_UPackage__Script_PICOXRMotionTracking(), TEXT("PXRFaceTrackingState"), sizeof(FPXRFaceTrackingState), Get_Z_Construct_UScriptStruct_FPXRFaceTrackingState_Hash());
	}
	return Singleton;
}
template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<FPXRFaceTrackingState>()
{
	return FPXRFaceTrackingState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPXRFaceTrackingState(FPXRFaceTrackingState::StaticStruct, TEXT("/Script/PICOXRMotionTracking"), TEXT("PXRFaceTrackingState"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXRFaceTrackingState
{
	FScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXRFaceTrackingState()
	{
		UScriptStruct::DeferCppStructOps<FPXRFaceTrackingState>(FName(TEXT("PXRFaceTrackingState")));
	}
} ScriptStruct_PICOXRMotionTracking_StaticRegisterNativesFPXRFaceTrackingState;
	struct Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentTrackingMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTrackingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentTrackingMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackingStateCode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingStateCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TrackingStateCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPXRFaceTrackingState>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_CurrentTrackingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_CurrentTrackingMode_MetaData[] = {
		{ "Category", "PXR|FaceTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_CurrentTrackingMode = { "CurrentTrackingMode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPXRFaceTrackingState, CurrentTrackingMode), Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceTrackingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_CurrentTrackingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_CurrentTrackingMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_TrackingStateCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_TrackingStateCode_MetaData[] = {
		{ "Category", "PXR|FaceTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_TrackingStateCode = { "TrackingStateCode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPXRFaceTrackingState, TrackingStateCode), Z_Construct_UEnum_PICOXRMotionTracking_EPXRTrackingStateCode, METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_TrackingStateCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_TrackingStateCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_CurrentTrackingMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_CurrentTrackingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_TrackingStateCode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::NewProp_TrackingStateCode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
		nullptr,
		&NewStructOps,
		"PXRFaceTrackingState",
		sizeof(FPXRFaceTrackingState),
		alignof(FPXRFaceTrackingState),
		Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPXRFaceTrackingState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPXRFaceTrackingState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMotionTracking();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PXRFaceTrackingState"), sizeof(FPXRFaceTrackingState), Get_Z_Construct_UScriptStruct_FPXRFaceTrackingState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPXRFaceTrackingState_Hash() { return 320751417U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
