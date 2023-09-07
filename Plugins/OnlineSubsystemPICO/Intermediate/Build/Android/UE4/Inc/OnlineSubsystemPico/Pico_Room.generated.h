// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPico_RoomArray;
class UPico_Room;
class UPico_UserArray;
struct FPicoRoomOptions;
class UObject;
enum class ERoomJoinPolicy : uint8;
enum class ERoomMembershipLockStatus : uint8;
 
enum class ERoomType : uint8;
enum class ERoomJoinabilit : uint8;
class UPico_User;
class UPico_DataStore;
#ifdef ONLINESUBSYSTEMPICO_Pico_Room_generated_h
#error "Pico_Room.generated.h already included, missing '#pragma once' in Pico_Room.h"
#endif
#define ONLINESUBSYSTEMPICO_Pico_Room_generated_h

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_49_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRoomGetNamedRooms_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_RoomArray* RoomArray; \
}; \
static inline void FRoomGetNamedRooms_DelegateWrapper(const FScriptDelegate& RoomGetNamedRooms, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_RoomArray* RoomArray) \
{ \
	_Script_OnlineSubsystemPico_eventRoomGetNamedRooms_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.RoomArray=RoomArray; \
	RoomGetNamedRooms.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_48_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRoomJoinOrCreateNamedRoom_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_Room* Room; \
}; \
static inline void FRoomJoinOrCreateNamedRoom_DelegateWrapper(const FScriptDelegate& RoomJoinOrCreateNamedRoom, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_Room* Room) \
{ \
	_Script_OnlineSubsystemPico_eventRoomJoinOrCreateNamedRoom_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.Room=Room; \
	RoomJoinOrCreateNamedRoom.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_47_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRoomUpdatePrivateRoomJoinPolicy_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_Room* Room; \
}; \
static inline void FRoomUpdatePrivateRoomJoinPolicy_DelegateWrapper(const FScriptDelegate& RoomUpdatePrivateRoomJoinPolicy, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_Room* Room) \
{ \
	_Script_OnlineSubsystemPico_eventRoomUpdatePrivateRoomJoinPolicy_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.Room=Room; \
	RoomUpdatePrivateRoomJoinPolicy.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_46_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRoomUpdateOwner_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
}; \
static inline void FRoomUpdateOwner_DelegateWrapper(const FScriptDelegate& RoomUpdateOwner, bool bIsError, int32 ErrorCode, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventRoomUpdateOwner_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	RoomUpdateOwner.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_45_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRoomUpdateMembershipLockStatus_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_Room* Room; \
}; \
static inline void FRoomUpdateMembershipLockStatus_DelegateWrapper(const FScriptDelegate& RoomUpdateMembershipLockStatus, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_Room* Room) \
{ \
	_Script_OnlineSubsystemPico_eventRoomUpdateMembershipLockStatus_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.Room=Room; \
	RoomUpdateMembershipLockStatus.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_44_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRoomSetDescription_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_Room* Room; \
}; \
static inline void FRoomSetDescription_DelegateWrapper(const FScriptDelegate& RoomSetDescription, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_Room* Room) \
{ \
	_Script_OnlineSubsystemPico_eventRoomSetDescription_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.Room=Room; \
	RoomSetDescription.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_43_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRoomLeave_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_Room* Room; \
}; \
static inline void FRoomLeave_DelegateWrapper(const FScriptDelegate& RoomLeave, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_Room* Room) \
{ \
	_Script_OnlineSubsystemPico_eventRoomLeave_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.Room=Room; \
	RoomLeave.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_42_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRoomKickUser_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_Room* Room; \
}; \
static inline void FRoomKickUser_DelegateWrapper(const FScriptDelegate& RoomKickUser, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_Room* Room) \
{ \
	_Script_OnlineSubsystemPico_eventRoomKickUser_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.Room=Room; \
	RoomKickUser.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_41_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRoomJoin2_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_Room* Room; \
}; \
static inline void FRoomJoin2_DelegateWrapper(const FScriptDelegate& RoomJoin2, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_Room* Room) \
{ \
	_Script_OnlineSubsystemPico_eventRoomJoin2_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.Room=Room; \
	RoomJoin2.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_40_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRoomInviteUser_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_Room* Room; \
}; \
static inline void FRoomInviteUser_DelegateWrapper(const FScriptDelegate& RoomInviteUser, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_Room* Room) \
{ \
	_Script_OnlineSubsystemPico_eventRoomInviteUser_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.Room=Room; \
	RoomInviteUser.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_39_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRoomGetModeratedRooms_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_RoomArray* RoomArray; \
}; \
static inline void FRoomGetModeratedRooms_DelegateWrapper(const FScriptDelegate& RoomGetModeratedRooms, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_RoomArray* RoomArray) \
{ \
	_Script_OnlineSubsystemPico_eventRoomGetModeratedRooms_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.RoomArray=RoomArray; \
	RoomGetModeratedRooms.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_38_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRoomGetInvitableUsers2_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_UserArray* UserArray; \
}; \
static inline void FRoomGetInvitableUsers2_DelegateWrapper(const FScriptDelegate& RoomGetInvitableUsers2, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_UserArray* UserArray) \
{ \
	_Script_OnlineSubsystemPico_eventRoomGetInvitableUsers2_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.UserArray=UserArray; \
	RoomGetInvitableUsers2.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_37_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRoomGetCurrentForUser_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_Room* Room; \
}; \
static inline void FRoomGetCurrentForUser_DelegateWrapper(const FScriptDelegate& RoomGetCurrentForUser, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_Room* Room) \
{ \
	_Script_OnlineSubsystemPico_eventRoomGetCurrentForUser_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.Room=Room; \
	RoomGetCurrentForUser.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_36_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRoomGetCurrent_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_Room* Room; \
}; \
static inline void FRoomGetCurrent_DelegateWrapper(const FScriptDelegate& RoomGetCurrent, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_Room* Room) \
{ \
	_Script_OnlineSubsystemPico_eventRoomGetCurrent_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.Room=Room; \
	RoomGetCurrent.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_35_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRoomGet_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_Room* Room; \
}; \
static inline void FRoomGet_DelegateWrapper(const FScriptDelegate& RoomGet, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_Room* Room) \
{ \
	_Script_OnlineSubsystemPico_eventRoomGet_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.Room=Room; \
	RoomGet.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_34_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRoomCreateAndJoinPrivate2_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_Room* Room; \
}; \
static inline void FRoomCreateAndJoinPrivate2_DelegateWrapper(const FScriptDelegate& RoomCreateAndJoinPrivate2, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_Room* Room) \
{ \
	_Script_OnlineSubsystemPico_eventRoomCreateAndJoinPrivate2_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.Room=Room; \
	RoomCreateAndJoinPrivate2.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_33_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRoomUpdateDataStore_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_Room* Room; \
}; \
static inline void FRoomUpdateDataStore_DelegateWrapper(const FScriptDelegate& RoomUpdateDataStore, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_Room* Room) \
{ \
	_Script_OnlineSubsystemPico_eventRoomUpdateDataStore_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.Room=Room; \
	RoomUpdateDataStore.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_32_DELEGATE \
struct _Script_OnlineSubsystemPico_eventRoomLaunchInvitableUserFlow_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
}; \
static inline void FRoomLaunchInvitableUserFlow_DelegateWrapper(const FScriptDelegate& RoomLaunchInvitableUserFlow, bool bIsError, int32 ErrorCode, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventRoomLaunchInvitableUserFlow_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	RoomLaunchInvitableUserFlow.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_419_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_419_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetJoinOrCreateNamedRoomOptions); \
	DECLARE_FUNCTION(execGetCreatePrivateRoomOptions); \
	DECLARE_FUNCTION(execJoinOrCreateNamedRoom); \
	DECLARE_FUNCTION(execGetNamedRooms); \
	DECLARE_FUNCTION(execUpdatePrivateRoomJoinPolicy); \
	DECLARE_FUNCTION(execUpdateOwner); \
	DECLARE_FUNCTION(execUpdateMembershipLockStatus); \
	DECLARE_FUNCTION(execSetDescription); \
	DECLARE_FUNCTION(execLeave); \
	DECLARE_FUNCTION(execKickUser); \
	DECLARE_FUNCTION(execJoin2); \
	DECLARE_FUNCTION(execInviteUser); \
	DECLARE_FUNCTION(execGetModeratedRooms); \
	DECLARE_FUNCTION(execGetInvitableUsers2); \
	DECLARE_FUNCTION(execGetCurrentForUser); \
	DECLARE_FUNCTION(execGetCurrent); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execCreateAndJoinPrivate2); \
	DECLARE_FUNCTION(execUpdateDataStore); \
	DECLARE_FUNCTION(execLaunchInvitableUserFlow);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_419_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetJoinOrCreateNamedRoomOptions); \
	DECLARE_FUNCTION(execGetCreatePrivateRoomOptions); \
	DECLARE_FUNCTION(execJoinOrCreateNamedRoom); \
	DECLARE_FUNCTION(execGetNamedRooms); \
	DECLARE_FUNCTION(execUpdatePrivateRoomJoinPolicy); \
	DECLARE_FUNCTION(execUpdateOwner); \
	DECLARE_FUNCTION(execUpdateMembershipLockStatus); \
	DECLARE_FUNCTION(execSetDescription); \
	DECLARE_FUNCTION(execLeave); \
	DECLARE_FUNCTION(execKickUser); \
	DECLARE_FUNCTION(execJoin2); \
	DECLARE_FUNCTION(execInviteUser); \
	DECLARE_FUNCTION(execGetModeratedRooms); \
	DECLARE_FUNCTION(execGetInvitableUsers2); \
	DECLARE_FUNCTION(execGetCurrentForUser); \
	DECLARE_FUNCTION(execGetCurrent); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execCreateAndJoinPrivate2); \
	DECLARE_FUNCTION(execUpdateDataStore); \
	DECLARE_FUNCTION(execLaunchInvitableUserFlow);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_419_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePicoRoomFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoRoomFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoRoomFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoRoomFunction)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_419_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePicoRoomFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoRoomFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoRoomFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoRoomFunction)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_419_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoRoomFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoRoomFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoRoomFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoRoomFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoRoomFunction(UOnlinePicoRoomFunction&&); \
	NO_API UOnlinePicoRoomFunction(const UOnlinePicoRoomFunction&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_419_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoRoomFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoRoomFunction(UOnlinePicoRoomFunction&&); \
	NO_API UOnlinePicoRoomFunction(const UOnlinePicoRoomFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoRoomFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoRoomFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoRoomFunction)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_419_PRIVATE_PROPERTY_OFFSET
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_416_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_419_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_419_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_419_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_419_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_419_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_419_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_419_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_419_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_419_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_419_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_419_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_419_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UOnlinePicoRoomFunction>();

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_640_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_640_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetRoomType); \
	DECLARE_FUNCTION(execGetPlayerNumber); \
	DECLARE_FUNCTION(execGetMaxUsers); \
	DECLARE_FUNCTION(execGetJoinability); \
	DECLARE_FUNCTION(execGetJoinPolicy); \
	DECLARE_FUNCTION(execGetIsMembershipLocked); \
	DECLARE_FUNCTION(execGetRoomID); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetUsers); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execGetDataStore);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_640_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetRoomType); \
	DECLARE_FUNCTION(execGetPlayerNumber); \
	DECLARE_FUNCTION(execGetMaxUsers); \
	DECLARE_FUNCTION(execGetJoinability); \
	DECLARE_FUNCTION(execGetJoinPolicy); \
	DECLARE_FUNCTION(execGetIsMembershipLocked); \
	DECLARE_FUNCTION(execGetRoomID); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetUsers); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execGetDataStore);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_640_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_Room(); \
	friend struct Z_Construct_UClass_UPico_Room_Statics; \
