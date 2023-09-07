// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemPico/Public/Pico_DataStore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePico_DataStore() {}
// Cross Module References
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_DataStore_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_DataStore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemPico();
// End Cross Module References
	DEFINE_FUNCTION(UPico_DataStore::execGetValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetValue(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_DataStore::execGetNumKeys)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumKeys();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_DataStore::execGetKey)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetKey(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_DataStore::execContains)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Contains(Z_Param_Key);
		P_NATIVE_END;
	}
	void UPico_DataStore::StaticRegisterNativesUPico_DataStore()
	{
		UClass* Class = UPico_DataStore::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Contains", &UPico_DataStore::execContains },
			{ "GetKey", &UPico_DataStore::execGetKey },
			{ "GetNumKeys", &UPico_DataStore::execGetNumKeys },
			{ "GetValue", &UPico_DataStore::execGetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_DataStore_Contains_Statics
	{
		struct Pico_DataStore_eventContains_Parms
		{
			FString Key;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_DataStore_Contains_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_DataStore_eventContains_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_DataStore_Contains_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_DataStore_eventContains_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_DataStore_Contains_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_DataStore_Contains_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_DataStore_Contains_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_DataStore_Contains_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Misc|Data Store" },
		{ "Comment", "/** @brief With UserId as the key, find its index in the DataStoreMap data structure.*/" },
		{ "ModuleRelativePath", "Public/Pico_DataStore.h" },
		{ "ToolTip", "@brief With UserId as the key, find its index in the DataStoreMap data structure." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_DataStore_Contains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_DataStore, nullptr, "Contains", nullptr, nullptr, sizeof(Pico_DataStore_eventContains_Parms), Z_Construct_UFunction_UPico_DataStore_Contains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_DataStore_Contains_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_DataStore_Contains_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_DataStore_Contains_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_DataStore_Contains()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_DataStore_Contains_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_DataStore_GetKey_Statics
	{
		struct Pico_DataStore_eventGetKey_Parms
		{
			int32 Index;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_DataStore_GetKey_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_DataStore_eventGetKey_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_DataStore_GetKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_DataStore_eventGetKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_DataStore_GetKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_DataStore_GetKey_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_DataStore_GetKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_DataStore_GetKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Misc|Data Store" },
		{ "Comment", "/** @brief Find the user ID in the corresponding KeyArray through the index.*/" },
		{ "ModuleRelativePath", "Public/Pico_DataStore.h" },
		{ "ToolTip", "@brief Find the user ID in the corresponding KeyArray through the index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_DataStore_GetKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_DataStore, nullptr, "GetKey", nullptr, nullptr, sizeof(Pico_DataStore_eventGetKey_Parms), Z_Construct_UFunction_UPico_DataStore_GetKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_DataStore_GetKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_DataStore_GetKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_DataStore_GetKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_DataStore_GetKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_DataStore_GetKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_DataStore_GetNumKeys_Statics
	{
		struct Pico_DataStore_eventGetNumKeys_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_DataStore_GetNumKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_DataStore_eventGetNumKeys_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_DataStore_GetNumKeys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_DataStore_GetNumKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_DataStore_GetNumKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Misc|Data Store" },
		{ "Comment", "/** @brief Get the size of DataStoreMap .*/" },
		{ "ModuleRelativePath", "Public/Pico_DataStore.h" },
		{ "ToolTip", "@brief Get the size of DataStoreMap ." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_DataStore_GetNumKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_DataStore, nullptr, "GetNumKeys", nullptr, nullptr, sizeof(Pico_DataStore_eventGetNumKeys_Parms), Z_Construct_UFunction_UPico_DataStore_GetNumKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_DataStore_GetNumKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_DataStore_GetNumKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_DataStore_GetNumKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_DataStore_GetNumKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_DataStore_GetNumKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_DataStore_GetValue_Statics
	{
		struct Pico_DataStore_eventGetValue_Parms
		{
			FString Key;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_DataStore_GetValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_DataStore_eventGetValue_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_DataStore_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_DataStore_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_DataStore_GetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_DataStore_GetValue_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_DataStore_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_DataStore_GetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Misc|Data Store" },
		{ "Comment", "/** @brief With UserId as the key, find its value in the DataStoreMap data structure.*/" },
		{ "ModuleRelativePath", "Public/Pico_DataStore.h" },
		{ "ToolTip", "@brief With UserId as the key, find its value in the DataStoreMap data structure." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_DataStore_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_DataStore, nullptr, "GetValue", nullptr, nullptr, sizeof(Pico_DataStore_eventGetValue_Parms), Z_Construct_UFunction_UPico_DataStore_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_DataStore_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_DataStore_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_DataStore_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_DataStore_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_DataStore_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_DataStore_NoRegister()
	{
		return UPico_DataStore::StaticClass();
	}
	struct Z_Construct_UClass_UPico_DataStore_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataStoreMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataStoreMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataStoreMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DataStoreMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_DataStore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_DataStore_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_DataStore_Contains, "Contains" }, // 4293223968
		{ &Z_Construct_UFunction_UPico_DataStore_GetKey, "GetKey" }, // 1141810215
		{ &Z_Construct_UFunction_UPico_DataStore_GetNumKeys, "GetNumKeys" }, // 3935102444
		{ &Z_Construct_UFunction_UPico_DataStore_GetValue, "GetValue" }, // 2417058470
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_DataStore_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n *//// @brief UPico_DataStore class.\n" },
		{ "IncludePath", "Pico_DataStore.h" },
		{ "ModuleRelativePath", "Public/Pico_DataStore.h" },
		{ "ToolTip", "/// @brief UPico_DataStore class." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPico_DataStore_Statics::NewProp_DataStoreMap_ValueProp = { "DataStoreMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPico_DataStore_Statics::NewProp_DataStoreMap_Key_KeyProp = { "DataStoreMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_DataStore_Statics::NewProp_DataStoreMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_DataStore.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPico_DataStore_Statics::NewProp_DataStoreMap = { "DataStoreMap", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPico_DataStore, DataStoreMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPico_DataStore_Statics::NewProp_DataStoreMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_DataStore_Statics::NewProp_DataStoreMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPico_DataStore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_DataStore_Statics::NewProp_DataStoreMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_DataStore_Statics::NewProp_DataStoreMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_DataStore_Statics::NewProp_DataStoreMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_DataStore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_DataStore>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_DataStore_Statics::ClassParams = {
		&UPico_DataStore::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPico_DataStore_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPico_DataStore_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPico_DataStore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_DataStore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_DataStore()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_DataStore_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_DataStore, 2804146976);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_DataStore>()
	{
		return UPico_DataStore::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_DataStore(Z_Construct_UClass_UPico_DataStore, &UPico_DataStore::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_DataStore"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_DataStore);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
