// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRMR/Public/PXR_AnchorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_AnchorComponent() {}
// Cross Module References
	PICOXRMR_API UClass* Z_Construct_UClass_UPICOMREventComponent_NoRegister();
	PICOXRMR_API UClass* Z_Construct_UClass_UPICOMREventComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_PICOXRMR();
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingState();
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingStateMessage();
	PICOXRMR_API UClass* Z_Construct_UClass_UPICOAnchorComponent_NoRegister();
	PICOXRMR_API UClass* Z_Construct_UClass_UPICOAnchorComponent();
	PICOXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchor();
	PICOXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorUUID();
// End Cross Module References
	static FName NAME_UPICOMREventComponent_OnSpatialTrackingStateUpdate = FName(TEXT("OnSpatialTrackingStateUpdate"));
	void UPICOMREventComponent::OnSpatialTrackingStateUpdate(EPICOSpatialTrackingState SpatialTrackingState, EPICOSpatialTrackingStateMessage SpatialTrackingStateMessage)
	{
		PICOMREventComponent_eventOnSpatialTrackingStateUpdate_Parms Parms;
		Parms.SpatialTrackingState=SpatialTrackingState;
		Parms.SpatialTrackingStateMessage=SpatialTrackingStateMessage;
		ProcessEvent(FindFunctionChecked(NAME_UPICOMREventComponent_OnSpatialTrackingStateUpdate),&Parms);
	}
	void UPICOMREventComponent::StaticRegisterNativesUPICOMREventComponent()
	{
	}
	struct Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpatialTrackingState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpatialTrackingState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpatialTrackingStateMessage_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpatialTrackingStateMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::NewProp_SpatialTrackingState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::NewProp_SpatialTrackingState = { "SpatialTrackingState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOMREventComponent_eventOnSpatialTrackingStateUpdate_Parms, SpatialTrackingState), Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::NewProp_SpatialTrackingStateMessage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::NewProp_SpatialTrackingStateMessage = { "SpatialTrackingStateMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOMREventComponent_eventOnSpatialTrackingStateUpdate_Parms, SpatialTrackingStateMessage), Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingStateMessage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::NewProp_SpatialTrackingState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::NewProp_SpatialTrackingState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::NewProp_SpatialTrackingStateMessage_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::NewProp_SpatialTrackingStateMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PXR_AnchorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOMREventComponent, nullptr, "OnSpatialTrackingStateUpdate", nullptr, nullptr, sizeof(PICOMREventComponent_eventOnSpatialTrackingStateUpdate_Parms), Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPICOMREventComponent_NoRegister()
	{
		return UPICOMREventComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPICOMREventComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPICOMREventComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPICOMREventComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPICOMREventComponent_OnSpatialTrackingStateUpdate, "OnSpatialTrackingStateUpdate" }, // 3305475592
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOMREventComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PXR_AnchorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PXR_AnchorComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPICOMREventComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPICOMREventComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPICOMREventComponent_Statics::ClassParams = {
		&UPICOMREventComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPICOMREventComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOMREventComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPICOMREventComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPICOMREventComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPICOMREventComponent, 2943103608);
	template<> PICOXRMR_API UClass* StaticClass<UPICOMREventComponent>()
	{
		return UPICOMREventComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPICOMREventComponent(Z_Construct_UClass_UPICOMREventComponent, &UPICOMREventComponent::StaticClass, TEXT("/Script/PICOXRMR"), TEXT("UPICOMREventComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPICOMREventComponent);
	DEFINE_FUNCTION(UPICOAnchorComponent::execGetAnchorUUIDString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAnchorUUIDString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOAnchorComponent::execGetAnchorUUID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPICOAnchorUUID*)Z_Param__Result=P_THIS->GetAnchorUUID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOAnchorComponent::execSetAnchorUUID)
	{
		P_GET_STRUCT(FPICOAnchorUUID,Z_Param_NewAnchorUUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnchorUUID(Z_Param_NewAnchorUUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOAnchorComponent::execIsAnchorValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAnchorValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOAnchorComponent::execGetAnchorHandleString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAnchorHandleString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOAnchorComponent::execSetAnchorHandle)
	{
		P_GET_STRUCT(FPICOAnchor,Z_Param_NewAnchorHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnchorHandle(Z_Param_NewAnchorHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOAnchorComponent::execGetAnchorHandle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPICOAnchor*)Z_Param__Result=P_THIS->GetAnchorHandle();
		P_NATIVE_END;
	}
	void UPICOAnchorComponent::StaticRegisterNativesUPICOAnchorComponent()
	{
		UClass* Class = UPICOAnchorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnchorHandle", &UPICOAnchorComponent::execGetAnchorHandle },
			{ "GetAnchorHandleString", &UPICOAnchorComponent::execGetAnchorHandleString },
			{ "GetAnchorUUID", &UPICOAnchorComponent::execGetAnchorUUID },
			{ "GetAnchorUUIDString", &UPICOAnchorComponent::execGetAnchorUUIDString },
			{ "IsAnchorValid", &UPICOAnchorComponent::execIsAnchorValid },
			{ "SetAnchorHandle", &UPICOAnchorComponent::execSetAnchorHandle },
			{ "SetAnchorUUID", &UPICOAnchorComponent::execSetAnchorUUID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle_Statics
	{
		struct PICOAnchorComponent_eventGetAnchorHandle_Parms
		{
			FPICOAnchor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOAnchorComponent_eventGetAnchorHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FPICOAnchor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_AnchorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOAnchorComponent, nullptr, "GetAnchorHandle", nullptr, nullptr, sizeof(PICOAnchorComponent_eventGetAnchorHandle_Parms), Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString_Statics
	{
		struct PICOAnchorComponent_eventGetAnchorHandleString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOAnchorComponent_eventGetAnchorHandleString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_AnchorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOAnchorComponent, nullptr, "GetAnchorHandleString", nullptr, nullptr, sizeof(PICOAnchorComponent_eventGetAnchorHandleString_Parms), Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID_Statics
	{
		struct PICOAnchorComponent_eventGetAnchorUUID_Parms
		{
			FPICOAnchorUUID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOAnchorComponent_eventGetAnchorUUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FPICOAnchorUUID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_AnchorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOAnchorComponent, nullptr, "GetAnchorUUID", nullptr, nullptr, sizeof(PICOAnchorComponent_eventGetAnchorUUID_Parms), Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString_Statics
	{
		struct PICOAnchorComponent_eventGetAnchorUUIDString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOAnchorComponent_eventGetAnchorUUIDString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_AnchorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOAnchorComponent, nullptr, "GetAnchorUUIDString", nullptr, nullptr, sizeof(PICOAnchorComponent_eventGetAnchorUUIDString_Parms), Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics
	{
		struct PICOAnchorComponent_eventIsAnchorValid_Parms
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
	void Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOAnchorComponent_eventIsAnchorValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOAnchorComponent_eventIsAnchorValid_Parms), &Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_AnchorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOAnchorComponent, nullptr, "IsAnchorValid", nullptr, nullptr, sizeof(PICOAnchorComponent_eventIsAnchorValid_Parms), Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle_Statics
	{
		struct PICOAnchorComponent_eventSetAnchorHandle_Parms
		{
			FPICOAnchor NewAnchorHandle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewAnchorHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle_Statics::NewProp_NewAnchorHandle = { "NewAnchorHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOAnchorComponent_eventSetAnchorHandle_Parms, NewAnchorHandle), Z_Construct_UScriptStruct_FPICOAnchor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle_Statics::NewProp_NewAnchorHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_AnchorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOAnchorComponent, nullptr, "SetAnchorHandle", nullptr, nullptr, sizeof(PICOAnchorComponent_eventSetAnchorHandle_Parms), Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID_Statics
	{
		struct PICOAnchorComponent_eventSetAnchorUUID_Parms
		{
			FPICOAnchorUUID NewAnchorUUID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewAnchorUUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID_Statics::NewProp_NewAnchorUUID = { "NewAnchorUUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOAnchorComponent_eventSetAnchorUUID_Parms, NewAnchorUUID), Z_Construct_UScriptStruct_FPICOAnchorUUID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID_Statics::NewProp_NewAnchorUUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_AnchorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOAnchorComponent, nullptr, "SetAnchorUUID", nullptr, nullptr, sizeof(PICOAnchorComponent_eventSetAnchorUUID_Parms), Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPICOAnchorComponent_NoRegister()
	{
		return UPICOAnchorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPICOAnchorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPICOAnchorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPICOAnchorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandle, "GetAnchorHandle" }, // 3608676313
		{ &Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorHandleString, "GetAnchorHandleString" }, // 2945353991
		{ &Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUID, "GetAnchorUUID" }, // 2218840463
		{ &Z_Construct_UFunction_UPICOAnchorComponent_GetAnchorUUIDString, "GetAnchorUUIDString" }, // 2717219561
		{ &Z_Construct_UFunction_UPICOAnchorComponent_IsAnchorValid, "IsAnchorValid" }, // 2760937178
		{ &Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorHandle, "SetAnchorHandle" }, // 2162253821
		{ &Z_Construct_UFunction_UPICOAnchorComponent_SetAnchorUUID, "SetAnchorUUID" }, // 2681211743
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOAnchorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PXR_AnchorComponent.h" },
		{ "ModuleRelativePath", "Public/PXR_AnchorComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPICOAnchorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPICOAnchorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPICOAnchorComponent_Statics::ClassParams = {
		&UPICOAnchorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPICOAnchorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOAnchorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPICOAnchorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPICOAnchorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPICOAnchorComponent, 2102266339);
	template<> PICOXRMR_API UClass* StaticClass<UPICOAnchorComponent>()
	{
		return UPICOAnchorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPICOAnchorComponent(Z_Construct_UClass_UPICOAnchorComponent, &UPICOAnchorComponent::StaticClass, TEXT("/Script/PICOXRMR"), TEXT("UPICOAnchorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPICOAnchorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
