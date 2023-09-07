// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRMotionTracking/Public/PXR_EyeTrackingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_EyeTrackingComponent() {}
// Cross Module References
	PICOXRMOTIONTRACKING_API UClass* Z_Construct_UClass_UPXR_EyeTrackingComponent_NoRegister();
	PICOXRMOTIONTRACKING_API UClass* Z_Construct_UClass_UPXR_EyeTrackingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_PICOXRMotionTracking();
	PICOXRMOTIONTRACKING_API UEnum* Z_Construct_UEnum_PICOXRMotionTracking_EPICOEye();
	ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPXR_EyeTrackingComponent::execResetEyeRotationValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetEyeRotationValues();
		P_NATIVE_END;
	}
	void UPXR_EyeTrackingComponent::StaticRegisterNativesUPXR_EyeTrackingComponent()
	{
		UClass* Class = UPXR_EyeTrackingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetEyeRotationValues", &UPXR_EyeTrackingComponent::execResetEyeRotationValues },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPXR_EyeTrackingComponent_ResetEyeRotationValues_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPXR_EyeTrackingComponent_ResetEyeRotationValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_EyeTrackingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPXR_EyeTrackingComponent_ResetEyeRotationValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPXR_EyeTrackingComponent, nullptr, "ResetEyeRotationValues", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPXR_EyeTrackingComponent_ResetEyeRotationValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPXR_EyeTrackingComponent_ResetEyeRotationValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPXR_EyeTrackingComponent_ResetEyeRotationValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPXR_EyeTrackingComponent_ResetEyeRotationValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPXR_EyeTrackingComponent_NoRegister()
	{
		return UPXR_EyeTrackingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ETTargetMeshComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ETTargetMeshComponentName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EyeToBoneMapping_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EyeToBoneMapping_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EyeToBoneMapping_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EyeToBoneMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_EyeToBoneMapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdatePosition_MetaData[];
#endif
		static void NewProp_bUpdatePosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdatePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateRotation_MetaData[];
#endif
		static void NewProp_bUpdateRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfidenceThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConfidenceThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanEyeDataInvalid_MetaData[];
#endif
		static void NewProp_bCanEyeDataInvalid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanEyeDataInvalid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ETTargetMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ETTargetMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPXR_EyeTrackingComponent_ResetEyeRotationValues, "ResetEyeRotationValues" }, // 2917713089
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OculusHMD" },
		{ "DisplayName", "PICO Eye Tracking Component" },
		{ "IncludePath", "PXR_EyeTrackingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PXR_EyeTrackingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_ETTargetMeshComponentName_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_EyeTrackingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_ETTargetMeshComponentName = { "ETTargetMeshComponentName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPXR_EyeTrackingComponent, ETTargetMeshComponentName), METADATA_PARAMS(Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_ETTargetMeshComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_ETTargetMeshComponentName_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_EyeToBoneMapping_ValueProp = { "EyeToBoneMapping", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_EyeToBoneMapping_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_EyeToBoneMapping_Key_KeyProp = { "EyeToBoneMapping_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_PICOXRMotionTracking_EPICOEye, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_EyeToBoneMapping_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_EyeTrackingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_EyeToBoneMapping = { "EyeToBoneMapping", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPXR_EyeTrackingComponent, EyeToBoneMapping), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_EyeToBoneMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_EyeToBoneMapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_bUpdatePosition_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_EyeTrackingComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_bUpdatePosition_SetBit(void* Obj)
	{
		((UPXR_EyeTrackingComponent*)Obj)->bUpdatePosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_bUpdatePosition = { "bUpdatePosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPXR_EyeTrackingComponent), &Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_bUpdatePosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_bUpdatePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_bUpdatePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_bUpdateRotation_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_EyeTrackingComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_bUpdateRotation_SetBit(void* Obj)
	{
		((UPXR_EyeTrackingComponent*)Obj)->bUpdateRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_bUpdateRotation = { "bUpdateRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPXR_EyeTrackingComponent), &Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_bUpdateRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_bUpdateRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_bUpdateRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_ConfidenceThreshold_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_EyeTrackingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_ConfidenceThreshold = { "ConfidenceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPXR_EyeTrackingComponent, ConfidenceThreshold), METADATA_PARAMS(Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_ConfidenceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_ConfidenceThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_bCanEyeDataInvalid_MetaData[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_EyeTrackingComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_bCanEyeDataInvalid_SetBit(void* Obj)
	{
		((UPXR_EyeTrackingComponent*)Obj)->bCanEyeDataInvalid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_bCanEyeDataInvalid = { "bCanEyeDataInvalid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPXR_EyeTrackingComponent), &Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_bCanEyeDataInvalid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_bCanEyeDataInvalid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_bCanEyeDataInvalid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_ETTargetMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PXR_EyeTrackingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_ETTargetMeshComponent = { "ETTargetMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPXR_EyeTrackingComponent, ETTargetMeshComponent), Z_Construct_UClass_UPoseableMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_ETTargetMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_ETTargetMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_ETTargetMeshComponentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_EyeToBoneMapping_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_EyeToBoneMapping_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_EyeToBoneMapping_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_EyeToBoneMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_bUpdatePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_bUpdateRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_ConfidenceThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_bCanEyeDataInvalid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::NewProp_ETTargetMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPXR_EyeTrackingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::ClassParams = {
		&UPXR_EyeTrackingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPXR_EyeTrackingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPXR_EyeTrackingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPXR_EyeTrackingComponent, 743815935);
	template<> PICOXRMOTIONTRACKING_API UClass* StaticClass<UPXR_EyeTrackingComponent>()
	{
		return UPXR_EyeTrackingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPXR_EyeTrackingComponent(Z_Construct_UClass_UPXR_EyeTrackingComponent, &UPXR_EyeTrackingComponent::StaticClass, TEXT("/Script/PICOXRMotionTracking"), TEXT("UPXR_EyeTrackingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPXR_EyeTrackingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
