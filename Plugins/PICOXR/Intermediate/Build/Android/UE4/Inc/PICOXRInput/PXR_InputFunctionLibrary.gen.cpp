// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRInput/Public/PXR_InputFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_InputFunctionLibrary() {}
// Cross Module References
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_ESwiftMode();
	UPackage* Z_Construct_UPackage__Script_PICOXRInput();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPxrBodyActionList();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPxrBodyTrackerRole();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPxrControllerKeyMap();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EBodyActionList();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRCacheConfig();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRChannelFlip();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRVibrateController();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRControllerDeviceType();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRGazeBehavior();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRArmModelJoint();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRControllerType();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRHandedness();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRHandType();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRHandFinger();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRActiveInputDevice();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRHandTrackingConfidence();
	PICOXRINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FPHFJsonData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	PICOXRINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FPHFJsonFrameData();
	PICOXRINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FPHFData();
	PICOXRINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FPHFDataContent();
	PICOXRINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FAudioClipData();
	PICOXRINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FBodyTrackingBoneLength();
	PICOXRINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FPxrBodyTrackingTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PICOXRINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FFitnessBandConnectState();
	PICOXRINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FPxrBodyTrackingImu();
	PICOXRINPUT_API UClass* Z_Construct_UClass_UPICOXRInputFunctionLibrary_NoRegister();
	PICOXRINPUT_API UClass* Z_Construct_UClass_UPICOXRInputFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
