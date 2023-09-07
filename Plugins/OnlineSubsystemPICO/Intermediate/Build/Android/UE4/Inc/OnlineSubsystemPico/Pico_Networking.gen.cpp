// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemPico/Public/Pico_Networking.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePico_Networking() {}
// Cross Module References
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UOnlinePicoNetworkingFunction_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UOnlinePicoNetworkingFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemPico();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOnlinePicoNetworkingFunction::execReadPacket)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_OutBinaries);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SendUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoNetworkingFunction::ReadPacket(Z_Param_WorldContextObject,Z_Param_Out_OutBinaries,Z_Param_Out_SendUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoNetworkingFunction::execSendPacketToCurrentRoom)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY(uint8,Z_Param_BinaryArray);
		P_GET_UBOOL(Z_Param_bReliable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoNetworkingFunction::SendPacketToCurrentRoom(Z_Param_WorldContextObject,Z_Param_BinaryArray,Z_Param_bReliable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoNetworkingFunction::execSendPacket)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_TARRAY(uint8,Z_Param_BinaryArray);
		P_GET_UBOOL(Z_Param_bReliable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePicoNetworkingFunction::SendPacket(Z_Param_WorldContextObject,Z_Param_UserId,Z_Param_BinaryArray,Z_Param_bReliable);
		P_NATIVE_END;
	}
	void UOnlinePicoNetworkingFunction::StaticRegisterNativesUOnlinePicoNetworkingFunction()
	{
		UClass* Class = UOnlinePicoNetworkingFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadPacket", &UOnlinePicoNetworkingFunction::execReadPacket },
			{ "SendPacket", &UOnlinePicoNetworkingFunction::execSendPacket },
			{ "SendPacketToCurrentRoom", &UOnlinePicoNetworkingFunction::execSendPacketToCurrentRoom },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlinePicoNetworkingFunction_ReadPacket_Statics
	{
		struct OnlinePicoNetworkingFunction_eventReadPacket_Parms
		{
			UObject* WorldContextObject;
			TArray<uint8> OutBinaries;
			FString SendUserID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutBinaries_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutBinaries;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SendUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoNetworkingFunction_ReadPacket_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoNetworkingFunction_eventReadPacket_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlinePicoNetworkingFunction_ReadPacket_Statics::NewProp_OutBinaries_Inner = { "OutBinaries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlinePicoNetworkingFunction_ReadPacket_Statics::NewProp_OutBinaries = { "OutBinaries", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoNetworkingFunction_eventReadPacket_Parms, OutBinaries), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoNetworkingFunction_ReadPacket_Statics::NewProp_SendUserID = { "SendUserID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoNetworkingFunction_eventReadPacket_Parms, SendUserID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoNetworkingFunction_ReadPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoNetworkingFunction_eventReadPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoNetworkingFunction_ReadPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoNetworkingFunction_eventReadPacket_Parms), &Z_Construct_UFunction_UOnlinePicoNetworkingFunction_ReadPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoNetworkingFunction_ReadPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoNetworkingFunction_ReadPacket_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoNetworkingFunction_ReadPacket_Statics::NewProp_OutBinaries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoNetworkingFunction_ReadPacket_Statics::NewProp_OutBinaries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoNetworkingFunction_ReadPacket_Statics::NewProp_SendUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoNetworkingFunction_ReadPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoNetworkingFunction_ReadPacket_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Networking" },
		{ "Comment", "/// <summary>\n/// Reads the messages from other users in the room.\n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name =\"OutBinaries\">Returns an array of byte.</param>   \n/// <param name =\"OutSendId\">Returns user id which player send.</param>   \n/// <returns>\n/// * `true`: success\n/// * `false`: failure\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/Pico_Networking.h" },
		{ "ToolTip", "<summary>\nReads the messages from other users in the room.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name =\"OutBinaries\">Returns an array of byte.</param>\n<param name =\"OutSendId\">Returns user id which player send.</param>\n<returns>\n* `true`: success\n* `false`: failure\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoNetworkingFunction_ReadPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoNetworkingFunction, nullptr, "ReadPacket", nullptr, nullptr, sizeof(OnlinePicoNetworkingFunction_eventReadPacket_Parms), Z_Construct_UFunction_UOnlinePicoNetworkingFunction_ReadPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoNetworkingFunction_ReadPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoNetworkingFunction_ReadPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoNetworkingFunction_ReadPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoNetworkingFunction_ReadPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoNetworkingFunction_ReadPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics
	{
		struct OnlinePicoNetworkingFunction_eventSendPacket_Parms
		{
			UObject* WorldContextObject;
			FString UserId;
			TArray<uint8> BinaryArray;
			bool bReliable;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BinaryArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BinaryArray;
		static void NewProp_bReliable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReliable;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoNetworkingFunction_eventSendPacket_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoNetworkingFunction_eventSendPacket_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::NewProp_BinaryArray_Inner = { "BinaryArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::NewProp_BinaryArray = { "BinaryArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoNetworkingFunction_eventSendPacket_Parms, BinaryArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::NewProp_bReliable_SetBit(void* Obj)
	{
		((OnlinePicoNetworkingFunction_eventSendPacket_Parms*)Obj)->bReliable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::NewProp_bReliable = { "bReliable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoNetworkingFunction_eventSendPacket_Parms), &Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::NewProp_bReliable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoNetworkingFunction_eventSendPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoNetworkingFunction_eventSendPacket_Parms), &Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::NewProp_BinaryArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::NewProp_BinaryArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::NewProp_bReliable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Networking" },
		{ "Comment", "/// <summary>\n/// Sends messages to a specified user. The maximum messaging frequency is 1000/s.\n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"UserId\">The ID of the user to send messages to.</param>\n/// <param name=\"BinaryArray\">The message length (in bytes). The maximum bytes allowed is 512.</param>\n/// <param name=\"bReliable\">When `reliable` is set to `true`, messages between lost and resume will not be lost.\n/// The retention time is determined by the `reserve_period` parameter configured for the matchmaking pool, with a maximum of 1 minute.\n/// When `reliable` is set to `false`, this function works the same as the other `SendPacket` function.</param>\n/// <returns>\n/// * `true`: success\n/// * `false`: failure\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/Pico_Networking.h" },
		{ "ToolTip", "<summary>\nSends messages to a specified user. The maximum messaging frequency is 1000/s.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"UserId\">The ID of the user to send messages to.</param>\n<param name=\"BinaryArray\">The message length (in bytes). The maximum bytes allowed is 512.</param>\n<param name=\"bReliable\">When `reliable` is set to `true`, messages between lost and resume will not be lost.\nThe retention time is determined by the `reserve_period` parameter configured for the matchmaking pool, with a maximum of 1 minute.\nWhen `reliable` is set to `false`, this function works the same as the other `SendPacket` function.</param>\n<returns>\n* `true`: success\n* `false`: failure\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoNetworkingFunction, nullptr, "SendPacket", nullptr, nullptr, sizeof(OnlinePicoNetworkingFunction_eventSendPacket_Parms), Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacketToCurrentRoom_Statics
	{
		struct OnlinePicoNetworkingFunction_eventSendPacketToCurrentRoom_Parms
		{
			UObject* WorldContextObject;
			TArray<uint8> BinaryArray;
			bool bReliable;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BinaryArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BinaryArray;
		static void NewProp_bReliable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReliable;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacketToCurrentRoom_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoNetworkingFunction_eventSendPacketToCurrentRoom_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacketToCurrentRoom_Statics::NewProp_BinaryArray_Inner = { "BinaryArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacketToCurrentRoom_Statics::NewProp_BinaryArray = { "BinaryArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoNetworkingFunction_eventSendPacketToCurrentRoom_Parms, BinaryArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacketToCurrentRoom_Statics::NewProp_bReliable_SetBit(void* Obj)
	{
		((OnlinePicoNetworkingFunction_eventSendPacketToCurrentRoom_Parms*)Obj)->bReliable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacketToCurrentRoom_Statics::NewProp_bReliable = { "bReliable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoNetworkingFunction_eventSendPacketToCurrentRoom_Parms), &Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacketToCurrentRoom_Statics::NewProp_bReliable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacketToCurrentRoom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePicoNetworkingFunction_eventSendPacketToCurrentRoom_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacketToCurrentRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoNetworkingFunction_eventSendPacketToCurrentRoom_Parms), &Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacketToCurrentRoom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacketToCurrentRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacketToCurrentRoom_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacketToCurrentRoom_Statics::NewProp_BinaryArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacketToCurrentRoom_Statics::NewProp_BinaryArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacketToCurrentRoom_Statics::NewProp_bReliable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacketToCurrentRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacketToCurrentRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Networking" },
		{ "Comment", "/// <summary>\n/// Sends messages to other users in the room. The maximum messaging frequency is 1000/s.\n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"BinaryArray\">The message length (in bytes). The maximum bytes allowed is 512.</param>\n/// <param name=\"bReliable\">When `reliable` is set to `true`, messages between lost and resume will not be lost.\n/// The retention time is determined by the `reserve_period` parameter configured for the matchmaking pool, with a maximum of 1 minute.\n/// When `reliable` is set to `false`, this function works the same as the other `SendPacketToCurrentRoom` function.</param>\n/// <returns>\n/// * `true`: success\n/// * `false`: failure\n/// </returns>\n" },
		{ "ModuleRelativePath", "Public/Pico_Networking.h" },
		{ "ToolTip", "<summary>\nSends messages to other users in the room. The maximum messaging frequency is 1000/s.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"BinaryArray\">The message length (in bytes). The maximum bytes allowed is 512.</param>\n<param name=\"bReliable\">When `reliable` is set to `true`, messages between lost and resume will not be lost.\nThe retention time is determined by the `reserve_period` parameter configured for the matchmaking pool, with a maximum of 1 minute.\nWhen `reliable` is set to `false`, this function works the same as the other `SendPacketToCurrentRoom` function.</param>\n<returns>\n* `true`: success\n* `false`: failure\n</returns>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacketToCurrentRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoNetworkingFunction, nullptr, "SendPacketToCurrentRoom", nullptr, nullptr, sizeof(OnlinePicoNetworkingFunction_eventSendPacketToCurrentRoom_Parms), Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacketToCurrentRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacketToCurrentRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacketToCurrentRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacketToCurrentRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacketToCurrentRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacketToCurrentRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlinePicoNetworkingFunction_NoRegister()
	{
		return UOnlinePicoNetworkingFunction::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePicoNetworkingFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlinePicoNetworkingFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlinePicoNetworkingFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlinePicoNetworkingFunction_ReadPacket, "ReadPacket" }, // 681562577
		{ &Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacket, "SendPacket" }, // 3161793363
		{ &Z_Construct_UFunction_UOnlinePicoNetworkingFunction_SendPacketToCurrentRoom, "SendPacketToCurrentRoom" }, // 1438958942
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePicoNetworkingFunction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** @defgroup BP_Networking BP_Networking \n  *  This is the BP_Networking group\n  *  @{\n  *//// @brief OnlinePicoNetworking Blueprint Function class.\n" },
		{ "IncludePath", "Pico_Networking.h" },
		{ "ModuleRelativePath", "Public/Pico_Networking.h" },
		{ "ToolTip", "@defgroup BP_Networking BP_Networking\nThis is the BP_Networking group\n@{\n /// @brief OnlinePicoNetworking Blueprint Function class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePicoNetworkingFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePicoNetworkingFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePicoNetworkingFunction_Statics::ClassParams = {
		&UOnlinePicoNetworkingFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePicoNetworkingFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePicoNetworkingFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePicoNetworkingFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlinePicoNetworkingFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlinePicoNetworkingFunction, 1445353131);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UOnlinePicoNetworkingFunction>()
	{
		return UOnlinePicoNetworkingFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlinePicoNetworkingFunction(Z_Construct_UClass_UOnlinePicoNetworkingFunction, &UOnlinePicoNetworkingFunction::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UOnlinePicoNetworkingFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePicoNetworkingFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
