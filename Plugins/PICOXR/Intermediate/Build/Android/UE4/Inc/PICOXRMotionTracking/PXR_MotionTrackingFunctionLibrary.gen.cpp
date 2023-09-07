// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRMotionTracking/Public/PXR_MotionTrackingFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_MotionTrackingFunctionLibrary() {}
// Cross Module References
	PICOXRMOTIONTRACKING_API UClass* Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary_NoRegister();
	PICOXRMOTIONTRACKING_API UClass* Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PICOXRMotionTracking();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXREyePupilInfo();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXREyeTrackingData();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXREyeTrackingState();
	PICOXRMOTIONTRACKING_API UEnum* Z_Construct_UEnum_PICOXRMotionTracking_EPXREyeTrackingMode();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXRFaceTrackingData();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXRFaceTrackingState();
	PICOXRMOTIONTRACKING_API UEnum* Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceTrackingMode();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo();
	PICOXRMOTIONTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo();
// End Cross Module References
	DEFINE_FUNCTION(UPICOXRMotionTrackingFunctionLibrary::execGetEyePupilInfo)
	{
		P_GET_STRUCT_REF(FPXREyePupilInfo,Z_Param_Out_EyePupilInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRMotionTrackingFunctionLibrary::GetEyePupilInfo(Z_Param_Out_EyePupilInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMotionTrackingFunctionLibrary::execGetEyeOpenness)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LeftEyeOpenness);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_RightEyeOpenness);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRMotionTrackingFunctionLibrary::GetEyeOpenness(Z_Param_Out_LeftEyeOpenness,Z_Param_Out_RightEyeOpenness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMotionTrackingFunctionLibrary::execGetEyeTrackingData)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_WorldToMetersScale);
		P_GET_STRUCT_REF(FPXREyeTrackingDataGetInfo,Z_Param_Out_GetInfo);
		P_GET_STRUCT_REF(FPXREyeTrackingData,Z_Param_Out_OutEyeTrackingData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRMotionTrackingFunctionLibrary::GetEyeTrackingData(Z_Param_WorldToMetersScale,Z_Param_Out_GetInfo,Z_Param_Out_OutEyeTrackingData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMotionTrackingFunctionLibrary::execStopEyeTracking)
	{
		P_GET_STRUCT_REF(FPXREyeTrackingStopInfo,Z_Param_Out_StopInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRMotionTrackingFunctionLibrary::StopEyeTracking(Z_Param_Out_StopInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMotionTrackingFunctionLibrary::execStartEyeTracking)
	{
		P_GET_STRUCT_REF(FPXREyeTrackingStartInfo,Z_Param_Out_StartInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRMotionTrackingFunctionLibrary::StartEyeTracking(Z_Param_Out_StartInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMotionTrackingFunctionLibrary::execGetEyeTrackingState)
	{
		P_GET_UBOOL_REF(Z_Param_Out_IsTracking);
		P_GET_STRUCT_REF(FPXREyeTrackingState,Z_Param_Out_TrackingState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRMotionTrackingFunctionLibrary::GetEyeTrackingState(Z_Param_Out_IsTracking,Z_Param_Out_TrackingState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMotionTrackingFunctionLibrary::execGetEyeTrackingSupported)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Supported);
		P_GET_TARRAY_REF(EPXREyeTrackingMode,Z_Param_Out_SupportedModes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRMotionTrackingFunctionLibrary::GetEyeTrackingSupported(Z_Param_Out_Supported,Z_Param_Out_SupportedModes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMotionTrackingFunctionLibrary::execGetFaceTrackingData)
	{
		P_GET_STRUCT_REF(FPXRFaceTrackingDataGetInfo,Z_Param_Out_GetInfo);
		P_GET_STRUCT_REF(FPXRFaceTrackingData,Z_Param_Out_OutFaceTrackingData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRMotionTrackingFunctionLibrary::GetFaceTrackingData(Z_Param_Out_GetInfo,Z_Param_Out_OutFaceTrackingData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMotionTrackingFunctionLibrary::execStopFaceTracking)
	{
		P_GET_STRUCT_REF(FPXRFaceTrackingStopInfo,Z_Param_Out_StopInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRMotionTrackingFunctionLibrary::StopFaceTracking(Z_Param_Out_StopInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMotionTrackingFunctionLibrary::execStartFaceTracking)
	{
		P_GET_STRUCT_REF(FPXRFaceTrackingStartInfo,Z_Param_Out_StartInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRMotionTrackingFunctionLibrary::StartFaceTracking(Z_Param_Out_StartInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMotionTrackingFunctionLibrary::execGetFaceTrackingState)
	{
		P_GET_UBOOL_REF(Z_Param_Out_IsTracking);
		P_GET_STRUCT_REF(FPXRFaceTrackingState,Z_Param_Out_TrackingState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRMotionTrackingFunctionLibrary::GetFaceTrackingState(Z_Param_Out_IsTracking,Z_Param_Out_TrackingState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPICOXRMotionTrackingFunctionLibrary::execGetFaceTrackingSupported)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Supported);
		P_GET_TARRAY_REF(EPXRFaceTrackingMode,Z_Param_Out_SupportedModes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPICOXRMotionTrackingFunctionLibrary::GetFaceTrackingSupported(Z_Param_Out_Supported,Z_Param_Out_SupportedModes);
		P_NATIVE_END;
	}
	void UPICOXRMotionTrackingFunctionLibrary::StaticRegisterNativesUPICOXRMotionTrackingFunctionLibrary()
	{
		UClass* Class = UPICOXRMotionTrackingFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEyeOpenness", &UPICOXRMotionTrackingFunctionLibrary::execGetEyeOpenness },
			{ "GetEyePupilInfo", &UPICOXRMotionTrackingFunctionLibrary::execGetEyePupilInfo },
			{ "GetEyeTrackingData", &UPICOXRMotionTrackingFunctionLibrary::execGetEyeTrackingData },
			{ "GetEyeTrackingState", &UPICOXRMotionTrackingFunctionLibrary::execGetEyeTrackingState },
			{ "GetEyeTrackingSupported", &UPICOXRMotionTrackingFunctionLibrary::execGetEyeTrackingSupported },
			{ "GetFaceTrackingData", &UPICOXRMotionTrackingFunctionLibrary::execGetFaceTrackingData },
			{ "GetFaceTrackingState", &UPICOXRMotionTrackingFunctionLibrary::execGetFaceTrackingState },
			{ "GetFaceTrackingSupported", &UPICOXRMotionTrackingFunctionLibrary::execGetFaceTrackingSupported },
			{ "StartEyeTracking", &UPICOXRMotionTrackingFunctionLibrary::execStartEyeTracking },
			{ "StartFaceTracking", &UPICOXRMotionTrackingFunctionLibrary::execStartFaceTracking },
			{ "StopEyeTracking", &UPICOXRMotionTrackingFunctionLibrary::execStopEyeTracking },
			{ "StopFaceTracking", &UPICOXRMotionTrackingFunctionLibrary::execStopFaceTracking },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeOpenness_Statics
	{
		struct PICOXRMotionTrackingFunctionLibrary_eventGetEyeOpenness_Parms
		{
			float LeftEyeOpenness;
			float RightEyeOpenness;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftEyeOpenness;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightEyeOpenness;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeOpenness_Statics::NewProp_LeftEyeOpenness = { "LeftEyeOpenness", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMotionTrackingFunctionLibrary_eventGetEyeOpenness_Parms, LeftEyeOpenness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeOpenness_Statics::NewProp_RightEyeOpenness = { "RightEyeOpenness", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMotionTrackingFunctionLibrary_eventGetEyeOpenness_Parms, RightEyeOpenness), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeOpenness_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRMotionTrackingFunctionLibrary_eventGetEyeOpenness_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeOpenness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRMotionTrackingFunctionLibrary_eventGetEyeOpenness_Parms), &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeOpenness_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeOpenness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeOpenness_Statics::NewProp_LeftEyeOpenness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeOpenness_Statics::NewProp_RightEyeOpenness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeOpenness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeOpenness_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeOpenness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary, nullptr, "GetEyeOpenness", nullptr, nullptr, sizeof(PICOXRMotionTrackingFunctionLibrary_eventGetEyeOpenness_Parms), Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeOpenness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeOpenness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeOpenness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeOpenness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeOpenness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeOpenness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyePupilInfo_Statics
	{
		struct PICOXRMotionTrackingFunctionLibrary_eventGetEyePupilInfo_Parms
		{
			FPXREyePupilInfo EyePupilInfo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EyePupilInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyePupilInfo_Statics::NewProp_EyePupilInfo = { "EyePupilInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMotionTrackingFunctionLibrary_eventGetEyePupilInfo_Parms, EyePupilInfo), Z_Construct_UScriptStruct_FPXREyePupilInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyePupilInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRMotionTrackingFunctionLibrary_eventGetEyePupilInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyePupilInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRMotionTrackingFunctionLibrary_eventGetEyePupilInfo_Parms), &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyePupilInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyePupilInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyePupilInfo_Statics::NewProp_EyePupilInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyePupilInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyePupilInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyePupilInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary, nullptr, "GetEyePupilInfo", nullptr, nullptr, sizeof(PICOXRMotionTrackingFunctionLibrary_eventGetEyePupilInfo_Parms), Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyePupilInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyePupilInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyePupilInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyePupilInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyePupilInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyePupilInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingData_Statics
	{
		struct PICOXRMotionTrackingFunctionLibrary_eventGetEyeTrackingData_Parms
		{
			float WorldToMetersScale;
			FPXREyeTrackingDataGetInfo GetInfo;
			FPXREyeTrackingData OutEyeTrackingData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldToMetersScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GetInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutEyeTrackingData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingData_Statics::NewProp_WorldToMetersScale = { "WorldToMetersScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMotionTrackingFunctionLibrary_eventGetEyeTrackingData_Parms, WorldToMetersScale), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingData_Statics::NewProp_GetInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingData_Statics::NewProp_GetInfo = { "GetInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMotionTrackingFunctionLibrary_eventGetEyeTrackingData_Parms, GetInfo), Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingData_Statics::NewProp_GetInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingData_Statics::NewProp_GetInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingData_Statics::NewProp_OutEyeTrackingData = { "OutEyeTrackingData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMotionTrackingFunctionLibrary_eventGetEyeTrackingData_Parms, OutEyeTrackingData), Z_Construct_UScriptStruct_FPXREyeTrackingData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRMotionTrackingFunctionLibrary_eventGetEyeTrackingData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRMotionTrackingFunctionLibrary_eventGetEyeTrackingData_Parms), &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingData_Statics::NewProp_WorldToMetersScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingData_Statics::NewProp_GetInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingData_Statics::NewProp_OutEyeTrackingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingData_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "Comment", "/// <summary>Gets eye tracking data. Supported by PICO Neo3 Pro Eye, PICO 4 Pro/Enterprise.\n/// @note Currently, only Pico Neo 3 Pro Eye and PICO 4 Pro support Get eye tracking data. To call this API, you need to enable eye tracking for your project.\n/// </summary>\n/// <returns>A structure containing the following details:\n/// <ul>\n/// <li>`LeftEyePoseStatus`: Int, the current pose status of the left eye: `0` - data available; `1` - data not available</li>\n/// <li>`RightEyePoseStatus`: Int, the current pose status of the right eye: `0` - data available; `1` - data not available\n/// <li>`CombinedEyePoseStatus`: Int, the current combined pose status of the left and right eye: : 0 - data available; 1 - data not available</li>\n/// <li>`CombinedEyeGazePoint`: Vector, the current combined gaze point of the left and right eye</li>\n/// <li>`CombinedEyeGazeVector`: Vector, the current combined gaze direction of the left and right eye (from the midpoint between two eyes to the gaze point\xef\xbc\x89</li>\n/// <li>`LeftEyeOpenness`: Float, the current openness of the left eye: `0.0` - eye closed; `1.0` - eye open</li>\n/// <li>`RightEyeOpenness`: Float, the current openness of the right eye: `0.0` - eye closed; `1.0` - eye open</li>\n/// <li>`LeftEyeOpenness`: Float, the current openness of the left eye: `0.0` - eye closed; `1.0` - eye open</li>\n/// <li>`LeftEyePositionGuide`: Vector, the position guide for the left eye</li>\n/// <li>`RightEyePositionGuide`: Vector, the position guide for the right eye</li>\n/// <li>`FoveatedGazeDirection`: Vector, the gazing ray direction (the center of FFR implemented)</li>\n/// </ul>\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingFunctionLibrary.h" },
		{ "ToolTip", "<summary>Gets eye tracking data. Supported by PICO Neo3 Pro Eye, PICO 4 Pro/Enterprise.\n@note Currently, only Pico Neo 3 Pro Eye and PICO 4 Pro support Get eye tracking data. To call this API, you need to enable eye tracking for your project.\n</summary>\n<returns>A structure containing the following details:\n<ul>\n<li>`LeftEyePoseStatus`: Int, the current pose status of the left eye: `0` - data available; `1` - data not available</li>\n<li>`RightEyePoseStatus`: Int, the current pose status of the right eye: `0` - data available; `1` - data not available\n<li>`CombinedEyePoseStatus`: Int, the current combined pose status of the left and right eye: : 0 - data available; 1 - data not available</li>\n<li>`CombinedEyeGazePoint`: Vector, the current combined gaze point of the left and right eye</li>\n<li>`CombinedEyeGazeVector`: Vector, the current combined gaze direction of the left and right eye (from the midpoint between two eyes to the gaze point\xef\xbc\x89</li>\n<li>`LeftEyeOpenness`: Float, the current openness of the left eye: `0.0` - eye closed; `1.0` - eye open</li>\n<li>`RightEyeOpenness`: Float, the current openness of the right eye: `0.0` - eye closed; `1.0` - eye open</li>\n<li>`LeftEyeOpenness`: Float, the current openness of the left eye: `0.0` - eye closed; `1.0` - eye open</li>\n<li>`LeftEyePositionGuide`: Vector, the position guide for the left eye</li>\n<li>`RightEyePositionGuide`: Vector, the position guide for the right eye</li>\n<li>`FoveatedGazeDirection`: Vector, the gazing ray direction (the center of FFR implemented)</li>\n</ul>\n</returns>" },
		{ "WorldToMetersScale", "100.0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary, nullptr, "GetEyeTrackingData", nullptr, nullptr, sizeof(PICOXRMotionTrackingFunctionLibrary_eventGetEyeTrackingData_Parms), Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingState_Statics
	{
		struct PICOXRMotionTrackingFunctionLibrary_eventGetEyeTrackingState_Parms
		{
			bool IsTracking;
			FPXREyeTrackingState TrackingState;
			bool ReturnValue;
		};
		static void NewProp_IsTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTracking;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackingState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingState_Statics::NewProp_IsTracking_SetBit(void* Obj)
	{
		((PICOXRMotionTrackingFunctionLibrary_eventGetEyeTrackingState_Parms*)Obj)->IsTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingState_Statics::NewProp_IsTracking = { "IsTracking", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRMotionTrackingFunctionLibrary_eventGetEyeTrackingState_Parms), &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingState_Statics::NewProp_IsTracking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingState_Statics::NewProp_TrackingState = { "TrackingState", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMotionTrackingFunctionLibrary_eventGetEyeTrackingState_Parms, TrackingState), Z_Construct_UScriptStruct_FPXREyeTrackingState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRMotionTrackingFunctionLibrary_eventGetEyeTrackingState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRMotionTrackingFunctionLibrary_eventGetEyeTrackingState_Parms), &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingState_Statics::NewProp_IsTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingState_Statics::NewProp_TrackingState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingState_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary, nullptr, "GetEyeTrackingState", nullptr, nullptr, sizeof(PICOXRMotionTrackingFunctionLibrary_eventGetEyeTrackingState_Parms), Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingSupported_Statics
	{
		struct PICOXRMotionTrackingFunctionLibrary_eventGetEyeTrackingSupported_Parms
		{
			bool Supported;
			TArray<EPXREyeTrackingMode> SupportedModes;
			bool ReturnValue;
		};
		static void NewProp_Supported_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Supported;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SupportedModes_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SupportedModes_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SupportedModes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingSupported_Statics::NewProp_Supported_SetBit(void* Obj)
	{
		((PICOXRMotionTrackingFunctionLibrary_eventGetEyeTrackingSupported_Parms*)Obj)->Supported = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingSupported_Statics::NewProp_Supported = { "Supported", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRMotionTrackingFunctionLibrary_eventGetEyeTrackingSupported_Parms), &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingSupported_Statics::NewProp_Supported_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingSupported_Statics::NewProp_SupportedModes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingSupported_Statics::NewProp_SupportedModes_Inner = { "SupportedModes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_PICOXRMotionTracking_EPXREyeTrackingMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingSupported_Statics::NewProp_SupportedModes = { "SupportedModes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMotionTrackingFunctionLibrary_eventGetEyeTrackingSupported_Parms, SupportedModes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRMotionTrackingFunctionLibrary_eventGetEyeTrackingSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRMotionTrackingFunctionLibrary_eventGetEyeTrackingSupported_Parms), &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingSupported_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingSupported_Statics::NewProp_Supported,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingSupported_Statics::NewProp_SupportedModes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingSupported_Statics::NewProp_SupportedModes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingSupported_Statics::NewProp_SupportedModes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary, nullptr, "GetEyeTrackingSupported", nullptr, nullptr, sizeof(PICOXRMotionTrackingFunctionLibrary_eventGetEyeTrackingSupported_Parms), Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingData_Statics
	{
		struct PICOXRMotionTrackingFunctionLibrary_eventGetFaceTrackingData_Parms
		{
			FPXRFaceTrackingDataGetInfo GetInfo;
			FPXRFaceTrackingData OutFaceTrackingData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GetInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutFaceTrackingData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingData_Statics::NewProp_GetInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingData_Statics::NewProp_GetInfo = { "GetInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMotionTrackingFunctionLibrary_eventGetFaceTrackingData_Parms, GetInfo), Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingData_Statics::NewProp_GetInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingData_Statics::NewProp_GetInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingData_Statics::NewProp_OutFaceTrackingData = { "OutFaceTrackingData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMotionTrackingFunctionLibrary_eventGetFaceTrackingData_Parms, OutFaceTrackingData), Z_Construct_UScriptStruct_FPXRFaceTrackingData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRMotionTrackingFunctionLibrary_eventGetFaceTrackingData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRMotionTrackingFunctionLibrary_eventGetFaceTrackingData_Parms), &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingData_Statics::NewProp_GetInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingData_Statics::NewProp_OutFaceTrackingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingData_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|FaceTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary, nullptr, "GetFaceTrackingData", nullptr, nullptr, sizeof(PICOXRMotionTrackingFunctionLibrary_eventGetFaceTrackingData_Parms), Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingState_Statics
	{
		struct PICOXRMotionTrackingFunctionLibrary_eventGetFaceTrackingState_Parms
		{
			bool IsTracking;
			FPXRFaceTrackingState TrackingState;
			bool ReturnValue;
		};
		static void NewProp_IsTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTracking;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackingState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingState_Statics::NewProp_IsTracking_SetBit(void* Obj)
	{
		((PICOXRMotionTrackingFunctionLibrary_eventGetFaceTrackingState_Parms*)Obj)->IsTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingState_Statics::NewProp_IsTracking = { "IsTracking", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRMotionTrackingFunctionLibrary_eventGetFaceTrackingState_Parms), &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingState_Statics::NewProp_IsTracking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingState_Statics::NewProp_TrackingState = { "TrackingState", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMotionTrackingFunctionLibrary_eventGetFaceTrackingState_Parms, TrackingState), Z_Construct_UScriptStruct_FPXRFaceTrackingState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRMotionTrackingFunctionLibrary_eventGetFaceTrackingState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRMotionTrackingFunctionLibrary_eventGetFaceTrackingState_Parms), &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingState_Statics::NewProp_IsTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingState_Statics::NewProp_TrackingState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingState_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|FaceTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary, nullptr, "GetFaceTrackingState", nullptr, nullptr, sizeof(PICOXRMotionTrackingFunctionLibrary_eventGetFaceTrackingState_Parms), Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingSupported_Statics
	{
		struct PICOXRMotionTrackingFunctionLibrary_eventGetFaceTrackingSupported_Parms
		{
			bool Supported;
			TArray<EPXRFaceTrackingMode> SupportedModes;
			bool ReturnValue;
		};
		static void NewProp_Supported_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Supported;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SupportedModes_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SupportedModes_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SupportedModes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingSupported_Statics::NewProp_Supported_SetBit(void* Obj)
	{
		((PICOXRMotionTrackingFunctionLibrary_eventGetFaceTrackingSupported_Parms*)Obj)->Supported = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingSupported_Statics::NewProp_Supported = { "Supported", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRMotionTrackingFunctionLibrary_eventGetFaceTrackingSupported_Parms), &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingSupported_Statics::NewProp_Supported_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingSupported_Statics::NewProp_SupportedModes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingSupported_Statics::NewProp_SupportedModes_Inner = { "SupportedModes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_PICOXRMotionTracking_EPXRFaceTrackingMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingSupported_Statics::NewProp_SupportedModes = { "SupportedModes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMotionTrackingFunctionLibrary_eventGetFaceTrackingSupported_Parms, SupportedModes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRMotionTrackingFunctionLibrary_eventGetFaceTrackingSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRMotionTrackingFunctionLibrary_eventGetFaceTrackingSupported_Parms), &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingSupported_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingSupported_Statics::NewProp_Supported,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingSupported_Statics::NewProp_SupportedModes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingSupported_Statics::NewProp_SupportedModes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingSupported_Statics::NewProp_SupportedModes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|FaceTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary, nullptr, "GetFaceTrackingSupported", nullptr, nullptr, sizeof(PICOXRMotionTrackingFunctionLibrary_eventGetFaceTrackingSupported_Parms), Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartEyeTracking_Statics
	{
		struct PICOXRMotionTrackingFunctionLibrary_eventStartEyeTracking_Parms
		{
			FPXREyeTrackingStartInfo StartInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartEyeTracking_Statics::NewProp_StartInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartEyeTracking_Statics::NewProp_StartInfo = { "StartInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMotionTrackingFunctionLibrary_eventStartEyeTracking_Parms, StartInfo), Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartEyeTracking_Statics::NewProp_StartInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartEyeTracking_Statics::NewProp_StartInfo_MetaData)) };
	void Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartEyeTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRMotionTrackingFunctionLibrary_eventStartEyeTracking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartEyeTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRMotionTrackingFunctionLibrary_eventStartEyeTracking_Parms), &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartEyeTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartEyeTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartEyeTracking_Statics::NewProp_StartInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartEyeTracking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartEyeTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartEyeTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary, nullptr, "StartEyeTracking", nullptr, nullptr, sizeof(PICOXRMotionTrackingFunctionLibrary_eventStartEyeTracking_Parms), Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartEyeTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartEyeTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartEyeTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartEyeTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartEyeTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartEyeTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartFaceTracking_Statics
	{
		struct PICOXRMotionTrackingFunctionLibrary_eventStartFaceTracking_Parms
		{
			FPXRFaceTrackingStartInfo StartInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartFaceTracking_Statics::NewProp_StartInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartFaceTracking_Statics::NewProp_StartInfo = { "StartInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMotionTrackingFunctionLibrary_eventStartFaceTracking_Parms, StartInfo), Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartFaceTracking_Statics::NewProp_StartInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartFaceTracking_Statics::NewProp_StartInfo_MetaData)) };
	void Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartFaceTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRMotionTrackingFunctionLibrary_eventStartFaceTracking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartFaceTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRMotionTrackingFunctionLibrary_eventStartFaceTracking_Parms), &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartFaceTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartFaceTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartFaceTracking_Statics::NewProp_StartInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartFaceTracking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartFaceTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|FaceTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartFaceTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary, nullptr, "StartFaceTracking", nullptr, nullptr, sizeof(PICOXRMotionTrackingFunctionLibrary_eventStartFaceTracking_Parms), Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartFaceTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartFaceTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartFaceTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartFaceTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartFaceTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartFaceTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopEyeTracking_Statics
	{
		struct PICOXRMotionTrackingFunctionLibrary_eventStopEyeTracking_Parms
		{
			FPXREyeTrackingStopInfo StopInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StopInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopEyeTracking_Statics::NewProp_StopInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopEyeTracking_Statics::NewProp_StopInfo = { "StopInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMotionTrackingFunctionLibrary_eventStopEyeTracking_Parms, StopInfo), Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopEyeTracking_Statics::NewProp_StopInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopEyeTracking_Statics::NewProp_StopInfo_MetaData)) };
	void Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopEyeTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRMotionTrackingFunctionLibrary_eventStopEyeTracking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopEyeTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRMotionTrackingFunctionLibrary_eventStopEyeTracking_Parms), &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopEyeTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopEyeTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopEyeTracking_Statics::NewProp_StopInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopEyeTracking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopEyeTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|EyeTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopEyeTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary, nullptr, "StopEyeTracking", nullptr, nullptr, sizeof(PICOXRMotionTrackingFunctionLibrary_eventStopEyeTracking_Parms), Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopEyeTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopEyeTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopEyeTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopEyeTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopEyeTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopEyeTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopFaceTracking_Statics
	{
		struct PICOXRMotionTrackingFunctionLibrary_eventStopFaceTracking_Parms
		{
			FPXRFaceTrackingStopInfo StopInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StopInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopFaceTracking_Statics::NewProp_StopInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopFaceTracking_Statics::NewProp_StopInfo = { "StopInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PICOXRMotionTrackingFunctionLibrary_eventStopFaceTracking_Parms, StopInfo), Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopFaceTracking_Statics::NewProp_StopInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopFaceTracking_Statics::NewProp_StopInfo_MetaData)) };
	void Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopFaceTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PICOXRMotionTrackingFunctionLibrary_eventStopFaceTracking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopFaceTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PICOXRMotionTrackingFunctionLibrary_eventStopFaceTracking_Parms), &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopFaceTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopFaceTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopFaceTracking_Statics::NewProp_StopInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopFaceTracking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopFaceTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|FaceTracking" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopFaceTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary, nullptr, "StopFaceTracking", nullptr, nullptr, sizeof(PICOXRMotionTrackingFunctionLibrary_eventStopFaceTracking_Parms), Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopFaceTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopFaceTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopFaceTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopFaceTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopFaceTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopFaceTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary_NoRegister()
	{
		return UPICOXRMotionTrackingFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMotionTracking,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeOpenness, "GetEyeOpenness" }, // 3706582764
		{ &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyePupilInfo, "GetEyePupilInfo" }, // 2721001806
		{ &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingData, "GetEyeTrackingData" }, // 1412623136
		{ &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingState, "GetEyeTrackingState" }, // 3764152595
		{ &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetEyeTrackingSupported, "GetEyeTrackingSupported" }, // 2879585424
		{ &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingData, "GetFaceTrackingData" }, // 2330588357
		{ &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingState, "GetFaceTrackingState" }, // 1026845915
		{ &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_GetFaceTrackingSupported, "GetFaceTrackingSupported" }, // 1870538636
		{ &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartEyeTracking, "StartEyeTracking" }, // 1698026498
		{ &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StartFaceTracking, "StartFaceTracking" }, // 2849510888
		{ &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopEyeTracking, "StopEyeTracking" }, // 2896343388
		{ &Z_Construct_UFunction_UPICOXRMotionTrackingFunctionLibrary_StopFaceTracking, "StopFaceTracking" }, // 2501610420
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PXR_MotionTrackingFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/PXR_MotionTrackingFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPICOXRMotionTrackingFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary_Statics::ClassParams = {
		&UPICOXRMotionTrackingFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPICOXRMotionTrackingFunctionLibrary, 646226036);
	template<> PICOXRMOTIONTRACKING_API UClass* StaticClass<UPICOXRMotionTrackingFunctionLibrary>()
	{
		return UPICOXRMotionTrackingFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPICOXRMotionTrackingFunctionLibrary(Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary, &UPICOXRMotionTrackingFunctionLibrary::StaticClass, TEXT("/Script/PICOXRMotionTracking"), TEXT("UPICOXRMotionTrackingFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPICOXRMotionTrackingFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