// End Cross Module References
	static UEnum* ESwiftMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_ESwiftMode, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("ESwiftMode"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<ESwiftMode>()
	{
		return ESwiftMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESwiftMode(ESwiftMode_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("ESwiftMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_ESwiftMode_Hash() { return 2537160094U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_ESwiftMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESwiftMode"), 0, Get_Z_Construct_UEnum_PICOXRInput_ESwiftMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESwiftMode::SWIFT_DEFAULT", (int64)ESwiftMode::SWIFT_DEFAULT },
				{ "ESwiftMode::SWIFT_FULLBODY", (int64)ESwiftMode::SWIFT_FULLBODY },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "SWIFT_DEFAULT.DisplayName", "Default" },
				{ "SWIFT_DEFAULT.Name", "ESwiftMode::SWIFT_DEFAULT" },
				{ "SWIFT_FULLBODY.DisplayName", "Full Body" },
				{ "SWIFT_FULLBODY.Name", "ESwiftMode::SWIFT_FULLBODY" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"ESwiftMode",
				"ESwiftMode",
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
	static UEnum* EPxrBodyActionList_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPxrBodyActionList, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPxrBodyActionList"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPxrBodyActionList>()
	{
		return EPxrBodyActionList_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPxrBodyActionList(EPxrBodyActionList_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPxrBodyActionList"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPxrBodyActionList_Hash() { return 1246435670U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPxrBodyActionList()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPxrBodyActionList"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPxrBodyActionList_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPxrBodyActionList::NoneAction", (int64)EPxrBodyActionList::NoneAction },
				{ "EPxrBodyActionList::TouchGround", (int64)EPxrBodyActionList::TouchGround },
				{ "EPxrBodyActionList::KeepStatic", (int64)EPxrBodyActionList::KeepStatic },
				{ "EPxrBodyActionList::TouchGroundAndKeepStatic", (int64)EPxrBodyActionList::TouchGroundAndKeepStatic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "KeepStatic.Name", "EPxrBodyActionList::KeepStatic" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "NoneAction.Name", "EPxrBodyActionList::NoneAction" },
				{ "TouchGround.Name", "EPxrBodyActionList::TouchGround" },
				{ "TouchGroundAndKeepStatic.Name", "EPxrBodyActionList::TouchGroundAndKeepStatic" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPxrBodyActionList",
				"EPxrBodyActionList",
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
	static UEnum* EPxrBodyTrackerRole_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPxrBodyTrackerRole, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPxrBodyTrackerRole"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPxrBodyTrackerRole>()
	{
		return EPxrBodyTrackerRole_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPxrBodyTrackerRole(EPxrBodyTrackerRole_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPxrBodyTrackerRole"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPxrBodyTrackerRole_Hash() { return 547490280U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPxrBodyTrackerRole()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPxrBodyTrackerRole"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPxrBodyTrackerRole_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPxrBodyTrackerRole::PxrPelvis", (int64)EPxrBodyTrackerRole::PxrPelvis },
				{ "EPxrBodyTrackerRole::Pxr_LEFT_HIP", (int64)EPxrBodyTrackerRole::Pxr_LEFT_HIP },
				{ "EPxrBodyTrackerRole::Pxr_RIGHT_HIP", (int64)EPxrBodyTrackerRole::Pxr_RIGHT_HIP },
				{ "EPxrBodyTrackerRole::Pxr_SPINE1", (int64)EPxrBodyTrackerRole::Pxr_SPINE1 },
				{ "EPxrBodyTrackerRole::Pxr_LEFT_KNEE", (int64)EPxrBodyTrackerRole::Pxr_LEFT_KNEE },
				{ "EPxrBodyTrackerRole::Pxr_RIGHT_KNEE", (int64)EPxrBodyTrackerRole::Pxr_RIGHT_KNEE },
				{ "EPxrBodyTrackerRole::Pxr_SPINE2", (int64)EPxrBodyTrackerRole::Pxr_SPINE2 },
				{ "EPxrBodyTrackerRole::Pxr_LEFT_ANKLE", (int64)EPxrBodyTrackerRole::Pxr_LEFT_ANKLE },
				{ "EPxrBodyTrackerRole::Pxr_RIGHT_ANKLE", (int64)EPxrBodyTrackerRole::Pxr_RIGHT_ANKLE },
				{ "EPxrBodyTrackerRole::Pxr_SPINE3", (int64)EPxrBodyTrackerRole::Pxr_SPINE3 },
				{ "EPxrBodyTrackerRole::Pxr_LEFT_FOOT", (int64)EPxrBodyTrackerRole::Pxr_LEFT_FOOT },
				{ "EPxrBodyTrackerRole::Pxr_RIGHT_FOOT", (int64)EPxrBodyTrackerRole::Pxr_RIGHT_FOOT },
				{ "EPxrBodyTrackerRole::Pxr_NECK", (int64)EPxrBodyTrackerRole::Pxr_NECK },
				{ "EPxrBodyTrackerRole::Pxr_LEFT_COLLAR", (int64)EPxrBodyTrackerRole::Pxr_LEFT_COLLAR },
				{ "EPxrBodyTrackerRole::Pxr_RIGHT_COLLAR", (int64)EPxrBodyTrackerRole::Pxr_RIGHT_COLLAR },
				{ "EPxrBodyTrackerRole::Pxr_HEAD", (int64)EPxrBodyTrackerRole::Pxr_HEAD },
				{ "EPxrBodyTrackerRole::Pxr_LEFT_SHOULDER", (int64)EPxrBodyTrackerRole::Pxr_LEFT_SHOULDER },
				{ "EPxrBodyTrackerRole::Pxr_RIGHT_SHOULDER", (int64)EPxrBodyTrackerRole::Pxr_RIGHT_SHOULDER },
				{ "EPxrBodyTrackerRole::Pxr_LEFT_ELBOW", (int64)EPxrBodyTrackerRole::Pxr_LEFT_ELBOW },
				{ "EPxrBodyTrackerRole::Pxr_RIGHT_ELBOW", (int64)EPxrBodyTrackerRole::Pxr_RIGHT_ELBOW },
				{ "EPxrBodyTrackerRole::Pxr_LEFT_WRIST", (int64)EPxrBodyTrackerRole::Pxr_LEFT_WRIST },
				{ "EPxrBodyTrackerRole::Pxr_RIGHT_WRIST", (int64)EPxrBodyTrackerRole::Pxr_RIGHT_WRIST },
				{ "EPxrBodyTrackerRole::Pxr_LEFT_HAND", (int64)EPxrBodyTrackerRole::Pxr_LEFT_HAND },
				{ "EPxrBodyTrackerRole::Pxr_RIGHT_HAND", (int64)EPxrBodyTrackerRole::Pxr_RIGHT_HAND },
				{ "EPxrBodyTrackerRole::Pxr_ROLE_COUNT", (int64)EPxrBodyTrackerRole::Pxr_ROLE_COUNT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "Pxr_HEAD.DisplayName", "HEAD" },
				{ "Pxr_HEAD.Name", "EPxrBodyTrackerRole::Pxr_HEAD" },
				{ "Pxr_LEFT_ANKLE.DisplayName", "LEFT_ANKLE" },
				{ "Pxr_LEFT_ANKLE.Name", "EPxrBodyTrackerRole::Pxr_LEFT_ANKLE" },
				{ "Pxr_LEFT_COLLAR.DisplayName", "LEFT_COLLAR" },
				{ "Pxr_LEFT_COLLAR.Name", "EPxrBodyTrackerRole::Pxr_LEFT_COLLAR" },
				{ "Pxr_LEFT_ELBOW.DisplayName", "LEFT_ELBOW" },
				{ "Pxr_LEFT_ELBOW.Name", "EPxrBodyTrackerRole::Pxr_LEFT_ELBOW" },
				{ "Pxr_LEFT_FOOT.DisplayName", "LEFT_FOOT" },
				{ "Pxr_LEFT_FOOT.Name", "EPxrBodyTrackerRole::Pxr_LEFT_FOOT" },
				{ "Pxr_LEFT_HAND.DisplayName", "LEFT_HAND" },
				{ "Pxr_LEFT_HAND.Name", "EPxrBodyTrackerRole::Pxr_LEFT_HAND" },
				{ "Pxr_LEFT_HIP.DisplayName", "LEFT_HIP" },
				{ "Pxr_LEFT_HIP.Name", "EPxrBodyTrackerRole::Pxr_LEFT_HIP" },
				{ "Pxr_LEFT_KNEE.DisplayName", "LEFT_KNEE" },
				{ "Pxr_LEFT_KNEE.Name", "EPxrBodyTrackerRole::Pxr_LEFT_KNEE" },
				{ "Pxr_LEFT_SHOULDER.DisplayName", "LEFT_SHOULDER" },
				{ "Pxr_LEFT_SHOULDER.Name", "EPxrBodyTrackerRole::Pxr_LEFT_SHOULDER" },
				{ "Pxr_LEFT_WRIST.DisplayName", "LEFT_WRIST" },
				{ "Pxr_LEFT_WRIST.Name", "EPxrBodyTrackerRole::Pxr_LEFT_WRIST" },
				{ "Pxr_NECK.DisplayName", "NECK" },
				{ "Pxr_NECK.Name", "EPxrBodyTrackerRole::Pxr_NECK" },
				{ "Pxr_RIGHT_ANKLE.DisplayName", "RIGHT_ANKLE" },
				{ "Pxr_RIGHT_ANKLE.Name", "EPxrBodyTrackerRole::Pxr_RIGHT_ANKLE" },
				{ "Pxr_RIGHT_COLLAR.DisplayName", "RIGHT_COLLAR" },
				{ "Pxr_RIGHT_COLLAR.Name", "EPxrBodyTrackerRole::Pxr_RIGHT_COLLAR" },
				{ "Pxr_RIGHT_ELBOW.DisplayName", "RIGHT_ELBOW" },
				{ "Pxr_RIGHT_ELBOW.Name", "EPxrBodyTrackerRole::Pxr_RIGHT_ELBOW" },
				{ "Pxr_RIGHT_FOOT.DisplayName", "RIGHT_FOOT" },
				{ "Pxr_RIGHT_FOOT.Name", "EPxrBodyTrackerRole::Pxr_RIGHT_FOOT" },
				{ "Pxr_RIGHT_HAND.DisplayName", "RIGHT_HAND" },
				{ "Pxr_RIGHT_HAND.Name", "EPxrBodyTrackerRole::Pxr_RIGHT_HAND" },
				{ "Pxr_RIGHT_HIP.DisplayName", "RIGHT_HIP" },
				{ "Pxr_RIGHT_HIP.Name", "EPxrBodyTrackerRole::Pxr_RIGHT_HIP" },
				{ "Pxr_RIGHT_KNEE.DisplayName", "RIGHT_KNEE" },
				{ "Pxr_RIGHT_KNEE.Name", "EPxrBodyTrackerRole::Pxr_RIGHT_KNEE" },
				{ "Pxr_RIGHT_SHOULDER.DisplayName", "RIGHT_SHOULDER" },
				{ "Pxr_RIGHT_SHOULDER.Name", "EPxrBodyTrackerRole::Pxr_RIGHT_SHOULDER" },
				{ "Pxr_RIGHT_WRIST.DisplayName", "RIGHT_WRIST" },
				{ "Pxr_RIGHT_WRIST.Name", "EPxrBodyTrackerRole::Pxr_RIGHT_WRIST" },
				{ "Pxr_ROLE_COUNT.DisplayName", "Pxr_ROLE_COUNT" },
				{ "Pxr_ROLE_COUNT.Name", "EPxrBodyTrackerRole::Pxr_ROLE_COUNT" },
				{ "Pxr_SPINE1.DisplayName", "SPINE1" },
				{ "Pxr_SPINE1.Name", "EPxrBodyTrackerRole::Pxr_SPINE1" },
				{ "Pxr_SPINE2.DisplayName", "SPINE2" },
				{ "Pxr_SPINE2.Name", "EPxrBodyTrackerRole::Pxr_SPINE2" },
				{ "Pxr_SPINE3.DisplayName", "SPINE3" },
				{ "Pxr_SPINE3.Name", "EPxrBodyTrackerRole::Pxr_SPINE3" },
				{ "PxrPelvis.DisplayName", "Pelvis" },
				{ "PxrPelvis.Name", "EPxrBodyTrackerRole::PxrPelvis" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPxrBodyTrackerRole",
				"EPxrBodyTrackerRole",
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
	static UEnum* EPxrControllerKeyMap_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPxrControllerKeyMap, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPxrControllerKeyMap"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPxrControllerKeyMap>()
	{
		return EPxrControllerKeyMap_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPxrControllerKeyMap(EPxrControllerKeyMap_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPxrControllerKeyMap"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPxrControllerKeyMap_Hash() { return 3163073564U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPxrControllerKeyMap()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPxrControllerKeyMap"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPxrControllerKeyMap_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_HOME", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_HOME },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_AX", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_AX },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_BY", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_BY },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_BACK", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_BACK },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_TRIGGER", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_TRIGGER },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_VOL_UP", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_VOL_UP },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_VOL_DOWN", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_VOL_DOWN },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_ROCKER", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_ROCKER },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_GRIP", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_GRIP },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_TOUCHPAD", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_TOUCHPAD },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_LASTONE", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_LASTONE },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_AX", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_AX },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_BY", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_BY },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_ROCKER", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_ROCKER },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_TRIGGER", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_TRIGGER },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_THUMB", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_THUMB },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_LASTONE", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_LASTONE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "PXR_CONTROLLER_KEY_AX.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_AX" },
				{ "PXR_CONTROLLER_KEY_BACK.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_BACK" },
				{ "PXR_CONTROLLER_KEY_BY.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_BY" },
				{ "PXR_CONTROLLER_KEY_GRIP.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_GRIP" },
				{ "PXR_CONTROLLER_KEY_HOME.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_HOME" },
				{ "PXR_CONTROLLER_KEY_LASTONE.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_LASTONE" },
				{ "PXR_CONTROLLER_KEY_ROCKER.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_ROCKER" },
				{ "PXR_CONTROLLER_KEY_TOUCHPAD.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_TOUCHPAD" },
				{ "PXR_CONTROLLER_KEY_TRIGGER.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_TRIGGER" },
				{ "PXR_CONTROLLER_KEY_VOL_DOWN.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_VOL_DOWN" },
				{ "PXR_CONTROLLER_KEY_VOL_UP.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_VOL_UP" },
				{ "PXR_CONTROLLER_TOUCH_AX.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_AX" },
				{ "PXR_CONTROLLER_TOUCH_BY.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_BY" },
				{ "PXR_CONTROLLER_TOUCH_LASTONE.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_LASTONE" },
				{ "PXR_CONTROLLER_TOUCH_ROCKER.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_ROCKER" },
				{ "PXR_CONTROLLER_TOUCH_THUMB.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_THUMB" },
				{ "PXR_CONTROLLER_TOUCH_TRIGGER.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_TRIGGER" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPxrControllerKeyMap",
				"EPxrControllerKeyMap",
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
	static UEnum* EBodyActionList_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EBodyActionList, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EBodyActionList"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EBodyActionList>()
	{
		return EBodyActionList_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBodyActionList(EBodyActionList_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EBodyActionList"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EBodyActionList_Hash() { return 3726586439U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EBodyActionList()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBodyActionList"), 0, Get_Z_Construct_UEnum_PICOXRInput_EBodyActionList_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBodyActionList::PxrNoneAction", (int64)EBodyActionList::PxrNoneAction },
				{ "EBodyActionList::PxrTouchGround", (int64)EBodyActionList::PxrTouchGround },
				{ "EBodyActionList::PxrKeepStatic", (int64)EBodyActionList::PxrKeepStatic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "PxrKeepStatic.Name", "EBodyActionList::PxrKeepStatic" },
				{ "PxrNoneAction.Name", "EBodyActionList::PxrNoneAction" },
				{ "PxrTouchGround.Name", "EBodyActionList::PxrTouchGround" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EBodyActionList",
				"EBodyActionList",
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
	static UEnum* EPICOXRCacheConfig_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPICOXRCacheConfig, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPICOXRCacheConfig"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRCacheConfig>()
	{
		return EPICOXRCacheConfig_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRCacheConfig(EPICOXRCacheConfig_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPICOXRCacheConfig"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPICOXRCacheConfig_Hash() { return 623052534U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRCacheConfig()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRCacheConfig"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPICOXRCacheConfig_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRCacheConfig::CacheAndVibrate", (int64)EPICOXRCacheConfig::CacheAndVibrate },
				{ "EPICOXRCacheConfig::CacheNoVibrate", (int64)EPICOXRCacheConfig::CacheNoVibrate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CacheAndVibrate.Name", "EPICOXRCacheConfig::CacheAndVibrate" },
				{ "CacheNoVibrate.Name", "EPICOXRCacheConfig::CacheNoVibrate" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPICOXRCacheConfig",
				"EPICOXRCacheConfig",
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
	static UEnum* EPICOXRChannelFlip_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPICOXRChannelFlip, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPICOXRChannelFlip"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRChannelFlip>()
	{
		return EPICOXRChannelFlip_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRChannelFlip(EPICOXRChannelFlip_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPICOXRChannelFlip"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPICOXRChannelFlip_Hash() { return 3889352329U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRChannelFlip()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRChannelFlip"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPICOXRChannelFlip_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRChannelFlip::No", (int64)EPICOXRChannelFlip::No },
				{ "EPICOXRChannelFlip::Yes", (int64)EPICOXRChannelFlip::Yes },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "No.Name", "EPICOXRChannelFlip::No" },
				{ "Yes.Name", "EPICOXRChannelFlip::Yes" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPICOXRChannelFlip",
				"EPICOXRChannelFlip",
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
	static UEnum* EPICOXRVibrateController_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPICOXRVibrateController, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPICOXRVibrateController"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRVibrateController>()
	{
		return EPICOXRVibrateController_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRVibrateController(EPICOXRVibrateController_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPICOXRVibrateController"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPICOXRVibrateController_Hash() { return 2694829575U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRVibrateController()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRVibrateController"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPICOXRVibrateController_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRVibrateController::No", (int64)EPICOXRVibrateController::No },
				{ "EPICOXRVibrateController::Left", (int64)EPICOXRVibrateController::Left },
				{ "EPICOXRVibrateController::Right", (int64)EPICOXRVibrateController::Right },
				{ "EPICOXRVibrateController::LeftAndRight", (int64)EPICOXRVibrateController::LeftAndRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Left.Name", "EPICOXRVibrateController::Left" },
				{ "LeftAndRight.Name", "EPICOXRVibrateController::LeftAndRight" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "No.Name", "EPICOXRVibrateController::No" },
				{ "Right.Name", "EPICOXRVibrateController::Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPICOXRVibrateController",
				"EPICOXRVibrateController",
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
	static UEnum* EPICOXRControllerDeviceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPICOXRControllerDeviceType, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPICOXRControllerDeviceType"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRControllerDeviceType>()
	{
		return EPICOXRControllerDeviceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRControllerDeviceType(EPICOXRControllerDeviceType_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPICOXRControllerDeviceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPICOXRControllerDeviceType_Hash() { return 1386893825U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRControllerDeviceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRControllerDeviceType"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPICOXRControllerDeviceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRControllerDeviceType::UnKnown", (int64)EPICOXRControllerDeviceType::UnKnown },
				{ "EPICOXRControllerDeviceType::G2", (int64)EPICOXRControllerDeviceType::G2 },
				{ "EPICOXRControllerDeviceType::Neo2", (int64)EPICOXRControllerDeviceType::Neo2 },
				{ "EPICOXRControllerDeviceType::Neo3", (int64)EPICOXRControllerDeviceType::Neo3 },
				{ "EPICOXRControllerDeviceType::PICO_4", (int64)EPICOXRControllerDeviceType::PICO_4 },
				{ "EPICOXRControllerDeviceType::G3", (int64)EPICOXRControllerDeviceType::G3 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "G2.DisplayName", "PICO G2" },
				{ "G2.Name", "EPICOXRControllerDeviceType::G2" },
				{ "G3.DisplayName", "PICO G3" },
				{ "G3.Name", "EPICOXRControllerDeviceType::G3" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "Neo2.DisplayName", "PICO Neo2" },
				{ "Neo2.Name", "EPICOXRControllerDeviceType::Neo2" },
				{ "Neo3.DisplayName", "PICO Neo3" },
				{ "Neo3.Name", "EPICOXRControllerDeviceType::Neo3" },
				{ "PICO_4.DisplayName", "PICO 4" },
				{ "PICO_4.Name", "EPICOXRControllerDeviceType::PICO_4" },
				{ "UnKnown.DisplayName", "Unknown Controller" },
				{ "UnKnown.Name", "EPICOXRControllerDeviceType::UnKnown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPICOXRControllerDeviceType",
				"EPICOXRControllerDeviceType",
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
	static UEnum* EPICOXRGazeBehavior_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPICOXRGazeBehavior, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPICOXRGazeBehavior"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRGazeBehavior>()
	{
		return EPICOXRGazeBehavior_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRGazeBehavior(EPICOXRGazeBehavior_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPICOXRGazeBehavior"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPICOXRGazeBehavior_Hash() { return 3110315021U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRGazeBehavior()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRGazeBehavior"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPICOXRGazeBehavior_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRGazeBehavior::Never", (int64)EPICOXRGazeBehavior::Never },
				{ "EPICOXRGazeBehavior::DuringMotion", (int64)EPICOXRGazeBehavior::DuringMotion },
				{ "EPICOXRGazeBehavior::Always", (int64)EPICOXRGazeBehavior::Always },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Always.Name", "EPICOXRGazeBehavior::Always" },
				{ "BlueprintType", "true" },
				{ "DuringMotion.Name", "EPICOXRGazeBehavior::DuringMotion" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "Never.Name", "EPICOXRGazeBehavior::Never" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPICOXRGazeBehavior",
				"EPICOXRGazeBehavior",
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
	static UEnum* EPICOXRArmModelJoint_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPICOXRArmModelJoint, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPICOXRArmModelJoint"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRArmModelJoint>()
	{
		return EPICOXRArmModelJoint_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRArmModelJoint(EPICOXRArmModelJoint_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPICOXRArmModelJoint"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPICOXRArmModelJoint_Hash() { return 3840924960U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRArmModelJoint()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRArmModelJoint"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPICOXRArmModelJoint_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRArmModelJoint::Controller", (int64)EPICOXRArmModelJoint::Controller },
				{ "EPICOXRArmModelJoint::Wrist", (int64)EPICOXRArmModelJoint::Wrist },
				{ "EPICOXRArmModelJoint::Elbow", (int64)EPICOXRArmModelJoint::Elbow },
				{ "EPICOXRArmModelJoint::Shoulder", (int64)EPICOXRArmModelJoint::Shoulder },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Controller.Name", "EPICOXRArmModelJoint::Controller" },
				{ "Elbow.Name", "EPICOXRArmModelJoint::Elbow" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "Shoulder.Name", "EPICOXRArmModelJoint::Shoulder" },
				{ "Wrist.Name", "EPICOXRArmModelJoint::Wrist" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPICOXRArmModelJoint",
				"EPICOXRArmModelJoint",
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
	static UEnum* EPICOXRControllerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPICOXRControllerType, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPICOXRControllerType"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRControllerType>()
	{
		return EPICOXRControllerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRControllerType(EPICOXRControllerType_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPICOXRControllerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPICOXRControllerType_Hash() { return 2397668759U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRControllerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRControllerType"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPICOXRControllerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRControllerType::LeftHand", (int64)EPICOXRControllerType::LeftHand },
				{ "EPICOXRControllerType::RightHand", (int64)EPICOXRControllerType::RightHand },
				{ "EPICOXRControllerType::G2Hand", (int64)EPICOXRControllerType::G2Hand },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "G2Hand.DisplayName", "PICO G2 Hand" },
				{ "G2Hand.Name", "EPICOXRControllerType::G2Hand" },
				{ "LeftHand.DisplayName", "PICO LeftHand" },
				{ "LeftHand.Name", "EPICOXRControllerType::LeftHand" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "RightHand.DisplayName", "PICO RightHand" },
				{ "RightHand.Name", "EPICOXRControllerType::RightHand" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPICOXRControllerType",
				"EPICOXRControllerType",
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
	static UEnum* EPICOXRHandedness_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPICOXRHandedness, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPICOXRHandedness"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRHandedness>()
	{
		return EPICOXRHandedness_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRHandedness(EPICOXRHandedness_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPICOXRHandedness"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPICOXRHandedness_Hash() { return 1317791765U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRHandedness()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRHandedness"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPICOXRHandedness_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRHandedness::LeftHand", (int64)EPICOXRHandedness::LeftHand },
				{ "EPICOXRHandedness::RightHand", (int64)EPICOXRHandedness::RightHand },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LeftHand.Name", "EPICOXRHandedness::LeftHand" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "RightHand.Name", "EPICOXRHandedness::RightHand" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPICOXRHandedness",
				"EPICOXRHandedness",
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
	static UEnum* EPICOXRHandType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPICOXRHandType"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRHandType>()
	{
		return EPICOXRHandType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRHandType(EPICOXRHandType_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPICOXRHandType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPICOXRHandType_Hash() { return 3678798382U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRHandType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRHandType"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPICOXRHandType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRHandType::None", (int64)EPICOXRHandType::None },
				{ "EPICOXRHandType::HandLeft", (int64)EPICOXRHandType::HandLeft },
				{ "EPICOXRHandType::HandRight", (int64)EPICOXRHandType::HandRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HandLeft.Name", "EPICOXRHandType::HandLeft" },
				{ "HandRight.Name", "EPICOXRHandType::HandRight" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "None.Name", "EPICOXRHandType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPICOXRHandType",
				"EPICOXRHandType",
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
	static UEnum* EPICOXRHandJoint_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPICOXRHandJoint"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRHandJoint>()
	{
		return EPICOXRHandJoint_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRHandJoint(EPICOXRHandJoint_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPICOXRHandJoint"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint_Hash() { return 3279674004U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRHandJoint"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRHandJoint::Palm", (int64)EPICOXRHandJoint::Palm },
				{ "EPICOXRHandJoint::Wrist", (int64)EPICOXRHandJoint::Wrist },
				{ "EPICOXRHandJoint::ThumbMetacarpal", (int64)EPICOXRHandJoint::ThumbMetacarpal },
				{ "EPICOXRHandJoint::ThumbProximal", (int64)EPICOXRHandJoint::ThumbProximal },
				{ "EPICOXRHandJoint::ThumbDistal", (int64)EPICOXRHandJoint::ThumbDistal },
				{ "EPICOXRHandJoint::ThumbTip", (int64)EPICOXRHandJoint::ThumbTip },
				{ "EPICOXRHandJoint::IndexMetacarpal", (int64)EPICOXRHandJoint::IndexMetacarpal },
				{ "EPICOXRHandJoint::IndexProximal", (int64)EPICOXRHandJoint::IndexProximal },
				{ "EPICOXRHandJoint::IndexIntermediate", (int64)EPICOXRHandJoint::IndexIntermediate },
				{ "EPICOXRHandJoint::IndexDistal", (int64)EPICOXRHandJoint::IndexDistal },
				{ "EPICOXRHandJoint::IndexTip", (int64)EPICOXRHandJoint::IndexTip },
				{ "EPICOXRHandJoint::MiddleMetacarpal", (int64)EPICOXRHandJoint::MiddleMetacarpal },
				{ "EPICOXRHandJoint::MiddleProximal", (int64)EPICOXRHandJoint::MiddleProximal },
				{ "EPICOXRHandJoint::MiddleIntermediate", (int64)EPICOXRHandJoint::MiddleIntermediate },
				{ "EPICOXRHandJoint::MiddleDistal", (int64)EPICOXRHandJoint::MiddleDistal },
				{ "EPICOXRHandJoint::MiddleTip", (int64)EPICOXRHandJoint::MiddleTip },
				{ "EPICOXRHandJoint::RingMetacarpal", (int64)EPICOXRHandJoint::RingMetacarpal },
				{ "EPICOXRHandJoint::RingProximal", (int64)EPICOXRHandJoint::RingProximal },
				{ "EPICOXRHandJoint::RingIntermediate", (int64)EPICOXRHandJoint::RingIntermediate },
				{ "EPICOXRHandJoint::RingDistal", (int64)EPICOXRHandJoint::RingDistal },
				{ "EPICOXRHandJoint::RingTip", (int64)EPICOXRHandJoint::RingTip },
				{ "EPICOXRHandJoint::LittleMetacarpal", (int64)EPICOXRHandJoint::LittleMetacarpal },
				{ "EPICOXRHandJoint::LittleProximal", (int64)EPICOXRHandJoint::LittleProximal },
				{ "EPICOXRHandJoint::LittleIntermediate", (int64)EPICOXRHandJoint::LittleIntermediate },
				{ "EPICOXRHandJoint::LittleDistal", (int64)EPICOXRHandJoint::LittleDistal },
				{ "EPICOXRHandJoint::LittleTip", (int64)EPICOXRHandJoint::LittleTip },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IndexDistal.Name", "EPICOXRHandJoint::IndexDistal" },
				{ "IndexIntermediate.Name", "EPICOXRHandJoint::IndexIntermediate" },
				{ "IndexMetacarpal.Name", "EPICOXRHandJoint::IndexMetacarpal" },
				{ "IndexProximal.Name", "EPICOXRHandJoint::IndexProximal" },
				{ "IndexTip.Name", "EPICOXRHandJoint::IndexTip" },
				{ "LittleDistal.Name", "EPICOXRHandJoint::LittleDistal" },
				{ "LittleIntermediate.Name", "EPICOXRHandJoint::LittleIntermediate" },
				{ "LittleMetacarpal.Name", "EPICOXRHandJoint::LittleMetacarpal" },
				{ "LittleProximal.Name", "EPICOXRHandJoint::LittleProximal" },
				{ "LittleTip.Name", "EPICOXRHandJoint::LittleTip" },
				{ "MiddleDistal.Name", "EPICOXRHandJoint::MiddleDistal" },
				{ "MiddleIntermediate.Name", "EPICOXRHandJoint::MiddleIntermediate" },
				{ "MiddleMetacarpal.Name", "EPICOXRHandJoint::MiddleMetacarpal" },
				{ "MiddleProximal.Name", "EPICOXRHandJoint::MiddleProximal" },
				{ "MiddleTip.Name", "EPICOXRHandJoint::MiddleTip" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "Palm.Name", "EPICOXRHandJoint::Palm" },
				{ "RingDistal.Name", "EPICOXRHandJoint::RingDistal" },
				{ "RingIntermediate.Name", "EPICOXRHandJoint::RingIntermediate" },
				{ "RingMetacarpal.Name", "EPICOXRHandJoint::RingMetacarpal" },
				{ "RingProximal.Name", "EPICOXRHandJoint::RingProximal" },
				{ "RingTip.Name", "EPICOXRHandJoint::RingTip" },
				{ "ThumbDistal.Name", "EPICOXRHandJoint::ThumbDistal" },
				{ "ThumbMetacarpal.Name", "EPICOXRHandJoint::ThumbMetacarpal" },
				{ "ThumbProximal.Name", "EPICOXRHandJoint::ThumbProximal" },
				{ "ThumbTip.Name", "EPICOXRHandJoint::ThumbTip" },
				{ "Wrist.Name", "EPICOXRHandJoint::Wrist" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPICOXRHandJoint",
				"EPICOXRHandJoint",
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
	static UEnum* EPICOXRHandFinger_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPICOXRHandFinger, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPICOXRHandFinger"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRHandFinger>()
	{
		return EPICOXRHandFinger_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRHandFinger(EPICOXRHandFinger_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPICOXRHandFinger"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPICOXRHandFinger_Hash() { return 1359106234U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRHandFinger()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRHandFinger"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPICOXRHandFinger_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRHandFinger::None", (int64)EPICOXRHandFinger::None },
				{ "EPICOXRHandFinger::Index", (int64)EPICOXRHandFinger::Index },
				{ "EPICOXRHandFinger::Middle", (int64)EPICOXRHandFinger::Middle },
				{ "EPICOXRHandFinger::Ring", (int64)EPICOXRHandFinger::Ring },
				{ "EPICOXRHandFinger::Pinky", (int64)EPICOXRHandFinger::Pinky },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Index.Name", "EPICOXRHandFinger::Index" },
				{ "Middle.Name", "EPICOXRHandFinger::Middle" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "None.Name", "EPICOXRHandFinger::None" },
				{ "Pinky.Name", "EPICOXRHandFinger::Pinky" },
				{ "Ring.Name", "EPICOXRHandFinger::Ring" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPICOXRHandFinger",
				"EPICOXRHandFinger",
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
	static UEnum* EPICOXRActiveInputDevice_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPICOXRActiveInputDevice, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPICOXRActiveInputDevice"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRActiveInputDevice>()
	{
		return EPICOXRActiveInputDevice_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRActiveInputDevice(EPICOXRActiveInputDevice_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPICOXRActiveInputDevice"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPICOXRActiveInputDevice_Hash() { return 342907113U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRActiveInputDevice()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRActiveInputDevice"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPICOXRActiveInputDevice_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRActiveInputDevice::NoneActive", (int64)EPICOXRActiveInputDevice::NoneActive },
				{ "EPICOXRActiveInputDevice::ControllerActive", (int64)EPICOXRActiveInputDevice::ControllerActive },
				{ "EPICOXRActiveInputDevice::HandTrackingActive", (int64)EPICOXRActiveInputDevice::HandTrackingActive },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ControllerActive.Name", "EPICOXRActiveInputDevice::ControllerActive" },
				{ "HandTrackingActive.Name", "EPICOXRActiveInputDevice::HandTrackingActive" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "NoneActive.Name", "EPICOXRActiveInputDevice::NoneActive" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPICOXRActiveInputDevice",
				"EPICOXRActiveInputDevice",
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
	static UEnum* EPICOXRHandTrackingConfidence_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRInput_EPICOXRHandTrackingConfidence, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("EPICOXRHandTrackingConfidence"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRHandTrackingConfidence>()
	{
		return EPICOXRHandTrackingConfidence_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOXRHandTrackingConfidence(EPICOXRHandTrackingConfidence_StaticEnum, TEXT("/Script/PICOXRInput"), TEXT("EPICOXRHandTrackingConfidence"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRInput_EPICOXRHandTrackingConfidence_Hash() { return 2861642777U; }
	UEnum* Z_Construct_UEnum_PICOXRInput_EPICOXRHandTrackingConfidence()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOXRHandTrackingConfidence"), 0, Get_Z_Construct_UEnum_PICOXRInput_EPICOXRHandTrackingConfidence_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOXRHandTrackingConfidence::Low", (int64)EPICOXRHandTrackingConfidence::Low },
				{ "EPICOXRHandTrackingConfidence::High", (int64)EPICOXRHandTrackingConfidence::High },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "High.Name", "EPICOXRHandTrackingConfidence::High" },
				{ "Low.Name", "EPICOXRHandTrackingConfidence::Low" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRInput,
				nullptr,
				"EPICOXRHandTrackingConfidence",
				"EPICOXRHandTrackingConfidence",
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

static_assert(std::is_polymorphic<FPHFJsonData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPHFJsonData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FPHFJsonData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRINPUT_API uint32 Get_Z_Construct_UScriptStruct_FPHFJsonData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPHFJsonData, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("PHFJsonData"), sizeof(FPHFJsonData), Get_Z_Construct_UScriptStruct_FPHFJsonData_Hash());
	}
	return Singleton;
}
template<> PICOXRINPUT_API UScriptStruct* StaticStruct<FPHFJsonData>()
{
	return FPHFJsonData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPHFJsonData(FPHFJsonData::StaticStruct, TEXT("/Script/PICOXRInput"), TEXT("PHFJsonData"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRInput_StaticRegisterNativesFPHFJsonData
{
	FScriptStruct_PICOXRInput_StaticRegisterNativesFPHFJsonData()
	{
		UScriptStruct::DeferCppStructOps<FPHFJsonData>(FName(TEXT("PHFJsonData")));
	}
} ScriptStruct_PICOXRInput_StaticRegisterNativesFPHFJsonData;
	struct Z_Construct_UScriptStruct_FPHFJsonData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_phfVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_phfVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_frameDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_frameDuration;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_patternData_L_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_patternData_L_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_patternData_L;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_patternData_R_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_patternData_R_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_patternData_R;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPHFJsonData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPHFJsonData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "PXR|FPHFData" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPHFJsonData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_phfVersion_MetaData[] = {
		{ "Category", "PXR|FPHFData" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_phfVersion = { "phfVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPHFJsonData, phfVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_phfVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_phfVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_frameDuration_MetaData[] = {
		{ "Category", "PXR|FPHFData" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_frameDuration = { "frameDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPHFJsonData, frameDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_frameDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_frameDuration_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_patternData_L_Inner = { "patternData_L", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPHFJsonFrameData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_patternData_L_MetaData[] = {
		{ "Category", "PXR|FPHFData" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_patternData_L = { "patternData_L", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPHFJsonData, patternData_L), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_patternData_L_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_patternData_L_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_patternData_R_Inner = { "patternData_R", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPHFJsonFrameData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_patternData_R_MetaData[] = {
		{ "Category", "PXR|FPHFData" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_patternData_R = { "patternData_R", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPHFJsonData, patternData_R), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_patternData_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_patternData_R_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPHFJsonData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_phfVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_frameDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_patternData_L_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_patternData_L,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_patternData_R_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPHFJsonData_Statics::NewProp_patternData_R,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPHFJsonData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRInput,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"PHFJsonData",
		sizeof(FPHFJsonData),
		alignof(FPHFJsonData),
		Z_Construct_UScriptStruct_FPHFJsonData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFJsonData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPHFJsonData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFJsonData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPHFJsonData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPHFJsonData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PHFJsonData"), sizeof(FPHFJsonData), Get_Z_Construct_UScriptStruct_FPHFJsonData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPHFJsonData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPHFJsonData_Hash() { return 502747828U; }
class UScriptStruct* FPHFJsonFrameData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRINPUT_API uint32 Get_Z_Construct_UScriptStruct_FPHFJsonFrameData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPHFJsonFrameData, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("PHFJsonFrameData"), sizeof(FPHFJsonFrameData), Get_Z_Construct_UScriptStruct_FPHFJsonFrameData_Hash());
	}
	return Singleton;
}
template<> PICOXRINPUT_API UScriptStruct* StaticStruct<FPHFJsonFrameData>()
{
	return FPHFJsonFrameData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPHFJsonFrameData(FPHFJsonFrameData::StaticStruct, TEXT("/Script/PICOXRInput"), TEXT("PHFJsonFrameData"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRInput_StaticRegisterNativesFPHFJsonFrameData
{
	FScriptStruct_PICOXRInput_StaticRegisterNativesFPHFJsonFrameData()
	{
		UScriptStruct::DeferCppStructOps<FPHFJsonFrameData>(FName(TEXT("PHFJsonFrameData")));
	}
} ScriptStruct_PICOXRInput_StaticRegisterNativesFPHFJsonFrameData;
	struct Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_frameseq_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_frameseq;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_play_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_play;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_frequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_loop_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_loop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPHFJsonFrameData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::NewProp_frameseq_MetaData[] = {
		{ "Category", "PXR|FPHFDataContent" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::NewProp_frameseq = { "frameseq", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPHFJsonFrameData, frameseq), METADATA_PARAMS(Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::NewProp_frameseq_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::NewProp_frameseq_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::NewProp_play_MetaData[] = {
		{ "Category", "PXR|FPHFDataContent" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::NewProp_play = { "play", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPHFJsonFrameData, play), METADATA_PARAMS(Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::NewProp_play_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::NewProp_play_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::NewProp_frequency_MetaData[] = {
		{ "Category", "PXR|FPHFDataContent" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::NewProp_frequency = { "frequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPHFJsonFrameData, frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::NewProp_frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::NewProp_frequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::NewProp_loop_MetaData[] = {
		{ "Category", "PXR|FPHFDataContent" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::NewProp_loop = { "loop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPHFJsonFrameData, loop), METADATA_PARAMS(Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::NewProp_loop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::NewProp_loop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::NewProp_gain_MetaData[] = {
		{ "Category", "PXR|FPHFDataContent" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::NewProp_gain = { "gain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPHFJsonFrameData, gain), METADATA_PARAMS(Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::NewProp_gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::NewProp_gain_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::NewProp_frameseq,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::NewProp_play,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::NewProp_frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::NewProp_loop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::NewProp_gain,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRInput,
		nullptr,
		&NewStructOps,
		"PHFJsonFrameData",
		sizeof(FPHFJsonFrameData),
		alignof(FPHFJsonFrameData),
		Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPHFJsonFrameData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPHFJsonFrameData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PHFJsonFrameData"), sizeof(FPHFJsonFrameData), Get_Z_Construct_UScriptStruct_FPHFJsonFrameData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPHFJsonFrameData_Hash() { return 4044382055U; }

static_assert(std::is_polymorphic<FPHFData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPHFData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FPHFData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRINPUT_API uint32 Get_Z_Construct_UScriptStruct_FPHFData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPHFData, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("PHFData"), sizeof(FPHFData), Get_Z_Construct_UScriptStruct_FPHFData_Hash());
	}
	return Singleton;
}
template<> PICOXRINPUT_API UScriptStruct* StaticStruct<FPHFData>()
{
	return FPHFData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPHFData(FPHFData::StaticStruct, TEXT("/Script/PICOXRInput"), TEXT("PHFData"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRInput_StaticRegisterNativesFPHFData
{
	FScriptStruct_PICOXRInput_StaticRegisterNativesFPHFData()
	{
		UScriptStruct::DeferCppStructOps<FPHFData>(FName(TEXT("PHFData")));
	}
} ScriptStruct_PICOXRInput_StaticRegisterNativesFPHFData;
	struct Z_Construct_UScriptStruct_FPHFData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PHFDataContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PHFDataContent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPHFData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPHFData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPHFData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPHFData_Statics::NewProp_PHFDataContent_MetaData[] = {
		{ "Category", "PXR|FPHFData" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPHFData_Statics::NewProp_PHFDataContent = { "PHFDataContent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPHFData, PHFDataContent), Z_Construct_UScriptStruct_FPHFDataContent, METADATA_PARAMS(Z_Construct_UScriptStruct_FPHFData_Statics::NewProp_PHFDataContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFData_Statics::NewProp_PHFDataContent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPHFData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPHFData_Statics::NewProp_PHFDataContent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPHFData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRInput,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"PHFData",
		sizeof(FPHFData),
		alignof(FPHFData),
		Z_Construct_UScriptStruct_FPHFData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPHFData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPHFData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPHFData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PHFData"), sizeof(FPHFData), Get_Z_Construct_UScriptStruct_FPHFData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPHFData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPHFData_Hash() { return 1479117801U; }
class UScriptStruct* FPHFDataContent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRINPUT_API uint32 Get_Z_Construct_UScriptStruct_FPHFDataContent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPHFDataContent, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("PHFDataContent"), sizeof(FPHFDataContent), Get_Z_Construct_UScriptStruct_FPHFDataContent_Hash());
	}
	return Singleton;
}
template<> PICOXRINPUT_API UScriptStruct* StaticStruct<FPHFDataContent>()
{
	return FPHFDataContent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPHFDataContent(FPHFDataContent::StaticStruct, TEXT("/Script/PICOXRInput"), TEXT("PHFDataContent"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRInput_StaticRegisterNativesFPHFDataContent
{
	FScriptStruct_PICOXRInput_StaticRegisterNativesFPHFDataContent()
	{
		UScriptStruct::DeferCppStructOps<FPHFDataContent>(FName(TEXT("PHFDataContent")));
	}
} ScriptStruct_PICOXRInput_StaticRegisterNativesFPHFDataContent;
	struct Z_Construct_UScriptStruct_FPHFDataContent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_size_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPHFDataContent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPHFDataContent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPHFDataContent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPHFDataContent_Statics::NewProp_data_MetaData[] = {
		{ "Category", "PXR|FPHFDataContent" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPHFDataContent_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPHFDataContent, data), METADATA_PARAMS(Z_Construct_UScriptStruct_FPHFDataContent_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFDataContent_Statics::NewProp_data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPHFDataContent_Statics::NewProp_size_MetaData[] = {
		{ "Category", "PXR|FPHFDataContent" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPHFDataContent_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPHFDataContent, size), METADATA_PARAMS(Z_Construct_UScriptStruct_FPHFDataContent_Statics::NewProp_size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFDataContent_Statics::NewProp_size_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPHFDataContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPHFDataContent_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPHFDataContent_Statics::NewProp_size,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPHFDataContent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRInput,
		nullptr,
		&NewStructOps,
		"PHFDataContent",
		sizeof(FPHFDataContent),
		alignof(FPHFDataContent),
		Z_Construct_UScriptStruct_FPHFDataContent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFDataContent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPHFDataContent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPHFDataContent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPHFDataContent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPHFDataContent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PHFDataContent"), sizeof(FPHFDataContent), Get_Z_Construct_UScriptStruct_FPHFDataContent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPHFDataContent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPHFDataContent_Hash() { return 2260452805U; }
class UScriptStruct* FAudioClipData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRINPUT_API uint32 Get_Z_Construct_UScriptStruct_FAudioClipData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioClipData, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("AudioClipData"), sizeof(FAudioClipData), Get_Z_Construct_UScriptStruct_FAudioClipData_Hash());
	}
	return Singleton;
}
template<> PICOXRINPUT_API UScriptStruct* StaticStruct<FAudioClipData>()
{
	return FAudioClipData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAudioClipData(FAudioClipData::StaticStruct, TEXT("/Script/PICOXRInput"), TEXT("AudioClipData"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRInput_StaticRegisterNativesFAudioClipData
{
	FScriptStruct_PICOXRInput_StaticRegisterNativesFAudioClipData()
	{
		UScriptStruct::DeferCppStructOps<FAudioClipData>(FName(TEXT("AudioClipData")));
	}
} ScriptStruct_PICOXRInput_StaticRegisterNativesFAudioClipData;
	struct Z_Construct_UScriptStruct_FAudioClipData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_delaytag_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_delaytag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_slot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buffersize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_buffersize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_channelMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channelMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bitrate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bitrate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioClipData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioClipData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioClipData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_delaytag_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_delaytag = { "delaytag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioClipData, delaytag), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_delaytag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_delaytag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_slot_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioClipData, slot), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_slot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_buffersize_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_buffersize = { "buffersize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioClipData, buffersize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_buffersize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_buffersize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_sampleRate_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_sampleRate = { "sampleRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioClipData, sampleRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_sampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_sampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_channelMask_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_channelMask = { "channelMask", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioClipData, channelMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_channelMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_channelMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_bitrate_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_bitrate = { "bitrate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioClipData, bitrate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_bitrate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_bitrate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioClipData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_delaytag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_buffersize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_sampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_channelMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_bitrate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioClipData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRInput,
		nullptr,
		&NewStructOps,
		"AudioClipData",
		sizeof(FAudioClipData),
		alignof(FAudioClipData),
		Z_Construct_UScriptStruct_FAudioClipData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioClipData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioClipData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioClipData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioClipData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAudioClipData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AudioClipData"), sizeof(FAudioClipData), Get_Z_Construct_UScriptStruct_FAudioClipData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAudioClipData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAudioClipData_Hash() { return 2679371988U; }
class UScriptStruct* FBodyTrackingBoneLength::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRINPUT_API uint32 Get_Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyTrackingBoneLength, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("BodyTrackingBoneLength"), sizeof(FBodyTrackingBoneLength), Get_Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Hash());
	}
	return Singleton;
}
template<> PICOXRINPUT_API UScriptStruct* StaticStruct<FBodyTrackingBoneLength>()
{
	return FBodyTrackingBoneLength::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBodyTrackingBoneLength(FBodyTrackingBoneLength::StaticStruct, TEXT("/Script/PICOXRInput"), TEXT("BodyTrackingBoneLength"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRInput_StaticRegisterNativesFBodyTrackingBoneLength
{
	FScriptStruct_PICOXRInput_StaticRegisterNativesFBodyTrackingBoneLength()
	{
		UScriptStruct::DeferCppStructOps<FBodyTrackingBoneLength>(FName(TEXT("BodyTrackingBoneLength")));
	}
} ScriptStruct_PICOXRInput_StaticRegisterNativesFBodyTrackingBoneLength;
	struct Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_headLen_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_headLen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_neckLen_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_neckLen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_torsoLen_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_torsoLen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hipLen_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_hipLen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_upperLegLen_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_upperLegLen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lowerLegLen_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lowerLegLen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_footLen_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_footLen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shoulderLen_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_shoulderLen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_upperArmLen_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_upperArmLen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lowerArmLen_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lowerArmLen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_handLen_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_handLen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyTrackingBoneLength>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_headLen_MetaData[] = {
		{ "Category", "PXR|BodyTrackingData" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_headLen = { "headLen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyTrackingBoneLength, headLen), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_headLen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_headLen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_neckLen_MetaData[] = {
		{ "Category", "PXR|BodyTrackingData" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_neckLen = { "neckLen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyTrackingBoneLength, neckLen), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_neckLen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_neckLen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_torsoLen_MetaData[] = {
		{ "Category", "PXR|BodyTrackingData" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_torsoLen = { "torsoLen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyTrackingBoneLength, torsoLen), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_torsoLen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_torsoLen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_hipLen_MetaData[] = {
		{ "Category", "PXR|BodyTrackingData" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_hipLen = { "hipLen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyTrackingBoneLength, hipLen), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_hipLen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_hipLen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_upperLegLen_MetaData[] = {
		{ "Category", "PXR|BodyTrackingData" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_upperLegLen = { "upperLegLen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyTrackingBoneLength, upperLegLen), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_upperLegLen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_upperLegLen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_lowerLegLen_MetaData[] = {
		{ "Category", "PXR|BodyTrackingData" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_lowerLegLen = { "lowerLegLen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyTrackingBoneLength, lowerLegLen), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_lowerLegLen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_lowerLegLen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_footLen_MetaData[] = {
		{ "Category", "PXR|BodyTrackingData" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_footLen = { "footLen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyTrackingBoneLength, footLen), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_footLen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_footLen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_shoulderLen_MetaData[] = {
		{ "Category", "PXR|BodyTrackingData" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_shoulderLen = { "shoulderLen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyTrackingBoneLength, shoulderLen), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_shoulderLen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_shoulderLen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_upperArmLen_MetaData[] = {
		{ "Category", "PXR|BodyTrackingData" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_upperArmLen = { "upperArmLen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyTrackingBoneLength, upperArmLen), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_upperArmLen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_upperArmLen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_lowerArmLen_MetaData[] = {
		{ "Category", "PXR|BodyTrackingData" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_lowerArmLen = { "lowerArmLen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyTrackingBoneLength, lowerArmLen), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_lowerArmLen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_lowerArmLen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_handLen_MetaData[] = {
		{ "Category", "PXR|BodyTrackingData" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_handLen = { "handLen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyTrackingBoneLength, handLen), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_handLen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_handLen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_headLen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_neckLen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_torsoLen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_hipLen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_upperLegLen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_lowerLegLen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_footLen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_shoulderLen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_upperArmLen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_lowerArmLen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::NewProp_handLen,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRInput,
		nullptr,
		&NewStructOps,
		"BodyTrackingBoneLength",
		sizeof(FBodyTrackingBoneLength),
		alignof(FBodyTrackingBoneLength),
		Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBodyTrackingBoneLength()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BodyTrackingBoneLength"), sizeof(FBodyTrackingBoneLength), Get_Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Hash() { return 1780347875U; }
class UScriptStruct* FPxrBodyTrackingTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRINPUT_API uint32 Get_Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPxrBodyTrackingTransform, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("PxrBodyTrackingTransform"), sizeof(FPxrBodyTrackingTransform), Get_Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Hash());
	}
	return Singleton;
}
template<> PICOXRINPUT_API UScriptStruct* StaticStruct<FPxrBodyTrackingTransform>()
{
	return FPxrBodyTrackingTransform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPxrBodyTrackingTransform(FPxrBodyTrackingTransform::StaticStruct, TEXT("/Script/PICOXRInput"), TEXT("PxrBodyTrackingTransform"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRInput_StaticRegisterNativesFPxrBodyTrackingTransform
{
	FScriptStruct_PICOXRInput_StaticRegisterNativesFPxrBodyTrackingTransform()
	{
		UScriptStruct::DeferCppStructOps<FPxrBodyTrackingTransform>(FName(TEXT("PxrBodyTrackingTransform")));
	}
} ScriptStruct_PICOXRInput_StaticRegisterNativesFPxrBodyTrackingTransform;
	struct Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_TimeStamp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bone_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_velo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_velo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_acce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_acce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wvelo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_wvelo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wacce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_wacce;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bodyAction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bodyAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bodyAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPxrBodyTrackingTransform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_TimeStamp_MetaData[] = {
		{ "Category", "PXR|BodyTrackingData" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPxrBodyTrackingTransform, TimeStamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_TimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_TimeStamp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_bone_MetaData[] = {
		{ "Category", "PXR|BodyTrackingData" },
		{ "Comment", "/** bone name. if bone == NONE_ROLE, this bone is not calculated */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "bone name. if bone == NONE_ROLE, this bone is not calculated" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_bone = { "bone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPxrBodyTrackingTransform, bone), Z_Construct_UEnum_PICOXRInput_EPxrBodyTrackerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_bone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_LocalPose_MetaData[] = {
		{ "Category", "PXR|BodyTrackingData" },
		{ "Comment", "/** bone local transform */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "bone local transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_LocalPose = { "LocalPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPxrBodyTrackingTransform, LocalPose), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_LocalPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_LocalPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_velo_MetaData[] = {
		{ "Category", "PXR|BodyTrackingData" },
		{ "Comment", "/** velocity of x,y,z */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "velocity of x,y,z" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_velo = { "velo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPxrBodyTrackingTransform, velo), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_velo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_velo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_acce_MetaData[] = {
		{ "Category", "PXR|BodyTrackingData" },
		{ "Comment", "/** acceleration of x,y,z */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "acceleration of x,y,z" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_acce = { "acce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPxrBodyTrackingTransform, acce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_acce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_acce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_wvelo_MetaData[] = {
		{ "Category", "PXR|BodyTrackingData" },
		{ "Comment", "/** angular velocity of x,y,z */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "angular velocity of x,y,z" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_wvelo = { "wvelo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPxrBodyTrackingTransform, wvelo), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_wvelo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_wvelo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_wacce_MetaData[] = {
		{ "Category", "PXR|BodyTrackingData" },
		{ "Comment", "/** angular acceleration of x,y,z */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "angular acceleration of x,y,z" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_wacce = { "wacce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPxrBodyTrackingTransform, wacce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_wacce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_wacce_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_bodyAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_bodyAction_MetaData[] = {
		{ "Category", "PXR|BodyTrackingData" },
		{ "Comment", "/** multiple actions can be supported at the same time by means of OR BodyActionList */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "multiple actions can be supported at the same time by means of OR BodyActionList" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_bodyAction = { "bodyAction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPxrBodyTrackingTransform, bodyAction), Z_Construct_UEnum_PICOXRInput_EPxrBodyActionList, METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_bodyAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_bodyAction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_TimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_bone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_LocalPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_velo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_acce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_wvelo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_wacce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_bodyAction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::NewProp_bodyAction,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRInput,
		nullptr,
		&NewStructOps,
		"PxrBodyTrackingTransform",
		sizeof(FPxrBodyTrackingTransform),
		alignof(FPxrBodyTrackingTransform),
		Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPxrBodyTrackingTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PxrBodyTrackingTransform"), sizeof(FPxrBodyTrackingTransform), Get_Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Hash() { return 3684968319U; }
class UScriptStruct* FFitnessBandConnectState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRINPUT_API uint32 Get_Z_Construct_UScriptStruct_FFitnessBandConnectState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFitnessBandConnectState, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("FitnessBandConnectState"), sizeof(FFitnessBandConnectState), Get_Z_Construct_UScriptStruct_FFitnessBandConnectState_Hash());
	}
	return Singleton;
}
template<> PICOXRINPUT_API UScriptStruct* StaticStruct<FFitnessBandConnectState>()
{
	return FFitnessBandConnectState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFitnessBandConnectState(FFitnessBandConnectState::StaticStruct, TEXT("/Script/PICOXRInput"), TEXT("FitnessBandConnectState"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRInput_StaticRegisterNativesFFitnessBandConnectState
{
	FScriptStruct_PICOXRInput_StaticRegisterNativesFFitnessBandConnectState()
	{
		UScriptStruct::DeferCppStructOps<FFitnessBandConnectState>(FName(TEXT("FitnessBandConnectState")));
	}
} ScriptStruct_PICOXRInput_StaticRegisterNativesFFitnessBandConnectState;
	struct Z_Construct_UScriptStruct_FFitnessBandConnectState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Num_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Num;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackerIDArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackerIDArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackerIDArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFitnessBandConnectState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFitnessBandConnectState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFitnessBandConnectState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFitnessBandConnectState_Statics::NewProp_Num_MetaData[] = {
		{ "Category", "PXR|BodyTrackingData" },
		{ "Comment", "/** The number of trackers currently connected  */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "The number of trackers currently connected" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFitnessBandConnectState_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFitnessBandConnectState, Num), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FFitnessBandConnectState_Statics::NewProp_Num_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFitnessBandConnectState_Statics::NewProp_Num_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFitnessBandConnectState_Statics::NewProp_TrackerIDArray_Inner = { "TrackerIDArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFitnessBandConnectState_Statics::NewProp_TrackerIDArray_MetaData[] = {
		{ "Category", "PXR|BodyTrackingData" },
		{ "Comment", "/** The Array of trackers ID currently connected */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "The Array of trackers ID currently connected" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFitnessBandConnectState_Statics::NewProp_TrackerIDArray = { "TrackerIDArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFitnessBandConnectState, TrackerIDArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFitnessBandConnectState_Statics::NewProp_TrackerIDArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFitnessBandConnectState_Statics::NewProp_TrackerIDArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFitnessBandConnectState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFitnessBandConnectState_Statics::NewProp_Num,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFitnessBandConnectState_Statics::NewProp_TrackerIDArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFitnessBandConnectState_Statics::NewProp_TrackerIDArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFitnessBandConnectState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRInput,
		nullptr,
		&NewStructOps,
		"FitnessBandConnectState",
		sizeof(FFitnessBandConnectState),
		alignof(FFitnessBandConnectState),
		Z_Construct_UScriptStruct_FFitnessBandConnectState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFitnessBandConnectState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFitnessBandConnectState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFitnessBandConnectState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFitnessBandConnectState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFitnessBandConnectState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FitnessBandConnectState"), sizeof(FFitnessBandConnectState), Get_Z_Construct_UScriptStruct_FFitnessBandConnectState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFitnessBandConnectState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFitnessBandConnectState_Hash() { return 2917459556U; }
class UScriptStruct* FPxrBodyTrackingImu::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRINPUT_API uint32 Get_Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPxrBodyTrackingImu, Z_Construct_UPackage__Script_PICOXRInput(), TEXT("PxrBodyTrackingImu"), sizeof(FPxrBodyTrackingImu), Get_Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Hash());
	}
	return Singleton;
}
template<> PICOXRINPUT_API UScriptStruct* StaticStruct<FPxrBodyTrackingImu>()
{
	return FPxrBodyTrackingImu::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPxrBodyTrackingImu(FPxrBodyTrackingImu::StaticStruct, TEXT("/Script/PICOXRInput"), TEXT("PxrBodyTrackingImu"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRInput_StaticRegisterNativesFPxrBodyTrackingImu
{
	FScriptStruct_PICOXRInput_StaticRegisterNativesFPxrBodyTrackingImu()
	{
		UScriptStruct::DeferCppStructOps<FPxrBodyTrackingImu>(FName(TEXT("PxrBodyTrackingImu")));
	}
} ScriptStruct_PICOXRInput_StaticRegisterNativesFPxrBodyTrackingImu;
	struct Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_TimeStamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_temperature_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_temperature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GyroData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GyroData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MagData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// imu data\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "imu data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPxrBodyTrackingImu>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::NewProp_TimeStamp_MetaData[] = {
		{ "Category", "PXR|BodyTrackingData" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPxrBodyTrackingImu, TimeStamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::NewProp_TimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::NewProp_TimeStamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::NewProp_temperature_MetaData[] = {
		{ "Category", "PXR|BodyTrackingData" },
		{ "Comment", "// time stamp of imu\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "time stamp of imu" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::NewProp_temperature = { "temperature", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPxrBodyTrackingImu, temperature), METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::NewProp_temperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::NewProp_temperature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::NewProp_GyroData_MetaData[] = {
		{ "Category", "PXR|BodyTrackingData" },
		{ "Comment", "// temperature of imu\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "temperature of imu" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::NewProp_GyroData = { "GyroData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPxrBodyTrackingImu, GyroData), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::NewProp_GyroData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::NewProp_GyroData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::NewProp_AccData_MetaData[] = {
		{ "Category", "PXR|BodyTrackingData" },
		{ "Comment", "// gyroscope data, x,y,z\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "gyroscope data, x,y,z" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::NewProp_AccData = { "AccData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPxrBodyTrackingImu, AccData), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::NewProp_AccData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::NewProp_AccData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::NewProp_MagData_MetaData[] = {
		{ "Category", "PXR|BodyTrackingData" },
		{ "Comment", "// Accelerometer data, x,y,z\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Accelerometer data, x,y,z" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::NewProp_MagData = { "MagData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPxrBodyTrackingImu, MagData), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::NewProp_MagData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::NewProp_MagData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::NewProp_TimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::NewProp_temperature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::NewProp_GyroData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::NewProp_AccData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::NewProp_MagData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRInput,
		nullptr,
		&NewStructOps,
		"PxrBodyTrackingImu",
		sizeof(FPxrBodyTrackingImu),
		alignof(FPxrBodyTrackingImu),
		Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPxrBodyTrackingImu()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PxrBodyTrackingImu"), sizeof(FPxrBodyTrackingImu), Get_Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Hash() { return 2271017531U; }
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_SetBodyTrackingBoneLength)
	{
		P_GET_STRUCT_REF(FBodyTrackingBoneLength,Z_Param_Out_BoneLength);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_SetBodyTrackingBoneLength(Z_Param_Out_BoneLength,Z_Param_OtherMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_SetSwiftMode)
	{
		P_GET_ENUM(ESwiftMode,Z_Param_Mode);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_SetSwiftMode(ESwiftMode(Z_Param_Mode),Z_Param_OtherMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_LaunchFitnessBandCalibrationAPP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_LaunchFitnessBandCalibrationAPP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetFitnessBandCalibState)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CalibrateState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_GetFitnessBandCalibState(Z_Param_Out_CalibrateState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetFitnessBandBattery)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TrackerId);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Battery);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_GetFitnessBandBattery(Z_Param_TrackerId,Z_Param_Out_Battery);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetFitnessBandConnectState)
	{
		P_GET_STRUCT_REF(FFitnessBandConnectState,Z_Param_Out_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_GetFitnessBandConnectState(Z_Param_Out_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_SetBodyTrackingMode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_SetBodyTrackingMode(Z_Param_Mode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetBodyTrackingPoseByRole)
	{
		P_GET_ENUM(EPxrBodyTrackerRole,Z_Param_RoleType);
		P_GET_STRUCT_REF(FPxrBodyTrackingTransform,Z_Param_Out_RoleBodyTrackingData);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WorldToMetersScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_GetBodyTrackingPoseByRole(EPxrBodyTrackerRole(Z_Param_RoleType),Z_Param_Out_RoleBodyTrackingData,Z_Param_WorldToMetersScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetBodyTrackingPose)
	{
		P_GET_TARRAY_REF(FPxrBodyTrackingTransform,Z_Param_Out_BodyTrackingData);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WorldToMetersScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_GetBodyTrackingPose(Z_Param_Out_BodyTrackingData,Z_Param_WorldToMetersScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_SetBodyTrackingStaticCalibState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_calibstate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_SetBodyTrackingStaticCalibState(Z_Param_calibstate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetPHFHapticSpeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceID);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_GetPHFHapticSpeed(Z_Param_SourceID,Z_Param_Out_Speed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_SetPHFHapticSpeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_SetPHFHapticSpeed(Z_Param_SourceID,Z_Param_Speed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetCurrentFrameSequence)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_FrameSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_GetCurrentFrameSequence(Z_Param_SourceID,Z_Param_Out_FrameSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_WriteHapticStream)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceID);
		P_GET_STRUCT_REF(FPHFJsonData,Z_Param_Out_frames);
		P_GET_PROPERTY(FIntProperty,Z_Param_From);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumFrames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_WriteHapticStream(Z_Param_SourceID,Z_Param_Out_frames,Z_Param_From,Z_Param_NumFrames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_StopPHFHaptic)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_StopPHFHaptic(Z_Param_SourceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_StartPHFHaptic)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_StartPHFHaptic(Z_Param_SourceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_RemovePHFHaptic)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_RemovePHFHaptic(Z_Param_SourceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_CreateHapticStream)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PHFVersion);
		P_GET_PROPERTY(FIntProperty,Z_Param_FrameDurationMs);
		P_GET_PROPERTY(FIntProperty,Z_Param_Slot);
		P_GET_PROPERTY(FIntProperty,Z_Param_Reversal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SourceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_CreateHapticStream(Z_Param_PHFVersion,Z_Param_FrameDurationMs,Z_Param_Slot,Z_Param_Reversal,Z_Param_Amp,Z_Param_Speed,Z_Param_Out_SourceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_UpdateVibrateParams)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceID);
		P_GET_ENUM(EPICOXRVibrateController,Z_Param_slot);
		P_GET_ENUM(EPICOXRChannelFlip,Z_Param_slotConfig);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AmpValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_UpdateVibrateParams(Z_Param_SourceID,EPICOXRVibrateController(Z_Param_slot),EPICOXRChannelFlip(Z_Param_slotConfig),Z_Param_AmpValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_ResumeVibrate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_ResumeVibrate(Z_Param_SourceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_PauseVibrate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_PauseVibrate(Z_Param_SourceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_StartVibrateByPHF)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_DataName);
		P_GET_ENUM(EPICOXRVibrateController,Z_Param_slot);
		P_GET_ENUM(EPICOXRChannelFlip,Z_Param_slotConfig);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ampValue);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SourceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_StartVibrateByPHF(Z_Param_DataName,EPICOXRVibrateController(Z_Param_slot),EPICOXRChannelFlip(Z_Param_slotConfig),Z_Param_ampValue,Z_Param_Out_SourceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execGetActiveInputDevice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPICOXRActiveInputDevice*)Z_Param__Result=UPICOXRInputFunctionLibrary::GetActiveInputDevice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execIsHandTrackingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::IsHandTrackingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execGetPinchStrength)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPICOXRInputFunctionLibrary::GetPinchStrength(EPICOXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execGetHandScale)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPICOXRInputFunctionLibrary::GetHandScale(EPICOXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execGetTrackingConfidence)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPICOXRHandTrackingConfidence*)Z_Param__Result=UPICOXRInputFunctionLibrary::GetTrackingConfidence(EPICOXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execIsPinchValid)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::IsPinchValid(EPICOXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execIsRayValid)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::IsRayValid(EPICOXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execIsComputed)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::IsComputed(EPICOXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execGetRayPose)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UPICOXRInputFunctionLibrary::GetRayPose(EPICOXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execGetHandRootPose)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UPICOXRInputFunctionLibrary::GetHandRootPose(EPICOXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execIsBonePositionTracked)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_GET_ENUM(EPICOXRHandJoint,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::IsBonePositionTracked(EPICOXRHandType(Z_Param_DeviceHand),EPICOXRHandJoint(Z_Param_Key));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execIsBoneOrientationTracked)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_GET_ENUM(EPICOXRHandJoint,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::IsBoneOrientationTracked(EPICOXRHandType(Z_Param_DeviceHand),EPICOXRHandJoint(Z_Param_Key));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execIsBonePositionValid)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_GET_ENUM(EPICOXRHandJoint,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::IsBonePositionValid(EPICOXRHandType(Z_Param_DeviceHand),EPICOXRHandJoint(Z_Param_Key));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execIsBoneOrientationValid)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_GET_ENUM(EPICOXRHandJoint,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::IsBoneOrientationValid(EPICOXRHandType(Z_Param_DeviceHand),EPICOXRHandJoint(Z_Param_Key));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execGetBoneRadii)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_GET_ENUM(EPICOXRHandJoint,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPICOXRInputFunctionLibrary::GetBoneRadii(EPICOXRHandType(Z_Param_DeviceHand),EPICOXRHandJoint(Z_Param_Key));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execGetBoneLocation)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_GET_ENUM(EPICOXRHandJoint,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UPICOXRInputFunctionLibrary::GetBoneLocation(EPICOXRHandType(Z_Param_DeviceHand),EPICOXRHandJoint(Z_Param_Key));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execGetBoneRotation)
	{
		P_GET_ENUM(EPICOXRHandType,Z_Param_DeviceHand);
		P_GET_ENUM(EPICOXRHandJoint,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UPICOXRInputFunctionLibrary::GetBoneRotation(EPICOXRHandType(Z_Param_DeviceHand),EPICOXRHandJoint(Z_Param_Key));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_ClearVibrateByCache)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_ClearVibrateByCache(Z_Param_SourceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_StartVibrateByCache)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_StartVibrateByCache(Z_Param_SourceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_SaveVibrateByCache)
	{
		P_GET_OBJECT(USoundWave,Z_Param_InSoundWave);
		P_GET_ENUM(EPICOXRVibrateController,Z_Param_slot);
		P_GET_ENUM(EPICOXRChannelFlip,Z_Param_slotConfig);
		P_GET_ENUM(EPICOXRCacheConfig,Z_Param_enableV);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SourceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_SaveVibrateByCache(Z_Param_InSoundWave,EPICOXRVibrateController(Z_Param_slot),EPICOXRChannelFlip(Z_Param_slotConfig),EPICOXRCacheConfig(Z_Param_enableV),Z_Param_Out_SourceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_SetControllerEnableKey)
	{
		P_GET_UBOOL(Z_Param_isEnable);
		P_GET_ENUM(EPxrControllerKeyMap,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_SetControllerEnableKey(Z_Param_isEnable,EPxrControllerKeyMap(Z_Param_Key));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_StartVibrateBySharem)
	{
		P_GET_OBJECT(USoundWave,Z_Param_InSoundWave);
		P_GET_ENUM(EPICOXRVibrateController,Z_Param_slot);
		P_GET_ENUM(EPICOXRChannelFlip,Z_Param_slotConfig);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SourceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_StartVibrateBySharem(Z_Param_InSoundWave,EPICOXRVibrateController(Z_Param_slot),EPICOXRChannelFlip(Z_Param_slotConfig),Z_Param_Out_SourceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_SetControllerVibrationEvent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_frequency);
		P_GET_PROPERTY(FFloatProperty,Z_Param_strength);
		P_GET_PROPERTY(FIntProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_SetControllerVibrationEvent(Z_Param_deviceID,Z_Param_frequency,Z_Param_strength,Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_StopControllerVCMotor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_clientId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_StopControllerVCMotor(Z_Param_clientId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_SetControllerAmp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_SetControllerAmp(Z_Param_mode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_StartControllerVCMotor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_file);
		P_GET_ENUM(EPICOXRVibrateController,Z_Param_slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_StartControllerVCMotor(Z_Param_file,EPICOXRVibrateController(Z_Param_slot));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetControllerPredictedLocationAndRotation)
	{
		P_GET_ENUM(EControllerHand,Z_Param_DeviceHand);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PredictedTime);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_GetControllerPredictedLocationAndRotation(EControllerHand(Z_Param_DeviceHand),Z_Param_PredictedTime,Z_Param_Out_OutLocation,Z_Param_Out_OutRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_SetControllerOriginOffset)
	{
		P_GET_ENUM(EPICOXRControllerType,Z_Param_Controller);
		P_GET_STRUCT(FVector,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPICOXRInputFunctionLibrary::PXR_SetControllerOriginOffset(EPICOXRControllerType(Z_Param_Controller),Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetControllerEnableHomekey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_GetControllerEnableHomekey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetHandedness)
	{
		P_GET_ENUM_REF(EPICOXRHandedness,Z_Param_Out_Handedness);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_GetHandedness((EPICOXRHandedness&)(Z_Param_Out_Handedness));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_SetArmModelParameters)
	{
		P_GET_ENUM(EPICOXRGazeBehavior,Z_Param_GazeType);
		P_GET_ENUM(EPICOXRArmModelJoint,Z_Param_ArmJoint);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ElbowHeight);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ElbowDepth);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PointerTiltAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_SetArmModelParameters(EPICOXRGazeBehavior(Z_Param_GazeType),EPICOXRArmModelJoint(Z_Param_ArmJoint),Z_Param_ElbowHeight,Z_Param_ElbowDepth,Z_Param_PointerTiltAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_ResetController)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Device);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_ResetController(Z_Param_Device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetControllerDeviceType)
	{
		P_GET_ENUM_REF(EPICOXRControllerDeviceType,Z_Param_Out_ControllerType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPICOXRInputFunctionLibrary::PXR_GetControllerDeviceType((EPICOXRControllerDeviceType&)(Z_Param_Out_ControllerType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_VibrateController)
	{
		P_GET_ENUM(EPICOXRControllerType,Z_Param_ControllerType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
		P_GET_PROPERTY(FIntProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_VibrateController(EPICOXRControllerType(Z_Param_ControllerType),Z_Param_Strength,Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetControllerLinearVelocity)
	{
		P_GET_ENUM(EPICOXRControllerType,Z_Param_ControllerType);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_GetControllerLinearVelocity(EPICOXRControllerType(Z_Param_ControllerType),Z_Param_Out_LinearVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetControllerAcceleration)
	{
		P_GET_ENUM(EPICOXRControllerType,Z_Param_ControllerType);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Acceleration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_GetControllerAcceleration(EPICOXRControllerType(Z_Param_ControllerType),Z_Param_Out_Acceleration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetControllerAngularVelocity)
	{
		P_GET_ENUM(EPICOXRControllerType,Z_Param_ControllerType);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_GetControllerAngularVelocity(EPICOXRControllerType(Z_Param_ControllerType),Z_Param_Out_AngularVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_SetMainControllerHandle)
	{
		P_GET_ENUM(EPICOXRHandedness,Z_Param_Handedness);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_SetMainControllerHandle(EPICOXRHandedness(Z_Param_Handedness));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetMainControllerHandle)
	{
		P_GET_ENUM_REF(EPICOXRHandedness,Z_Param_Out_Handedness);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_GetMainControllerHandle((EPICOXRHandedness&)(Z_Param_Out_Handedness));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetControllerConnectionState)
	{
		P_GET_ENUM(EPICOXRControllerType,Z_Param_ControllerType);
		P_GET_UBOOL_REF(Z_Param_Out_Status);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_GetControllerConnectionState(EPICOXRControllerType(Z_Param_ControllerType),Z_Param_Out_Status);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRInputFunctionLibrary::execPXR_GetControllerPower)
	{
		P_GET_ENUM(EPICOXRControllerType,Z_Param_ControllerType);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Power);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRInputFunctionLibrary::PXR_GetControllerPower(EPICOXRControllerType(Z_Param_ControllerType),Z_Param_Out_Power);
		P_NATIVE_END;
	}
	void UPICOXRInputFunctionLibrary::StaticRegisterNativesUPICOXRInputFunctionLibrary()
	{
		UClass* Class = UPICOXRInputFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveInputDevice", &UPICOXRInputFunctionLibrary::execGetActiveInputDevice },
			{ "GetBoneLocation", &UPICOXRInputFunctionLibrary::execGetBoneLocation },
			{ "GetBoneRadii", &UPICOXRInputFunctionLibrary::execGetBoneRadii },
			{ "GetBoneRotation", &UPICOXRInputFunctionLibrary::execGetBoneRotation },
			{ "GetHandRootPose", &UPICOXRInputFunctionLibrary::execGetHandRootPose },
			{ "GetHandScale", &UPICOXRInputFunctionLibrary::execGetHandScale },
			{ "GetPinchStrength", &UPICOXRInputFunctionLibrary::execGetPinchStrength },
			{ "GetRayPose", &UPICOXRInputFunctionLibrary::execGetRayPose },
			{ "GetTrackingConfidence", &UPICOXRInputFunctionLibrary::execGetTrackingConfidence },
			{ "IsBoneOrientationTracked", &UPICOXRInputFunctionLibrary::execIsBoneOrientationTracked },
			{ "IsBoneOrientationValid", &UPICOXRInputFunctionLibrary::execIsBoneOrientationValid },
			{ "IsBonePositionTracked", &UPICOXRInputFunctionLibrary::execIsBonePositionTracked },
			{ "IsBonePositionValid", &UPICOXRInputFunctionLibrary::execIsBonePositionValid },
			{ "IsComputed", &UPICOXRInputFunctionLibrary::execIsComputed },
			{ "IsHandTrackingEnabled", &UPICOXRInputFunctionLibrary::execIsHandTrackingEnabled },
			{ "IsPinchValid", &UPICOXRInputFunctionLibrary::execIsPinchValid },
			{ "IsRayValid", &UPICOXRInputFunctionLibrary::execIsRayValid },
			{ "PXR_ClearVibrateByCache", &UPICOXRInputFunctionLibrary::execPXR_ClearVibrateByCache },
			{ "PXR_CreateHapticStream", &UPICOXRInputFunctionLibrary::execPXR_CreateHapticStream },
			{ "PXR_GetBodyTrackingPose", &UPICOXRInputFunctionLibrary::execPXR_GetBodyTrackingPose },
			{ "PXR_GetBodyTrackingPoseByRole", &UPICOXRInputFunctionLibrary::execPXR_GetBodyTrackingPoseByRole },
			{ "PXR_GetControllerAcceleration", &UPICOXRInputFunctionLibrary::execPXR_GetControllerAcceleration },
			{ "PXR_GetControllerAngularVelocity", &UPICOXRInputFunctionLibrary::execPXR_GetControllerAngularVelocity },
			{ "PXR_GetControllerConnectionState", &UPICOXRInputFunctionLibrary::execPXR_GetControllerConnectionState },
			{ "PXR_GetControllerDeviceType", &UPICOXRInputFunctionLibrary::execPXR_GetControllerDeviceType },
			{ "PXR_GetControllerEnableHomekey", &UPICOXRInputFunctionLibrary::execPXR_GetControllerEnableHomekey },
			{ "PXR_GetControllerLinearVelocity", &UPICOXRInputFunctionLibrary::execPXR_GetControllerLinearVelocity },
			{ "PXR_GetControllerPower", &UPICOXRInputFunctionLibrary::execPXR_GetControllerPower },
			{ "PXR_GetControllerPredictedLocationAndRotation", &UPICOXRInputFunctionLibrary::execPXR_GetControllerPredictedLocationAndRotation },
			{ "PXR_GetCurrentFrameSequence", &UPICOXRInputFunctionLibrary::execPXR_GetCurrentFrameSequence },
			{ "PXR_GetFitnessBandBattery", &UPICOXRInputFunctionLibrary::execPXR_GetFitnessBandBattery },
			{ "PXR_GetFitnessBandCalibState", &UPICOXRInputFunctionLibrary::execPXR_GetFitnessBandCalibState },
			{ "PXR_GetFitnessBandConnectState", &UPICOXRInputFunctionLibrary::execPXR_GetFitnessBandConnectState },
			{ "PXR_GetHandedness", &UPICOXRInputFunctionLibrary::execPXR_GetHandedness },
			{ "PXR_GetMainControllerHandle", &UPICOXRInputFunctionLibrary::execPXR_GetMainControllerHandle },
			{ "PXR_GetPHFHapticSpeed", &UPICOXRInputFunctionLibrary::execPXR_GetPHFHapticSpeed },
			{ "PXR_LaunchFitnessBandCalibrationAPP", &UPICOXRInputFunctionLibrary::execPXR_LaunchFitnessBandCalibrationAPP },
			{ "PXR_PauseVibrate", &UPICOXRInputFunctionLibrary::execPXR_PauseVibrate },
			{ "PXR_RemovePHFHaptic", &UPICOXRInputFunctionLibrary::execPXR_RemovePHFHaptic },
			{ "PXR_ResetController", &UPICOXRInputFunctionLibrary::execPXR_ResetController },
			{ "PXR_ResumeVibrate", &UPICOXRInputFunctionLibrary::execPXR_ResumeVibrate },
			{ "PXR_SaveVibrateByCache", &UPICOXRInputFunctionLibrary::execPXR_SaveVibrateByCache },
			{ "PXR_SetArmModelParameters", &UPICOXRInputFunctionLibrary::execPXR_SetArmModelParameters },
			{ "PXR_SetBodyTrackingBoneLength", &UPICOXRInputFunctionLibrary::execPXR_SetBodyTrackingBoneLength },
			{ "PXR_SetBodyTrackingMode", &UPICOXRInputFunctionLibrary::execPXR_SetBodyTrackingMode },
			{ "PXR_SetBodyTrackingStaticCalibState", &UPICOXRInputFunctionLibrary::execPXR_SetBodyTrackingStaticCalibState },
			{ "PXR_SetControllerAmp", &UPICOXRInputFunctionLibrary::execPXR_SetControllerAmp },
			{ "PXR_SetControllerEnableKey", &UPICOXRInputFunctionLibrary::execPXR_SetControllerEnableKey },
			{ "PXR_SetControllerOriginOffset", &UPICOXRInputFunctionLibrary::execPXR_SetControllerOriginOffset },
			{ "PXR_SetControllerVibrationEvent", &UPICOXRInputFunctionLibrary::execPXR_SetControllerVibrationEvent },
			{ "PXR_SetMainControllerHandle", &UPICOXRInputFunctionLibrary::execPXR_SetMainControllerHandle },
			{ "PXR_SetPHFHapticSpeed", &UPICOXRInputFunctionLibrary::execPXR_SetPHFHapticSpeed },
			{ "PXR_SetSwiftMode", &UPICOXRInputFunctionLibrary::execPXR_SetSwiftMode },
			{ "PXR_StartControllerVCMotor", &UPICOXRInputFunctionLibrary::execPXR_StartControllerVCMotor },
			{ "PXR_StartPHFHaptic", &UPICOXRInputFunctionLibrary::execPXR_StartPHFHaptic },
			{ "PXR_StartVibrateByCache", &UPICOXRInputFunctionLibrary::execPXR_StartVibrateByCache },
			{ "PXR_StartVibrateByPHF", &UPICOXRInputFunctionLibrary::execPXR_StartVibrateByPHF },
			{ "PXR_StartVibrateBySharem", &UPICOXRInputFunctionLibrary::execPXR_StartVibrateBySharem },
			{ "PXR_StopControllerVCMotor", &UPICOXRInputFunctionLibrary::execPXR_StopControllerVCMotor },
			{ "PXR_StopPHFHaptic", &UPICOXRInputFunctionLibrary::execPXR_StopPHFHaptic },
			{ "PXR_UpdateVibrateParams", &UPICOXRInputFunctionLibrary::execPXR_UpdateVibrateParams },
			{ "PXR_VibrateController", &UPICOXRInputFunctionLibrary::execPXR_VibrateController },
			{ "PXR_WriteHapticStream", &UPICOXRInputFunctionLibrary::execPXR_WriteHapticStream },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice_Statics
	{
		struct PICOXRInputFunctionLibrary_eventGetActiveInputDevice_Parms
		{
			EPICOXRActiveInputDevice ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetActiveInputDevice_Parms, ReturnValue), Z_Construct_UEnum_PICOXRInput_EPICOXRActiveInputDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n     * Get the active input device\n     */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get the active input device" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "GetActiveInputDevice", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventGetActiveInputDevice_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics
	{
		struct PICOXRInputFunctionLibrary_eventGetBoneLocation_Parms
		{
			EPICOXRHandType DeviceHand;
			EPICOXRHandJoint Key;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Key_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetBoneLocation_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetBoneLocation_Parms, Key), Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetBoneLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_Key_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/// <summary>Returns the position of the skeletal node for the specified hand component.</summary>\n/// <param name =\"DeviceHand\">(In) EPICOXRHandType, specifies which hand component to identify.\n/// <ul>\n/// <li>`None`: No identification is performed, and the return value is always `false`</li>\n/// <li>`Left`: Left hand</li>\n/// <li>`Right`: Right hand</li>\n/// </ul>\n/// </param>\n/// <param name =\"Key\">(In) EPicoXRHandJoint, specifies which skeletal nodes to identify.\n/// <ul>\n/// <li>`Palm`</li>\n/// <li>`Wrist`</li>\n/// <li>`ThumbMetacarpal`</li>\n/// <li>`ThumbProximal`</li>\n/// <li>`ThumbDistal`</li>\n/// <li>`ThumbTip`</li>\n/// <li>`IndexMetacarpal`</li>\n/// <li>`IndexProximal`</li>\n/// <li>`IndexIntermediate`</li>\n/// <li>`IndexDistal`</li>\n/// <li>`IndexTip`</li>\n/// <li>`MiddleMetacarpal`</li>\n/// <li>`MiddleProximal`</li>\n/// <li>`MiddleIntermediate`</li>\n/// <li>`MiddleDistal`</li>\n/// <li>`MiddleTip`</li>\n/// <li>`RingMetacarpal`</li>\n/// <li>`RingProximal`</li>\n/// <li>`RingIntermediate`</li>\n/// <li>`RingDistal`</li>\n/// <li>`RingTip`</li>\n/// <li>`LittleMetacarpal`</li>\n/// <li>`LittleProximal`</li>\n/// <li>`LittleIntermediate`</li>\n/// <li>`LittleDistal`</li>\n/// <li>`LittleTip`</li>\n/// </ul>\n/// </param>\n/// <returns> FVector, the coordinates of the skeletal node. </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Returns the position of the skeletal node for the specified hand component.</summary>\n<param name =\"DeviceHand\">(In) EPICOXRHandType, specifies which hand component to identify.\n<ul>\n<li>`None`: No identification is performed, and the return value is always `false`</li>\n<li>`Left`: Left hand</li>\n<li>`Right`: Right hand</li>\n</ul>\n</param>\n<param name =\"Key\">(In) EPicoXRHandJoint, specifies which skeletal nodes to identify.\n<ul>\n<li>`Palm`</li>\n<li>`Wrist`</li>\n<li>`ThumbMetacarpal`</li>\n<li>`ThumbProximal`</li>\n<li>`ThumbDistal`</li>\n<li>`ThumbTip`</li>\n<li>`IndexMetacarpal`</li>\n<li>`IndexProximal`</li>\n<li>`IndexIntermediate`</li>\n<li>`IndexDistal`</li>\n<li>`IndexTip`</li>\n<li>`MiddleMetacarpal`</li>\n<li>`MiddleProximal`</li>\n<li>`MiddleIntermediate`</li>\n<li>`MiddleDistal`</li>\n<li>`MiddleTip`</li>\n<li>`RingMetacarpal`</li>\n<li>`RingProximal`</li>\n<li>`RingIntermediate`</li>\n<li>`RingDistal`</li>\n<li>`RingTip`</li>\n<li>`LittleMetacarpal`</li>\n<li>`LittleProximal`</li>\n<li>`LittleIntermediate`</li>\n<li>`LittleDistal`</li>\n<li>`LittleTip`</li>\n</ul>\n</param>\n<returns> FVector, the coordinates of the skeletal node. </returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "GetBoneLocation", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventGetBoneLocation_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics
	{
		struct PICOXRInputFunctionLibrary_eventGetBoneRadii_Parms
		{
			EPICOXRHandType DeviceHand;
			EPICOXRHandJoint Key;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Key_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetBoneRadii_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetBoneRadii_Parms, Key), Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetBoneRadii_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_Key_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/// <summary>Returns the radius of the skeletal node for the specified hand component.</summary>\n/// <param name =\"DeviceHand\">(In) EPICOXRHandType, specifies which hand component to identify.\n/// <ul>\n/// <li>`None`: No identification is performed, and the return value is always `false`</li>\n/// <li>`Left`: Left hand</li>\n/// <li>`Right`: Right hand</li>\n/// </ul>\n/// </param>\n/// <param name =\"Key\">(In) EPicoXRHandJoint, specifies which skeletal nodes to identify.\n/// <ul>\n/// <li>`Palm`</li>\n/// <li>`Wrist`</li>\n/// <li>`ThumbMetacarpal`</li>\n/// <li>`ThumbProximal`</li>\n/// <li>`ThumbDistal`</li>\n/// <li>`ThumbTip`</li>\n/// <li>`IndexMetacarpal`</li>\n/// <li>`IndexProximal`</li>\n/// <li>`IndexIntermediate`</li>\n/// <li>`IndexDistal`</li>\n/// <li>`IndexTip`</li>\n/// <li>`MiddleMetacarpal`</li>\n/// <li>`MiddleProximal`</li>\n/// <li>`MiddleIntermediate`</li>\n/// <li>`MiddleDistal`</li>\n/// <li>`MiddleTip`</li>\n/// <li>`RingMetacarpal`</li>\n/// <li>`RingProximal`</li>\n/// <li>`RingIntermediate`</li>\n/// <li>`RingDistal`</li>\n/// <li>`RingTip`</li>\n/// <li>`LittleMetacarpal`</li>\n/// <li>`LittleProximal`</li>\n/// <li>`LittleIntermediate`</li>\n/// <li>`LittleDistal`</li>\n/// <li>`LittleTip`</li>\n/// </ul>\n/// </param>\n/// <returns> FVector, the coordinates of the skeletal node. </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Returns the radius of the skeletal node for the specified hand component.</summary>\n<param name =\"DeviceHand\">(In) EPICOXRHandType, specifies which hand component to identify.\n<ul>\n<li>`None`: No identification is performed, and the return value is always `false`</li>\n<li>`Left`: Left hand</li>\n<li>`Right`: Right hand</li>\n</ul>\n</param>\n<param name =\"Key\">(In) EPicoXRHandJoint, specifies which skeletal nodes to identify.\n<ul>\n<li>`Palm`</li>\n<li>`Wrist`</li>\n<li>`ThumbMetacarpal`</li>\n<li>`ThumbProximal`</li>\n<li>`ThumbDistal`</li>\n<li>`ThumbTip`</li>\n<li>`IndexMetacarpal`</li>\n<li>`IndexProximal`</li>\n<li>`IndexIntermediate`</li>\n<li>`IndexDistal`</li>\n<li>`IndexTip`</li>\n<li>`MiddleMetacarpal`</li>\n<li>`MiddleProximal`</li>\n<li>`MiddleIntermediate`</li>\n<li>`MiddleDistal`</li>\n<li>`MiddleTip`</li>\n<li>`RingMetacarpal`</li>\n<li>`RingProximal`</li>\n<li>`RingIntermediate`</li>\n<li>`RingDistal`</li>\n<li>`RingTip`</li>\n<li>`LittleMetacarpal`</li>\n<li>`LittleProximal`</li>\n<li>`LittleIntermediate`</li>\n<li>`LittleDistal`</li>\n<li>`LittleTip`</li>\n</ul>\n</param>\n<returns> FVector, the coordinates of the skeletal node. </returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "GetBoneRadii", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventGetBoneRadii_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics
	{
		struct PICOXRInputFunctionLibrary_eventGetBoneRotation_Parms
		{
			EPICOXRHandType DeviceHand;
			EPICOXRHandJoint Key;
			FQuat ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Key_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetBoneRotation_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetBoneRotation_Parms, Key), Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetBoneRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_Key_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/// <summary>Returns the rotational pose of the skeletal node for the specified hand component.</summary>\n/// <param name =\"DeviceHand\">(In) EPICOXRHandType, specifies which hand component to identify.\n/// <ul>\n/// <li>`None`: No identification is performed, and the return value is always `false`</li>\n/// <li>`Left`: Left hand</li>\n/// <li>`Right`: Right hand</li>\n/// </ul>\n/// </param>\n/// <param name =\"Key\">(In) EPicoXRHandJoint, specifies which skeletal nodes to identify.\n/// <ul>\n/// <li>`Palm`</li>\n/// <li>`Wrist`</li>\n/// <li>`ThumbMetacarpal`</li>\n/// <li>`ThumbProximal`</li>\n/// <li>`ThumbDistal`</li>\n/// <li>`ThumbTip`</li>\n/// <li>`IndexMetacarpal`</li>\n/// <li>`IndexProximal`</li>\n/// <li>`IndexIntermediate`</li>\n/// <li>`IndexDistal`</li>\n/// <li>`IndexTip`</li>\n/// <li>`MiddleMetacarpal`</li>\n/// <li>`MiddleProximal`</li>\n/// <li>`MiddleIntermediate`</li>\n/// <li>`MiddleDistal`</li>\n/// <li>`MiddleTip`</li>\n/// <li>`RingMetacarpal`</li>\n/// <li>`RingProximal`</li>\n/// <li>`RingIntermediate`</li>\n/// <li>`RingDistal`</li>\n/// <li>`RingTip`</li>\n/// <li>`LittleMetacarpal`</li>\n/// <li>`LittleProximal`</li>\n/// <li>`LittleIntermediate`</li>\n/// <li>`LittleDistal`</li>\n/// <li>`LittleTip`</li>\n/// </ul>\n/// </param>\n/// <returns> FRotator, rotational pose of the skeletal node. </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Returns the rotational pose of the skeletal node for the specified hand component.</summary>\n<param name =\"DeviceHand\">(In) EPICOXRHandType, specifies which hand component to identify.\n<ul>\n<li>`None`: No identification is performed, and the return value is always `false`</li>\n<li>`Left`: Left hand</li>\n<li>`Right`: Right hand</li>\n</ul>\n</param>\n<param name =\"Key\">(In) EPicoXRHandJoint, specifies which skeletal nodes to identify.\n<ul>\n<li>`Palm`</li>\n<li>`Wrist`</li>\n<li>`ThumbMetacarpal`</li>\n<li>`ThumbProximal`</li>\n<li>`ThumbDistal`</li>\n<li>`ThumbTip`</li>\n<li>`IndexMetacarpal`</li>\n<li>`IndexProximal`</li>\n<li>`IndexIntermediate`</li>\n<li>`IndexDistal`</li>\n<li>`IndexTip`</li>\n<li>`MiddleMetacarpal`</li>\n<li>`MiddleProximal`</li>\n<li>`MiddleIntermediate`</li>\n<li>`MiddleDistal`</li>\n<li>`MiddleTip`</li>\n<li>`RingMetacarpal`</li>\n<li>`RingProximal`</li>\n<li>`RingIntermediate`</li>\n<li>`RingDistal`</li>\n<li>`RingTip`</li>\n<li>`LittleMetacarpal`</li>\n<li>`LittleProximal`</li>\n<li>`LittleIntermediate`</li>\n<li>`LittleDistal`</li>\n<li>`LittleTip`</li>\n</ul>\n</param>\n<returns> FRotator, rotational pose of the skeletal node. </returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "GetBoneRotation", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventGetBoneRotation_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics
	{
		struct PICOXRInputFunctionLibrary_eventGetHandRootPose_Parms
		{
			EPICOXRHandType DeviceHand;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetHandRootPose_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetHandRootPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/// <summary>Returns the root node's pose transformation for the specific hand component.</summary>\n/// <param name =\"DeviceHand\">(In) EPICOXRHandType, specifies which hand component to identify.\n/// <ul>\n/// <li>`None`: No identification is performed, and the return value is always `false`</li>\n/// <li>`Left`: Left hand</li>\n/// <li>`Right`: Right hand</li>\n/// </ul>\n/// </param>\n/// <returns>FTranform, transformation value. </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Returns the root node's pose transformation for the specific hand component.</summary>\n<param name =\"DeviceHand\">(In) EPICOXRHandType, specifies which hand component to identify.\n<ul>\n<li>`None`: No identification is performed, and the return value is always `false`</li>\n<li>`Left`: Left hand</li>\n<li>`Right`: Right hand</li>\n</ul>\n</param>\n<returns>FTranform, transformation value. </returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "GetHandRootPose", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventGetHandRootPose_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics
	{
		struct PICOXRInputFunctionLibrary_eventGetHandScale_Parms
		{
			EPICOXRHandType DeviceHand;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetHandScale_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetHandScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/// <summary>Returns the scaling factor of the specified hand component.</summary>\n/// <param name =\"DeviceHand\">(In) EPICOXRHandType, specifies which hand component to identify.\n/// <ul>\n/// <li>`None`: No identification is performed, and the return value is always `false`</li>\n/// <li>`Left`: Left hand</li>\n/// <li>`Right`: Right hand</li>\n/// </ul>\n/// </param>\n/// <returns>Float, the scaling factor. </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Returns the scaling factor of the specified hand component.</summary>\n<param name =\"DeviceHand\">(In) EPICOXRHandType, specifies which hand component to identify.\n<ul>\n<li>`None`: No identification is performed, and the return value is always `false`</li>\n<li>`Left`: Left hand</li>\n<li>`Right`: Right hand</li>\n</ul>\n</param>\n<returns>Float, the scaling factor. </returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "GetHandScale", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventGetHandScale_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPinchStrength_Statics
	{
		struct PICOXRInputFunctionLibrary_eventGetPinchStrength_Parms
		{
			EPICOXRHandType DeviceHand;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPinchStrength_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPinchStrength_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPinchStrength_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetPinchStrength_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPinchStrength_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPinchStrength_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPinchStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetPinchStrength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPinchStrength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPinchStrength_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPinchStrength_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPinchStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPinchStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/// <summary>Returns the click strength for the specified hand component.</summary>\n/// <param name =\"DeviceHand\">(In) EPICOXRHandType, specifies which hand component to identify.\n/// <ul>\n/// <li>`None`: No identification is performed, and the return value is always `false`</li>\n/// <li>`Left`: Left hand</li>\n/// <li>`Right`: Right hand</li>\n/// </ul>\n/// </param>\n/// <returns>Float, click strength. </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Returns the click strength for the specified hand component.</summary>\n<param name =\"DeviceHand\">(In) EPICOXRHandType, specifies which hand component to identify.\n<ul>\n<li>`None`: No identification is performed, and the return value is always `false`</li>\n<li>`Left`: Left hand</li>\n<li>`Right`: Right hand</li>\n</ul>\n</param>\n<returns>Float, click strength. </returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPinchStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "GetPinchStrength", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventGetPinchStrength_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPinchStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPinchStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPinchStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPinchStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPinchStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPinchStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetRayPose_Statics
	{
		struct PICOXRInputFunctionLibrary_eventGetRayPose_Parms
		{
			EPICOXRHandType DeviceHand;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetRayPose_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetRayPose_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetRayPose_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetRayPose_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetRayPose_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetRayPose_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetRayPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetRayPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetRayPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetRayPose_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetRayPose_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetRayPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetRayPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/// <summary>Returns the laser pointer pose for the specified hand component.</summary>\n/// <param name =\"DeviceHand\">(In) EPICOXRHandType, specifies which hand component to identify.\n/// <ul>\n/// <li>`None`: No identification is performed, and the return value is always `false`</li>\n/// <li>`Left`: Left hand</li>\n/// <li>`Right`: Right hand</li>\n/// </ul>\n/// </param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: The position data of the current skeletal node is valid.</li>\n/// <li>`false`: The position data of the current skeletal node is invalid.</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Returns the laser pointer pose for the specified hand component.</summary>\n<param name =\"DeviceHand\">(In) EPICOXRHandType, specifies which hand component to identify.\n<ul>\n<li>`None`: No identification is performed, and the return value is always `false`</li>\n<li>`Left`: Left hand</li>\n<li>`Right`: Right hand</li>\n</ul>\n</param>\n<returns>Bool:\n<ul>\n<li>`true`: The position data of the current skeletal node is valid.</li>\n<li>`false`: The position data of the current skeletal node is invalid.</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetRayPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "GetRayPose", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventGetRayPose_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetRayPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetRayPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetRayPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetRayPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetRayPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetRayPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics
	{
		struct PICOXRInputFunctionLibrary_eventGetTrackingConfidence_Parms
		{
			EPICOXRHandType DeviceHand;
			EPICOXRHandTrackingConfidence ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetTrackingConfidence_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventGetTrackingConfidence_Parms, ReturnValue), Z_Construct_UEnum_PICOXRInput_EPICOXRHandTrackingConfidence, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n\x09 * Get the tracking confidence of the hand\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get tracking confidence of\n\x09 *//// <summary>Returns the tracking confidence for the specified hand component.</summary>\n/// <param name =\"DeviceHand\">(In) EPICOXRHandType, specifies which hand component to identify.\n/// <ul>\n/// <li>`None`: No identification is performed, and the return value is always `false`</li>\n/// <li>`Left`: Left hand</li>\n/// <li>`Right`: Right hand</li>\n/// </ul>\n/// </param>\n/// <returns>EPicoXRHandTrackingConfidence\n/// <ul>\n/// <li>`High`: High confidence level </li>\n/// <li>`Low`: Low confidence level </li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get the tracking confidence of the hand\n\n@param DeviceHand                            (in) The hand to get tracking confidence of\n        /// <summary>Returns the tracking confidence for the specified hand component.</summary>\n/// <param name =\"DeviceHand\">(In) EPICOXRHandType, specifies which hand component to identify.\n/// <ul>\n/// <li>`None`: No identification is performed, and the return value is always `false`</li>\n/// <li>`Left`: Left hand</li>\n/// <li>`Right`: Right hand</li>\n/// </ul>\n/// </param>\n/// <returns>EPicoXRHandTrackingConfidence\n/// <ul>\n/// <li>`High`: High confidence level </li>\n/// <li>`Low`: Low confidence level </li>\n/// </ul>\n/// </returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "GetTrackingConfidence", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventGetTrackingConfidence_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics
	{
		struct PICOXRInputFunctionLibrary_eventIsBoneOrientationTracked_Parms
		{
			EPICOXRHandType DeviceHand;
			EPICOXRHandJoint Key;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Key_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventIsBoneOrientationTracked_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventIsBoneOrientationTracked_Parms, Key), Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventIsBoneOrientationTracked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventIsBoneOrientationTracked_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_Key_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n\x09 * Check if the specific HandJoint is Bone Orientation Tracked\n\x09 *\n\x09 * @param DeviceHand          (in) The hand to get the Orientation Tracked status from\n\x09 * @param Key              (in) The HandJoint to get the Orientation Tracked status from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Check if the specific HandJoint is Bone Orientation Tracked\n\n@param DeviceHand          (in) The hand to get the Orientation Tracked status from\n@param Key              (in) The HandJoint to get the Orientation Tracked status from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "IsBoneOrientationTracked", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventIsBoneOrientationTracked_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics
	{
		struct PICOXRInputFunctionLibrary_eventIsBoneOrientationValid_Parms
		{
			EPICOXRHandType DeviceHand;
			EPICOXRHandJoint Key;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Key_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventIsBoneOrientationValid_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventIsBoneOrientationValid_Parms, Key), Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventIsBoneOrientationValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventIsBoneOrientationValid_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_Key_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/// <summary>Determine the validity of the rotation data for hand joints.</summary>\n/// <param name =\"DeviceHand\">(In) EPICOXRHandType, specifies which hand component to identify.\n/// <ul>\n/// <li>`None`: No identification is performed, and the return value is always `false`</li>\n/// <li>`Left`: Left hand</li>\n/// <li>`Right`: Right hand</li>\n/// </ul>\n/// </param>\n/// <param name =\"Key\">(In) EPicoXRHandJoint, specifies which skeletal nodes to identify.\n/// <ul>\n/// <li>`Palm`</li>\n/// <li>`Wrist`</li>\n/// <li>`ThumbMetacarpal`</li>\n/// <li>`ThumbProximal`</li>\n/// <li>`ThumbDistal`</li>\n/// <li>`ThumbTip`</li>\n/// <li>`IndexMetacarpal`</li>\n/// <li>`IndexProximal`</li>\n/// <li>`IndexIntermediate`</li>\n/// <li>`IndexDistal`</li>\n/// <li>`IndexTip`</li>\n/// <li>`MiddleMetacarpal`</li>\n/// <li>`MiddleProximal`</li>\n/// <li>`MiddleIntermediate`</li>\n/// <li>`MiddleDistal`</li>\n/// <li>`MiddleTip`</li>\n/// <li>`RingMetacarpal`</li>\n/// <li>`RingProximal`</li>\n/// <li>`RingIntermediate`</li>\n/// <li>`RingDistal`</li>\n/// <li>`RingTip`</li>\n/// <li>`LittleMetacarpal`</li>\n/// <li>`LittleProximal`</li>\n/// <li>`LittleIntermediate`</li>\n/// <li>`LittleDistal`</li>\n/// <li>`LittleTip`</li>\n/// </ul>\n/// </param>\n/// <returns>Bool: \n/// <ul>\n/// <li>`true`: The rotation data of the current skeletal node is valid.</li>\n/// <li>`false`: The rotation data of the current skeletal node is invalid.</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Determine the validity of the rotation data for hand joints.</summary>\n<param name =\"DeviceHand\">(In) EPICOXRHandType, specifies which hand component to identify.\n<ul>\n<li>`None`: No identification is performed, and the return value is always `false`</li>\n<li>`Left`: Left hand</li>\n<li>`Right`: Right hand</li>\n</ul>\n</param>\n<param name =\"Key\">(In) EPicoXRHandJoint, specifies which skeletal nodes to identify.\n<ul>\n<li>`Palm`</li>\n<li>`Wrist`</li>\n<li>`ThumbMetacarpal`</li>\n<li>`ThumbProximal`</li>\n<li>`ThumbDistal`</li>\n<li>`ThumbTip`</li>\n<li>`IndexMetacarpal`</li>\n<li>`IndexProximal`</li>\n<li>`IndexIntermediate`</li>\n<li>`IndexDistal`</li>\n<li>`IndexTip`</li>\n<li>`MiddleMetacarpal`</li>\n<li>`MiddleProximal`</li>\n<li>`MiddleIntermediate`</li>\n<li>`MiddleDistal`</li>\n<li>`MiddleTip`</li>\n<li>`RingMetacarpal`</li>\n<li>`RingProximal`</li>\n<li>`RingIntermediate`</li>\n<li>`RingDistal`</li>\n<li>`RingTip`</li>\n<li>`LittleMetacarpal`</li>\n<li>`LittleProximal`</li>\n<li>`LittleIntermediate`</li>\n<li>`LittleDistal`</li>\n<li>`LittleTip`</li>\n</ul>\n</param>\n<returns>Bool:\n<ul>\n<li>`true`: The rotation data of the current skeletal node is valid.</li>\n<li>`false`: The rotation data of the current skeletal node is invalid.</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "IsBoneOrientationValid", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventIsBoneOrientationValid_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics
	{
		struct PICOXRInputFunctionLibrary_eventIsBonePositionTracked_Parms
		{
			EPICOXRHandType DeviceHand;
			EPICOXRHandJoint Key;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Key_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventIsBonePositionTracked_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventIsBonePositionTracked_Parms, Key), Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventIsBonePositionTracked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventIsBonePositionTracked_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_Key_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n\x09 * Check if the specific HandJoint is Bone Position Tracked\n\x09 *\n\x09 * @param DeviceHand          (in) The hand to get the Position Tracked status from\n\x09 * @param Key              (in) The HandJoint to get the Position Tracked status from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Check if the specific HandJoint is Bone Position Tracked\n\n@param DeviceHand          (in) The hand to get the Position Tracked status from\n@param Key              (in) The HandJoint to get the Position Tracked status from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "IsBonePositionTracked", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventIsBonePositionTracked_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics
	{
		struct PICOXRInputFunctionLibrary_eventIsBonePositionValid_Parms
		{
			EPICOXRHandType DeviceHand;
			EPICOXRHandJoint Key;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Key_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventIsBonePositionValid_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventIsBonePositionValid_Parms, Key), Z_Construct_UEnum_PICOXRInput_EPICOXRHandJoint, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventIsBonePositionValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventIsBonePositionValid_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_Key_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/**\n\x09 * Check if the specific HandJoint is Bone Position Valid\n\x09 *\n\x09 * @param DeviceHand          (in) The hand to get the Position Valid status from\n\x09 * @param Key              (in) The HandJoint to get the Position Valid status from\n\x09 *//// <summary>Determine the validity of the position data for hand joints.</summary>\n/// <param name =\"DeviceHand\">(In) EPICOXRHandType, specifies which hand component to identify.\n/// <ul>\n/// <li>`None`: No identification is performed, and the return value is always `false`</li>\n/// <li>`Left`: Left hand</li>\n/// <li>`Right`: Right hand</li>\n/// </ul>\n/// </param>\n/// <param name =\"Key\">(In) EPicoXRHandJoint, specifies which skeletal nodes to identify.\n/// <ul>\n/// <li>`Palm`</li>\n/// <li>`Wrist`</li>\n/// <li>`ThumbMetacarpal`</li>\n/// <li>`ThumbProximal`</li>\n/// <li>`ThumbDistal`</li>\n/// <li>`ThumbTip`</li>\n/// <li>`IndexMetacarpal`</li>\n/// <li>`IndexProximal`</li>\n/// <li>`IndexIntermediate`</li>\n/// <li>`IndexDistal`</li>\n/// <li>`IndexTip`</li>\n/// <li>`MiddleMetacarpal`</li>\n/// <li>`MiddleProximal`</li>\n/// <li>`MiddleIntermediate`</li>\n/// <li>`MiddleDistal`</li>\n/// <li>`MiddleTip`</li>\n/// <li>`RingMetacarpal`</li>\n/// <li>`RingProximal`</li>\n/// <li>`RingIntermediate`</li>\n/// <li>`RingDistal`</li>\n/// <li>`RingTip`</li>\n/// <li>`LittleMetacarpal`</li>\n/// <li>`LittleProximal`</li>\n/// <li>`LittleIntermediate`</li>\n/// <li>`LittleDistal`</li>\n/// <li>`LittleTip`</li>\n/// </ul>\n/// </param>\n/// <returns>Bool: \n/// <ul>\n/// <li>`true`: The position data of the current skeletal node is valid.</li>\n/// <li>`false`: The position data of the current skeletal node is invalid.</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Check if the specific HandJoint is Bone Position Valid\n\n@param DeviceHand          (in) The hand to get the Position Valid status from\n@param Key              (in) The HandJoint to get the Position Valid status from\n        /// <summary>Determine the validity of the position data for hand joints.</summary>\n/// <param name =\"DeviceHand\">(In) EPICOXRHandType, specifies which hand component to identify.\n/// <ul>\n/// <li>`None`: No identification is performed, and the return value is always `false`</li>\n/// <li>`Left`: Left hand</li>\n/// <li>`Right`: Right hand</li>\n/// </ul>\n/// </param>\n/// <param name =\"Key\">(In) EPicoXRHandJoint, specifies which skeletal nodes to identify.\n/// <ul>\n/// <li>`Palm`</li>\n/// <li>`Wrist`</li>\n/// <li>`ThumbMetacarpal`</li>\n/// <li>`ThumbProximal`</li>\n/// <li>`ThumbDistal`</li>\n/// <li>`ThumbTip`</li>\n/// <li>`IndexMetacarpal`</li>\n/// <li>`IndexProximal`</li>\n/// <li>`IndexIntermediate`</li>\n/// <li>`IndexDistal`</li>\n/// <li>`IndexTip`</li>\n/// <li>`MiddleMetacarpal`</li>\n/// <li>`MiddleProximal`</li>\n/// <li>`MiddleIntermediate`</li>\n/// <li>`MiddleDistal`</li>\n/// <li>`MiddleTip`</li>\n/// <li>`RingMetacarpal`</li>\n/// <li>`RingProximal`</li>\n/// <li>`RingIntermediate`</li>\n/// <li>`RingDistal`</li>\n/// <li>`RingTip`</li>\n/// <li>`LittleMetacarpal`</li>\n/// <li>`LittleProximal`</li>\n/// <li>`LittleIntermediate`</li>\n/// <li>`LittleDistal`</li>\n/// <li>`LittleTip`</li>\n/// </ul>\n/// </param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: The position data of the current skeletal node is valid.</li>\n/// <li>`false`: The position data of the current skeletal node is invalid.</li>\n/// </ul>\n/// </returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "IsBonePositionValid", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventIsBonePositionValid_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsComputed_Statics
	{
		struct PICOXRInputFunctionLibrary_eventIsComputed_Parms
		{
			EPICOXRHandType DeviceHand;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsComputed_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsComputed_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsComputed_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventIsComputed_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsComputed_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsComputed_Statics::NewProp_DeviceHand_MetaData)) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsComputed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventIsComputed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsComputed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventIsComputed_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsComputed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsComputed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsComputed_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsComputed_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsComputed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsComputed_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/// <summary>Determines whether the specified hand component has been successfully tracked.</summary>\n/// <param name =\"DeviceHand\">(In) EPICOXRHandType, specifies which hand component to identify.\n/// <ul>\n/// <li>`None`: No identification is performed, and the return value is always `false`</li>\n/// <li>`Left`: Left hand</li>\n/// <li>`Right`: Right hand</li>\n/// </ul>\n/// </param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: Tracked successfully.</li>\n/// <li>`false`: Failed to track.</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Determines whether the specified hand component has been successfully tracked.</summary>\n<param name =\"DeviceHand\">(In) EPICOXRHandType, specifies which hand component to identify.\n<ul>\n<li>`None`: No identification is performed, and the return value is always `false`</li>\n<li>`Left`: Left hand</li>\n<li>`Right`: Right hand</li>\n</ul>\n</param>\n<returns>Bool:\n<ul>\n<li>`true`: Tracked successfully.</li>\n<li>`false`: Failed to track.</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsComputed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "IsComputed", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventIsComputed_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsComputed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsComputed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsComputed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsComputed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsComputed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsComputed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled_Statics
	{
		struct PICOXRInputFunctionLibrary_eventIsHandTrackingEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventIsHandTrackingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventIsHandTrackingEnabled_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/// <summary>Determines the on/off status of the hand tracking feature.</summary>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: Hand tracking is enabled</li>\n/// <li>`false`: Hand tracking is disabled</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Determines the on/off status of the hand tracking feature.</summary>\n<returns>Bool:\n<ul>\n<li>`true`: Hand tracking is enabled</li>\n<li>`false`: Hand tracking is disabled</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "IsHandTrackingEnabled", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventIsHandTrackingEnabled_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsPinchValid_Statics
	{
		struct PICOXRInputFunctionLibrary_eventIsPinchValid_Parms
		{
			EPICOXRHandType DeviceHand;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsPinchValid_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsPinchValid_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsPinchValid_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventIsPinchValid_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsPinchValid_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsPinchValid_Statics::NewProp_DeviceHand_MetaData)) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsPinchValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventIsPinchValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsPinchValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventIsPinchValid_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsPinchValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsPinchValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsPinchValid_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsPinchValid_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsPinchValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsPinchValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/// <summary>Determines if the laser pointer for the specified hand component is in the \"click\" position.</summary>\n/// <param name =\"DeviceHand\">(In) EPICOXRHandType, specifies which hand component to identify.\n/// <ul>\n/// <li>`None`: No identification is performed, and the return value is always `false`</li>\n/// <li>`Left`: Left hand</li>\n/// <li>`Right`: Right hand</li>\n/// </ul>\n/// </param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: in the \"click\" position </li>\n/// <li>`false`: not in the \"click\" position </li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Determines if the laser pointer for the specified hand component is in the \"click\" position.</summary>\n<param name =\"DeviceHand\">(In) EPICOXRHandType, specifies which hand component to identify.\n<ul>\n<li>`None`: No identification is performed, and the return value is always `false`</li>\n<li>`Left`: Left hand</li>\n<li>`Right`: Right hand</li>\n</ul>\n</param>\n<returns>Bool:\n<ul>\n<li>`true`: in the \"click\" position </li>\n<li>`false`: not in the \"click\" position </li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsPinchValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "IsPinchValid", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventIsPinchValid_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsPinchValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsPinchValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsPinchValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsPinchValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsPinchValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsPinchValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsRayValid_Statics
	{
		struct PICOXRInputFunctionLibrary_eventIsRayValid_Parms
		{
			EPICOXRHandType DeviceHand;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsRayValid_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsRayValid_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsRayValid_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventIsRayValid_Parms, DeviceHand), Z_Construct_UEnum_PICOXRInput_EPICOXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsRayValid_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsRayValid_Statics::NewProp_DeviceHand_MetaData)) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsRayValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventIsRayValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsRayValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventIsRayValid_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsRayValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsRayValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsRayValid_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsRayValid_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsRayValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsRayValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRHandTracking" },
		{ "Comment", "/// <summary>Determines whether the laser pointer for the specified hand component is \"displayed\".</summary>\n/// <param name =\"DeviceHand\">(In) EPICOXRHandType, specifies which hand component to identify.\n/// <ul>\n/// <li>`None`: No identification is performed, and the return value is always `false`</li>\n/// <li>`Left`: Left hand</li>\n/// <li>`Right`: Right hand</li>\n/// </ul>\n/// </param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: \"displayed\" </li>\n/// <li>`false`: \"not displayed\" </li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Determines whether the laser pointer for the specified hand component is \"displayed\".</summary>\n<param name =\"DeviceHand\">(In) EPICOXRHandType, specifies which hand component to identify.\n<ul>\n<li>`None`: No identification is performed, and the return value is always `false`</li>\n<li>`Left`: Left hand</li>\n<li>`Right`: Right hand</li>\n</ul>\n</param>\n<returns>Bool:\n<ul>\n<li>`true`: \"displayed\" </li>\n<li>`false`: \"not displayed\" </li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsRayValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "IsRayValid", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventIsRayValid_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsRayValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsRayValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsRayValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsRayValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsRayValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsRayValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_ClearVibrateByCache_Parms
		{
			int32 SourceId;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache_Statics::NewProp_SourceId = { "SourceId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_ClearVibrateByCache_Parms, SourceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_ClearVibrateByCache_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache_Statics::NewProp_SourceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Clears the cached audio vibration data.</summary>\n/// <param name =\"SourceId\">(In) the ID returned by another vibration control API. </param>\n/// <returns>\n/// <ul>\n/// <li>`0`: success</li>\n/// <li>`-1`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Clears the cached audio vibration data.</summary>\n<param name =\"SourceId\">(In) the ID returned by another vibration control API. </param>\n<returns>\n<ul>\n<li>`0`: success</li>\n<li>`-1`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_ClearVibrateByCache", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_ClearVibrateByCache_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_CreateHapticStream_Parms
		{
			FString PHFVersion;
			int32 FrameDurationMs;
			int32 Slot;
			int32 Reversal;
			float Amp;
			float Speed;
			int32 SourceID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PHFVersion;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FrameDurationMs;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Reversal;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceID;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream_Statics::NewProp_PHFVersion = { "PHFVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_CreateHapticStream_Parms, PHFVersion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream_Statics::NewProp_FrameDurationMs = { "FrameDurationMs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_CreateHapticStream_Parms, FrameDurationMs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_CreateHapticStream_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream_Statics::NewProp_Reversal = { "Reversal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_CreateHapticStream_Parms, Reversal), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream_Statics::NewProp_Amp = { "Amp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_CreateHapticStream_Parms, Amp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_CreateHapticStream_Parms, Speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream_Statics::NewProp_SourceID = { "SourceID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_CreateHapticStream_Parms, SourceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_CreateHapticStream_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream_Statics::NewProp_PHFVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream_Statics::NewProp_FrameDurationMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream_Statics::NewProp_Reversal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream_Statics::NewProp_Amp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream_Statics::NewProp_SourceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Creates a haptic stream.</summary>\n/// <param name =\"PHFVersion\">(In) Fstring, the version of the PHF ( PICO Haptic File). </param>\n/// <param name =\"FrameDurationMs\">(In) Int, interval of each frame. </param>\n/// <param name =\"Slot\">(In) specifies which controller to vibrate with the audio.\n/// <ul>\n/// <li>`No`: none</li>\n/// <li>`Left`: left controller</li>\n/// <li>`Right`: right controller</li>\n/// <li>`LeftAndRight`: both</li>\n/// </ul>\n/// </param>\n/// <param name =\"Reversal\">(In) Not used currently. Set to 0 by default. </param>\n/// <param name =\"Amp\">(In) Float, vibration gain data. The range is 0.0 to 2.0:\n/// <ul>\n/// <li>`0.0`: for no vibration</li>\n/// <li>`1.0`: for standard amplitude</li>\n/// <li>`2.0`: for double the standard amplitude</li>\n/// </ul>\n/// </param>\n/// <param name =\"Speed\">(In) Speed of the haptic stream. </param>\n/// <param name =\"SourceID\">(Out) Int, returns a unique control ID for the corresponding vibration. </param>\n/// <returns>\n/// <ul>\n/// <li>`0`: success</li>\n/// <li>`-1`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Creates a haptic stream.</summary>\n<param name =\"PHFVersion\">(In) Fstring, the version of the PHF ( PICO Haptic File). </param>\n<param name =\"FrameDurationMs\">(In) Int, interval of each frame. </param>\n<param name =\"Slot\">(In) specifies which controller to vibrate with the audio.\n<ul>\n<li>`No`: none</li>\n<li>`Left`: left controller</li>\n<li>`Right`: right controller</li>\n<li>`LeftAndRight`: both</li>\n</ul>\n</param>\n<param name =\"Reversal\">(In) Not used currently. Set to 0 by default. </param>\n<param name =\"Amp\">(In) Float, vibration gain data. The range is 0.0 to 2.0:\n<ul>\n<li>`0.0`: for no vibration</li>\n<li>`1.0`: for standard amplitude</li>\n<li>`2.0`: for double the standard amplitude</li>\n</ul>\n</param>\n<param name =\"Speed\">(In) Speed of the haptic stream. </param>\n<param name =\"SourceID\">(Out) Int, returns a unique control ID for the corresponding vibration. </param>\n<returns>\n<ul>\n<li>`0`: success</li>\n<li>`-1`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_CreateHapticStream", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_CreateHapticStream_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPose_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetBodyTrackingPose_Parms
		{
			TArray<FPxrBodyTrackingTransform> BodyTrackingData;
			float WorldToMetersScale;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyTrackingData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BodyTrackingData;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldToMetersScale;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPose_Statics::NewProp_BodyTrackingData_Inner = { "BodyTrackingData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPxrBodyTrackingTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPose_Statics::NewProp_BodyTrackingData = { "BodyTrackingData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetBodyTrackingPose_Parms, BodyTrackingData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPose_Statics::NewProp_WorldToMetersScale = { "WorldToMetersScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetBodyTrackingPose_Parms, WorldToMetersScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_GetBodyTrackingPose_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_GetBodyTrackingPose_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPose_Statics::NewProp_BodyTrackingData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPose_Statics::NewProp_BodyTrackingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPose_Statics::NewProp_WorldToMetersScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Get all the available body tracking data.</summary>\n/// <param name =\"BodyTrackingData\">(Out) An array of body tracking data. The index of an element in the array corresponds to a tracking node. You can see the enumeration of the class `EPxrBodyTrackerRole` for correspondence. Only the first 16 elements, from \"Pelvis\" to \"Head\", have data. </param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "CPP_Default_WorldToMetersScale", "1.000000" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Get all the available body tracking data.</summary>\n<param name =\"BodyTrackingData\">(Out) An array of body tracking data. The index of an element in the array corresponds to a tracking node. You can see the enumeration of the class `EPxrBodyTrackerRole` for correspondence. Only the first 16 elements, from \"Pelvis\" to \"Head\", have data. </param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetBodyTrackingPose", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetBodyTrackingPose_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPoseByRole_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetBodyTrackingPoseByRole_Parms
		{
			EPxrBodyTrackerRole RoleType;
			FPxrBodyTrackingTransform RoleBodyTrackingData;
			float WorldToMetersScale;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RoleType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RoleType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoleBodyTrackingData;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldToMetersScale;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPoseByRole_Statics::NewProp_RoleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPoseByRole_Statics::NewProp_RoleType = { "RoleType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetBodyTrackingPoseByRole_Parms, RoleType), Z_Construct_UEnum_PICOXRInput_EPxrBodyTrackerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPoseByRole_Statics::NewProp_RoleBodyTrackingData = { "RoleBodyTrackingData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetBodyTrackingPoseByRole_Parms, RoleBodyTrackingData), Z_Construct_UScriptStruct_FPxrBodyTrackingTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPoseByRole_Statics::NewProp_WorldToMetersScale = { "WorldToMetersScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetBodyTrackingPoseByRole_Parms, WorldToMetersScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPoseByRole_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_GetBodyTrackingPoseByRole_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPoseByRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_GetBodyTrackingPoseByRole_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPoseByRole_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPoseByRole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPoseByRole_Statics::NewProp_RoleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPoseByRole_Statics::NewProp_RoleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPoseByRole_Statics::NewProp_RoleBodyTrackingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPoseByRole_Statics::NewProp_WorldToMetersScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPoseByRole_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPoseByRole_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Get the specified body tracking data.</summary>\n/// <param name =\"RoleType\">(In) Enum, the role to be tracked. Currently, only the first 16 types, from \"Pelvis\" to \"Head\", have data. </param>\n/// <param name =\"RoleBodyTrackingData\">(Out) The selected role's body tracking data. </param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "CPP_Default_WorldToMetersScale", "1.000000" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Get the specified body tracking data.</summary>\n<param name =\"RoleType\">(In) Enum, the role to be tracked. Currently, only the first 16 types, from \"Pelvis\" to \"Head\", have data. </param>\n<param name =\"RoleBodyTrackingData\">(Out) The selected role's body tracking data. </param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPoseByRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetBodyTrackingPoseByRole", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetBodyTrackingPoseByRole_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPoseByRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPoseByRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPoseByRole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPoseByRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPoseByRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPoseByRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetControllerAcceleration_Parms
		{
			EPICOXRControllerType ControllerType;
			FVector Acceleration;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Acceleration;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerAcceleration_Parms, ControllerType), Z_Construct_UEnum_PICOXRInput_EPICOXRControllerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerAcceleration_Parms, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_GetControllerAcceleration_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerAcceleration_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_ControllerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_ControllerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_Acceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Gets the acceleration of the specified controller.</summary>\n/// <param name =\"ControllerType>(In)(EPICOXRControllerType)Enum, the controller to get the acceleration for:\n/// <ul>\n/// <li>`LeftHand`: left controller</li>\n/// <li>`RightHand`: right controller</li>\n/// </ul>\n/// </param>\n/// <param name =\"Acceleration\">(Out) FVector, the acceleration of the specified controller (in cm/s). </param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Gets the acceleration of the specified controller.</summary>\n<param name =\"ControllerType>(In)(EPICOXRControllerType)Enum, the controller to get the acceleration for:\n<ul>\n<li>`LeftHand`: left controller</li>\n<li>`RightHand`: right controller</li>\n</ul>\n</param>\n<param name =\"Acceleration\">(Out) FVector, the acceleration of the specified controller (in cm/s). </param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetControllerAcceleration", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerAcceleration_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetControllerAngularVelocity_Parms
		{
			EPICOXRControllerType ControllerType;
			FVector AngularVelocity;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerAngularVelocity_Parms, ControllerType), Z_Construct_UEnum_PICOXRInput_EPICOXRControllerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerAngularVelocity_Parms, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_GetControllerAngularVelocity_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerAngularVelocity_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_ControllerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_ControllerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_AngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Gets the angular velocity of the specified controller.</summary>\n/// <param name =\"ControllerType>(In) (EPICOXRControllerType)Enum, the controller to get the connection state for:\n/// <ul>\n/// <li>`LeftHand`: left controller</li>\n/// <li>`RightHand`: right controller</li>\n/// </ul>\n/// </param>\n/// <param name =\"AngularVelocity\">(Out) FVector, the angular velocity of the specified controller (in rad/s). </param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Gets the angular velocity of the specified controller.</summary>\n<param name =\"ControllerType>(In) (EPICOXRControllerType)Enum, the controller to get the connection state for:\n<ul>\n<li>`LeftHand`: left controller</li>\n<li>`RightHand`: right controller</li>\n</ul>\n</param>\n<param name =\"AngularVelocity\">(Out) FVector, the angular velocity of the specified controller (in rad/s). </param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetControllerAngularVelocity", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerAngularVelocity_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetControllerConnectionState_Parms
		{
			EPICOXRControllerType ControllerType;
			bool Status;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
		static void NewProp_Status_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Status;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerConnectionState_Parms, ControllerType), Z_Construct_UEnum_PICOXRInput_EPICOXRControllerType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_Status_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_GetControllerConnectionState_Parms*)Obj)->Status = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerConnectionState_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_Status_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_GetControllerConnectionState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerConnectionState_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_ControllerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_ControllerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Gets the connection state of the specified controller.</summary>\n/// <param name =\"ControllerType>(In) (EPICOXRControllerType)Enum, the controller to get the connection state for:\n/// <ul>\n/// <li>`LeftHand`: left controller</li>\n/// <li>`RightHand`: right controller</li>\n/// </ul>\n/// </param>\n/// <param name =\"Status\">(Out) Int, the  connection state of the specified controller.\n/// <ul>\n/// <li>`true`: connected</li>\n/// <li>`false`: not connected</li>\n/// </ul>\n/// </param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Gets the connection state of the specified controller.</summary>\n<param name =\"ControllerType>(In) (EPICOXRControllerType)Enum, the controller to get the connection state for:\n<ul>\n<li>`LeftHand`: left controller</li>\n<li>`RightHand`: right controller</li>\n</ul>\n</param>\n<param name =\"Status\">(Out) Int, the  connection state of the specified controller.\n<ul>\n<li>`true`: connected</li>\n<li>`false`: not connected</li>\n</ul>\n</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetControllerConnectionState", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerConnectionState_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetControllerDeviceType_Parms
		{
			EPICOXRControllerDeviceType ControllerType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerDeviceType_Parms, ControllerType), Z_Construct_UEnum_PICOXRInput_EPICOXRControllerDeviceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::NewProp_ControllerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::NewProp_ControllerType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Gets the device model that the currently connected controller belongs to.</summary>\n/// <param name =\"ControllerType\">(Out)(EPICOXRControllerDeviceType) Enum, the controller to get the acceleration for:\n/// <ul>\n/// <li>`UnKnown`: UnKnown</li>\n/// <li>`G2`: PICO G2</li>\n/// <li>`Neo2`: PICO Neo 2</li>\n/// <li>`Neo3`: PICO Neo 3</li>\n/// <li>`PICO_4`: PICO 4</li>\n/// </ul>\n/// </param>\n/// <returns>None </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Gets the device model that the currently connected controller belongs to.</summary>\n<param name =\"ControllerType\">(Out)(EPICOXRControllerDeviceType) Enum, the controller to get the acceleration for:\n<ul>\n<li>`UnKnown`: UnKnown</li>\n<li>`G2`: PICO G2</li>\n<li>`Neo2`: PICO Neo 2</li>\n<li>`Neo3`: PICO Neo 3</li>\n<li>`PICO_4`: PICO 4</li>\n</ul>\n</param>\n<returns>None </returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetControllerDeviceType", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerDeviceType_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetControllerEnableHomekey_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_GetControllerEnableHomekey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerEnableHomekey_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Get controller enable homeKey.\n\x09* @return True if home key enable.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get controller enable homeKey.\n@return True if home key enable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetControllerEnableHomekey", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerEnableHomekey_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetControllerLinearVelocity_Parms
		{
			EPICOXRControllerType ControllerType;
			FVector LinearVelocity;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerLinearVelocity_Parms, ControllerType), Z_Construct_UEnum_PICOXRInput_EPICOXRControllerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerLinearVelocity_Parms, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_GetControllerLinearVelocity_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerLinearVelocity_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_ControllerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_ControllerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_LinearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Gets the acceleration of the specified controller.</summary>\n/// <param name =\"ControllerType>(In) (EPICOXRControllerType)Enum, the controller to get the acceleration for:\n/// <ul>\n/// <li>`LeftHand`: left controller</li>\n/// <li>`RightHand`: right controller</li>\n/// </ul>\n/// </param>\n/// <param name =\"LinearVelocity\">(Out)  FVector, the linear velocity of the specified controller (in cm/s). </param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Gets the acceleration of the specified controller.</summary>\n<param name =\"ControllerType>(In) (EPICOXRControllerType)Enum, the controller to get the acceleration for:\n<ul>\n<li>`LeftHand`: left controller</li>\n<li>`RightHand`: right controller</li>\n</ul>\n</param>\n<param name =\"LinearVelocity\">(Out)  FVector, the linear velocity of the specified controller (in cm/s). </param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetControllerLinearVelocity", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerLinearVelocity_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetControllerPower_Parms
		{
			EPICOXRControllerType ControllerType;
			int32 Power;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Power;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerPower_Parms, ControllerType), Z_Construct_UEnum_PICOXRInput_EPICOXRControllerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_Power = { "Power", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerPower_Parms, Power), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_GetControllerPower_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerPower_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_ControllerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_ControllerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_Power,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Gets the current battery level of the controller.</summary>\n/// <param name =\"ControllerType>(In) (EPICOXRControllerType)Enum, the controller to get the battery level for:\n/// <ul>\n/// <li>`LeftHand`: left controller</li>\n/// <li>`RightHand`: right controller</li>\n/// </ul>\n/// </param>\n/// <param name =\"Power\">(Out) Int, the battery level of the specified controller, value range: [1, 5].\n/// </param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Gets the current battery level of the controller.</summary>\n<param name =\"ControllerType>(In) (EPICOXRControllerType)Enum, the controller to get the battery level for:\n<ul>\n<li>`LeftHand`: left controller</li>\n<li>`RightHand`: right controller</li>\n</ul>\n</param>\n<param name =\"Power\">(Out) Int, the battery level of the specified controller, value range: [1, 5].\n</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetControllerPower", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerPower_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetControllerPredictedLocationAndRotation_Parms
		{
			EControllerHand DeviceHand;
			float PredictedTime;
			FVector OutLocation;
			FRotator OutRotation;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PredictedTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRotation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerPredictedLocationAndRotation_Parms, DeviceHand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_PredictedTime = { "PredictedTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerPredictedLocationAndRotation_Parms, PredictedTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_OutLocation = { "OutLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerPredictedLocationAndRotation_Parms, OutLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetControllerPredictedLocationAndRotation_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_GetControllerPredictedLocationAndRotation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerPredictedLocationAndRotation_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_PredictedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_OutLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_OutRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Gets the predicted location and rotation of the specified controller after a certain period of time.</summary>\n/// <param name =\"DeviceHand\">(In)(EControllerHand) Enum, the controller to get the predicted location and rotation for:\n/// <ul>\n/// <li>`Left`: left controller</li>\n/// <li>`Right`: right controller</li>\n/// </ul>\n/// </param>\n/// <param name =\"PredictedTime\">(In) Float, the time for prediction (in milliseconds), value range: [0, 100]. </param>\n/// <param name =\"OutLocation\">(Out) FVector, the predicted location of the specified controller after the given time. </param>\n/// <param name =\"OutRotation\">(Out) FRotator, the predicted rotation of the specified controller after the given time. </param>\n/// <returns>None </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Gets the predicted location and rotation of the specified controller after a certain period of time.</summary>\n<param name =\"DeviceHand\">(In)(EControllerHand) Enum, the controller to get the predicted location and rotation for:\n<ul>\n<li>`Left`: left controller</li>\n<li>`Right`: right controller</li>\n</ul>\n</param>\n<param name =\"PredictedTime\">(In) Float, the time for prediction (in milliseconds), value range: [0, 100]. </param>\n<param name =\"OutLocation\">(Out) FVector, the predicted location of the specified controller after the given time. </param>\n<param name =\"OutRotation\">(Out) FRotator, the predicted rotation of the specified controller after the given time. </param>\n<returns>None </returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetControllerPredictedLocationAndRotation", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetControllerPredictedLocationAndRotation_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetCurrentFrameSequence_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetCurrentFrameSequence_Parms
		{
			int32 SourceID;
			int32 FrameSequence;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceID;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FrameSequence;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetCurrentFrameSequence_Statics::NewProp_SourceID = { "SourceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetCurrentFrameSequence_Parms, SourceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetCurrentFrameSequence_Statics::NewProp_FrameSequence = { "FrameSequence", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetCurrentFrameSequence_Parms, FrameSequence), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetCurrentFrameSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetCurrentFrameSequence_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetCurrentFrameSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetCurrentFrameSequence_Statics::NewProp_SourceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetCurrentFrameSequence_Statics::NewProp_FrameSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetCurrentFrameSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetCurrentFrameSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Gets the current frame sequence.</summary>\n/// <param name =\"SourceID\">(In) Int, a unique control ID for the corresponding vibration. </param>\n/// <param name =\"FrameSequence\">(Out) Returns the current frame's sequence No.\n/// </param>\n/// <returns>\n/// <ul>\n/// <li>`0`: success</li>\n/// <li>`-1`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Gets the current frame sequence.</summary>\n<param name =\"SourceID\">(In) Int, a unique control ID for the corresponding vibration. </param>\n<param name =\"FrameSequence\">(Out) Returns the current frame's sequence No.\n</param>\n<returns>\n<ul>\n<li>`0`: success</li>\n<li>`-1`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetCurrentFrameSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetCurrentFrameSequence", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetCurrentFrameSequence_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetCurrentFrameSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetCurrentFrameSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetCurrentFrameSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetCurrentFrameSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetCurrentFrameSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetCurrentFrameSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandBattery_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetFitnessBandBattery_Parms
		{
			int32 TrackerId;
			int32 Battery;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackerId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Battery;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandBattery_Statics::NewProp_TrackerId = { "TrackerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetFitnessBandBattery_Parms, TrackerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandBattery_Statics::NewProp_Battery = { "Battery", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetFitnessBandBattery_Parms, Battery), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandBattery_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_GetFitnessBandBattery_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandBattery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_GetFitnessBandBattery_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandBattery_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandBattery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandBattery_Statics::NewProp_TrackerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandBattery_Statics::NewProp_Battery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandBattery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandBattery_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Gets the specified tracker's battery power.</summary>\n/// <param name =\"TrackerId\">(In) The ID for the tracker that you are querying. Can be `0` or `1`. </param>\n/// <param name =\"Battery\">(Out) Int, the battery level of the tracker, value range: [1, 5]. </param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Gets the specified tracker's battery power.</summary>\n<param name =\"TrackerId\">(In) The ID for the tracker that you are querying. Can be `0` or `1`. </param>\n<param name =\"Battery\">(Out) Int, the battery level of the tracker, value range: [1, 5]. </param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandBattery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetFitnessBandBattery", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetFitnessBandBattery_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandBattery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandBattery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandBattery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandBattery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandBattery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandBattery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandCalibState_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetFitnessBandCalibState_Parms
		{
			int32 CalibrateState;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CalibrateState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandCalibState_Statics::NewProp_CalibrateState = { "CalibrateState", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetFitnessBandCalibState_Parms, CalibrateState), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandCalibState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_GetFitnessBandCalibState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandCalibState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_GetFitnessBandCalibState_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandCalibState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandCalibState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandCalibState_Statics::NewProp_CalibrateState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandCalibState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandCalibState_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Gets the current calibration state of the trackers.</summary>\n/// <param name =\"CalibrateState\">(Out) Int, the current calibration state of the trackers.\n/// <ul>\n/// <li>`0`: Not calibrated</li>\n/// <li>`1`: Calibrated</li>\n/// </ul>\n/// </param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Gets the current calibration state of the trackers.</summary>\n<param name =\"CalibrateState\">(Out) Int, the current calibration state of the trackers.\n<ul>\n<li>`0`: Not calibrated</li>\n<li>`1`: Calibrated</li>\n</ul>\n</param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandCalibState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetFitnessBandCalibState", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetFitnessBandCalibState_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandCalibState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandCalibState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandCalibState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandCalibState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandCalibState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandCalibState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandConnectState_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetFitnessBandConnectState_Parms
		{
			FFitnessBandConnectState State;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_State;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandConnectState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetFitnessBandConnectState_Parms, State), Z_Construct_UScriptStruct_FFitnessBandConnectState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandConnectState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_GetFitnessBandConnectState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandConnectState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_GetFitnessBandConnectState_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandConnectState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandConnectState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandConnectState_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandConnectState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandConnectState_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Gets the connected states of both Motion Trackers.</summary>\n/// <param name =\"State\">(Out) The current connected state. </param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Gets the connected states of both Motion Trackers.</summary>\n<param name =\"State\">(Out) The current connected state. </param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandConnectState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetFitnessBandConnectState", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetFitnessBandConnectState_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandConnectState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandConnectState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandConnectState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandConnectState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandConnectState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandConnectState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetHandedness_Parms
		{
			EPICOXRHandedness Handedness;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Handedness_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Handedness;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::NewProp_Handedness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::NewProp_Handedness = { "Handedness", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetHandedness_Parms, Handedness), Z_Construct_UEnum_PICOXRInput_EPICOXRHandedness, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetHandedness_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::NewProp_Handedness_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::NewProp_Handedness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Get handedness.\n\x09* @param  Handedness        (Out) Handedness.\n\x09* @return True if get succeed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get handedness.\n@param  Handedness        (Out) Handedness.\n@return True if get succeed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetHandedness", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetHandedness_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetMainControllerHandle_Parms
		{
			EPICOXRHandedness Handedness;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Handedness_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Handedness;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::NewProp_Handedness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::NewProp_Handedness = { "Handedness", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetMainControllerHandle_Parms, Handedness), Z_Construct_UEnum_PICOXRInput_EPICOXRHandedness, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_GetMainControllerHandle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_GetMainControllerHandle_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::NewProp_Handedness_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::NewProp_Handedness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Get the main controller.\n\x09* @param Handedness     (Out) Main handedness(Neo LeftController/Neo RightController).\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get the main controller.\n@param Handedness     (Out) Main handedness(Neo LeftController/Neo RightController)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetMainControllerHandle", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetMainControllerHandle_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetPHFHapticSpeed_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_GetPHFHapticSpeed_Parms
		{
			int32 SourceID;
			float Speed;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetPHFHapticSpeed_Statics::NewProp_SourceID = { "SourceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetPHFHapticSpeed_Parms, SourceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetPHFHapticSpeed_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetPHFHapticSpeed_Parms, Speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetPHFHapticSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_GetPHFHapticSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetPHFHapticSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetPHFHapticSpeed_Statics::NewProp_SourceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetPHFHapticSpeed_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetPHFHapticSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetPHFHapticSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Gets the PHF haptic speed.</summary>\n/// <param name =\"SourceID\">(In) Int, a unique control ID for the corresponding vibration. </param>\n/// <param name =\"Speed\">(Out) Speed of the haptic stream. </param>\n/// <returns>\n/// <ul>\n/// <li>`0`: success</li>\n/// <li>`-1`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Gets the PHF haptic speed.</summary>\n<param name =\"SourceID\">(In) Int, a unique control ID for the corresponding vibration. </param>\n<param name =\"Speed\">(Out) Speed of the haptic stream. </param>\n<returns>\n<ul>\n<li>`0`: success</li>\n<li>`-1`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetPHFHapticSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_GetPHFHapticSpeed", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_GetPHFHapticSpeed_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetPHFHapticSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetPHFHapticSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetPHFHapticSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetPHFHapticSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetPHFHapticSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetPHFHapticSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_LaunchFitnessBandCalibrationAPP_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_LaunchFitnessBandCalibrationAPP_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_LaunchFitnessBandCalibrationAPP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_LaunchFitnessBandCalibrationAPP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_LaunchFitnessBandCalibrationAPP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_LaunchFitnessBandCalibrationAPP_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_LaunchFitnessBandCalibrationAPP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_LaunchFitnessBandCalibrationAPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_LaunchFitnessBandCalibrationAPP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_LaunchFitnessBandCalibrationAPP_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Launches trackers' calibration app.</summary>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Launches trackers' calibration app.</summary>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_LaunchFitnessBandCalibrationAPP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_LaunchFitnessBandCalibrationAPP", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_LaunchFitnessBandCalibrationAPP_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_LaunchFitnessBandCalibrationAPP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_LaunchFitnessBandCalibrationAPP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_LaunchFitnessBandCalibrationAPP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_LaunchFitnessBandCalibrationAPP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_LaunchFitnessBandCalibrationAPP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_LaunchFitnessBandCalibrationAPP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_PauseVibrate_Parms
		{
			int32 SourceID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceID;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate_Statics::NewProp_SourceID = { "SourceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_PauseVibrate_Parms, SourceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_PauseVibrate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate_Statics::NewProp_SourceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Pauses the PHF vibration data.</summary>\n/// <param name =\"SourceID\">(In) ID returned by another vibration control API. </param>\n/// <returns>\n/// <ul>\n/// <li>`0`: success</li>\n/// <li>`-1`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Pauses the PHF vibration data.</summary>\n<param name =\"SourceID\">(In) ID returned by another vibration control API. </param>\n<returns>\n<ul>\n<li>`0`: success</li>\n<li>`-1`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_PauseVibrate", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_PauseVibrate_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_RemovePHFHaptic_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_RemovePHFHaptic_Parms
		{
			int32 SourceID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceID;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_RemovePHFHaptic_Statics::NewProp_SourceID = { "SourceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_RemovePHFHaptic_Parms, SourceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_RemovePHFHaptic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_RemovePHFHaptic_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_RemovePHFHaptic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_RemovePHFHaptic_Statics::NewProp_SourceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_RemovePHFHaptic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_RemovePHFHaptic_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Removes PHF haptic.</summary>\n/// <param name =\"SourceID\">(In) Int, a unique control ID for the corresponding vibration. </param>\n/// <returns>\n/// <ul>\n/// <li>`0`: success</li>\n/// <li>`-1`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Removes PHF haptic.</summary>\n<param name =\"SourceID\">(In) Int, a unique control ID for the corresponding vibration. </param>\n<returns>\n<ul>\n<li>`0`: success</li>\n<li>`-1`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_RemovePHFHaptic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_RemovePHFHaptic", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_RemovePHFHaptic_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_RemovePHFHaptic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_RemovePHFHaptic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_RemovePHFHaptic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_RemovePHFHaptic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_RemovePHFHaptic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_RemovePHFHaptic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResetController_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_ResetController_Parms
		{
			int32 Device;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Device;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResetController_Statics::NewProp_Device = { "Device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_ResetController_Parms, Device), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_ResetController_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResetController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResetController_Statics::NewProp_Device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResetController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResetController_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_ResetController", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_ResetController_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResetController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResetController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResetController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_ResumeVibrate_Parms
		{
			int32 SourceID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceID;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate_Statics::NewProp_SourceID = { "SourceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_ResumeVibrate_Parms, SourceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_ResumeVibrate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate_Statics::NewProp_SourceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Resumes PHF vibration data.</summary>\n/// <param name =\"SourceID\">(In) ID returned by another vibration control API. </param>\n/// <returns>\n/// <ul>\n/// <li>`0`: success</li>\n/// <li>`-1`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Resumes PHF vibration data.</summary>\n<param name =\"SourceID\">(In) ID returned by another vibration control API. </param>\n<returns>\n<ul>\n<li>`0`: success</li>\n<li>`-1`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_ResumeVibrate", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_ResumeVibrate_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_SaveVibrateByCache_Parms
		{
			USoundWave* InSoundWave;
			EPICOXRVibrateController slot;
			EPICOXRChannelFlip slotConfig;
			EPICOXRCacheConfig enableV;
			int32 SourceId;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSoundWave;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slotConfig_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slotConfig;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_enableV_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_enableV;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_InSoundWave = { "InSoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SaveVibrateByCache_Parms, InSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SaveVibrateByCache_Parms, slot), Z_Construct_UEnum_PICOXRInput_EPICOXRVibrateController, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_slotConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_slotConfig = { "slotConfig", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SaveVibrateByCache_Parms, slotConfig), Z_Construct_UEnum_PICOXRInput_EPICOXRChannelFlip, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_enableV_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_enableV = { "enableV", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SaveVibrateByCache_Parms, enableV), Z_Construct_UEnum_PICOXRInput_EPICOXRCacheConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_SourceId = { "SourceId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SaveVibrateByCache_Parms, SourceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SaveVibrateByCache_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_InSoundWave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_slot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_slotConfig_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_slotConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_enableV_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_enableV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_SourceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Caches audio-based vibration data. You can set whether to keep the controller vibrating while caching the data. Cached audio data can be extracted from the cache directory and then transmitted, which reduces resource consumption and improves service performance.</summary>\n/// <param name =\"InSoundWave\">(In) audio asset (\"SoundWave\" Asset type) </param>\n/// <param name =\"slot\">(In) specifies which controller to vibrate with the audio.\n/// <ul>\n/// <li>`No`: none</li>\n/// <li>`Left`: left controller</li>\n/// <li>`Right`: right controller</li>\n/// <li>`LeftAndRight`: both</li>\n/// </ul>\n/// </param>\n/// <param name =\"slotConfig\">(In) Specifies whether to enable audio channel inversion.\n/// <ul>\n/// <li>`No`: disable</li>\n/// <li>`Yes`: enable</li>\n/// </ul>\n/// </param>\n/// <summary>\n/// @note When slotConfig = `1`, the left controller vibrates with the audio source from right soundtrack, and vice versa.\n/// </summary>\n/// <param name =\"enableV\">(In) defines whether to keep the controller vibrating while caching audio-based vibration data\n/// <ul>\n/// <li>`CacheAndVibrate`: caches and keeps vibrating</li>\n/// <li>`CacheNoVibrate`: caches and stops vibrating</li>\n/// </ul>\n/// </param>\n/// <param name =\"SourceId\">(Out) returns a unique ID for controlling the corresponding vibration, which can be used for subsequent APIs, such as PXR_SaveVibrateByCache, PXR_ClearVibrateByCache and PXR_StopControllerVCMotor.\n/// </param>\n/// <returns>\n/// <ul>\n/// <li>`0`: success</li>\n/// <li>`-1`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Caches audio-based vibration data. You can set whether to keep the controller vibrating while caching the data. Cached audio data can be extracted from the cache directory and then transmitted, which reduces resource consumption and improves service performance.</summary>\n<param name =\"InSoundWave\">(In) audio asset (\"SoundWave\" Asset type) </param>\n<param name =\"slot\">(In) specifies which controller to vibrate with the audio.\n<ul>\n<li>`No`: none</li>\n<li>`Left`: left controller</li>\n<li>`Right`: right controller</li>\n<li>`LeftAndRight`: both</li>\n</ul>\n</param>\n<param name =\"slotConfig\">(In) Specifies whether to enable audio channel inversion.\n<ul>\n<li>`No`: disable</li>\n<li>`Yes`: enable</li>\n</ul>\n</param>\n<summary>\n@note When slotConfig = `1`, the left controller vibrates with the audio source from right soundtrack, and vice versa.\n</summary>\n<param name =\"enableV\">(In) defines whether to keep the controller vibrating while caching audio-based vibration data\n<ul>\n<li>`CacheAndVibrate`: caches and keeps vibrating</li>\n<li>`CacheNoVibrate`: caches and stops vibrating</li>\n</ul>\n</param>\n<param name =\"SourceId\">(Out) returns a unique ID for controlling the corresponding vibration, which can be used for subsequent APIs, such as PXR_SaveVibrateByCache, PXR_ClearVibrateByCache and PXR_StopControllerVCMotor.\n</param>\n<returns>\n<ul>\n<li>`0`: success</li>\n<li>`-1`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_SaveVibrateByCache", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_SaveVibrateByCache_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_SetArmModelParameters_Parms
		{
			EPICOXRGazeBehavior GazeType;
			EPICOXRArmModelJoint ArmJoint;
			float ElbowHeight;
			float ElbowDepth;
			float PointerTiltAngle;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GazeType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GazeType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ArmJoint_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ArmJoint;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElbowHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElbowDepth;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PointerTiltAngle;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters_Statics::NewProp_GazeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters_Statics::NewProp_GazeType = { "GazeType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetArmModelParameters_Parms, GazeType), Z_Construct_UEnum_PICOXRInput_EPICOXRGazeBehavior, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters_Statics::NewProp_ArmJoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters_Statics::NewProp_ArmJoint = { "ArmJoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetArmModelParameters_Parms, ArmJoint), Z_Construct_UEnum_PICOXRInput_EPICOXRArmModelJoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters_Statics::NewProp_ElbowHeight = { "ElbowHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetArmModelParameters_Parms, ElbowHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters_Statics::NewProp_ElbowDepth = { "ElbowDepth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetArmModelParameters_Parms, ElbowDepth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters_Statics::NewProp_PointerTiltAngle = { "PointerTiltAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetArmModelParameters_Parms, PointerTiltAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetArmModelParameters_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters_Statics::NewProp_GazeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters_Statics::NewProp_GazeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters_Statics::NewProp_ArmJoint_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters_Statics::NewProp_ArmJoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters_Statics::NewProp_ElbowHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters_Statics::NewProp_ElbowDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters_Statics::NewProp_PointerTiltAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters_Statics::Function_MetaDataParams[] = {
		{ "ArmJoint", "Controller" },
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Set controller arm model parameter.\n\x09* @param GazeType          (In) The gaze type(Never/DuringMotion/Always).\n\x09* @param ArmJoint          (In) The arm joint(Controller/Wrist/Elbow/Shoulder).\n\x09* @param ElbowHeight       (In) The Height of the elbow(cm).Min=0.0f, Max=20.0f.\n\x09* @param ElbowDepth        (In) The Depth of the elbow(cm).Min=0.0f, Max=20.0f.\n\x09* @param PointerTiltAngle  (In) The Downward tilt or pitch of the laser pointer relative to the controller (degrees).Min=0.0f, Max=30.0f.\n\x09*/" },
		{ "ElbowDepth", "0.0" },
		{ "ElbowHeight", "0.0" },
		{ "GazeType", "DuringMotion" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "PointerTiltAngle", "0.0" },
		{ "ToolTip", "Set controller arm model parameter.\n@param GazeType          (In) The gaze type(Never/DuringMotion/Always).\n@param ArmJoint          (In) The arm joint(Controller/Wrist/Elbow/Shoulder).\n@param ElbowHeight       (In) The Height of the elbow(cm).Min=0.0f, Max=20.0f.\n@param ElbowDepth        (In) The Depth of the elbow(cm).Min=0.0f, Max=20.0f.\n@param PointerTiltAngle  (In) The Downward tilt or pitch of the laser pointer relative to the controller (degrees).Min=0.0f, Max=30.0f." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_SetArmModelParameters", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_SetArmModelParameters_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingBoneLength_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_SetBodyTrackingBoneLength_Parms
		{
			FBodyTrackingBoneLength BoneLength;
			int32 OtherMode;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneLength;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherMode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingBoneLength_Statics::NewProp_BoneLength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingBoneLength_Statics::NewProp_BoneLength = { "BoneLength", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetBodyTrackingBoneLength_Parms, BoneLength), Z_Construct_UScriptStruct_FBodyTrackingBoneLength, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingBoneLength_Statics::NewProp_BoneLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingBoneLength_Statics::NewProp_BoneLength_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingBoneLength_Statics::NewProp_OtherMode = { "OtherMode", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetBodyTrackingBoneLength_Parms, OtherMode), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingBoneLength_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_SetBodyTrackingBoneLength_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingBoneLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_SetBodyTrackingBoneLength_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingBoneLength_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingBoneLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingBoneLength_Statics::NewProp_BoneLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingBoneLength_Statics::NewProp_OtherMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingBoneLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingBoneLength_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "OtherMode" },
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Set BodyTracking BoneLength\n\x09* @param BoneLength\x09\x09(In)Bone Length,such as head or neck\n\x09* @param OtherMode\x09\x09(In)An additional Swift Tracking Mode, If this value is not -1, use this parameter instead of default mode\n\x09* @return true to indicate that the function call was successful.\n\x09*/" },
		{ "CPP_Default_OtherMode", "-1" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Set BodyTracking BoneLength\n@param BoneLength             (In)Bone Length,such as head or neck\n@param OtherMode              (In)An additional Swift Tracking Mode, If this value is not -1, use this parameter instead of default mode\n@return true to indicate that the function call was successful." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingBoneLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_SetBodyTrackingBoneLength", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_SetBodyTrackingBoneLength_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingBoneLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingBoneLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingBoneLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingBoneLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingBoneLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingBoneLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingMode_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_SetBodyTrackingMode_Parms
		{
			int32 Mode;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetBodyTrackingMode_Parms, Mode), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_SetBodyTrackingMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_SetBodyTrackingMode_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingMode_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Sets the body tracking mode.</summary>\n/// <param name =\"Mode\">(In)(In)  Body tracking mode. </param>\n/// <returns>Bool:\n/// <ul>\n/// <li>`true`: success</li>\n/// <li>`false`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Sets the body tracking mode.</summary>\n<param name =\"Mode\">(In)(In)  Body tracking mode. </param>\n<returns>Bool:\n<ul>\n<li>`true`: success</li>\n<li>`false`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_SetBodyTrackingMode", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_SetBodyTrackingMode_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingStaticCalibState_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_SetBodyTrackingStaticCalibState_Parms
		{
			int32 calibstate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_calibstate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingStaticCalibState_Statics::NewProp_calibstate = { "calibstate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetBodyTrackingStaticCalibState_Parms, calibstate), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingStaticCalibState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_SetBodyTrackingStaticCalibState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingStaticCalibState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_SetBodyTrackingStaticCalibState_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingStaticCalibState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingStaticCalibState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingStaticCalibState_Statics::NewProp_calibstate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingStaticCalibState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingStaticCalibState_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* SetBodyTrackingStaticCalibState\n\x09* @param calibstate\x09\x09(In)  Calibration state set to system\n\x09* @return true to indicate that the function call was successful.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "SetBodyTrackingStaticCalibState\n@param calibstate             (In)  Calibration state set to system\n@return true to indicate that the function call was successful." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingStaticCalibState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_SetBodyTrackingStaticCalibState", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_SetBodyTrackingStaticCalibState_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingStaticCalibState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingStaticCalibState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingStaticCalibState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingStaticCalibState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingStaticCalibState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingStaticCalibState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_SetControllerAmp_Parms
		{
			float mode;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mode;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerAmp_Parms, mode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerAmp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::NewProp_mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Sets the amplitude of audio-based vibration. You can change the vibration amplitude during audio playback.</summary>\n/// <param name =\"mode\">(In) Vibration amplitude level. The range is 0.0 to 2.0:\n/// <ul>\n/// <li>`0.0`: for no vibration</li>\n/// <li>`1.0`: for standard amplitude</li>\n/// <li>`2.0`: for double the standard amplitude</li>\n/// </ul>\n/// </param>\n/// <returns>\n/// <ul>\n/// <li>`0`: success</li>\n/// <li>`-1`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Sets the amplitude of audio-based vibration. You can change the vibration amplitude during audio playback.</summary>\n<param name =\"mode\">(In) Vibration amplitude level. The range is 0.0 to 2.0:\n<ul>\n<li>`0.0`: for no vibration</li>\n<li>`1.0`: for standard amplitude</li>\n<li>`2.0`: for double the standard amplitude</li>\n</ul>\n</param>\n<returns>\n<ul>\n<li>`0`: success</li>\n<li>`-1`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_SetControllerAmp", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_SetControllerAmp_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_SetControllerEnableKey_Parms
		{
			bool isEnable;
			EPxrControllerKeyMap Key;
			int32 ReturnValue;
		};
		static void NewProp_isEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEnable;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Key_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_isEnable_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_SetControllerEnableKey_Parms*)Obj)->isEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_isEnable = { "isEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_SetControllerEnableKey_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_isEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerEnableKey_Parms, Key), Z_Construct_UEnum_PICOXRInput_EPxrControllerKeyMap, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerEnableKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_isEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_Key_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_SetControllerEnableKey", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_SetControllerEnableKey_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_SetControllerOriginOffset_Parms
		{
			EPICOXRControllerType Controller;
			FVector Offset;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Controller_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::NewProp_Controller_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerOriginOffset_Parms, Controller), Z_Construct_UEnum_PICOXRInput_EPICOXRControllerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerOriginOffset_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::NewProp_Controller_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Sets the origin offset for a specified controller.</summary>\n/// <param name =\"ControllerType>(In) (EPICOXRControllerType)Enum, the controller to set the origin offset for:\n/// <ul>\n/// <li>`LeftHand`: left controller</li>\n/// <li>`RightHand`: right controller</li>\n/// </ul>\n/// </param>\n/// <param name =\"Offset\">(In) Vector, the origin offset (in meters). </param>\n/// <returns>None </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Sets the origin offset for a specified controller.</summary>\n<param name =\"ControllerType>(In) (EPICOXRControllerType)Enum, the controller to set the origin offset for:\n<ul>\n<li>`LeftHand`: left controller</li>\n<li>`RightHand`: right controller</li>\n</ul>\n</param>\n<param name =\"Offset\">(In) Vector, the origin offset (in meters). </param>\n<returns>None </returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_SetControllerOriginOffset", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_SetControllerOriginOffset_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_SetControllerVibrationEvent_Parms
		{
			int32 deviceID;
			int32 frequency;
			float strength;
			int32 time;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_deviceID;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_frequency;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_strength;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_time;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerVibrationEvent_Parms, deviceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_frequency = { "frequency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerVibrationEvent_Parms, frequency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_strength = { "strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerVibrationEvent_Parms, strength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerVibrationEvent_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetControllerVibrationEvent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_deviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Enables event-based vibration (with customizable vibration frequency).</summary>\n/// <param name =\"deviceID\">(In) specifies which controller to enable event-based vibration:\n/// <ul>\n/// <li>`0`: left controller</li>\n/// <li>`1`: right controller</li>\n/// </ul>\n/// </param>\n/// <param name =\"frequency\">(In) Vibration frequency. `50` to `500` Hz </param>\n/// <param name =\"strength\">(In)  Vibration amplitude. `0` to `1`. The higher the value, the stronger the vibration amplitude. </param>\n/// <param name =\"time\">(In) Vibration duration, `0` to `65535` ms. </param>\n/// <returns>\n/// <ul>\n/// <li>`0`: success</li>\n/// <li>`-1`: failure</li>\n/// </ul>\n/// </returns>\n/// <summary>\n/// **Notes**\n/// <ul>\n/// <li> To disable event-based vibration, you can call `PXR_SetControllerVibrationEvent`, and set `Strength` and `time` to `0`.</li>\n/// <li>Set the vibration frequency according to the scene. Low frequency for soft object collisions, and high frequency for hard object collisions, refer to the table below.</li>\n/// </ul>\n/// |  Scenes | Recommended frequency |\n/// | --- | --- |\n/// |  Playing drums, playing basketball | Low frequencies, 50~100 Hz |\n/// |  Using pistols, playing ping pong | Medium frequency, approx. 170Hz |\n/// |  Stones collision | High frequency, approx. 300Hz |\n/// <summary>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Enables event-based vibration (with customizable vibration frequency).</summary>\n<param name =\"deviceID\">(In) specifies which controller to enable event-based vibration:\n<ul>\n<li>`0`: left controller</li>\n<li>`1`: right controller</li>\n</ul>\n</param>\n<param name =\"frequency\">(In) Vibration frequency. `50` to `500` Hz </param>\n<param name =\"strength\">(In)  Vibration amplitude. `0` to `1`. The higher the value, the stronger the vibration amplitude. </param>\n<param name =\"time\">(In) Vibration duration, `0` to `65535` ms. </param>\n<returns>\n<ul>\n<li>`0`: success</li>\n<li>`-1`: failure</li>\n</ul>\n</returns>\n<summary>\n**Notes**\n<ul>\n<li> To disable event-based vibration, you can call `PXR_SetControllerVibrationEvent`, and set `Strength` and `time` to `0`.</li>\n<li>Set the vibration frequency according to the scene. Low frequency for soft object collisions, and high frequency for hard object collisions, refer to the table below.</li>\n</ul>\n|  Scenes | Recommended frequency |\n| --- | --- |\n|  Playing drums, playing basketball | Low frequencies, 50~100 Hz |\n|  Using pistols, playing ping pong | Medium frequency, approx. 170Hz |\n|  Stones collision | High frequency, approx. 300Hz |\n<summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_SetControllerVibrationEvent", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_SetControllerVibrationEvent_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_SetMainControllerHandle_Parms
		{
			EPICOXRHandedness Handedness;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Handedness_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Handedness;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::NewProp_Handedness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::NewProp_Handedness = { "Handedness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetMainControllerHandle_Parms, Handedness), Z_Construct_UEnum_PICOXRInput_EPICOXRHandedness, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_SetMainControllerHandle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_SetMainControllerHandle_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::NewProp_Handedness_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::NewProp_Handedness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Set the main controller.\n\x09* @param Handedness     (In) Main handedness(Neo LeftController/Neo RightController).\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Set the main controller.\n@param Handedness     (In) Main handedness(Neo LeftController/Neo RightController)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_SetMainControllerHandle", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_SetMainControllerHandle_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetPHFHapticSpeed_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_SetPHFHapticSpeed_Parms
		{
			int32 SourceID;
			float Speed;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetPHFHapticSpeed_Statics::NewProp_SourceID = { "SourceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetPHFHapticSpeed_Parms, SourceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetPHFHapticSpeed_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetPHFHapticSpeed_Parms, Speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetPHFHapticSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetPHFHapticSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetPHFHapticSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetPHFHapticSpeed_Statics::NewProp_SourceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetPHFHapticSpeed_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetPHFHapticSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetPHFHapticSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Sets the PHF haptic speed.</summary>\n/// <param name =\"SourceID\">(In) Int, a unique control ID for the corresponding vibration. </param>\n/// <param name =\"Speed\">(In) Speed of the haptic stream. </param>\n/// <returns>\n/// <ul>\n/// <li>`0`: success</li>\n/// <li>`-1`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Sets the PHF haptic speed.</summary>\n<param name =\"SourceID\">(In) Int, a unique control ID for the corresponding vibration. </param>\n<param name =\"Speed\">(In) Speed of the haptic stream. </param>\n<returns>\n<ul>\n<li>`0`: success</li>\n<li>`-1`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetPHFHapticSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_SetPHFHapticSpeed", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_SetPHFHapticSpeed_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetPHFHapticSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetPHFHapticSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetPHFHapticSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetPHFHapticSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetPHFHapticSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetPHFHapticSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetSwiftMode_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_SetSwiftMode_Parms
		{
			ESwiftMode Mode;
			int32 OtherMode;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherMode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetSwiftMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetSwiftMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetSwiftMode_Parms, Mode), Z_Construct_UEnum_PICOXRInput_ESwiftMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetSwiftMode_Statics::NewProp_OtherMode = { "OtherMode", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_SetSwiftMode_Parms, OtherMode), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetSwiftMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_SetSwiftMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetSwiftMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_SetSwiftMode_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetSwiftMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetSwiftMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetSwiftMode_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetSwiftMode_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetSwiftMode_Statics::NewProp_OtherMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetSwiftMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetSwiftMode_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "OtherMode" },
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Set Swift Tracking Mode\n\x09* @param Mode\x09\x09(In)An enum representing the Swift Tracking Mode\n\x09* @param OtherMode  (In)An additional Swift Tracking Mode, If this value is not -1, use this parameter instead of the enum\n\x09* @return true to indicate that the function call was successful.\n\x09*/" },
		{ "CPP_Default_OtherMode", "-1" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Set Swift Tracking Mode\n@param Mode           (In)An enum representing the Swift Tracking Mode\n@param OtherMode  (In)An additional Swift Tracking Mode, If this value is not -1, use this parameter instead of the enum\n@return true to indicate that the function call was successful." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetSwiftMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_SetSwiftMode", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_SetSwiftMode_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetSwiftMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetSwiftMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetSwiftMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetSwiftMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetSwiftMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetSwiftMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_StartControllerVCMotor_Parms
		{
			FString file;
			EPICOXRVibrateController slot;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_file;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slot;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::NewProp_file = { "file", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartControllerVCMotor_Parms, file), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::NewProp_slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartControllerVCMotor_Parms, slot), Z_Construct_UEnum_PICOXRInput_EPICOXRVibrateController, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartControllerVCMotor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::NewProp_file,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::NewProp_slot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Enables audio-based vibration through audio file path.</summary>\n/// <param name =\"file\">(In) audio file path. </param>\n/// <param name =\"slot\">(In) specifies which controller to vibrate with the audio.\n/// <ul>\n/// <li>`No`: none</li>\n/// <li>`Left`: left controller</li>\n/// <li>`Right`: right controller</li>\n/// <li>`LeftAndRight`: both</li>\n/// </ul>\n/// <returns>\n/// <ul>\n/// <li>`0`: success</li>\n/// <li>`-1`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Enables audio-based vibration through audio file path.</summary>\n<param name =\"file\">(In) audio file path. </param>\n<param name =\"slot\">(In) specifies which controller to vibrate with the audio.\n<ul>\n<li>`No`: none</li>\n<li>`Left`: left controller</li>\n<li>`Right`: right controller</li>\n<li>`LeftAndRight`: both</li>\n</ul>\n<returns>\n<ul>\n<li>`0`: success</li>\n<li>`-1`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_StartControllerVCMotor", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_StartControllerVCMotor_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartPHFHaptic_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_StartPHFHaptic_Parms
		{
			int32 SourceID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceID;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartPHFHaptic_Statics::NewProp_SourceID = { "SourceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartPHFHaptic_Parms, SourceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartPHFHaptic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartPHFHaptic_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartPHFHaptic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartPHFHaptic_Statics::NewProp_SourceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartPHFHaptic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartPHFHaptic_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Starts PHF haptic.</summary>\n/// <param name =\"SourceID\">(In) Int, a unique control ID for the corresponding vibration. </param>\n/// <returns>\n/// <ul>\n/// <li>`0`: success</li>\n/// <li>`-1`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Starts PHF haptic.</summary>\n<param name =\"SourceID\">(In) Int, a unique control ID for the corresponding vibration. </param>\n<returns>\n<ul>\n<li>`0`: success</li>\n<li>`-1`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartPHFHaptic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_StartPHFHaptic", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_StartPHFHaptic_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartPHFHaptic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartPHFHaptic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartPHFHaptic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartPHFHaptic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartPHFHaptic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartPHFHaptic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_StartVibrateByCache_Parms
		{
			int32 SourceId;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache_Statics::NewProp_SourceId = { "SourceId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartVibrateByCache_Parms, SourceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartVibrateByCache_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache_Statics::NewProp_SourceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Plays the cached audio vibration data.</summary>\n/// <param name =\"SourceId\">(In) the ID returned by another vibration control API. </param>\n/// <returns>\n/// <ul>\n/// <li>`0`: success</li>\n/// <li>`-1`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Plays the cached audio vibration data.</summary>\n<param name =\"SourceId\">(In) the ID returned by another vibration control API. </param>\n<returns>\n<ul>\n<li>`0`: success</li>\n<li>`-1`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_StartVibrateByCache", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_StartVibrateByCache_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_StartVibrateByPHF_Parms
		{
			FName DataName;
			EPICOXRVibrateController slot;
			EPICOXRChannelFlip slotConfig;
			float ampValue;
			int32 SourceID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DataName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slotConfig_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slotConfig;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ampValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceID;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_DataName = { "DataName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartVibrateByPHF_Parms, DataName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartVibrateByPHF_Parms, slot), Z_Construct_UEnum_PICOXRInput_EPICOXRVibrateController, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_slotConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_slotConfig = { "slotConfig", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartVibrateByPHF_Parms, slotConfig), Z_Construct_UEnum_PICOXRInput_EPICOXRChannelFlip, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_ampValue = { "ampValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartVibrateByPHF_Parms, ampValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_SourceID = { "SourceID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartVibrateByPHF_Parms, SourceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartVibrateByPHF_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_DataName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_slot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_slotConfig_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_slotConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_ampValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_SourceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Plays PHF vibration data. You need put your *.phf files in the \"/Plugins/PICOXR/Content/Phf/\" folder.</summary>\n/// <param name =\"DataName\">(In) PHF file resource name. It is in the path \"/Plugins/PICOXR/Content/Blueprint/PHFDataTable.uasset\". </param>\n/// <param name =\"slot\">(In) specifies which controller to vibrate with the audio.\n/// <ul>\n/// <li>`No`: none</li>\n/// <li>`Left`: left controller</li>\n/// <li>`Right`: right controller</li>\n/// <li>`LeftAndRight`: both</li>\n/// </ul>\n/// </param>\n/// <param name =\"slotConfig\">(In) Specifies whether to enable audio channel inversion.\n/// <ul>\n/// <li>`No`: disable</li>\n/// <li>`Yes`: enable</li>\n/// </ul>\n/// </param>\n/// <summary>\n/// @note When slotConfig = `1`, the left controller vibrates with the audio source from right soundtrack, and vice versa.\n/// </summary>\n/// <param name =\"ampValue\">(In) Vibration amplitude level. The range is 0.0 to 2.0:\n/// <ul>\n/// <li>`0.0`: for no vibration</li>\n/// <li>`1.0`: for standard amplitude</li>\n/// <li>`2.0`: for double the standard amplitude</li>\n/// </ul>\n/// </param>\n/// <param name =\"SourceID\">(Out) returns a unique ID for controlling the corresponding vibration, which can be used for subsequent APIs, such as PXR_SaveVibrateByCache, PXR_ClearVibrateByCache and PXR_StopControllerVCMotor.\n/// </param>\n/// <returns>\n/// <ul>\n/// <li>`0`: success</li>\n/// <li>`-1`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Plays PHF vibration data. You need put your *.phf files in the \"/Plugins/PICOXR/Content/Phf/\" folder.</summary>\n<param name =\"DataName\">(In) PHF file resource name. It is in the path \"/Plugins/PICOXR/Content/Blueprint/PHFDataTable.uasset\". </param>\n<param name =\"slot\">(In) specifies which controller to vibrate with the audio.\n<ul>\n<li>`No`: none</li>\n<li>`Left`: left controller</li>\n<li>`Right`: right controller</li>\n<li>`LeftAndRight`: both</li>\n</ul>\n</param>\n<param name =\"slotConfig\">(In) Specifies whether to enable audio channel inversion.\n<ul>\n<li>`No`: disable</li>\n<li>`Yes`: enable</li>\n</ul>\n</param>\n<summary>\n@note When slotConfig = `1`, the left controller vibrates with the audio source from right soundtrack, and vice versa.\n</summary>\n<param name =\"ampValue\">(In) Vibration amplitude level. The range is 0.0 to 2.0:\n<ul>\n<li>`0.0`: for no vibration</li>\n<li>`1.0`: for standard amplitude</li>\n<li>`2.0`: for double the standard amplitude</li>\n</ul>\n</param>\n<param name =\"SourceID\">(Out) returns a unique ID for controlling the corresponding vibration, which can be used for subsequent APIs, such as PXR_SaveVibrateByCache, PXR_ClearVibrateByCache and PXR_StopControllerVCMotor.\n</param>\n<returns>\n<ul>\n<li>`0`: success</li>\n<li>`-1`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_StartVibrateByPHF", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_StartVibrateByPHF_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_StartVibrateBySharem_Parms
		{
			USoundWave* InSoundWave;
			EPICOXRVibrateController slot;
			EPICOXRChannelFlip slotConfig;
			int32 SourceId;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSoundWave;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slotConfig_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slotConfig;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_InSoundWave = { "InSoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartVibrateBySharem_Parms, InSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartVibrateBySharem_Parms, slot), Z_Construct_UEnum_PICOXRInput_EPICOXRVibrateController, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_slotConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_slotConfig = { "slotConfig", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartVibrateBySharem_Parms, slotConfig), Z_Construct_UEnum_PICOXRInput_EPICOXRChannelFlip, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_SourceId = { "SourceId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartVibrateBySharem_Parms, SourceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StartVibrateBySharem_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_InSoundWave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_slot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_slotConfig_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_slotConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_SourceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Enables audio-based vibration through the audio asset passed into the engine.</summary>\n/// <param name =\"InSoundWave\">(In) audio asset (\"SoundWave\" Asset type) </param>\n/// <param name =\"slot\">(In) specifies which controller to vibrate with the audio.\n/// <ul>\n/// <li>`No`: none</li>\n/// <li>`Left`: left controller</li>\n/// <li>`Right`: right controller</li>\n/// <li>`LeftAndRight`: both</li>\n/// </ul>\n/// </param>\n/// <param name =\"slotConfig\">(In) Specifies whether to enable audio channel inversion.\n/// <ul>\n/// <li>`No`: disable</li>\n/// <li>`Yes`: enable</li>\n/// </ul>\n/// </param>\n/// <summary>\n/// @note When slotConfig = `1`, the left controller vibrates with the audio source from right soundtrack, and vice versa.\n/// </summary>\n/// <param name =\"SourceId\">(Out) returns a unique ID for controlling the corresponding vibration, which can be used for subsequent APIs, such as PXR_SaveVibrateByCache, PXR_ClearVibrateByCache and PXR_StopControllerVCMotor. </param>\n/// <returns>\n/// <ul>\n/// <li>`0`: success</li>\n/// <li>`-1`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Enables audio-based vibration through the audio asset passed into the engine.</summary>\n<param name =\"InSoundWave\">(In) audio asset (\"SoundWave\" Asset type) </param>\n<param name =\"slot\">(In) specifies which controller to vibrate with the audio.\n<ul>\n<li>`No`: none</li>\n<li>`Left`: left controller</li>\n<li>`Right`: right controller</li>\n<li>`LeftAndRight`: both</li>\n</ul>\n</param>\n<param name =\"slotConfig\">(In) Specifies whether to enable audio channel inversion.\n<ul>\n<li>`No`: disable</li>\n<li>`Yes`: enable</li>\n</ul>\n</param>\n<summary>\n@note When slotConfig = `1`, the left controller vibrates with the audio source from right soundtrack, and vice versa.\n</summary>\n<param name =\"SourceId\">(Out) returns a unique ID for controlling the corresponding vibration, which can be used for subsequent APIs, such as PXR_SaveVibrateByCache, PXR_ClearVibrateByCache and PXR_StopControllerVCMotor. </param>\n<returns>\n<ul>\n<li>`0`: success</li>\n<li>`-1`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_StartVibrateBySharem", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_StartVibrateBySharem_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_StopControllerVCMotor_Parms
		{
			int32 clientId;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_clientId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::NewProp_clientId = { "clientId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StopControllerVCMotor_Parms, clientId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StopControllerVCMotor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::NewProp_clientId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Stops audio-based vibration.</summary>\n/// <param name =\"clientId\">(In) a reserved parameter, set it to the `sourceId` returned by another vibration control API to stop the corresponding vibration, or set it to `0` to stop all vibrations.\n/// </param>\n/// <returns>\n/// <ul>\n/// <li>`0`: success</li>\n/// <li>`-1`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Stops audio-based vibration.</summary>\n<param name =\"clientId\">(In) a reserved parameter, set it to the `sourceId` returned by another vibration control API to stop the corresponding vibration, or set it to `0` to stop all vibrations.\n</param>\n<returns>\n<ul>\n<li>`0`: success</li>\n<li>`-1`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_StopControllerVCMotor", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_StopControllerVCMotor_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopPHFHaptic_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_StopPHFHaptic_Parms
		{
			int32 SourceID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceID;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopPHFHaptic_Statics::NewProp_SourceID = { "SourceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StopPHFHaptic_Parms, SourceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopPHFHaptic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_StopPHFHaptic_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopPHFHaptic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopPHFHaptic_Statics::NewProp_SourceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopPHFHaptic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopPHFHaptic_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Stops PHF haptic.</summary>\n/// <param name =\"SourceID\">(In) Int, a unique control ID for the corresponding vibration. </param>\n/// <returns>\n/// <ul>\n/// <li>`0`: success</li>\n/// <li>`-1`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Stops PHF haptic.</summary>\n<param name =\"SourceID\">(In) Int, a unique control ID for the corresponding vibration. </param>\n<returns>\n<ul>\n<li>`0`: success</li>\n<li>`-1`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopPHFHaptic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_StopPHFHaptic", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_StopPHFHaptic_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopPHFHaptic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopPHFHaptic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopPHFHaptic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopPHFHaptic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopPHFHaptic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopPHFHaptic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_UpdateVibrateParams_Parms
		{
			int32 SourceID;
			EPICOXRVibrateController slot;
			EPICOXRChannelFlip slotConfig;
			float AmpValue;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slotConfig_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slotConfig;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmpValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_SourceID = { "SourceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_UpdateVibrateParams_Parms, SourceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_UpdateVibrateParams_Parms, slot), Z_Construct_UEnum_PICOXRInput_EPICOXRVibrateController, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_slotConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_slotConfig = { "slotConfig", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_UpdateVibrateParams_Parms, slotConfig), Z_Construct_UEnum_PICOXRInput_EPICOXRChannelFlip, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_AmpValue = { "AmpValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_UpdateVibrateParams_Parms, AmpValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_UpdateVibrateParams_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_SourceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_slot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_slotConfig_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_slotConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_AmpValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Dynamically modifies PHF and AudioClip vibration data.</summary>\n/// <param name =\"SourceID\">(In) ID returned by another vibration control API. </param>\n/// <param name =\"slot\">(In) specifies which controller to vibrate with the audio.\n/// <ul>\n/// <li>`No`: none</li>\n/// <li>`Left`: left controller</li>\n/// <li>`Right`: right controller</li>\n/// <li>`LeftAndRight`: both</li>\n/// </ul>\n/// </param>\n/// <param name =\"slotConfig\">(In) Specifies whether to enable audio channel inversion.\n/// <ul>\n/// <li>`No`: disable</li>\n/// <li>`Yes`: enable</li>\n/// </ul>\n/// </param>\n/// <summary>\n/// @note When slotConfig = `1`, the left controller vibrates with the audio source from right soundtrack, and vice versa.\n/// </summary>\n/// <param name =\"AmpValue\">(In) Vibration amplitude level. The range is 0.0 to 2.0:\n/// <ul>\n/// <li>`0.0`: for no vibration</li>\n/// <li>`1.0`: for standard amplitude</li>\n/// <li>`2.0`: for double the standard amplitude</li>\n/// </ul>\n/// </param>\n/// <returns>\n/// <ul>\n/// <li>`0`: success</li>\n/// <li>`-1`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Dynamically modifies PHF and AudioClip vibration data.</summary>\n<param name =\"SourceID\">(In) ID returned by another vibration control API. </param>\n<param name =\"slot\">(In) specifies which controller to vibrate with the audio.\n<ul>\n<li>`No`: none</li>\n<li>`Left`: left controller</li>\n<li>`Right`: right controller</li>\n<li>`LeftAndRight`: both</li>\n</ul>\n</param>\n<param name =\"slotConfig\">(In) Specifies whether to enable audio channel inversion.\n<ul>\n<li>`No`: disable</li>\n<li>`Yes`: enable</li>\n</ul>\n</param>\n<summary>\n@note When slotConfig = `1`, the left controller vibrates with the audio source from right soundtrack, and vice versa.\n</summary>\n<param name =\"AmpValue\">(In) Vibration amplitude level. The range is 0.0 to 2.0:\n<ul>\n<li>`0.0`: for no vibration</li>\n<li>`1.0`: for standard amplitude</li>\n<li>`2.0`: for double the standard amplitude</li>\n</ul>\n</param>\n<returns>\n<ul>\n<li>`0`: success</li>\n<li>`-1`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_UpdateVibrateParams", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_UpdateVibrateParams_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_VibrateController_Parms
		{
			EPICOXRControllerType ControllerType;
			float Strength;
			int32 Time;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Time;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_VibrateController_Parms, ControllerType), Z_Construct_UEnum_PICOXRInput_EPICOXRControllerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_VibrateController_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_VibrateController_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRInputFunctionLibrary_eventPXR_VibrateController_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRInputFunctionLibrary_eventPXR_VibrateController_Parms), &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_ControllerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_ControllerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Vibration the controller.\n\x09* @param ControllerType    (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n\x09* @param Strength          (In) Vibration strength.\n\x09* @param Time              (In) Vibration time.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Vibration the controller.\n@param ControllerType    (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n@param Strength          (In) Vibration strength.\n@param Time              (In) Vibration time." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_VibrateController", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_VibrateController_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_WriteHapticStream_Statics
	{
		struct PICOXRInputFunctionLibrary_eventPXR_WriteHapticStream_Parms
		{
			int32 SourceID;
			FPHFJsonData frames;
			int32 From;
			int32 NumFrames;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_frames_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_frames;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumFrames;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_WriteHapticStream_Statics::NewProp_SourceID = { "SourceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_WriteHapticStream_Parms, SourceID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_WriteHapticStream_Statics::NewProp_frames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_WriteHapticStream_Statics::NewProp_frames = { "frames", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_WriteHapticStream_Parms, frames), Z_Construct_UScriptStruct_FPHFJsonData, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_WriteHapticStream_Statics::NewProp_frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_WriteHapticStream_Statics::NewProp_frames_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_WriteHapticStream_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_WriteHapticStream_Parms, From), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_WriteHapticStream_Statics::NewProp_NumFrames = { "NumFrames", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_WriteHapticStream_Parms, NumFrames), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_WriteHapticStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRInputFunctionLibrary_eventPXR_WriteHapticStream_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_WriteHapticStream_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_WriteHapticStream_Statics::NewProp_SourceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_WriteHapticStream_Statics::NewProp_frames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_WriteHapticStream_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_WriteHapticStream_Statics::NewProp_NumFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_WriteHapticStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_WriteHapticStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/// <summary>Writes vibration data in the corresponding stream.</summary>\n/// <param name =\"SourceID\">(In) Int, ID returned by another vibration control API. </param>\n/// <param name =\"frames\">(In) PHF data. </param>\n/// <param name =\"From\">(In) Int, specifies from which element of the array to start sending from. </param>\n/// <param name =\"NumFrames\">(In) Int, specifies how many elements to send. </param>\n/// <returns>\n/// <ul>\n/// <li>`0`: success</li>\n/// <li>`-1`: failure</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "<summary>Writes vibration data in the corresponding stream.</summary>\n<param name =\"SourceID\">(In) Int, ID returned by another vibration control API. </param>\n<param name =\"frames\">(In) PHF data. </param>\n<param name =\"From\">(In) Int, specifies from which element of the array to start sending from. </param>\n<param name =\"NumFrames\">(In) Int, specifies how many elements to send. </param>\n<returns>\n<ul>\n<li>`0`: success</li>\n<li>`-1`: failure</li>\n</ul>\n</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_WriteHapticStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRInputFunctionLibrary, nullptr, "PXR_WriteHapticStream", nullptr, nullptr, sizeof(PICOXRInputFunctionLibrary_eventPXR_WriteHapticStream_Parms), Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_WriteHapticStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_WriteHapticStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_WriteHapticStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_WriteHapticStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_WriteHapticStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_WriteHapticStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPICOXRInputFunctionLibrary_NoRegister()
	{
		return UPICOXRInputFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPICOXRInputFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPICOXRInputFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPICOXRInputFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetActiveInputDevice, "GetActiveInputDevice" }, // 198207076
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneLocation, "GetBoneLocation" }, // 2205100194
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRadii, "GetBoneRadii" }, // 1109035347
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetBoneRotation, "GetBoneRotation" }, // 571925169
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandRootPose, "GetHandRootPose" }, // 727212890
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetHandScale, "GetHandScale" }, // 3160578083
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetPinchStrength, "GetPinchStrength" }, // 2490413177
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetRayPose, "GetRayPose" }, // 1465119939
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_GetTrackingConfidence, "GetTrackingConfidence" }, // 4181707698
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationTracked, "IsBoneOrientationTracked" }, // 486707693
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBoneOrientationValid, "IsBoneOrientationValid" }, // 1154916347
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionTracked, "IsBonePositionTracked" }, // 3951917929
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsBonePositionValid, "IsBonePositionValid" }, // 4163485145
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsComputed, "IsComputed" }, // 2003275867
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsHandTrackingEnabled, "IsHandTrackingEnabled" }, // 618661854
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsPinchValid, "IsPinchValid" }, // 3482364384
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_IsRayValid, "IsRayValid" }, // 3087426461
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ClearVibrateByCache, "PXR_ClearVibrateByCache" }, // 3743726489
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_CreateHapticStream, "PXR_CreateHapticStream" }, // 2119796668
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPose, "PXR_GetBodyTrackingPose" }, // 1172114069
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetBodyTrackingPoseByRole, "PXR_GetBodyTrackingPoseByRole" }, // 2301747922
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAcceleration, "PXR_GetControllerAcceleration" }, // 1392808181
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerAngularVelocity, "PXR_GetControllerAngularVelocity" }, // 1625959532
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerConnectionState, "PXR_GetControllerConnectionState" }, // 1228586297
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerDeviceType, "PXR_GetControllerDeviceType" }, // 4040237982
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerEnableHomekey, "PXR_GetControllerEnableHomekey" }, // 3541565734
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerLinearVelocity, "PXR_GetControllerLinearVelocity" }, // 1737361968
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPower, "PXR_GetControllerPower" }, // 1810290717
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation, "PXR_GetControllerPredictedLocationAndRotation" }, // 1322509113
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetCurrentFrameSequence, "PXR_GetCurrentFrameSequence" }, // 3488711412
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandBattery, "PXR_GetFitnessBandBattery" }, // 1121074205
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandCalibState, "PXR_GetFitnessBandCalibState" }, // 1081324690
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetFitnessBandConnectState, "PXR_GetFitnessBandConnectState" }, // 262079205
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetHandedness, "PXR_GetHandedness" }, // 3348657452
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetMainControllerHandle, "PXR_GetMainControllerHandle" }, // 3246645903
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_GetPHFHapticSpeed, "PXR_GetPHFHapticSpeed" }, // 175915341
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_LaunchFitnessBandCalibrationAPP, "PXR_LaunchFitnessBandCalibrationAPP" }, // 4277719812
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_PauseVibrate, "PXR_PauseVibrate" }, // 3094455203
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_RemovePHFHaptic, "PXR_RemovePHFHaptic" }, // 1856583362
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResetController, "PXR_ResetController" }, // 3752134332
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_ResumeVibrate, "PXR_ResumeVibrate" }, // 2858871303
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SaveVibrateByCache, "PXR_SaveVibrateByCache" }, // 2149862762
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetArmModelParameters, "PXR_SetArmModelParameters" }, // 3040034113
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingBoneLength, "PXR_SetBodyTrackingBoneLength" }, // 1477251504
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingMode, "PXR_SetBodyTrackingMode" }, // 3411509745
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetBodyTrackingStaticCalibState, "PXR_SetBodyTrackingStaticCalibState" }, // 1468009390
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerAmp, "PXR_SetControllerAmp" }, // 150319655
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerEnableKey, "PXR_SetControllerEnableKey" }, // 3636380736
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerOriginOffset, "PXR_SetControllerOriginOffset" }, // 1763193661
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetControllerVibrationEvent, "PXR_SetControllerVibrationEvent" }, // 527943871
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetMainControllerHandle, "PXR_SetMainControllerHandle" }, // 2569128366
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetPHFHapticSpeed, "PXR_SetPHFHapticSpeed" }, // 787455485
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_SetSwiftMode, "PXR_SetSwiftMode" }, // 1948313877
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartControllerVCMotor, "PXR_StartControllerVCMotor" }, // 2270103863
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartPHFHaptic, "PXR_StartPHFHaptic" }, // 1266677884
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByCache, "PXR_StartVibrateByCache" }, // 185288715
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateByPHF, "PXR_StartVibrateByPHF" }, // 1173204615
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StartVibrateBySharem, "PXR_StartVibrateBySharem" }, // 3281936462
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopControllerVCMotor, "PXR_StopControllerVCMotor" }, // 2504031012
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_StopPHFHaptic, "PXR_StopPHFHaptic" }, // 2323333418
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_UpdateVibrateParams, "PXR_UpdateVibrateParams" }, // 1742453950
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_VibrateController, "PXR_VibrateController" }, // 3642148841
		{ &Z_Construct_UFunction_UPICOXRInputFunctionLibrary_PXR_WriteHapticStream, "PXR_WriteHapticStream" }, // 677630051
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRInputFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PXR_InputFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPICOXRInputFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPICOXRInputFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPICOXRInputFunctionLibrary_Statics::ClassParams = {
		&UPICOXRInputFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPICOXRInputFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRInputFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPICOXRInputFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPICOXRInputFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPICOXRInputFunctionLibrary, 3097671377);
	template<> PICOXRINPUT_API UClass* StaticClass<UPICOXRInputFunctionLibrary>()
	{
		return UPICOXRInputFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPICOXRInputFunctionLibrary(Z_Construct_UClass_UPICOXRInputFunctionLibrary, &UPICOXRInputFunctionLibrary::StaticClass, TEXT("/Script/PICOXRInput"), TEXT("UPICOXRInputFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPICOXRInputFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
