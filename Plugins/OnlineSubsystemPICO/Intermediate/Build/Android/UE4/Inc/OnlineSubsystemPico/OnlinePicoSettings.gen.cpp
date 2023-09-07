// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemPico/Private/OnlinePicoSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlinePicoSettings() {}
// Cross Module References
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ERegionType();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemPico();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UOnlinePicoSettings_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UOnlinePicoSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ERegionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemPico_ERegionType, Z_Construct_UPackage__Script_OnlineSubsystemPico(), TEXT("ERegionType"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMPICO_API UEnum* StaticEnum<ERegionType>()
	{
		return ERegionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERegionType(ERegionType_StaticEnum, TEXT("/Script/OnlineSubsystemPico"), TEXT("ERegionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemPico_ERegionType_Hash() { return 1675899096U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ERegionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemPico();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERegionType"), 0, Get_Z_Construct_UEnum_OnlineSubsystemPico_ERegionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERegionType::China", (int64)ERegionType::China },
				{ "ERegionType::NonChina", (int64)ERegionType::NonChina },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "China.Name", "ERegionType::China" },
				{ "ModuleRelativePath", "Private/OnlinePicoSettings.h" },
				{ "NonChina.Name", "ERegionType::NonChina" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
				nullptr,
				"ERegionType",
				"ERegionType",
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
	DEFINE_FUNCTION(UOnlinePicoSettings::execGetOnlinePicoSettings)
	{
		P_GET_UBOOL_REF(Z_Param_Out_OutbIsEnable);
		P_GET_ENUM_REF(ERegionType,Z_Param_Out_OutRegionType);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutAppID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutAccessToken);
		P_GET_UBOOL_REF(Z_Param_Out_OutbEnableHighlight);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoSettings::GetOnlinePicoSettings(Z_Param_Out_OutbIsEnable,(ERegionType&)(Z_Param_Out_OutRegionType),Z_Param_Out_OutAppID,Z_Param_Out_OutAccessToken,Z_Param_Out_OutbEnableHighlight);
		P_NATIVE_END;
	}
	void UOnlinePicoSettings::StaticRegisterNativesUOnlinePicoSettings()
	{
		UClass* Class = UOnlinePicoSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOnlinePicoSettings", &UOnlinePicoSettings::execGetOnlinePicoSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings_Statics
	{
		struct OnlinePicoSettings_eventGetOnlinePicoSettings_Parms
		{
			bool OutbIsEnable;
			ERegionType OutRegionType;
			FString OutAppID;
			FString OutAccessToken;
			bool OutbEnableHighlight;
		};
		static void NewProp_OutbIsEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OutbIsEnable;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutRegionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutRegionType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutAppID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutAccessToken;
		static void NewProp_OutbEnableHighlight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OutbEnableHighlight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings_Statics::NewProp_OutbIsEnable_SetBit(void* Obj)
	{
		((OnlinePicoSettings_eventGetOnlinePicoSettings_Parms*)Obj)->OutbIsEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings_Statics::NewProp_OutbIsEnable = { "OutbIsEnable", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoSettings_eventGetOnlinePicoSettings_Parms), &Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings_Statics::NewProp_OutbIsEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings_Statics::NewProp_OutRegionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings_Statics::NewProp_OutRegionType = { "OutRegionType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoSettings_eventGetOnlinePicoSettings_Parms, OutRegionType), Z_Construct_UEnum_OnlineSubsystemPico_ERegionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings_Statics::NewProp_OutAppID = { "OutAppID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoSettings_eventGetOnlinePicoSettings_Parms, OutAppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings_Statics::NewProp_OutAccessToken = { "OutAccessToken", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoSettings_eventGetOnlinePicoSettings_Parms, OutAccessToken), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings_Statics::NewProp_OutbEnableHighlight_SetBit(void* Obj)
	{
		((OnlinePicoSettings_eventGetOnlinePicoSettings_Parms*)Obj)->OutbEnableHighlight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings_Statics::NewProp_OutbEnableHighlight = { "OutbEnableHighlight", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoSettings_eventGetOnlinePicoSettings_Parms), &Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings_Statics::NewProp_OutbEnableHighlight_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings_Statics::NewProp_OutbIsEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings_Statics::NewProp_OutRegionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings_Statics::NewProp_OutRegionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings_Statics::NewProp_OutAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings_Statics::NewProp_OutAccessToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings_Statics::NewProp_OutbEnableHighlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "OVRPlatformBP|OnlineSubsystemOculus" },
		{ "Comment", "// Gets the config file settings in-game.\n" },
		{ "ModuleRelativePath", "Private/OnlinePicoSettings.h" },
		{ "ToolTip", "Gets the config file settings in-game." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoSettings, nullptr, "GetOnlinePicoSettings", nullptr, nullptr, sizeof(OnlinePicoSettings_eventGetOnlinePicoSettings_Parms), Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlinePicoSettings_NoRegister()
	{
		return UOnlinePicoSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePicoSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsForeign_MetaData[];
#endif
		static void NewProp_bIsForeign_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsForeign;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGlobal_MetaData[];
#endif
		static void NewProp_bIsGlobal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGlobal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableHighlight_MetaData[];
#endif
		static void NewProp_bEnableHighlight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableHighlight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccessToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccessToken;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RegionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RegionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlinePicoSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlinePicoSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlinePicoSettings_GetOnlinePicoSettings, "GetOnlinePicoSettings" }, // 171330251
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePicoSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OnlinePicoSettings.h" },
		{ "ModuleRelativePath", "Private/OnlinePicoSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bIsForeign_MetaData[] = {
		{ "Comment", "// Platform\n" },
		{ "ModuleRelativePath", "Private/OnlinePicoSettings.h" },
		{ "ToolTip", "Platform" },
	};
#endif
	void Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bIsForeign_SetBit(void* Obj)
	{
		((UOnlinePicoSettings*)Obj)->bIsForeign = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bIsForeign = { "bIsForeign", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOnlinePicoSettings), &Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bIsForeign_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bIsForeign_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bIsForeign_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bIsGlobal_MetaData[] = {
		{ "ModuleRelativePath", "Private/OnlinePicoSettings.h" },
	};
#endif
	void Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bIsGlobal_SetBit(void* Obj)
	{
		((UOnlinePicoSettings*)Obj)->bIsGlobal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bIsGlobal = { "bIsGlobal", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOnlinePicoSettings), &Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bIsGlobal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bIsGlobal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bIsGlobal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Platform" },
		{ "DisplayName", "bEnabled" },
		{ "ModuleRelativePath", "Private/OnlinePicoSettings.h" },
	};
#endif
	void Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UOnlinePicoSettings*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOnlinePicoSettings), &Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_AppID_MetaData[] = {
		{ "Category", "Platform" },
		{ "DisplayName", "AppID" },
		{ "ModuleRelativePath", "Private/OnlinePicoSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlinePicoSettings, AppID), METADATA_PARAMS(Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_AppID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bEnableHighlight_MetaData[] = {
		{ "Category", "Platform" },
		{ "DisplayName", "Highlight" },
		{ "ModuleRelativePath", "Private/OnlinePicoSettings.h" },
	};
#endif
	void Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bEnableHighlight_SetBit(void* Obj)
	{
		((UOnlinePicoSettings*)Obj)->bEnableHighlight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bEnableHighlight = { "bEnableHighlight", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOnlinePicoSettings), &Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bEnableHighlight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bEnableHighlight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bEnableHighlight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_AccessToken_MetaData[] = {
		{ "Category", "WindowsDebug" },
		{ "DisplayName", "AccessToken" },
		{ "ModuleRelativePath", "Private/OnlinePicoSettings.h" },
		{ "ToolTip", "Get the access token from development platform" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_AccessToken = { "AccessToken", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlinePicoSettings, AccessToken), METADATA_PARAMS(Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_AccessToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_AccessToken_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_RegionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_RegionType_MetaData[] = {
		{ "Category", "WindowsDebug" },
		{ "DisplayName", "Region" },
		{ "ModuleRelativePath", "Private/OnlinePicoSettings.h" },
		{ "ToolTip", "Only used in windows debug" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_RegionType = { "RegionType", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlinePicoSettings, RegionType), Z_Construct_UEnum_OnlineSubsystemPico_ERegionType, METADATA_PARAMS(Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_RegionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_RegionType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlinePicoSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bIsForeign,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bIsGlobal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_bEnableHighlight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_AccessToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_RegionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePicoSettings_Statics::NewProp_RegionType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePicoSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePicoSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePicoSettings_Statics::ClassParams = {
		&UOnlinePicoSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlinePicoSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePicoSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePicoSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePicoSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePicoSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlinePicoSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlinePicoSettings, 3573035598);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UOnlinePicoSettings>()
	{
		return UOnlinePicoSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlinePicoSettings(Z_Construct_UClass_UOnlinePicoSettings, &UOnlinePicoSettings::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UOnlinePicoSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePicoSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
