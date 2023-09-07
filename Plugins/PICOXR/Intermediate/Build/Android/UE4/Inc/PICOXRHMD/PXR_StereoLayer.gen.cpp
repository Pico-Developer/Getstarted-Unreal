// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRHMD/Private/PXR_StereoLayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_StereoLayer() {}
// Cross Module References
	PICOXRHMD_API UEnum* Z_Construct_UEnum_PICOXRHMD_ESubtypeEAC();
	UPackage* Z_Construct_UPackage__Script_PICOXRHMD();
	PICOXRHMD_API UClass* Z_Construct_UClass_UStereoLayerShapeEAC_NoRegister();
	PICOXRHMD_API UClass* Z_Construct_UClass_UStereoLayerShapeEAC();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerShape();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	static UEnum* ESubtypeEAC_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRHMD_ESubtypeEAC, Z_Construct_UPackage__Script_PICOXRHMD(), TEXT("ESubtypeEAC"));
		}
		return Singleton;
	}
	template<> PICOXRHMD_API UEnum* StaticEnum<ESubtypeEAC>()
	{
		return ESubtypeEAC_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubtypeEAC(ESubtypeEAC_StaticEnum, TEXT("/Script/PICOXRHMD"), TEXT("ESubtypeEAC"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRHMD_ESubtypeEAC_Hash() { return 2158860811U; }
	UEnum* Z_Construct_UEnum_PICOXRHMD_ESubtypeEAC()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRHMD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubtypeEAC"), 0, Get_Z_Construct_UEnum_PICOXRHMD_ESubtypeEAC_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESubtypeEAC::EAC180", (int64)ESubtypeEAC::EAC180 },
				{ "ESubtypeEAC::EAC360", (int64)ESubtypeEAC::EAC360 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EAC180.Name", "ESubtypeEAC::EAC180" },
				{ "EAC180.ToolTip", "180\xc2\xb0 degree EAC" },
				{ "EAC360.Name", "ESubtypeEAC::EAC360" },
				{ "EAC360.ToolTip", "360\xc2\xb0 degree EAC" },
				{ "ModuleRelativePath", "Private/PXR_StereoLayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRHMD,
				nullptr,
				"ESubtypeEAC",
				"ESubtypeEAC",
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
	DEFINE_FUNCTION(UStereoLayerShapeEAC::execSetSubtype)
	{
		P_GET_ENUM(ESubtypeEAC,Z_Param_InSubtype);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubtype(ESubtypeEAC(Z_Param_InSubtype));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStereoLayerShapeEAC::execSetOverlapFactor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InOverlapFactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverlapFactor(Z_Param_InOverlapFactor);
		P_NATIVE_END;
	}
	void UStereoLayerShapeEAC::StaticRegisterNativesUStereoLayerShapeEAC()
	{
		UClass* Class = UStereoLayerShapeEAC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetOverlapFactor", &UStereoLayerShapeEAC::execSetOverlapFactor },
			{ "SetSubtype", &UStereoLayerShapeEAC::execSetSubtype },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStereoLayerShapeEAC_SetOverlapFactor_Statics
	{
		struct StereoLayerShapeEAC_eventSetOverlapFactor_Parms
		{
			float InOverlapFactor;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InOverlapFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStereoLayerShapeEAC_SetOverlapFactor_Statics::NewProp_InOverlapFactor = { "InOverlapFactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StereoLayerShapeEAC_eventSetOverlapFactor_Parms, InOverlapFactor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerShapeEAC_SetOverlapFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerShapeEAC_SetOverlapFactor_Statics::NewProp_InOverlapFactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerShapeEAC_SetOverlapFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "ModuleRelativePath", "Private/PXR_StereoLayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerShapeEAC_SetOverlapFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerShapeEAC, nullptr, "SetOverlapFactor", nullptr, nullptr, sizeof(StereoLayerShapeEAC_eventSetOverlapFactor_Parms), Z_Construct_UFunction_UStereoLayerShapeEAC_SetOverlapFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerShapeEAC_SetOverlapFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerShapeEAC_SetOverlapFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerShapeEAC_SetOverlapFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerShapeEAC_SetOverlapFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStereoLayerShapeEAC_SetOverlapFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerShapeEAC_SetSubtype_Statics
	{
		struct StereoLayerShapeEAC_eventSetSubtype_Parms
		{
			ESubtypeEAC InSubtype;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InSubtype_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InSubtype;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStereoLayerShapeEAC_SetSubtype_Statics::NewProp_InSubtype_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStereoLayerShapeEAC_SetSubtype_Statics::NewProp_InSubtype = { "InSubtype", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StereoLayerShapeEAC_eventSetSubtype_Parms, InSubtype), Z_Construct_UEnum_PICOXRHMD_ESubtypeEAC, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerShapeEAC_SetSubtype_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerShapeEAC_SetSubtype_Statics::NewProp_InSubtype_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerShapeEAC_SetSubtype_Statics::NewProp_InSubtype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerShapeEAC_SetSubtype_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "ModuleRelativePath", "Private/PXR_StereoLayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerShapeEAC_SetSubtype_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerShapeEAC, nullptr, "SetSubtype", nullptr, nullptr, sizeof(StereoLayerShapeEAC_eventSetSubtype_Parms), Z_Construct_UFunction_UStereoLayerShapeEAC_SetSubtype_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerShapeEAC_SetSubtype_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerShapeEAC_SetSubtype_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerShapeEAC_SetSubtype_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerShapeEAC_SetSubtype()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStereoLayerShapeEAC_SetSubtype_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStereoLayerShapeEAC_NoRegister()
	{
		return UStereoLayerShapeEAC::StaticClass();
	}
	struct Z_Construct_UClass_UStereoLayerShapeEAC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverlapFactor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Subtype_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtype_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Subtype;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftUVRect_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftUVRect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightUVRect_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightUVRect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetRot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetRot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStereoLayerShapeEAC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStereoLayerShape,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRHMD,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStereoLayerShapeEAC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStereoLayerShapeEAC_SetOverlapFactor, "SetOverlapFactor" }, // 3036997557
		{ &Z_Construct_UFunction_UStereoLayerShapeEAC_SetSubtype, "SetSubtype" }, // 2442311107
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerShapeEAC_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Class describing settings for a stereo layer shaped as an EAC (equiangular cubemap).\n\x09This is a custom shape supported by the PicoXR Plugin. */" },
		{ "DisplayName", "EAC Layer" },
		{ "IncludePath", "PXR_StereoLayer.h" },
		{ "ModuleRelativePath", "Private/PXR_StereoLayer.h" },
		{ "ToolTip", "Class describing settings for a stereo layer shaped as an EAC (equiangular cubemap).\n      This is a custom shape supported by the PicoXR Plugin." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_OverlapFactor_MetaData[] = {
		{ "Category", "EAC Properties" },
		{ "Comment", "/** The UV rect sampled for each face will be resized by a factor of: [1/OverlapFactor]. \n\x09Modifying this value can blend seams at the edges of the cubemap. */" },
		{ "ModuleRelativePath", "Private/PXR_StereoLayer.h" },
		{ "ToolTip", "The UV rect sampled for each face will be resized by a factor of: [1/OverlapFactor].\n      Modifying this value can blend seams at the edges of the cubemap." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_OverlapFactor = { "OverlapFactor", nullptr, (EPropertyFlags)0x001000000000001d, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStereoLayerShapeEAC, OverlapFactor), METADATA_PARAMS(Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_OverlapFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_OverlapFactor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_Subtype_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_Subtype_MetaData[] = {
		{ "Category", "EAC Properties" },
		{ "Comment", "/** Specific EAC format to use. */" },
		{ "ModuleRelativePath", "Private/PXR_StereoLayer.h" },
		{ "ToolTip", "Specific EAC format to use." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_Subtype = { "Subtype", nullptr, (EPropertyFlags)0x001000000000001d, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStereoLayerShapeEAC, Subtype), Z_Construct_UEnum_PICOXRHMD_ESubtypeEAC, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_Subtype_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_Subtype_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_LeftUVRect_MetaData[] = {
		{ "Category", "EAC Properties" },
		{ "Comment", "/** Left source texture UVRect, specifying portion of input texture corresponding to left eye. */" },
		{ "DisplayName", "Left UV Rect" },
		{ "ModuleRelativePath", "Private/PXR_StereoLayer.h" },
		{ "ToolTip", "Left source texture UVRect, specifying portion of input texture corresponding to left eye." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_LeftUVRect = { "LeftUVRect", nullptr, (EPropertyFlags)0x001000000000001d, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStereoLayerShapeEAC, LeftUVRect), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_LeftUVRect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_LeftUVRect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_RightUVRect_MetaData[] = {
		{ "Category", "EAC Properties" },
		{ "Comment", "/** Right source texture UVRect, specifying portion of input texture corresponding to right eye. */" },
		{ "DisplayName", "Right UV Rect" },
		{ "ModuleRelativePath", "Private/PXR_StereoLayer.h" },
		{ "ToolTip", "Right source texture UVRect, specifying portion of input texture corresponding to right eye." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_RightUVRect = { "RightUVRect", nullptr, (EPropertyFlags)0x001000000000001d, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStereoLayerShapeEAC, RightUVRect), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_RightUVRect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_RightUVRect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "EAC Properties" },
		{ "Comment", "/** The position of the camera matrix of the EAC Texture. \n\x09This position will be inverted when sampling from the EAC Texture. */" },
		{ "ModuleRelativePath", "Private/PXR_StereoLayer.h" },
		{ "ToolTip", "The position of the camera matrix of the EAC Texture.\n      This position will be inverted when sampling from the EAC Texture." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x001000000000001d, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStereoLayerShapeEAC, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_OffsetRot_MetaData[] = {
		{ "Category", "EAC Properties" },
		{ "Comment", "/** The rotation of the camera matrix of the EAC Texture. \n\x09This rotation will be inverted when sampling from the EAC Texture. */" },
		{ "ModuleRelativePath", "Private/PXR_StereoLayer.h" },
		{ "ToolTip", "The rotation of the camera matrix of the EAC Texture.\n      This rotation will be inverted when sampling from the EAC Texture." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_OffsetRot = { "OffsetRot", nullptr, (EPropertyFlags)0x001000000000001d, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStereoLayerShapeEAC, OffsetRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_OffsetRot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_OffsetRot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStereoLayerShapeEAC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_OverlapFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_Subtype_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_Subtype,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_LeftUVRect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_RightUVRect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerShapeEAC_Statics::NewProp_OffsetRot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStereoLayerShapeEAC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStereoLayerShapeEAC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStereoLayerShapeEAC_Statics::ClassParams = {
		&UStereoLayerShapeEAC::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStereoLayerShapeEAC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerShapeEAC_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStereoLayerShapeEAC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoLayerShapeEAC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStereoLayerShapeEAC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStereoLayerShapeEAC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStereoLayerShapeEAC, 1923754630);
	template<> PICOXRHMD_API UClass* StaticClass<UStereoLayerShapeEAC>()
	{
		return UStereoLayerShapeEAC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStereoLayerShapeEAC(Z_Construct_UClass_UStereoLayerShapeEAC, &UStereoLayerShapeEAC::StaticClass, TEXT("/Script/PICOXRHMD"), TEXT("UStereoLayerShapeEAC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStereoLayerShapeEAC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