public: \
	DECLARE_CLASS(UPico_Room, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_Room)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_640_INCLASS \
private: \
	static void StaticRegisterNativesUPico_Room(); \
	friend struct Z_Construct_UClass_UPico_Room_Statics; \
public: \
	DECLARE_CLASS(UPico_Room, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_Room)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_640_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_Room(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_Room) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_Room); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_Room); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_Room(UPico_Room&&); \
	NO_API UPico_Room(const UPico_Room&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_640_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_Room(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_Room(UPico_Room&&); \
	NO_API UPico_Room(const UPico_Room&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_Room); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_Room); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_Room)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_640_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DataStore() { return STRUCT_OFFSET(UPico_Room, DataStore); } \
	FORCEINLINE static uint32 __PPO__Owner() { return STRUCT_OFFSET(UPico_Room, Owner); } \
	FORCEINLINE static uint32 __PPO__Users() { return STRUCT_OFFSET(UPico_Room, Users); }


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_637_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_640_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_640_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_640_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_640_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_640_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_640_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_640_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_640_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_640_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_640_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_640_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_640_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_Room>();

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_734_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_734_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetPageSize); \
	DECLARE_FUNCTION(execGetPageIndex); \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetTotalSize); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetElement);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_734_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetPageSize); \
	DECLARE_FUNCTION(execGetPageIndex); \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetTotalSize); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetElement);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_734_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_RoomArray(); \
	friend struct Z_Construct_UClass_UPico_RoomArray_Statics; \
public: \
	DECLARE_CLASS(UPico_RoomArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_RoomArray)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_734_INCLASS \
private: \
	static void StaticRegisterNativesUPico_RoomArray(); \
	friend struct Z_Construct_UClass_UPico_RoomArray_Statics; \
public: \
	DECLARE_CLASS(UPico_RoomArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_RoomArray)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_734_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_RoomArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_RoomArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_RoomArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_RoomArray); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_RoomArray(UPico_RoomArray&&); \
	NO_API UPico_RoomArray(const UPico_RoomArray&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_734_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_RoomArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_RoomArray(UPico_RoomArray&&); \
	NO_API UPico_RoomArray(const UPico_RoomArray&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_RoomArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_RoomArray); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_RoomArray)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_734_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RoomArray() { return STRUCT_OFFSET(UPico_RoomArray, RoomArray); }


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_731_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_734_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_734_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_734_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_734_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_734_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_734_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_734_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_734_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_734_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_734_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_734_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h_734_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_RoomArray>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Room_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
