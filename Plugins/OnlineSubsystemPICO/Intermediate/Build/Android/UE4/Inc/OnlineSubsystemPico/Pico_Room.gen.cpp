// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemPico/Public/Pico_Room.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePico_Room() {}
// Cross Module References
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetNamedRooms__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemPico();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_RoomArray_NoRegister();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoinOrCreateNamedRoom__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_Room_NoRegister();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdatePrivateRoomJoinPolicy__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateOwner__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateMembershipLockStatus__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomSetDescription__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLeave__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomKickUser__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoin2__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomInviteUser__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetModeratedRooms__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetInvitableUsers2__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_UserArray_NoRegister();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrentForUser__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrent__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGet__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomCreateAndJoinPrivate2__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateDataStore__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLaunchInvitableUserFlow__DelegateSignature();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UOnlinePicoRoomFunction_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UOnlinePicoRoomFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ERoomJoinPolicy();
	ONLINESUBSYSTEMPICO_API UScriptStruct* Z_Construct_UScriptStruct_FPicoRoomOptions();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ERoomMembershipLockStatus();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_Room();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_DataStore_NoRegister();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ERoomJoinabilit();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_User_NoRegister();
	ONLINESUBSYSTEMPICO_API UEnum* Z_Construct_UEnum_OnlineSubsystemPico_ERoomType();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPico_RoomArray();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetNamedRooms__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventRoomGetNamedRooms_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			UPico_RoomArray* RoomArray;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetNamedRooms__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventRoomGetNamedRooms_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetNamedRooms__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventRoomGetNamedRooms_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetNamedRooms__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetNamedRooms__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomGetNamedRooms_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetNamedRooms__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetNamedRooms__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomGetNamedRooms_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetNamedRooms__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetNamedRooms__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetNamedRooms__DelegateSignature_Statics::NewProp_RoomArray = { "RoomArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomGetNamedRooms_Parms, RoomArray), Z_Construct_UClass_UPico_RoomArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetNamedRooms__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetNamedRooms__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetNamedRooms__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetNamedRooms__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetNamedRooms__DelegateSignature_Statics::NewProp_RoomArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetNamedRooms__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetNamedRooms__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "RoomGetNamedRooms__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventRoomGetNamedRooms_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetNamedRooms__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetNamedRooms__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetNamedRooms__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetNamedRooms__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetNamedRooms__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetNamedRooms__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoinOrCreateNamedRoom__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventRoomJoinOrCreateNamedRoom_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			UPico_Room* Room;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Room;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoinOrCreateNamedRoom__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventRoomJoinOrCreateNamedRoom_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoinOrCreateNamedRoom__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventRoomJoinOrCreateNamedRoom_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoinOrCreateNamedRoom__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoinOrCreateNamedRoom__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomJoinOrCreateNamedRoom_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoinOrCreateNamedRoom__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoinOrCreateNamedRoom__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomJoinOrCreateNamedRoom_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoinOrCreateNamedRoom__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoinOrCreateNamedRoom__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoinOrCreateNamedRoom__DelegateSignature_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomJoinOrCreateNamedRoom_Parms, Room), Z_Construct_UClass_UPico_Room_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoinOrCreateNamedRoom__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoinOrCreateNamedRoom__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoinOrCreateNamedRoom__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoinOrCreateNamedRoom__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoinOrCreateNamedRoom__DelegateSignature_Statics::NewProp_Room,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoinOrCreateNamedRoom__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoinOrCreateNamedRoom__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "RoomJoinOrCreateNamedRoom__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventRoomJoinOrCreateNamedRoom_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoinOrCreateNamedRoom__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoinOrCreateNamedRoom__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoinOrCreateNamedRoom__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoinOrCreateNamedRoom__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoinOrCreateNamedRoom__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoinOrCreateNamedRoom__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdatePrivateRoomJoinPolicy__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventRoomUpdatePrivateRoomJoinPolicy_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			UPico_Room* Room;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Room;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdatePrivateRoomJoinPolicy__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventRoomUpdatePrivateRoomJoinPolicy_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdatePrivateRoomJoinPolicy__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventRoomUpdatePrivateRoomJoinPolicy_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdatePrivateRoomJoinPolicy__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdatePrivateRoomJoinPolicy__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomUpdatePrivateRoomJoinPolicy_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdatePrivateRoomJoinPolicy__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdatePrivateRoomJoinPolicy__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomUpdatePrivateRoomJoinPolicy_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdatePrivateRoomJoinPolicy__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdatePrivateRoomJoinPolicy__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdatePrivateRoomJoinPolicy__DelegateSignature_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomUpdatePrivateRoomJoinPolicy_Parms, Room), Z_Construct_UClass_UPico_Room_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdatePrivateRoomJoinPolicy__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdatePrivateRoomJoinPolicy__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdatePrivateRoomJoinPolicy__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdatePrivateRoomJoinPolicy__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdatePrivateRoomJoinPolicy__DelegateSignature_Statics::NewProp_Room,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdatePrivateRoomJoinPolicy__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdatePrivateRoomJoinPolicy__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "RoomUpdatePrivateRoomJoinPolicy__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventRoomUpdatePrivateRoomJoinPolicy_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdatePrivateRoomJoinPolicy__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdatePrivateRoomJoinPolicy__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdatePrivateRoomJoinPolicy__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdatePrivateRoomJoinPolicy__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdatePrivateRoomJoinPolicy__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdatePrivateRoomJoinPolicy__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateOwner__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventRoomUpdateOwner_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateOwner__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventRoomUpdateOwner_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateOwner__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventRoomUpdateOwner_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateOwner__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateOwner__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomUpdateOwner_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateOwner__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateOwner__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomUpdateOwner_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateOwner__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateOwner__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateOwner__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateOwner__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateOwner__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateOwner__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateOwner__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateOwner__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "RoomUpdateOwner__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventRoomUpdateOwner_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateOwner__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateOwner__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateOwner__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateOwner__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateOwner__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateOwner__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateMembershipLockStatus__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventRoomUpdateMembershipLockStatus_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			UPico_Room* Room;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Room;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateMembershipLockStatus__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventRoomUpdateMembershipLockStatus_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateMembershipLockStatus__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventRoomUpdateMembershipLockStatus_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateMembershipLockStatus__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateMembershipLockStatus__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomUpdateMembershipLockStatus_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateMembershipLockStatus__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateMembershipLockStatus__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomUpdateMembershipLockStatus_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateMembershipLockStatus__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateMembershipLockStatus__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateMembershipLockStatus__DelegateSignature_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomUpdateMembershipLockStatus_Parms, Room), Z_Construct_UClass_UPico_Room_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateMembershipLockStatus__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateMembershipLockStatus__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateMembershipLockStatus__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateMembershipLockStatus__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateMembershipLockStatus__DelegateSignature_Statics::NewProp_Room,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateMembershipLockStatus__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateMembershipLockStatus__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "RoomUpdateMembershipLockStatus__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventRoomUpdateMembershipLockStatus_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateMembershipLockStatus__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateMembershipLockStatus__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateMembershipLockStatus__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateMembershipLockStatus__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateMembershipLockStatus__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateMembershipLockStatus__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomSetDescription__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventRoomSetDescription_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			UPico_Room* Room;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Room;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomSetDescription__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventRoomSetDescription_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomSetDescription__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventRoomSetDescription_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomSetDescription__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomSetDescription__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomSetDescription_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomSetDescription__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomSetDescription__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomSetDescription_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomSetDescription__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomSetDescription__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomSetDescription__DelegateSignature_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomSetDescription_Parms, Room), Z_Construct_UClass_UPico_Room_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomSetDescription__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomSetDescription__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomSetDescription__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomSetDescription__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomSetDescription__DelegateSignature_Statics::NewProp_Room,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomSetDescription__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomSetDescription__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "RoomSetDescription__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventRoomSetDescription_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomSetDescription__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomSetDescription__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomSetDescription__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomSetDescription__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomSetDescription__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomSetDescription__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLeave__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventRoomLeave_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			UPico_Room* Room;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Room;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLeave__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventRoomLeave_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLeave__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventRoomLeave_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLeave__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLeave__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomLeave_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLeave__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLeave__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomLeave_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLeave__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLeave__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLeave__DelegateSignature_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomLeave_Parms, Room), Z_Construct_UClass_UPico_Room_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLeave__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLeave__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLeave__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLeave__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLeave__DelegateSignature_Statics::NewProp_Room,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLeave__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLeave__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "RoomLeave__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventRoomLeave_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLeave__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLeave__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLeave__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLeave__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLeave__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLeave__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomKickUser__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventRoomKickUser_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			UPico_Room* Room;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Room;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomKickUser__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventRoomKickUser_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomKickUser__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventRoomKickUser_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomKickUser__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomKickUser__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomKickUser_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomKickUser__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomKickUser__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomKickUser_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomKickUser__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomKickUser__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomKickUser__DelegateSignature_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomKickUser_Parms, Room), Z_Construct_UClass_UPico_Room_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomKickUser__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomKickUser__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomKickUser__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomKickUser__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomKickUser__DelegateSignature_Statics::NewProp_Room,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomKickUser__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomKickUser__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "RoomKickUser__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventRoomKickUser_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomKickUser__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomKickUser__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomKickUser__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomKickUser__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomKickUser__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomKickUser__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoin2__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventRoomJoin2_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			UPico_Room* Room;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Room;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoin2__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventRoomJoin2_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoin2__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventRoomJoin2_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoin2__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoin2__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomJoin2_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoin2__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoin2__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomJoin2_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoin2__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoin2__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoin2__DelegateSignature_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomJoin2_Parms, Room), Z_Construct_UClass_UPico_Room_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoin2__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoin2__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoin2__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoin2__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoin2__DelegateSignature_Statics::NewProp_Room,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoin2__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoin2__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "RoomJoin2__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventRoomJoin2_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoin2__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoin2__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoin2__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoin2__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoin2__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoin2__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomInviteUser__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventRoomInviteUser_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			UPico_Room* Room;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Room;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomInviteUser__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventRoomInviteUser_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomInviteUser__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventRoomInviteUser_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomInviteUser__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomInviteUser__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomInviteUser_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomInviteUser__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomInviteUser__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomInviteUser_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomInviteUser__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomInviteUser__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomInviteUser__DelegateSignature_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomInviteUser_Parms, Room), Z_Construct_UClass_UPico_Room_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomInviteUser__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomInviteUser__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomInviteUser__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomInviteUser__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomInviteUser__DelegateSignature_Statics::NewProp_Room,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomInviteUser__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomInviteUser__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "RoomInviteUser__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventRoomInviteUser_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomInviteUser__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomInviteUser__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomInviteUser__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomInviteUser__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomInviteUser__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomInviteUser__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetModeratedRooms__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventRoomGetModeratedRooms_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			UPico_RoomArray* RoomArray;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetModeratedRooms__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventRoomGetModeratedRooms_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetModeratedRooms__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventRoomGetModeratedRooms_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetModeratedRooms__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetModeratedRooms__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomGetModeratedRooms_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetModeratedRooms__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetModeratedRooms__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomGetModeratedRooms_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetModeratedRooms__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetModeratedRooms__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetModeratedRooms__DelegateSignature_Statics::NewProp_RoomArray = { "RoomArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomGetModeratedRooms_Parms, RoomArray), Z_Construct_UClass_UPico_RoomArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetModeratedRooms__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetModeratedRooms__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetModeratedRooms__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetModeratedRooms__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetModeratedRooms__DelegateSignature_Statics::NewProp_RoomArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetModeratedRooms__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetModeratedRooms__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "RoomGetModeratedRooms__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventRoomGetModeratedRooms_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetModeratedRooms__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetModeratedRooms__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetModeratedRooms__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetModeratedRooms__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetModeratedRooms__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetModeratedRooms__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetInvitableUsers2__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventRoomGetInvitableUsers2_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			UPico_UserArray* UserArray;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetInvitableUsers2__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventRoomGetInvitableUsers2_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetInvitableUsers2__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventRoomGetInvitableUsers2_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetInvitableUsers2__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetInvitableUsers2__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomGetInvitableUsers2_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetInvitableUsers2__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetInvitableUsers2__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomGetInvitableUsers2_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetInvitableUsers2__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetInvitableUsers2__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetInvitableUsers2__DelegateSignature_Statics::NewProp_UserArray = { "UserArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomGetInvitableUsers2_Parms, UserArray), Z_Construct_UClass_UPico_UserArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetInvitableUsers2__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetInvitableUsers2__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetInvitableUsers2__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetInvitableUsers2__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetInvitableUsers2__DelegateSignature_Statics::NewProp_UserArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetInvitableUsers2__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetInvitableUsers2__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "RoomGetInvitableUsers2__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventRoomGetInvitableUsers2_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetInvitableUsers2__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetInvitableUsers2__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetInvitableUsers2__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetInvitableUsers2__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetInvitableUsers2__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetInvitableUsers2__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrentForUser__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventRoomGetCurrentForUser_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			UPico_Room* Room;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Room;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrentForUser__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventRoomGetCurrentForUser_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrentForUser__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventRoomGetCurrentForUser_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrentForUser__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrentForUser__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomGetCurrentForUser_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrentForUser__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrentForUser__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomGetCurrentForUser_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrentForUser__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrentForUser__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrentForUser__DelegateSignature_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomGetCurrentForUser_Parms, Room), Z_Construct_UClass_UPico_Room_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrentForUser__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrentForUser__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrentForUser__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrentForUser__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrentForUser__DelegateSignature_Statics::NewProp_Room,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrentForUser__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrentForUser__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "RoomGetCurrentForUser__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventRoomGetCurrentForUser_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrentForUser__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrentForUser__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrentForUser__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrentForUser__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrentForUser__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrentForUser__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrent__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventRoomGetCurrent_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			UPico_Room* Room;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Room;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrent__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventRoomGetCurrent_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrent__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventRoomGetCurrent_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrent__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrent__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomGetCurrent_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrent__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrent__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomGetCurrent_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrent__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrent__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrent__DelegateSignature_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomGetCurrent_Parms, Room), Z_Construct_UClass_UPico_Room_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrent__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrent__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrent__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrent__DelegateSignature_Statics::NewProp_Room,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "RoomGetCurrent__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventRoomGetCurrent_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGet__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventRoomGet_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			UPico_Room* Room;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Room;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGet__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventRoomGet_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGet__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventRoomGet_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGet__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGet__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomGet_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGet__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGet__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomGet_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGet__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGet__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGet__DelegateSignature_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomGet_Parms, Room), Z_Construct_UClass_UPico_Room_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGet__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGet__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGet__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGet__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGet__DelegateSignature_Statics::NewProp_Room,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGet__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGet__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "RoomGet__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventRoomGet_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGet__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGet__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGet__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGet__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGet__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGet__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomCreateAndJoinPrivate2__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventRoomCreateAndJoinPrivate2_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			UPico_Room* Room;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Room;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomCreateAndJoinPrivate2__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventRoomCreateAndJoinPrivate2_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomCreateAndJoinPrivate2__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventRoomCreateAndJoinPrivate2_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomCreateAndJoinPrivate2__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomCreateAndJoinPrivate2__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomCreateAndJoinPrivate2_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomCreateAndJoinPrivate2__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomCreateAndJoinPrivate2__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomCreateAndJoinPrivate2_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomCreateAndJoinPrivate2__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomCreateAndJoinPrivate2__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomCreateAndJoinPrivate2__DelegateSignature_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomCreateAndJoinPrivate2_Parms, Room), Z_Construct_UClass_UPico_Room_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomCreateAndJoinPrivate2__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomCreateAndJoinPrivate2__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomCreateAndJoinPrivate2__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomCreateAndJoinPrivate2__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomCreateAndJoinPrivate2__DelegateSignature_Statics::NewProp_Room,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomCreateAndJoinPrivate2__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomCreateAndJoinPrivate2__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "RoomCreateAndJoinPrivate2__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventRoomCreateAndJoinPrivate2_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomCreateAndJoinPrivate2__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomCreateAndJoinPrivate2__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomCreateAndJoinPrivate2__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomCreateAndJoinPrivate2__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomCreateAndJoinPrivate2__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomCreateAndJoinPrivate2__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateDataStore__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventRoomUpdateDataStore_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
			UPico_Room* Room;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Room;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateDataStore__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventRoomUpdateDataStore_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateDataStore__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventRoomUpdateDataStore_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateDataStore__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateDataStore__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomUpdateDataStore_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateDataStore__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateDataStore__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomUpdateDataStore_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateDataStore__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateDataStore__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateDataStore__DelegateSignature_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomUpdateDataStore_Parms, Room), Z_Construct_UClass_UPico_Room_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateDataStore__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateDataStore__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateDataStore__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateDataStore__DelegateSignature_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateDataStore__DelegateSignature_Statics::NewProp_Room,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateDataStore__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateDataStore__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "RoomUpdateDataStore__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventRoomUpdateDataStore_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateDataStore__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateDataStore__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateDataStore__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateDataStore__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateDataStore__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateDataStore__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLaunchInvitableUserFlow__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemPico_eventRoomLaunchInvitableUserFlow_Parms
		{
			bool bIsError;
			int32 ErrorCode;
			FString ErrorMessage;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLaunchInvitableUserFlow__DelegateSignature_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((_Script_OnlineSubsystemPico_eventRoomLaunchInvitableUserFlow_Parms*)Obj)->bIsError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLaunchInvitableUserFlow__DelegateSignature_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OnlineSubsystemPico_eventRoomLaunchInvitableUserFlow_Parms), &Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLaunchInvitableUserFlow__DelegateSignature_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLaunchInvitableUserFlow__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomLaunchInvitableUserFlow_Parms, ErrorCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLaunchInvitableUserFlow__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLaunchInvitableUserFlow__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemPico_eventRoomLaunchInvitableUserFlow_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLaunchInvitableUserFlow__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLaunchInvitableUserFlow__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLaunchInvitableUserFlow__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLaunchInvitableUserFlow__DelegateSignature_Statics::NewProp_bIsError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLaunchInvitableUserFlow__DelegateSignature_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLaunchInvitableUserFlow__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLaunchInvitableUserFlow__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLaunchInvitableUserFlow__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemPico, nullptr, "RoomLaunchInvitableUserFlow__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemPico_eventRoomLaunchInvitableUserFlow_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLaunchInvitableUserFlow__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLaunchInvitableUserFlow__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLaunchInvitableUserFlow__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLaunchInvitableUserFlow__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLaunchInvitableUserFlow__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLaunchInvitableUserFlow__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOnlinePicoRoomFunction::execGetJoinOrCreateNamedRoomOptions)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DataStoreKey);
		P_GET_PROPERTY(FStrProperty,Z_Param_DataStoreValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPicoRoomOptions*)Z_Param__Result=UOnlinePicoRoomFunction::GetJoinOrCreateNamedRoomOptions(Z_Param_DataStoreKey,Z_Param_DataStoreValue,Z_Param_Name,Z_Param_Password);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoRoomFunction::execGetCreatePrivateRoomOptions)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DataStoreKey);
		P_GET_PROPERTY(FStrProperty,Z_Param_DataStoreValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPicoRoomOptions*)Z_Param__Result=UOnlinePicoRoomFunction::GetCreatePrivateRoomOptions(Z_Param_DataStoreKey,Z_Param_DataStoreValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoRoomFunction::execJoinOrCreateNamedRoom)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ERoomJoinPolicy,Z_Param_JoinPolicy);
		P_GET_UBOOL(Z_Param_CreateIfNotExist);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxUsers);
		P_GET_STRUCT(FPicoRoomOptions,Z_Param_Options);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnRoomJoinOrCreateNamedRoomCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoRoomFunction::JoinOrCreateNamedRoom(Z_Param_WorldContextObject,ERoomJoinPolicy(Z_Param_JoinPolicy),Z_Param_CreateIfNotExist,Z_Param_MaxUsers,Z_Param_Options,FRoomJoinOrCreateNamedRoom(Z_Param_OnRoomJoinOrCreateNamedRoomCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoRoomFunction::execGetNamedRooms)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageSize);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnGetNamedRoomsCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoRoomFunction::GetNamedRooms(Z_Param_WorldContextObject,Z_Param_PageIndex,Z_Param_PageSize,FRoomGetNamedRooms(Z_Param_OnGetNamedRoomsCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoRoomFunction::execUpdatePrivateRoomJoinPolicy)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_RoomID);
		P_GET_ENUM(ERoomJoinPolicy,Z_Param_JoinPolicy);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnUpdatePrivateRoomJoinPolicyCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoRoomFunction::UpdatePrivateRoomJoinPolicy(Z_Param_WorldContextObject,Z_Param_RoomID,ERoomJoinPolicy(Z_Param_JoinPolicy),FRoomUpdatePrivateRoomJoinPolicy(Z_Param_OnUpdatePrivateRoomJoinPolicyCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoRoomFunction::execUpdateOwner)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_RoomID);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserID);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnUpdateOwnerCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoRoomFunction::UpdateOwner(Z_Param_WorldContextObject,Z_Param_RoomID,Z_Param_UserID,FRoomUpdateOwner(Z_Param_OnUpdateOwnerCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoRoomFunction::execUpdateMembershipLockStatus)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_RoomID);
		P_GET_ENUM(ERoomMembershipLockStatus,Z_Param_MembershipLockStatus);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnUpdateMembershipLockStatusCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoRoomFunction::UpdateMembershipLockStatus(Z_Param_WorldContextObject,Z_Param_RoomID,ERoomMembershipLockStatus(Z_Param_MembershipLockStatus),FRoomUpdateMembershipLockStatus(Z_Param_OnUpdateMembershipLockStatusCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoRoomFunction::execSetDescription)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_RoomID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Description);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSetDescriptionCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoRoomFunction::SetDescription(Z_Param_WorldContextObject,Z_Param_RoomID,Z_Param_Description,FRoomSetDescription(Z_Param_OnSetDescriptionCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoRoomFunction::execLeave)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_RoomID);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnLeaveCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoRoomFunction::Leave(Z_Param_WorldContextObject,Z_Param_RoomID,FRoomLeave(Z_Param_OnLeaveCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoRoomFunction::execKickUser)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_RoomID);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserID);
		P_GET_PROPERTY(FIntProperty,Z_Param_KickDurationSeconds);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnKickUserCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoRoomFunction::KickUser(Z_Param_WorldContextObject,Z_Param_RoomID,Z_Param_UserID,Z_Param_KickDurationSeconds,FRoomKickUser(Z_Param_OnKickUserCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoRoomFunction::execJoin2)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_RoomID);
		P_GET_STRUCT(FPicoRoomOptions,Z_Param_RoomOptions);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnJoin2Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoRoomFunction::Join2(Z_Param_WorldContextObject,Z_Param_RoomID,Z_Param_RoomOptions,FRoomJoin2(Z_Param_OnJoin2Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoRoomFunction::execInviteUser)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_RoomID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Token);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnInviteUserCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoRoomFunction::InviteUser(Z_Param_WorldContextObject,Z_Param_RoomID,Z_Param_Token,FRoomInviteUser(Z_Param_OnInviteUserCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoRoomFunction::execGetModeratedRooms)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageSize);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnGetModeratedRoomsCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoRoomFunction::GetModeratedRooms(Z_Param_WorldContextObject,Z_Param_PageIndex,Z_Param_PageSize,FRoomGetModeratedRooms(Z_Param_OnGetModeratedRoomsCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoRoomFunction::execGetInvitableUsers2)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FPicoRoomOptions,Z_Param_RoomOptions);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnGetInvitableUsers2Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoRoomFunction::GetInvitableUsers2(Z_Param_WorldContextObject,Z_Param_RoomOptions,FRoomGetInvitableUsers2(Z_Param_OnGetInvitableUsers2Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoRoomFunction::execGetCurrentForUser)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnGetCurrentForUserCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoRoomFunction::GetCurrentForUser(Z_Param_WorldContextObject,Z_Param_UserId,FRoomGetCurrentForUser(Z_Param_OnGetCurrentForUserCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoRoomFunction::execGetCurrent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnGetCurrentCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoRoomFunction::GetCurrent(Z_Param_WorldContextObject,FRoomGetCurrent(Z_Param_OnGetCurrentCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoRoomFunction::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_RoomID);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnGetCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoRoomFunction::Get(Z_Param_WorldContextObject,Z_Param_RoomID,FRoomGet(Z_Param_OnGetCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoRoomFunction::execCreateAndJoinPrivate2)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ERoomJoinPolicy,Z_Param_JoinPolicy);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxUsers);
		P_GET_STRUCT(FPicoRoomOptions,Z_Param_RoomOptions);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnCreateAndJoinPrivate2Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoRoomFunction::CreateAndJoinPrivate2(Z_Param_WorldContextObject,ERoomJoinPolicy(Z_Param_JoinPolicy),Z_Param_MaxUsers,Z_Param_RoomOptions,FRoomCreateAndJoinPrivate2(Z_Param_OnCreateAndJoinPrivate2Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoRoomFunction::execUpdateDataStore)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_RoomID);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_Data);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnUpdateDataStoreCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoRoomFunction::UpdateDataStore(Z_Param_WorldContextObject,Z_Param_RoomID,Z_Param_Out_Data,FRoomUpdateDataStore(Z_Param_OnUpdateDataStoreCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePicoRoomFunction::execLaunchInvitableUserFlow)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_RoomID);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnLaunchInvitableUserFlowCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOnlinePicoRoomFunction::LaunchInvitableUserFlow(Z_Param_WorldContextObject,Z_Param_RoomID,FRoomLaunchInvitableUserFlow(Z_Param_OnLaunchInvitableUserFlowCallback));
		P_NATIVE_END;
	}
	void UOnlinePicoRoomFunction::StaticRegisterNativesUOnlinePicoRoomFunction()
	{
		UClass* Class = UOnlinePicoRoomFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAndJoinPrivate2", &UOnlinePicoRoomFunction::execCreateAndJoinPrivate2 },
			{ "Get", &UOnlinePicoRoomFunction::execGet },
			{ "GetCreatePrivateRoomOptions", &UOnlinePicoRoomFunction::execGetCreatePrivateRoomOptions },
			{ "GetCurrent", &UOnlinePicoRoomFunction::execGetCurrent },
			{ "GetCurrentForUser", &UOnlinePicoRoomFunction::execGetCurrentForUser },
			{ "GetInvitableUsers2", &UOnlinePicoRoomFunction::execGetInvitableUsers2 },
			{ "GetJoinOrCreateNamedRoomOptions", &UOnlinePicoRoomFunction::execGetJoinOrCreateNamedRoomOptions },
			{ "GetModeratedRooms", &UOnlinePicoRoomFunction::execGetModeratedRooms },
			{ "GetNamedRooms", &UOnlinePicoRoomFunction::execGetNamedRooms },
			{ "InviteUser", &UOnlinePicoRoomFunction::execInviteUser },
			{ "Join2", &UOnlinePicoRoomFunction::execJoin2 },
			{ "JoinOrCreateNamedRoom", &UOnlinePicoRoomFunction::execJoinOrCreateNamedRoom },
			{ "KickUser", &UOnlinePicoRoomFunction::execKickUser },
			{ "LaunchInvitableUserFlow", &UOnlinePicoRoomFunction::execLaunchInvitableUserFlow },
			{ "Leave", &UOnlinePicoRoomFunction::execLeave },
			{ "SetDescription", &UOnlinePicoRoomFunction::execSetDescription },
			{ "UpdateDataStore", &UOnlinePicoRoomFunction::execUpdateDataStore },
			{ "UpdateMembershipLockStatus", &UOnlinePicoRoomFunction::execUpdateMembershipLockStatus },
			{ "UpdateOwner", &UOnlinePicoRoomFunction::execUpdateOwner },
			{ "UpdatePrivateRoomJoinPolicy", &UOnlinePicoRoomFunction::execUpdatePrivateRoomJoinPolicy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlinePicoRoomFunction_CreateAndJoinPrivate2_Statics
	{
		struct OnlinePicoRoomFunction_eventCreateAndJoinPrivate2_Parms
		{
			UObject* WorldContextObject;
			ERoomJoinPolicy JoinPolicy;
			int32 MaxUsers;
			FPicoRoomOptions RoomOptions;
			FScriptDelegate OnCreateAndJoinPrivate2Callback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_JoinPolicy_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_JoinPolicy;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxUsers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoomOptions;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnCreateAndJoinPrivate2Callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_CreateAndJoinPrivate2_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventCreateAndJoinPrivate2_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_CreateAndJoinPrivate2_Statics::NewProp_JoinPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_CreateAndJoinPrivate2_Statics::NewProp_JoinPolicy = { "JoinPolicy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventCreateAndJoinPrivate2_Parms, JoinPolicy), Z_Construct_UEnum_OnlineSubsystemPico_ERoomJoinPolicy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_CreateAndJoinPrivate2_Statics::NewProp_MaxUsers = { "MaxUsers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventCreateAndJoinPrivate2_Parms, MaxUsers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_CreateAndJoinPrivate2_Statics::NewProp_RoomOptions = { "RoomOptions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventCreateAndJoinPrivate2_Parms, RoomOptions), Z_Construct_UScriptStruct_FPicoRoomOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_CreateAndJoinPrivate2_Statics::NewProp_OnCreateAndJoinPrivate2Callback = { "OnCreateAndJoinPrivate2Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventCreateAndJoinPrivate2_Parms, OnCreateAndJoinPrivate2Callback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomCreateAndJoinPrivate2__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoRoomFunction_CreateAndJoinPrivate2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_CreateAndJoinPrivate2_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_CreateAndJoinPrivate2_Statics::NewProp_JoinPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_CreateAndJoinPrivate2_Statics::NewProp_JoinPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_CreateAndJoinPrivate2_Statics::NewProp_MaxUsers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_CreateAndJoinPrivate2_Statics::NewProp_RoomOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_CreateAndJoinPrivate2_Statics::NewProp_OnCreateAndJoinPrivate2Callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_CreateAndJoinPrivate2_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Room" },
		{ "Comment", "/// <summary>Creates a new private room and joins it.\n/// @note This type of room can be obtained by querying the room where\n/// a friend is, so it is suitable for playing with friends.</summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"JoinPolicy\">Specifies who can join the room:\n/// * `0`: nobody\n/// * `1`: everybody\n/// * `2`: friends of members\n/// * `3`: friends of the room owner\n/// * `4`: invited users\n/// * `5`: unknown\n/// </param>\n/// <param name=\"MaxUsers\">The maximum number of members allowed in the room, including the room creator.</param>\n/// <param name=\"RoomOptions\">Room configuration for this request.</param>\n/// <param name=\"OnCreateAndJoinPrivate2Callback\">Will be executed when the request has been completed.    \n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_Room *, Room).</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "<summary>Creates a new private room and joins it.\n@note This type of room can be obtained by querying the room where\na friend is, so it is suitable for playing with friends.</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"JoinPolicy\">Specifies who can join the room:\n* `0`: nobody\n* `1`: everybody\n* `2`: friends of members\n* `3`: friends of the room owner\n* `4`: invited users\n* `5`: unknown\n</param>\n<param name=\"MaxUsers\">The maximum number of members allowed in the room, including the room creator.</param>\n<param name=\"RoomOptions\">Room configuration for this request.</param>\n<param name=\"OnCreateAndJoinPrivate2Callback\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_Room *, Room).</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoRoomFunction_CreateAndJoinPrivate2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoRoomFunction, nullptr, "CreateAndJoinPrivate2", nullptr, nullptr, sizeof(OnlinePicoRoomFunction_eventCreateAndJoinPrivate2_Parms), Z_Construct_UFunction_UOnlinePicoRoomFunction_CreateAndJoinPrivate2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_CreateAndJoinPrivate2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_CreateAndJoinPrivate2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_CreateAndJoinPrivate2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoRoomFunction_CreateAndJoinPrivate2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoRoomFunction_CreateAndJoinPrivate2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoRoomFunction_Get_Statics
	{
		struct OnlinePicoRoomFunction_eventGet_Parms
		{
			UObject* WorldContextObject;
			FString RoomID;
			FScriptDelegate OnGetCallback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoomID;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnGetCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_Get_Statics::NewProp_RoomID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_Get_Statics::NewProp_RoomID = { "RoomID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGet_Parms, RoomID), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_Get_Statics::NewProp_RoomID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_Get_Statics::NewProp_RoomID_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_Get_Statics::NewProp_OnGetCallback = { "OnGetCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGet_Parms, OnGetCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGet__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoRoomFunction_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_Get_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_Get_Statics::NewProp_RoomID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_Get_Statics::NewProp_OnGetCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Room" },
		{ "Comment", "/// <summary>Gets the information about a specified room.</summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"RoomID\">The ID of the room to get information for.</param>\n/// <param name=\"OnGetCallback\">Will be executed when the request has been completed.   \n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_Room *, Room).</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "<summary>Gets the information about a specified room.</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"RoomID\">The ID of the room to get information for.</param>\n<param name=\"OnGetCallback\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_Room *, Room).</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoRoomFunction_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoRoomFunction, nullptr, "Get", nullptr, nullptr, sizeof(OnlinePicoRoomFunction_eventGet_Parms), Z_Construct_UFunction_UOnlinePicoRoomFunction_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoRoomFunction_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoRoomFunction_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCreatePrivateRoomOptions_Statics
	{
		struct OnlinePicoRoomFunction_eventGetCreatePrivateRoomOptions_Parms
		{
			FString DataStoreKey;
			FString DataStoreValue;
			FPicoRoomOptions ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataStoreKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataStoreKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataStoreValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataStoreValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCreatePrivateRoomOptions_Statics::NewProp_DataStoreKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCreatePrivateRoomOptions_Statics::NewProp_DataStoreKey = { "DataStoreKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGetCreatePrivateRoomOptions_Parms, DataStoreKey), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCreatePrivateRoomOptions_Statics::NewProp_DataStoreKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCreatePrivateRoomOptions_Statics::NewProp_DataStoreKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCreatePrivateRoomOptions_Statics::NewProp_DataStoreValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCreatePrivateRoomOptions_Statics::NewProp_DataStoreValue = { "DataStoreValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGetCreatePrivateRoomOptions_Parms, DataStoreValue), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCreatePrivateRoomOptions_Statics::NewProp_DataStoreValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCreatePrivateRoomOptions_Statics::NewProp_DataStoreValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCreatePrivateRoomOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGetCreatePrivateRoomOptions_Parms, ReturnValue), Z_Construct_UScriptStruct_FPicoRoomOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCreatePrivateRoomOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCreatePrivateRoomOptions_Statics::NewProp_DataStoreKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCreatePrivateRoomOptions_Statics::NewProp_DataStoreValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCreatePrivateRoomOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCreatePrivateRoomOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Room" },
		{ "Comment", "/// <summary>Get the room options for creating a private room. You can use it when you call 'CreateAndJoinPrivate2'.</summary>\n/// <param name=\"DataStoreKey\">The key to add.</param>\n/// <param name=\"DataStoreValue\">The value to add.</param>\n/// <returns>The room options for creating a private room.</returns>  \n" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "<summary>Get the room options for creating a private room. You can use it when you call 'CreateAndJoinPrivate2'.</summary>\n<param name=\"DataStoreKey\">The key to add.</param>\n<param name=\"DataStoreValue\">The value to add.</param>\n<returns>The room options for creating a private room.</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCreatePrivateRoomOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoRoomFunction, nullptr, "GetCreatePrivateRoomOptions", nullptr, nullptr, sizeof(OnlinePicoRoomFunction_eventGetCreatePrivateRoomOptions_Parms), Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCreatePrivateRoomOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCreatePrivateRoomOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCreatePrivateRoomOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCreatePrivateRoomOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCreatePrivateRoomOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCreatePrivateRoomOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrent_Statics
	{
		struct OnlinePicoRoomFunction_eventGetCurrent_Parms
		{
			UObject* WorldContextObject;
			FScriptDelegate OnGetCurrentCallback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnGetCurrentCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGetCurrent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrent_Statics::NewProp_OnGetCurrentCallback = { "OnGetCurrentCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGetCurrent_Parms, OnGetCurrentCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrent__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrent_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrent_Statics::NewProp_OnGetCurrentCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrent_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Room" },
		{ "Comment", "/// <summary>Gets the data of the room you are currently in.</summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"OnGetCurrentCallback\">Will be executed when the request has been completed.    \n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_Room *, Room).</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "<summary>Gets the data of the room you are currently in.</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"OnGetCurrentCallback\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_Room *, Room).</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoRoomFunction, nullptr, "GetCurrent", nullptr, nullptr, sizeof(OnlinePicoRoomFunction_eventGetCurrent_Parms), Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrentForUser_Statics
	{
		struct OnlinePicoRoomFunction_eventGetCurrentForUser_Parms
		{
			UObject* WorldContextObject;
			FString UserId;
			FScriptDelegate OnGetCurrentForUserCallback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnGetCurrentForUserCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrentForUser_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGetCurrentForUser_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrentForUser_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrentForUser_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGetCurrentForUser_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrentForUser_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrentForUser_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrentForUser_Statics::NewProp_OnGetCurrentForUserCallback = { "OnGetCurrentForUserCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGetCurrentForUser_Parms, OnGetCurrentForUserCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetCurrentForUser__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrentForUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrentForUser_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrentForUser_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrentForUser_Statics::NewProp_OnGetCurrentForUserCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrentForUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Room" },
		{ "Comment", "/// <summary>Gets the current room of the specified user.\n/// @note The user's privacy settings may not allow you to access their room.\n/// </summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"UserId\">The ID of the user.</param>\n/// <param name=\"OnGetCurrentForUserCallback\">Will be executed when the request has been completed.    \n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_Room *, Room).</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "<summary>Gets the current room of the specified user.\n@note The user's privacy settings may not allow you to access their room.\n</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"UserId\">The ID of the user.</param>\n<param name=\"OnGetCurrentForUserCallback\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_Room *, Room).</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrentForUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoRoomFunction, nullptr, "GetCurrentForUser", nullptr, nullptr, sizeof(OnlinePicoRoomFunction_eventGetCurrentForUser_Parms), Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrentForUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrentForUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrentForUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrentForUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrentForUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrentForUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoRoomFunction_GetInvitableUsers2_Statics
	{
		struct OnlinePicoRoomFunction_eventGetInvitableUsers2_Parms
		{
			UObject* WorldContextObject;
			FPicoRoomOptions RoomOptions;
			FScriptDelegate OnGetInvitableUsers2Callback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoomOptions;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnGetInvitableUsers2Callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetInvitableUsers2_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGetInvitableUsers2_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetInvitableUsers2_Statics::NewProp_RoomOptions = { "RoomOptions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGetInvitableUsers2_Parms, RoomOptions), Z_Construct_UScriptStruct_FPicoRoomOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetInvitableUsers2_Statics::NewProp_OnGetInvitableUsers2Callback = { "OnGetInvitableUsers2Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGetInvitableUsers2_Parms, OnGetInvitableUsers2Callback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetInvitableUsers2__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoRoomFunction_GetInvitableUsers2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_GetInvitableUsers2_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_GetInvitableUsers2_Statics::NewProp_RoomOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_GetInvitableUsers2_Statics::NewProp_OnGetInvitableUsers2Callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_GetInvitableUsers2_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Room" },
		{ "Comment", "/// <summary>Gets a list of members the user can invite to the room.\n/// These members are drawn from the user's friends list and recently\n/// encountered list, and filtered based on relevance and interests.</summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"RoomOptions\">Additional configuration for this request.\n/// If you pass `null`, the response will return code `0`.</param>\n/// <param name=\"OnGetInvitableUsers2Callback\">Will be executed when the request has been completed.   \n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_UserArray *, UserArray).</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "<summary>Gets a list of members the user can invite to the room.\nThese members are drawn from the user's friends list and recently\nencountered list, and filtered based on relevance and interests.</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"RoomOptions\">Additional configuration for this request.\nIf you pass `null`, the response will return code `0`.</param>\n<param name=\"OnGetInvitableUsers2Callback\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_UserArray *, UserArray).</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetInvitableUsers2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoRoomFunction, nullptr, "GetInvitableUsers2", nullptr, nullptr, sizeof(OnlinePicoRoomFunction_eventGetInvitableUsers2_Parms), Z_Construct_UFunction_UOnlinePicoRoomFunction_GetInvitableUsers2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetInvitableUsers2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetInvitableUsers2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetInvitableUsers2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoRoomFunction_GetInvitableUsers2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoRoomFunction_GetInvitableUsers2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics
	{
		struct OnlinePicoRoomFunction_eventGetJoinOrCreateNamedRoomOptions_Parms
		{
			FString DataStoreKey;
			FString DataStoreValue;
			FString Name;
			FString Password;
			FPicoRoomOptions ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataStoreKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataStoreKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataStoreValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataStoreValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::NewProp_DataStoreKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::NewProp_DataStoreKey = { "DataStoreKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGetJoinOrCreateNamedRoomOptions_Parms, DataStoreKey), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::NewProp_DataStoreKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::NewProp_DataStoreKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::NewProp_DataStoreValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::NewProp_DataStoreValue = { "DataStoreValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGetJoinOrCreateNamedRoomOptions_Parms, DataStoreValue), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::NewProp_DataStoreValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::NewProp_DataStoreValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGetJoinOrCreateNamedRoomOptions_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGetJoinOrCreateNamedRoomOptions_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::NewProp_Password_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGetJoinOrCreateNamedRoomOptions_Parms, ReturnValue), Z_Construct_UScriptStruct_FPicoRoomOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::NewProp_DataStoreKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::NewProp_DataStoreValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Room" },
		{ "Comment", "/// <summary>Get the room options for create a named room. You can use it when you call 'JoinOrCreateNamedRoom'.</summary>\n/// <param name=\"DataStoreKey\">The key to add.</param>\n/// <param name=\"DataStoreValue\">The value to add.</param>\n/// <param name=\"Name\">The name of the named room.</param>\n/// <param name=\"Password\">The password of the named room.</param>\n/// <returns>The room options for creating a named room.</returns>  \n" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "<summary>Get the room options for create a named room. You can use it when you call 'JoinOrCreateNamedRoom'.</summary>\n<param name=\"DataStoreKey\">The key to add.</param>\n<param name=\"DataStoreValue\">The value to add.</param>\n<param name=\"Name\">The name of the named room.</param>\n<param name=\"Password\">The password of the named room.</param>\n<returns>The room options for creating a named room.</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoRoomFunction, nullptr, "GetJoinOrCreateNamedRoomOptions", nullptr, nullptr, sizeof(OnlinePicoRoomFunction_eventGetJoinOrCreateNamedRoomOptions_Parms), Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoRoomFunction_GetModeratedRooms_Statics
	{
		struct OnlinePicoRoomFunction_eventGetModeratedRooms_Parms
		{
			UObject* WorldContextObject;
			int32 PageIndex;
			int32 PageSize;
			FScriptDelegate OnGetModeratedRoomsCallback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PageIndex;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PageSize;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnGetModeratedRoomsCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetModeratedRooms_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGetModeratedRooms_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetModeratedRooms_Statics::NewProp_PageIndex = { "PageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGetModeratedRooms_Parms, PageIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetModeratedRooms_Statics::NewProp_PageSize = { "PageSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGetModeratedRooms_Parms, PageSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetModeratedRooms_Statics::NewProp_OnGetModeratedRoomsCallback = { "OnGetModeratedRoomsCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGetModeratedRooms_Parms, OnGetModeratedRoomsCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetModeratedRooms__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoRoomFunction_GetModeratedRooms_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_GetModeratedRooms_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_GetModeratedRooms_Statics::NewProp_PageIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_GetModeratedRooms_Statics::NewProp_PageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_GetModeratedRooms_Statics::NewProp_OnGetModeratedRoomsCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_GetModeratedRooms_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Room" },
		{ "Comment", "/// <summary>\n/// Gets the list of moderated rooms created for the application.\n/// The payload returned is `roomarray`. The room info contained in `roomarray` does not include userlist info.\n/// </summary>\n/// <param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"PageIndex\">Start page index.</param>\n/// <param name=\"PageSize\">The number of entries to return on each page. Range from `5` to `20`.</param>\n/// <param name=\"OnGetModeratedRoomsCallback\">Will be executed when the request has been completed.  \n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_RoomArray *, RoomArray).</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "<summary>\nGets the list of moderated rooms created for the application.\nThe payload returned is `roomarray`. The room info contained in `roomarray` does not include userlist info.\n</summary>\n<param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"PageIndex\">Start page index.</param>\n<param name=\"PageSize\">The number of entries to return on each page. Range from `5` to `20`.</param>\n<param name=\"OnGetModeratedRoomsCallback\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_RoomArray *, RoomArray).</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetModeratedRooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoRoomFunction, nullptr, "GetModeratedRooms", nullptr, nullptr, sizeof(OnlinePicoRoomFunction_eventGetModeratedRooms_Parms), Z_Construct_UFunction_UOnlinePicoRoomFunction_GetModeratedRooms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetModeratedRooms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetModeratedRooms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetModeratedRooms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoRoomFunction_GetModeratedRooms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoRoomFunction_GetModeratedRooms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoRoomFunction_GetNamedRooms_Statics
	{
		struct OnlinePicoRoomFunction_eventGetNamedRooms_Parms
		{
			UObject* WorldContextObject;
			int32 PageIndex;
			int32 PageSize;
			FScriptDelegate OnGetNamedRoomsCallback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PageIndex;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PageSize;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnGetNamedRoomsCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetNamedRooms_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGetNamedRooms_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetNamedRooms_Statics::NewProp_PageIndex = { "PageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGetNamedRooms_Parms, PageIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetNamedRooms_Statics::NewProp_PageSize = { "PageSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGetNamedRooms_Parms, PageSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetNamedRooms_Statics::NewProp_OnGetNamedRoomsCallback = { "OnGetNamedRoomsCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventGetNamedRooms_Parms, OnGetNamedRoomsCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomGetNamedRooms__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoRoomFunction_GetNamedRooms_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_GetNamedRooms_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_GetNamedRooms_Statics::NewProp_PageIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_GetNamedRooms_Statics::NewProp_PageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_GetNamedRooms_Statics::NewProp_OnGetNamedRoomsCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_GetNamedRooms_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Room" },
		{ "Comment", "/// <summary>Fetches the list of named rooms created for the application.</summary>\n/// <param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"PageIndex\">Start page index.</param>\n/// <param name=\"PageSize\">The number of entries to return on each page. Range from `5` to `20`.</param>\n/// <param name=\"OnGetNamedRoomsCallback\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "<summary>Fetches the list of named rooms created for the application.</summary>\n<param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"PageIndex\">Start page index.</param>\n<param name=\"PageSize\">The number of entries to return on each page. Range from `5` to `20`.</param>\n<param name=\"OnGetNamedRoomsCallback\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoRoomFunction_GetNamedRooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoRoomFunction, nullptr, "GetNamedRooms", nullptr, nullptr, sizeof(OnlinePicoRoomFunction_eventGetNamedRooms_Parms), Z_Construct_UFunction_UOnlinePicoRoomFunction_GetNamedRooms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetNamedRooms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetNamedRooms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_GetNamedRooms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoRoomFunction_GetNamedRooms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoRoomFunction_GetNamedRooms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoRoomFunction_InviteUser_Statics
	{
		struct OnlinePicoRoomFunction_eventInviteUser_Parms
		{
			UObject* WorldContextObject;
			FString RoomID;
			FString Token;
			FScriptDelegate OnInviteUserCallback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoomID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Token;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnInviteUserCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_InviteUser_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventInviteUser_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_InviteUser_Statics::NewProp_RoomID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_InviteUser_Statics::NewProp_RoomID = { "RoomID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventInviteUser_Parms, RoomID), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_InviteUser_Statics::NewProp_RoomID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_InviteUser_Statics::NewProp_RoomID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_InviteUser_Statics::NewProp_Token_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_InviteUser_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventInviteUser_Parms, Token), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_InviteUser_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_InviteUser_Statics::NewProp_Token_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_InviteUser_Statics::NewProp_OnInviteUserCallback = { "OnInviteUserCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventInviteUser_Parms, OnInviteUserCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomInviteUser__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoRoomFunction_InviteUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_InviteUser_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_InviteUser_Statics::NewProp_RoomID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_InviteUser_Statics::NewProp_Token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_InviteUser_Statics::NewProp_OnInviteUserCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_InviteUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Room" },
		{ "Comment", "/// <summary>Invites a user to the current room.\n/// @note  The user invited will receive a notification of type `MessageType.Notification_Room_InviteReceived`.\n/// </summary>\n/// <param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"RoomID\">The ID of the room.</param>\n/// <param name=\"Token\">The user's invitation token, which is returned by `RoomService.GetInvitableUsers2()`.</param>\n/// <param name=\"OnInviteUserCallback\">Will be executed when the request has been completed.    \n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_Room *, Room).</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "<summary>Invites a user to the current room.\n@note  The user invited will receive a notification of type `MessageType.Notification_Room_InviteReceived`.\n</summary>\n<param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"RoomID\">The ID of the room.</param>\n<param name=\"Token\">The user's invitation token, which is returned by `RoomService.GetInvitableUsers2()`.</param>\n<param name=\"OnInviteUserCallback\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_Room *, Room).</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoRoomFunction_InviteUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoRoomFunction, nullptr, "InviteUser", nullptr, nullptr, sizeof(OnlinePicoRoomFunction_eventInviteUser_Parms), Z_Construct_UFunction_UOnlinePicoRoomFunction_InviteUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_InviteUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_InviteUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_InviteUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoRoomFunction_InviteUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoRoomFunction_InviteUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoRoomFunction_Join2_Statics
	{
		struct OnlinePicoRoomFunction_eventJoin2_Parms
		{
			UObject* WorldContextObject;
			FString RoomID;
			FPicoRoomOptions RoomOptions;
			FScriptDelegate OnJoin2Callback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoomID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoomOptions;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnJoin2Callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_Join2_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventJoin2_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_Join2_Statics::NewProp_RoomID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_Join2_Statics::NewProp_RoomID = { "RoomID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventJoin2_Parms, RoomID), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_Join2_Statics::NewProp_RoomID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_Join2_Statics::NewProp_RoomID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_Join2_Statics::NewProp_RoomOptions = { "RoomOptions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventJoin2_Parms, RoomOptions), Z_Construct_UScriptStruct_FPicoRoomOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_Join2_Statics::NewProp_OnJoin2Callback = { "OnJoin2Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventJoin2_Parms, OnJoin2Callback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoin2__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoRoomFunction_Join2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_Join2_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_Join2_Statics::NewProp_RoomID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_Join2_Statics::NewProp_RoomOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_Join2_Statics::NewProp_OnJoin2Callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_Join2_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Room" },
		{ "Comment", "/// <summary>Joins the target room and meanwhile leaves the current room.</summary>\n/// <param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"RoomID\">The ID of the room to join.</param>\n/// <param name=\"RoomOptions\">(Optional) Additional room configuration for this request.</param>\n/// <param name=\"OnJoin2Callback\">Will be executed when the request has been completed.    \n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_Room *, Room).</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "<summary>Joins the target room and meanwhile leaves the current room.</summary>\n<param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"RoomID\">The ID of the room to join.</param>\n<param name=\"RoomOptions\">(Optional) Additional room configuration for this request.</param>\n<param name=\"OnJoin2Callback\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_Room *, Room).</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoRoomFunction_Join2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoRoomFunction, nullptr, "Join2", nullptr, nullptr, sizeof(OnlinePicoRoomFunction_eventJoin2_Parms), Z_Construct_UFunction_UOnlinePicoRoomFunction_Join2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_Join2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_Join2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_Join2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoRoomFunction_Join2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoRoomFunction_Join2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom_Statics
	{
		struct OnlinePicoRoomFunction_eventJoinOrCreateNamedRoom_Parms
		{
			UObject* WorldContextObject;
			ERoomJoinPolicy JoinPolicy;
			bool CreateIfNotExist;
			int32 MaxUsers;
			FPicoRoomOptions Options;
			FScriptDelegate OnRoomJoinOrCreateNamedRoomCallback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_JoinPolicy_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_JoinPolicy;
		static void NewProp_CreateIfNotExist_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CreateIfNotExist;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxUsers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnRoomJoinOrCreateNamedRoomCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventJoinOrCreateNamedRoom_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom_Statics::NewProp_JoinPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom_Statics::NewProp_JoinPolicy = { "JoinPolicy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventJoinOrCreateNamedRoom_Parms, JoinPolicy), Z_Construct_UEnum_OnlineSubsystemPico_ERoomJoinPolicy, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom_Statics::NewProp_CreateIfNotExist_SetBit(void* Obj)
	{
		((OnlinePicoRoomFunction_eventJoinOrCreateNamedRoom_Parms*)Obj)->CreateIfNotExist = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom_Statics::NewProp_CreateIfNotExist = { "CreateIfNotExist", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePicoRoomFunction_eventJoinOrCreateNamedRoom_Parms), &Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom_Statics::NewProp_CreateIfNotExist_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom_Statics::NewProp_MaxUsers = { "MaxUsers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventJoinOrCreateNamedRoom_Parms, MaxUsers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventJoinOrCreateNamedRoom_Parms, Options), Z_Construct_UScriptStruct_FPicoRoomOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom_Statics::NewProp_OnRoomJoinOrCreateNamedRoomCallback = { "OnRoomJoinOrCreateNamedRoomCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventJoinOrCreateNamedRoom_Parms, OnRoomJoinOrCreateNamedRoomCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomJoinOrCreateNamedRoom__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom_Statics::NewProp_JoinPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom_Statics::NewProp_JoinPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom_Statics::NewProp_CreateIfNotExist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom_Statics::NewProp_MaxUsers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom_Statics::NewProp_OnRoomJoinOrCreateNamedRoomCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Room" },
		{ "Comment", "/// <summary>Joins or creates a named room.</summary>\n/// <param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"JoinPolicy\">Specifies who can join the room. Currently only supports 'RoomJoinPolicy Everyone.'</param>\n/// <param name=\"CreateIfNotExist\">Create a new room if the named room does not exist.</param>\n/// <param name=\"MaxUsers\">The maximum number of users allowed in the room, including the creator.</param>\n/// <param name=\"Options\">Additional room configuration for this request. Optional.</param>\n/// <param name=\"OnRoomJoinOrCreateNamedRoomCallback\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "<summary>Joins or creates a named room.</summary>\n<param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"JoinPolicy\">Specifies who can join the room. Currently only supports 'RoomJoinPolicy Everyone.'</param>\n<param name=\"CreateIfNotExist\">Create a new room if the named room does not exist.</param>\n<param name=\"MaxUsers\">The maximum number of users allowed in the room, including the creator.</param>\n<param name=\"Options\">Additional room configuration for this request. Optional.</param>\n<param name=\"OnRoomJoinOrCreateNamedRoomCallback\">Will be executed when the request has been completed. Delegate will contain the requested object class.</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoRoomFunction, nullptr, "JoinOrCreateNamedRoom", nullptr, nullptr, sizeof(OnlinePicoRoomFunction_eventJoinOrCreateNamedRoom_Parms), Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser_Statics
	{
		struct OnlinePicoRoomFunction_eventKickUser_Parms
		{
			UObject* WorldContextObject;
			FString RoomID;
			FString UserID;
			int32 KickDurationSeconds;
			FScriptDelegate OnKickUserCallback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoomID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KickDurationSeconds;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnKickUserCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventKickUser_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser_Statics::NewProp_RoomID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser_Statics::NewProp_RoomID = { "RoomID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventKickUser_Parms, RoomID), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser_Statics::NewProp_RoomID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser_Statics::NewProp_RoomID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser_Statics::NewProp_UserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventKickUser_Parms, UserID), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser_Statics::NewProp_UserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser_Statics::NewProp_UserID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser_Statics::NewProp_KickDurationSeconds = { "KickDurationSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventKickUser_Parms, KickDurationSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser_Statics::NewProp_OnKickUserCallback = { "OnKickUserCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventKickUser_Parms, OnKickUserCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomKickUser__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser_Statics::NewProp_RoomID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser_Statics::NewProp_UserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser_Statics::NewProp_KickDurationSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser_Statics::NewProp_OnKickUserCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Room" },
		{ "Comment", "/// <summary>Kicks a user out of a room. For use by homeowners only.</summary>\n/// <param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"RoomID\">The ID of the room.</param>\n/// <param name=\"UserID\">The ID of the user to be kicked (cannot be yourself).</param>\n/// <param name=\"KickDurationSeconds\">The Length of the ban (in seconds).</param>\n/// <param name=\"OnKickUserCallback\">Will be executed when the request has been completed.   \n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_Room *, Room).</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "<summary>Kicks a user out of a room. For use by homeowners only.</summary>\n<param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"RoomID\">The ID of the room.</param>\n<param name=\"UserID\">The ID of the user to be kicked (cannot be yourself).</param>\n<param name=\"KickDurationSeconds\">The Length of the ban (in seconds).</param>\n<param name=\"OnKickUserCallback\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_Room *, Room).</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoRoomFunction, nullptr, "KickUser", nullptr, nullptr, sizeof(OnlinePicoRoomFunction_eventKickUser_Parms), Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoRoomFunction_LaunchInvitableUserFlow_Statics
	{
		struct OnlinePicoRoomFunction_eventLaunchInvitableUserFlow_Parms
		{
			UObject* WorldContextObject;
			FString RoomID;
			FScriptDelegate OnLaunchInvitableUserFlowCallback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoomID;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnLaunchInvitableUserFlowCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_LaunchInvitableUserFlow_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventLaunchInvitableUserFlow_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_LaunchInvitableUserFlow_Statics::NewProp_RoomID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_LaunchInvitableUserFlow_Statics::NewProp_RoomID = { "RoomID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventLaunchInvitableUserFlow_Parms, RoomID), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_LaunchInvitableUserFlow_Statics::NewProp_RoomID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_LaunchInvitableUserFlow_Statics::NewProp_RoomID_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_LaunchInvitableUserFlow_Statics::NewProp_OnLaunchInvitableUserFlowCallback = { "OnLaunchInvitableUserFlowCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventLaunchInvitableUserFlow_Parms, OnLaunchInvitableUserFlowCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLaunchInvitableUserFlow__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoRoomFunction_LaunchInvitableUserFlow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_LaunchInvitableUserFlow_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_LaunchInvitableUserFlow_Statics::NewProp_RoomID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_LaunchInvitableUserFlow_Statics::NewProp_OnLaunchInvitableUserFlowCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_LaunchInvitableUserFlow_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Room" },
		{ "Comment", "/// <summary>Gets the friends of the logged-in user and the rooms the friends might be in. If a friend is not in any room, the 'room' field will be null.</summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"RoomID\">The ID of the room.</param>\n/// <param name=\"InGetLoggedInuserFriendsAndRoomsCallback\">Will be executed when the request has been completed.   \n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage).</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "<summary>Gets the friends of the logged-in user and the rooms the friends might be in. If a friend is not in any room, the 'room' field will be null.</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"RoomID\">The ID of the room.</param>\n<param name=\"InGetLoggedInuserFriendsAndRoomsCallback\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage).</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoRoomFunction_LaunchInvitableUserFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoRoomFunction, nullptr, "LaunchInvitableUserFlow", nullptr, nullptr, sizeof(OnlinePicoRoomFunction_eventLaunchInvitableUserFlow_Parms), Z_Construct_UFunction_UOnlinePicoRoomFunction_LaunchInvitableUserFlow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_LaunchInvitableUserFlow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_LaunchInvitableUserFlow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_LaunchInvitableUserFlow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoRoomFunction_LaunchInvitableUserFlow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoRoomFunction_LaunchInvitableUserFlow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoRoomFunction_Leave_Statics
	{
		struct OnlinePicoRoomFunction_eventLeave_Parms
		{
			UObject* WorldContextObject;
			FString RoomID;
			FScriptDelegate OnLeaveCallback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoomID;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnLeaveCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_Leave_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventLeave_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_Leave_Statics::NewProp_RoomID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_Leave_Statics::NewProp_RoomID = { "RoomID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventLeave_Parms, RoomID), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_Leave_Statics::NewProp_RoomID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_Leave_Statics::NewProp_RoomID_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_Leave_Statics::NewProp_OnLeaveCallback = { "OnLeaveCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventLeave_Parms, OnLeaveCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomLeave__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoRoomFunction_Leave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_Leave_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_Leave_Statics::NewProp_RoomID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_Leave_Statics::NewProp_OnLeaveCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_Leave_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Room" },
		{ "Comment", "/// <summary>Leaves the current room.\n/// @note  The room you are now in will be returned if the request succeeds.</summary>\n/// <param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"RoomID\">The ID of the room.</param>\n/// <param name=\"OnLeaveCallback\">Will be executed when the request has been completed.   \n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_Room *, Room).</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "<summary>Leaves the current room.\n@note  The room you are now in will be returned if the request succeeds.</summary>\n<param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"RoomID\">The ID of the room.</param>\n<param name=\"OnLeaveCallback\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_Room *, Room).</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoRoomFunction_Leave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoRoomFunction, nullptr, "Leave", nullptr, nullptr, sizeof(OnlinePicoRoomFunction_eventLeave_Parms), Z_Construct_UFunction_UOnlinePicoRoomFunction_Leave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_Leave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_Leave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_Leave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoRoomFunction_Leave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoRoomFunction_Leave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoRoomFunction_SetDescription_Statics
	{
		struct OnlinePicoRoomFunction_eventSetDescription_Parms
		{
			UObject* WorldContextObject;
			FString RoomID;
			FString Description;
			FScriptDelegate OnSetDescriptionCallback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoomID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSetDescriptionCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_SetDescription_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventSetDescription_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_SetDescription_Statics::NewProp_RoomID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_SetDescription_Statics::NewProp_RoomID = { "RoomID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventSetDescription_Parms, RoomID), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_SetDescription_Statics::NewProp_RoomID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_SetDescription_Statics::NewProp_RoomID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_SetDescription_Statics::NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_SetDescription_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventSetDescription_Parms, Description), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_SetDescription_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_SetDescription_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_SetDescription_Statics::NewProp_OnSetDescriptionCallback = { "OnSetDescriptionCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventSetDescription_Parms, OnSetDescriptionCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomSetDescription__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoRoomFunction_SetDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_SetDescription_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_SetDescription_Statics::NewProp_RoomID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_SetDescription_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_SetDescription_Statics::NewProp_OnSetDescriptionCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_SetDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Room" },
		{ "Comment", "/// <summary>Sets the description of a room.  For use by homeowners only.</summary>\n/// <param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"RoomID\">The ID of the room to set description for.</param>\n/// <param name=\"Description\">The new description of the room.</param>\n/// <param name=\"OnSetDescriptionCallback\">Will be executed when the request has been completed.   \n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_Room *, Room).</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "<summary>Sets the description of a room.  For use by homeowners only.</summary>\n<param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"RoomID\">The ID of the room to set description for.</param>\n<param name=\"Description\">The new description of the room.</param>\n<param name=\"OnSetDescriptionCallback\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_Room *, Room).</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoRoomFunction_SetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoRoomFunction, nullptr, "SetDescription", nullptr, nullptr, sizeof(OnlinePicoRoomFunction_eventSetDescription_Parms), Z_Construct_UFunction_UOnlinePicoRoomFunction_SetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_SetDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_SetDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_SetDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoRoomFunction_SetDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoRoomFunction_SetDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics
	{
		struct OnlinePicoRoomFunction_eventUpdateDataStore_Parms
		{
			UObject* WorldContextObject;
			FString RoomID;
			TMap<FString,FString> Data;
			FScriptDelegate OnUpdateDataStoreCallback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoomID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnUpdateDataStoreCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventUpdateDataStore_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics::NewProp_RoomID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics::NewProp_RoomID = { "RoomID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventUpdateDataStore_Parms, RoomID), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics::NewProp_RoomID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics::NewProp_RoomID_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics::NewProp_Data_ValueProp = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics::NewProp_Data_Key_KeyProp = { "Data_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventUpdateDataStore_Parms, Data), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics::NewProp_OnUpdateDataStoreCallback = { "OnUpdateDataStoreCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventUpdateDataStore_Parms, OnUpdateDataStoreCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateDataStore__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics::NewProp_RoomID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics::NewProp_Data_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics::NewProp_Data_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics::NewProp_OnUpdateDataStoreCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Room" },
		{ "Comment", "/// <summary>Updates the data store of the current room (the caller should be the room owner).\n/// @note Room data stores only allow string values. The maximum key length is 32 bytes and the maximum value length is 64 bytes.\n/// If you provide illegal values, this method will return an error.</summary>\n/// <param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"roomId\">The ID of the room that you currently own (call `Room.OwnerOptional` to check).</param>\n/// <param name=\"data\">The key/value pairs to add or update. Null value will clear a given key.</param>\n/// <param name=\"OnUpdateDataStoreCallback\">Will be executed when the request has been completed.   \n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_Room *, Room).</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "<summary>Updates the data store of the current room (the caller should be the room owner).\n@note Room data stores only allow string values. The maximum key length is 32 bytes and the maximum value length is 64 bytes.\nIf you provide illegal values, this method will return an error.</summary>\n<param name =\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"roomId\">The ID of the room that you currently own (call `Room.OwnerOptional` to check).</param>\n<param name=\"data\">The key/value pairs to add or update. Null value will clear a given key.</param>\n<param name=\"OnUpdateDataStoreCallback\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_Room *, Room).</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoRoomFunction, nullptr, "UpdateDataStore", nullptr, nullptr, sizeof(OnlinePicoRoomFunction_eventUpdateDataStore_Parms), Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateMembershipLockStatus_Statics
	{
		struct OnlinePicoRoomFunction_eventUpdateMembershipLockStatus_Parms
		{
			UObject* WorldContextObject;
			FString RoomID;
			ERoomMembershipLockStatus MembershipLockStatus;
			FScriptDelegate OnUpdateMembershipLockStatusCallback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoomID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MembershipLockStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MembershipLockStatus;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnUpdateMembershipLockStatusCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateMembershipLockStatus_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventUpdateMembershipLockStatus_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateMembershipLockStatus_Statics::NewProp_RoomID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateMembershipLockStatus_Statics::NewProp_RoomID = { "RoomID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventUpdateMembershipLockStatus_Parms, RoomID), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateMembershipLockStatus_Statics::NewProp_RoomID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateMembershipLockStatus_Statics::NewProp_RoomID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateMembershipLockStatus_Statics::NewProp_MembershipLockStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateMembershipLockStatus_Statics::NewProp_MembershipLockStatus = { "MembershipLockStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventUpdateMembershipLockStatus_Parms, MembershipLockStatus), Z_Construct_UEnum_OnlineSubsystemPico_ERoomMembershipLockStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateMembershipLockStatus_Statics::NewProp_OnUpdateMembershipLockStatusCallback = { "OnUpdateMembershipLockStatusCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventUpdateMembershipLockStatus_Parms, OnUpdateMembershipLockStatusCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateMembershipLockStatus__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateMembershipLockStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateMembershipLockStatus_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateMembershipLockStatus_Statics::NewProp_RoomID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateMembershipLockStatus_Statics::NewProp_MembershipLockStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateMembershipLockStatus_Statics::NewProp_MembershipLockStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateMembershipLockStatus_Statics::NewProp_OnUpdateMembershipLockStatusCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateMembershipLockStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Room" },
		{ "Comment", "/// <summary>Locks/unlocks the membership of a room (the caller should be the room owner) to allow/disallow new members from being able to join the room.\n/// @note  Locking membership will prevent other users from joining the room through `Join2()`, invitations, etc. Users that are in the room at the time of lock will be able to rejoin.</summary>\n/// <param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"RoomID\">The ID of the room to lock/unlock membership for.</param>\n/// <param name=\"MembershipLockStatus\">The new membership status to set for the room:\n/// * `0`: Unknown\n/// * `1`: lock\n/// * `2`: unlock\n/// </param>\n/// <param name=\"OnUpdateMembershipLockStatusCallback\">Will be executed when the request has been completed.    \n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_Room *, Room).</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "<summary>Locks/unlocks the membership of a room (the caller should be the room owner) to allow/disallow new members from being able to join the room.\n@note  Locking membership will prevent other users from joining the room through `Join2()`, invitations, etc. Users that are in the room at the time of lock will be able to rejoin.</summary>\n<param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"RoomID\">The ID of the room to lock/unlock membership for.</param>\n<param name=\"MembershipLockStatus\">The new membership status to set for the room:\n* `0`: Unknown\n* `1`: lock\n* `2`: unlock\n</param>\n<param name=\"OnUpdateMembershipLockStatusCallback\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_Room *, Room).</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateMembershipLockStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoRoomFunction, nullptr, "UpdateMembershipLockStatus", nullptr, nullptr, sizeof(OnlinePicoRoomFunction_eventUpdateMembershipLockStatus_Parms), Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateMembershipLockStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateMembershipLockStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateMembershipLockStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateMembershipLockStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateMembershipLockStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateMembershipLockStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateOwner_Statics
	{
		struct OnlinePicoRoomFunction_eventUpdateOwner_Parms
		{
			UObject* WorldContextObject;
			FString RoomID;
			FString UserID;
			FScriptDelegate OnUpdateOwnerCallback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoomID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserID;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnUpdateOwnerCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateOwner_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventUpdateOwner_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateOwner_Statics::NewProp_RoomID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateOwner_Statics::NewProp_RoomID = { "RoomID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventUpdateOwner_Parms, RoomID), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateOwner_Statics::NewProp_RoomID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateOwner_Statics::NewProp_RoomID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateOwner_Statics::NewProp_UserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateOwner_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventUpdateOwner_Parms, UserID), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateOwner_Statics::NewProp_UserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateOwner_Statics::NewProp_UserID_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateOwner_Statics::NewProp_OnUpdateOwnerCallback = { "OnUpdateOwnerCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventUpdateOwner_Parms, OnUpdateOwnerCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdateOwner__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateOwner_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateOwner_Statics::NewProp_RoomID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateOwner_Statics::NewProp_UserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateOwner_Statics::NewProp_OnUpdateOwnerCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Room" },
		{ "Comment", "/// <summary>Modifies the owner of the room, this person needs to be the person in this room.</summary>\n/// <param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"RoomID\">The ID of the room to change ownership for.</param>\n/// <param name=\"UserID\">The ID of the new user to own the room. The new user must be in the same room.</param>\n/// <param name=\"OnUpdateOwnerCallback\">Will be executed when the request has been completed.    \n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage).</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "<summary>Modifies the owner of the room, this person needs to be the person in this room.</summary>\n<param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"RoomID\">The ID of the room to change ownership for.</param>\n<param name=\"UserID\">The ID of the new user to own the room. The new user must be in the same room.</param>\n<param name=\"OnUpdateOwnerCallback\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage).</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoRoomFunction, nullptr, "UpdateOwner", nullptr, nullptr, sizeof(OnlinePicoRoomFunction_eventUpdateOwner_Parms), Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdatePrivateRoomJoinPolicy_Statics
	{
		struct OnlinePicoRoomFunction_eventUpdatePrivateRoomJoinPolicy_Parms
		{
			UObject* WorldContextObject;
			FString RoomID;
			ERoomJoinPolicy JoinPolicy;
			FScriptDelegate OnUpdatePrivateRoomJoinPolicyCallback;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoomID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_JoinPolicy_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_JoinPolicy;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnUpdatePrivateRoomJoinPolicyCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdatePrivateRoomJoinPolicy_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventUpdatePrivateRoomJoinPolicy_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdatePrivateRoomJoinPolicy_Statics::NewProp_RoomID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdatePrivateRoomJoinPolicy_Statics::NewProp_RoomID = { "RoomID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventUpdatePrivateRoomJoinPolicy_Parms, RoomID), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdatePrivateRoomJoinPolicy_Statics::NewProp_RoomID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdatePrivateRoomJoinPolicy_Statics::NewProp_RoomID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdatePrivateRoomJoinPolicy_Statics::NewProp_JoinPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdatePrivateRoomJoinPolicy_Statics::NewProp_JoinPolicy = { "JoinPolicy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventUpdatePrivateRoomJoinPolicy_Parms, JoinPolicy), Z_Construct_UEnum_OnlineSubsystemPico_ERoomJoinPolicy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdatePrivateRoomJoinPolicy_Statics::NewProp_OnUpdatePrivateRoomJoinPolicyCallback = { "OnUpdatePrivateRoomJoinPolicyCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePicoRoomFunction_eventUpdatePrivateRoomJoinPolicy_Parms, OnUpdatePrivateRoomJoinPolicyCallback), Z_Construct_UDelegateFunction_OnlineSubsystemPico_RoomUpdatePrivateRoomJoinPolicy__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdatePrivateRoomJoinPolicy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdatePrivateRoomJoinPolicy_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdatePrivateRoomJoinPolicy_Statics::NewProp_RoomID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdatePrivateRoomJoinPolicy_Statics::NewProp_JoinPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdatePrivateRoomJoinPolicy_Statics::NewProp_JoinPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdatePrivateRoomJoinPolicy_Statics::NewProp_OnUpdatePrivateRoomJoinPolicyCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdatePrivateRoomJoinPolicy_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnlinePico|Room" },
		{ "Comment", "/// <summary>Sets the join policy for a specified private room.</summary>\n/// <param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n/// <param name=\"RoomID\">The ID of the room you want to set join policy for.</param>\n/// <param name=\"JoinPolicy\">Specifies who can join the room:\n/// * `0`: nobody\n/// * `1`: everybody\n/// * `2`: friends of members\n/// * `3`: friends of the room owner\n/// * `4`: invited users\n/// * `5`: unknown\n/// </param>\n/// <param name=\"OnUpdatePrivateRoomJoinPolicyCallback\">Will be executed when the request has been completed.  \n/// Delegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_Room *, Room).</param>\n" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "<summary>Sets the join policy for a specified private room.</summary>\n<param name=\"WorldContextObject\">Used to get the information about the current world.</param>\n<param name=\"RoomID\">The ID of the room you want to set join policy for.</param>\n<param name=\"JoinPolicy\">Specifies who can join the room:\n* `0`: nobody\n* `1`: everybody\n* `2`: friends of members\n* `3`: friends of the room owner\n* `4`: invited users\n* `5`: unknown\n</param>\n<param name=\"OnUpdatePrivateRoomJoinPolicyCallback\">Will be executed when the request has been completed.\nDelegate will contain the requested object class (bool, bIsError, int, ErrorCode, const FString&, ErrorMessage, UPico_Room *, Room).</param>" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdatePrivateRoomJoinPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePicoRoomFunction, nullptr, "UpdatePrivateRoomJoinPolicy", nullptr, nullptr, sizeof(OnlinePicoRoomFunction_eventUpdatePrivateRoomJoinPolicy_Parms), Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdatePrivateRoomJoinPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdatePrivateRoomJoinPolicy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdatePrivateRoomJoinPolicy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdatePrivateRoomJoinPolicy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdatePrivateRoomJoinPolicy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdatePrivateRoomJoinPolicy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlinePicoRoomFunction_NoRegister()
	{
		return UOnlinePicoRoomFunction::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePicoRoomFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlinePicoRoomFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlinePicoRoomFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlinePicoRoomFunction_CreateAndJoinPrivate2, "CreateAndJoinPrivate2" }, // 702857906
		{ &Z_Construct_UFunction_UOnlinePicoRoomFunction_Get, "Get" }, // 2930515891
		{ &Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCreatePrivateRoomOptions, "GetCreatePrivateRoomOptions" }, // 1124275319
		{ &Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrent, "GetCurrent" }, // 2517317041
		{ &Z_Construct_UFunction_UOnlinePicoRoomFunction_GetCurrentForUser, "GetCurrentForUser" }, // 2064248725
		{ &Z_Construct_UFunction_UOnlinePicoRoomFunction_GetInvitableUsers2, "GetInvitableUsers2" }, // 3150396578
		{ &Z_Construct_UFunction_UOnlinePicoRoomFunction_GetJoinOrCreateNamedRoomOptions, "GetJoinOrCreateNamedRoomOptions" }, // 1250833789
		{ &Z_Construct_UFunction_UOnlinePicoRoomFunction_GetModeratedRooms, "GetModeratedRooms" }, // 3958727420
		{ &Z_Construct_UFunction_UOnlinePicoRoomFunction_GetNamedRooms, "GetNamedRooms" }, // 850858504
		{ &Z_Construct_UFunction_UOnlinePicoRoomFunction_InviteUser, "InviteUser" }, // 1925942327
		{ &Z_Construct_UFunction_UOnlinePicoRoomFunction_Join2, "Join2" }, // 2562875750
		{ &Z_Construct_UFunction_UOnlinePicoRoomFunction_JoinOrCreateNamedRoom, "JoinOrCreateNamedRoom" }, // 3613036368
		{ &Z_Construct_UFunction_UOnlinePicoRoomFunction_KickUser, "KickUser" }, // 2924974458
		{ &Z_Construct_UFunction_UOnlinePicoRoomFunction_LaunchInvitableUserFlow, "LaunchInvitableUserFlow" }, // 3696911441
		{ &Z_Construct_UFunction_UOnlinePicoRoomFunction_Leave, "Leave" }, // 1445448244
		{ &Z_Construct_UFunction_UOnlinePicoRoomFunction_SetDescription, "SetDescription" }, // 2373180545
		{ &Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateDataStore, "UpdateDataStore" }, // 4245403137
		{ &Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateMembershipLockStatus, "UpdateMembershipLockStatus" }, // 2709060601
		{ &Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdateOwner, "UpdateOwner" }, // 2091291475
		{ &Z_Construct_UFunction_UOnlinePicoRoomFunction_UpdatePrivateRoomJoinPolicy, "UpdatePrivateRoomJoinPolicy" }, // 188616104
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePicoRoomFunction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** @defgroup BP_Room BP_Room\n *  This is the BP_Room group\n *  @{\n *//// @brief OnlinePicoRoom Blueprint Function class.\n" },
		{ "IncludePath", "Pico_Room.h" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "@defgroup BP_Room BP_Room\nThis is the BP_Room group\n@{\n/// @brief OnlinePicoRoom Blueprint Function class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePicoRoomFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePicoRoomFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePicoRoomFunction_Statics::ClassParams = {
		&UOnlinePicoRoomFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePicoRoomFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePicoRoomFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePicoRoomFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlinePicoRoomFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlinePicoRoomFunction, 409803186);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UOnlinePicoRoomFunction>()
	{
		return UOnlinePicoRoomFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlinePicoRoomFunction(Z_Construct_UClass_UOnlinePicoRoomFunction, &UOnlinePicoRoomFunction::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UOnlinePicoRoomFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePicoRoomFunction);
	DEFINE_FUNCTION(UPico_Room::execGetDebugString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDebugString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Room::execGetRoomType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ERoomType*)Z_Param__Result=P_THIS->GetRoomType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Room::execGetPlayerNumber)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerNumber();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Room::execGetMaxUsers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxUsers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Room::execGetJoinability)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ERoomJoinabilit*)Z_Param__Result=P_THIS->GetJoinability();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Room::execGetJoinPolicy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ERoomJoinPolicy*)Z_Param__Result=P_THIS->GetJoinPolicy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Room::execGetIsMembershipLocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsMembershipLocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Room::execGetRoomID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRoomID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Room::execGetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Room::execGetDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDescription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Room::execGetUsers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_UserArray**)Z_Param__Result=P_THIS->GetUsers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Room::execGetOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_User**)Z_Param__Result=P_THIS->GetOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_Room::execGetDataStore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_DataStore**)Z_Param__Result=P_THIS->GetDataStore();
		P_NATIVE_END;
	}
	void UPico_Room::StaticRegisterNativesUPico_Room()
	{
		UClass* Class = UPico_Room::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDataStore", &UPico_Room::execGetDataStore },
			{ "GetDebugString", &UPico_Room::execGetDebugString },
			{ "GetDescription", &UPico_Room::execGetDescription },
			{ "GetIsMembershipLocked", &UPico_Room::execGetIsMembershipLocked },
			{ "GetJoinability", &UPico_Room::execGetJoinability },
			{ "GetJoinPolicy", &UPico_Room::execGetJoinPolicy },
			{ "GetMaxUsers", &UPico_Room::execGetMaxUsers },
			{ "GetName", &UPico_Room::execGetName },
			{ "GetOwner", &UPico_Room::execGetOwner },
			{ "GetPlayerNumber", &UPico_Room::execGetPlayerNumber },
			{ "GetRoomID", &UPico_Room::execGetRoomID },
			{ "GetRoomType", &UPico_Room::execGetRoomType },
			{ "GetUsers", &UPico_Room::execGetUsers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_Room_GetDataStore_Statics
	{
		struct Pico_Room_eventGetDataStore_Parms
		{
			UPico_DataStore* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_Room_GetDataStore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Room_eventGetDataStore_Parms, ReturnValue), Z_Construct_UClass_UPico_DataStore_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Room_GetDataStore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetDataStore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Room_GetDataStore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room" },
		{ "Comment", "/** @brief Get the datastore that stores a room's metadata. The maximum datastore key length is 32 bytes and the maximum datastore value length is 64 bytes. */" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "@brief Get the datastore that stores a room's metadata. The maximum datastore key length is 32 bytes and the maximum datastore value length is 64 bytes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Room_GetDataStore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Room, nullptr, "GetDataStore", nullptr, nullptr, sizeof(Pico_Room_eventGetDataStore_Parms), Z_Construct_UFunction_UPico_Room_GetDataStore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetDataStore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Room_GetDataStore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetDataStore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Room_GetDataStore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Room_GetDataStore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Room_GetDebugString_Statics
	{
		struct Pico_Room_eventGetDebugString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_Room_GetDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Room_eventGetDebugString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Room_GetDebugString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Room_GetDebugString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Room_GetDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Room, nullptr, "GetDebugString", nullptr, nullptr, sizeof(Pico_Room_eventGetDebugString_Parms), Z_Construct_UFunction_UPico_Room_GetDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Room_GetDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Room_GetDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Room_GetDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Room_GetDescription_Statics
	{
		struct Pico_Room_eventGetDescription_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_Room_GetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Room_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Room_GetDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Room_GetDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room" },
		{ "Comment", "/** @brief Room description. The maximum length is 128 bytes. */" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "@brief Room description. The maximum length is 128 bytes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Room_GetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Room, nullptr, "GetDescription", nullptr, nullptr, sizeof(Pico_Room_eventGetDescription_Parms), Z_Construct_UFunction_UPico_Room_GetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Room_GetDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Room_GetDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Room_GetDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked_Statics
	{
		struct Pico_Room_eventGetIsMembershipLocked_Parms
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
	void Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pico_Room_eventGetIsMembershipLocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pico_Room_eventGetIsMembershipLocked_Parms), &Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room" },
		{ "Comment", "/** @brief Whether the room is locked. */" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "@brief Whether the room is locked." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Room, nullptr, "GetIsMembershipLocked", nullptr, nullptr, sizeof(Pico_Room_eventGetIsMembershipLocked_Parms), Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Room_GetJoinability_Statics
	{
		struct Pico_Room_eventGetJoinability_Parms
		{
			ERoomJoinabilit ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPico_Room_GetJoinability_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPico_Room_GetJoinability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Room_eventGetJoinability_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemPico_ERoomJoinabilit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Room_GetJoinability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetJoinability_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetJoinability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Room_GetJoinability_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room" },
		{ "Comment", "/** @brief Room's joinability. */" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "@brief Room's joinability." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Room_GetJoinability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Room, nullptr, "GetJoinability", nullptr, nullptr, sizeof(Pico_Room_eventGetJoinability_Parms), Z_Construct_UFunction_UPico_Room_GetJoinability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetJoinability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Room_GetJoinability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetJoinability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Room_GetJoinability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Room_GetJoinability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Room_GetJoinPolicy_Statics
	{
		struct Pico_Room_eventGetJoinPolicy_Parms
		{
			ERoomJoinPolicy ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPico_Room_GetJoinPolicy_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPico_Room_GetJoinPolicy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Room_eventGetJoinPolicy_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemPico_ERoomJoinPolicy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Room_GetJoinPolicy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetJoinPolicy_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetJoinPolicy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Room_GetJoinPolicy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room" },
		{ "Comment", "/** @brief Room's join policy. */" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "@brief Room's join policy." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Room_GetJoinPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Room, nullptr, "GetJoinPolicy", nullptr, nullptr, sizeof(Pico_Room_eventGetJoinPolicy_Parms), Z_Construct_UFunction_UPico_Room_GetJoinPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetJoinPolicy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Room_GetJoinPolicy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetJoinPolicy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Room_GetJoinPolicy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Room_GetJoinPolicy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Room_GetMaxUsers_Statics
	{
		struct Pico_Room_eventGetMaxUsers_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_Room_GetMaxUsers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Room_eventGetMaxUsers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Room_GetMaxUsers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetMaxUsers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Room_GetMaxUsers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room" },
		{ "Comment", "/** @brief The maximum number of users allowed to join a room, which is `100`. */" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "@brief The maximum number of users allowed to join a room, which is `100`." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Room_GetMaxUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Room, nullptr, "GetMaxUsers", nullptr, nullptr, sizeof(Pico_Room_eventGetMaxUsers_Parms), Z_Construct_UFunction_UPico_Room_GetMaxUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetMaxUsers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Room_GetMaxUsers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetMaxUsers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Room_GetMaxUsers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Room_GetMaxUsers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Room_GetName_Statics
	{
		struct Pico_Room_eventGetName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_Room_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Room_eventGetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Room_GetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Room_GetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room" },
		{ "Comment", "/** @brief Room name. */" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "@brief Room name." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Room_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Room, nullptr, "GetName", nullptr, nullptr, sizeof(Pico_Room_eventGetName_Parms), Z_Construct_UFunction_UPico_Room_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Room_GetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Room_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Room_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Room_GetOwner_Statics
	{
		struct Pico_Room_eventGetOwner_Parms
		{
			UPico_User* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_Room_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Room_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_UPico_User_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Room_GetOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Room_GetOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room" },
		{ "Comment", "/** @brief Get the room owner. This field can be null. Need to check whether it is null before use. */" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "@brief Get the room owner. This field can be null. Need to check whether it is null before use." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Room_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Room, nullptr, "GetOwner", nullptr, nullptr, sizeof(Pico_Room_eventGetOwner_Parms), Z_Construct_UFunction_UPico_Room_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Room_GetOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Room_GetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Room_GetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Room_GetPlayerNumber_Statics
	{
		struct Pico_Room_eventGetPlayerNumber_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_Room_GetPlayerNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Room_eventGetPlayerNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Room_GetPlayerNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetPlayerNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Room_GetPlayerNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room" },
		{ "Comment", "/** @brief The number of users in the room. */" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "@brief The number of users in the room." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Room_GetPlayerNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Room, nullptr, "GetPlayerNumber", nullptr, nullptr, sizeof(Pico_Room_eventGetPlayerNumber_Parms), Z_Construct_UFunction_UPico_Room_GetPlayerNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetPlayerNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Room_GetPlayerNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetPlayerNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Room_GetPlayerNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Room_GetPlayerNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Room_GetRoomID_Statics
	{
		struct Pico_Room_eventGetRoomID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_Room_GetRoomID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Room_eventGetRoomID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Room_GetRoomID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetRoomID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Room_GetRoomID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room" },
		{ "Comment", "/** @brief Room ID. */" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "@brief Room ID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Room_GetRoomID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Room, nullptr, "GetRoomID", nullptr, nullptr, sizeof(Pico_Room_eventGetRoomID_Parms), Z_Construct_UFunction_UPico_Room_GetRoomID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetRoomID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Room_GetRoomID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetRoomID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Room_GetRoomID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Room_GetRoomID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Room_GetRoomType_Statics
	{
		struct Pico_Room_eventGetRoomType_Parms
		{
			ERoomType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPico_Room_GetRoomType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPico_Room_GetRoomType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Room_eventGetRoomType_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemPico_ERoomType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Room_GetRoomType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetRoomType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetRoomType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Room_GetRoomType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room" },
		{ "Comment", "/** @brief Room type. */" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "@brief Room type." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Room_GetRoomType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Room, nullptr, "GetRoomType", nullptr, nullptr, sizeof(Pico_Room_eventGetRoomType_Parms), Z_Construct_UFunction_UPico_Room_GetRoomType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetRoomType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Room_GetRoomType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetRoomType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Room_GetRoomType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Room_GetRoomType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_Room_GetUsers_Statics
	{
		struct Pico_Room_eventGetUsers_Parms
		{
			UPico_UserArray* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_Room_GetUsers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_Room_eventGetUsers_Parms, ReturnValue), Z_Construct_UClass_UPico_UserArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_Room_GetUsers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_Room_GetUsers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_Room_GetUsers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room" },
		{ "Comment", "/** @brief Get the room members. This field can be null. Need to check whether it is null before use. */" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "@brief Get the room members. This field can be null. Need to check whether it is null before use." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_Room_GetUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_Room, nullptr, "GetUsers", nullptr, nullptr, sizeof(Pico_Room_eventGetUsers_Parms), Z_Construct_UFunction_UPico_Room_GetUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetUsers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_Room_GetUsers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_Room_GetUsers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_Room_GetUsers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_Room_GetUsers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_Room_NoRegister()
	{
		return UPico_Room::StaticClass();
	}
	struct Z_Construct_UClass_UPico_Room_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataStore_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataStore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Users_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Users;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_Room_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_Room_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_Room_GetDataStore, "GetDataStore" }, // 1128359953
		{ &Z_Construct_UFunction_UPico_Room_GetDebugString, "GetDebugString" }, // 4062042437
		{ &Z_Construct_UFunction_UPico_Room_GetDescription, "GetDescription" }, // 3561005792
		{ &Z_Construct_UFunction_UPico_Room_GetIsMembershipLocked, "GetIsMembershipLocked" }, // 3857332163
		{ &Z_Construct_UFunction_UPico_Room_GetJoinability, "GetJoinability" }, // 3169553322
		{ &Z_Construct_UFunction_UPico_Room_GetJoinPolicy, "GetJoinPolicy" }, // 3811407476
		{ &Z_Construct_UFunction_UPico_Room_GetMaxUsers, "GetMaxUsers" }, // 3358907996
		{ &Z_Construct_UFunction_UPico_Room_GetName, "GetName" }, // 1114362057
		{ &Z_Construct_UFunction_UPico_Room_GetOwner, "GetOwner" }, // 1083194573
		{ &Z_Construct_UFunction_UPico_Room_GetPlayerNumber, "GetPlayerNumber" }, // 783918624
		{ &Z_Construct_UFunction_UPico_Room_GetRoomID, "GetRoomID" }, // 644177688
		{ &Z_Construct_UFunction_UPico_Room_GetRoomType, "GetRoomType" }, // 3615967767
		{ &Z_Construct_UFunction_UPico_Room_GetUsers, "GetUsers" }, // 1059911466
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_Room_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** @} *//// @brief UPico_Room class.\n" },
		{ "IncludePath", "Pico_Room.h" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "@} /// @brief UPico_Room class." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_Room_Statics::NewProp_DataStore_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_Room_Statics::NewProp_DataStore = { "DataStore", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPico_Room, DataStore), Z_Construct_UClass_UPico_DataStore_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPico_Room_Statics::NewProp_DataStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_Room_Statics::NewProp_DataStore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_Room_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_Room_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPico_Room, Owner), Z_Construct_UClass_UPico_User_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPico_Room_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_Room_Statics::NewProp_Owner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_Room_Statics::NewProp_Users_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_Room_Statics::NewProp_Users = { "Users", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPico_Room, Users), Z_Construct_UClass_UPico_UserArray_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPico_Room_Statics::NewProp_Users_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_Room_Statics::NewProp_Users_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPico_Room_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_Room_Statics::NewProp_DataStore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_Room_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_Room_Statics::NewProp_Users,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_Room_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_Room>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_Room_Statics::ClassParams = {
		&UPico_Room::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPico_Room_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPico_Room_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPico_Room_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_Room_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_Room()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_Room_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_Room, 874784713);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_Room>()
	{
		return UPico_Room::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_Room(Z_Construct_UClass_UPico_Room, &UPico_Room::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_Room"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_Room);
	DEFINE_FUNCTION(UPico_RoomArray::execGetDebugString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDebugString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_RoomArray::execGetPageSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPageSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_RoomArray::execGetPageIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPageIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_RoomArray::execHasNextPage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasNextPage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_RoomArray::execGetTotalSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_RoomArray::execGetSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPico_RoomArray::execGetElement)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPico_Room**)Z_Param__Result=P_THIS->GetElement(Z_Param_Index);
		P_NATIVE_END;
	}
	void UPico_RoomArray::StaticRegisterNativesUPico_RoomArray()
	{
		UClass* Class = UPico_RoomArray::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDebugString", &UPico_RoomArray::execGetDebugString },
			{ "GetElement", &UPico_RoomArray::execGetElement },
			{ "GetPageIndex", &UPico_RoomArray::execGetPageIndex },
			{ "GetPageSize", &UPico_RoomArray::execGetPageSize },
			{ "GetSize", &UPico_RoomArray::execGetSize },
			{ "GetTotalSize", &UPico_RoomArray::execGetTotalSize },
			{ "HasNextPage", &UPico_RoomArray::execHasNextPage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPico_RoomArray_GetDebugString_Statics
	{
		struct Pico_RoomArray_eventGetDebugString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPico_RoomArray_GetDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_RoomArray_eventGetDebugString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_RoomArray_GetDebugString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_RoomArray_GetDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_RoomArray_GetDebugString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room Array" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_RoomArray_GetDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_RoomArray, nullptr, "GetDebugString", nullptr, nullptr, sizeof(Pico_RoomArray_eventGetDebugString_Parms), Z_Construct_UFunction_UPico_RoomArray_GetDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomArray_GetDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_RoomArray_GetDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomArray_GetDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_RoomArray_GetDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_RoomArray_GetDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_RoomArray_GetElement_Statics
	{
		struct Pico_RoomArray_eventGetElement_Parms
		{
			int32 Index;
			UPico_Room* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_RoomArray_GetElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_RoomArray_eventGetElement_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPico_RoomArray_GetElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_RoomArray_eventGetElement_Parms, ReturnValue), Z_Construct_UClass_UPico_Room_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_RoomArray_GetElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_RoomArray_GetElement_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_RoomArray_GetElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_RoomArray_GetElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room Array" },
		{ "Comment", "/** @brief Get RoomArray element form Index.*/" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "@brief Get RoomArray element form Index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_RoomArray_GetElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_RoomArray, nullptr, "GetElement", nullptr, nullptr, sizeof(Pico_RoomArray_eventGetElement_Parms), Z_Construct_UFunction_UPico_RoomArray_GetElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomArray_GetElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_RoomArray_GetElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomArray_GetElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_RoomArray_GetElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_RoomArray_GetElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_RoomArray_GetPageIndex_Statics
	{
		struct Pico_RoomArray_eventGetPageIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_RoomArray_GetPageIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_RoomArray_eventGetPageIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_RoomArray_GetPageIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_RoomArray_GetPageIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_RoomArray_GetPageIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room Array" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_RoomArray_GetPageIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_RoomArray, nullptr, "GetPageIndex", nullptr, nullptr, sizeof(Pico_RoomArray_eventGetPageIndex_Parms), Z_Construct_UFunction_UPico_RoomArray_GetPageIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomArray_GetPageIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_RoomArray_GetPageIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomArray_GetPageIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_RoomArray_GetPageIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_RoomArray_GetPageIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_RoomArray_GetPageSize_Statics
	{
		struct Pico_RoomArray_eventGetPageSize_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_RoomArray_GetPageSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_RoomArray_eventGetPageSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_RoomArray_GetPageSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_RoomArray_GetPageSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_RoomArray_GetPageSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room Array" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_RoomArray_GetPageSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_RoomArray, nullptr, "GetPageSize", nullptr, nullptr, sizeof(Pico_RoomArray_eventGetPageSize_Parms), Z_Construct_UFunction_UPico_RoomArray_GetPageSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomArray_GetPageSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_RoomArray_GetPageSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomArray_GetPageSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_RoomArray_GetPageSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_RoomArray_GetPageSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_RoomArray_GetSize_Statics
	{
		struct Pico_RoomArray_eventGetSize_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_RoomArray_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_RoomArray_eventGetSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_RoomArray_GetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_RoomArray_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_RoomArray_GetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room Array" },
		{ "Comment", "/** @brief Get the size of RoomArray .*/" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "@brief Get the size of RoomArray ." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_RoomArray_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_RoomArray, nullptr, "GetSize", nullptr, nullptr, sizeof(Pico_RoomArray_eventGetSize_Parms), Z_Construct_UFunction_UPico_RoomArray_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomArray_GetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_RoomArray_GetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomArray_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_RoomArray_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_RoomArray_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_RoomArray_GetTotalSize_Statics
	{
		struct Pico_RoomArray_eventGetTotalSize_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPico_RoomArray_GetTotalSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pico_RoomArray_eventGetTotalSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_RoomArray_GetTotalSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_RoomArray_GetTotalSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_RoomArray_GetTotalSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room Array" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_RoomArray_GetTotalSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_RoomArray, nullptr, "GetTotalSize", nullptr, nullptr, sizeof(Pico_RoomArray_eventGetTotalSize_Parms), Z_Construct_UFunction_UPico_RoomArray_GetTotalSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomArray_GetTotalSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_RoomArray_GetTotalSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomArray_GetTotalSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_RoomArray_GetTotalSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_RoomArray_GetTotalSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPico_RoomArray_HasNextPage_Statics
	{
		struct Pico_RoomArray_eventHasNextPage_Parms
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
	void Z_Construct_UFunction_UPico_RoomArray_HasNextPage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pico_RoomArray_eventHasNextPage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPico_RoomArray_HasNextPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pico_RoomArray_eventHasNextPage_Parms), &Z_Construct_UFunction_UPico_RoomArray_HasNextPage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPico_RoomArray_HasNextPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPico_RoomArray_HasNextPage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPico_RoomArray_HasNextPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pico Platform|Room|Room Array" },
		{ "Comment", "/** @brief Get whether the list has the next page.*/" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "@brief Get whether the list has the next page." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPico_RoomArray_HasNextPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPico_RoomArray, nullptr, "HasNextPage", nullptr, nullptr, sizeof(Pico_RoomArray_eventHasNextPage_Parms), Z_Construct_UFunction_UPico_RoomArray_HasNextPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomArray_HasNextPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPico_RoomArray_HasNextPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPico_RoomArray_HasNextPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPico_RoomArray_HasNextPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPico_RoomArray_HasNextPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPico_RoomArray_NoRegister()
	{
		return UPico_RoomArray::StaticClass();
	}
	struct Z_Construct_UClass_UPico_RoomArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoomArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPico_RoomArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPico_RoomArray_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPico_RoomArray_GetDebugString, "GetDebugString" }, // 4144853593
		{ &Z_Construct_UFunction_UPico_RoomArray_GetElement, "GetElement" }, // 1310133512
		{ &Z_Construct_UFunction_UPico_RoomArray_GetPageIndex, "GetPageIndex" }, // 3313187078
		{ &Z_Construct_UFunction_UPico_RoomArray_GetPageSize, "GetPageSize" }, // 2787528774
		{ &Z_Construct_UFunction_UPico_RoomArray_GetSize, "GetSize" }, // 2706356157
		{ &Z_Construct_UFunction_UPico_RoomArray_GetTotalSize, "GetTotalSize" }, // 1526278540
		{ &Z_Construct_UFunction_UPico_RoomArray_HasNextPage, "HasNextPage" }, // 3430882782
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_RoomArray_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief UPico_RoomArray class.\n" },
		{ "IncludePath", "Pico_Room.h" },
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
		{ "ToolTip", "@brief UPico_RoomArray class." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPico_RoomArray_Statics::NewProp_RoomArray_Inner = { "RoomArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPico_Room_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPico_RoomArray_Statics::NewProp_RoomArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Pico_Room.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPico_RoomArray_Statics::NewProp_RoomArray = { "RoomArray", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPico_RoomArray, RoomArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPico_RoomArray_Statics::NewProp_RoomArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_RoomArray_Statics::NewProp_RoomArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPico_RoomArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_RoomArray_Statics::NewProp_RoomArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPico_RoomArray_Statics::NewProp_RoomArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPico_RoomArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPico_RoomArray>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPico_RoomArray_Statics::ClassParams = {
		&UPico_RoomArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPico_RoomArray_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPico_RoomArray_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPico_RoomArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPico_RoomArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPico_RoomArray()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPico_RoomArray_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPico_RoomArray, 88640317);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPico_RoomArray>()
	{
		return UPico_RoomArray::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPico_RoomArray(Z_Construct_UClass_UPico_RoomArray, &UPico_RoomArray::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPico_RoomArray"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPico_RoomArray);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
