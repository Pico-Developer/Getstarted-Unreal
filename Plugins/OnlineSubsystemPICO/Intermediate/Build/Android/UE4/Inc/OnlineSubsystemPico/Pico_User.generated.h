// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPico_OrgScopedID;
class UPico_EntitlementCheckResult;
class UPico_UserRelationResult;
class UPico_PermissionResult;
class UPico_User;
class UPico_UserArray;
class UPico_UserAndRoomArray;
class UObject;
enum class EUserGender : uint8;
enum class EUserPresenceStatus : uint8;
class UPico_Room;
class UPico_UserAndRoom;
enum class EUserRelationType : uint8;
#ifdef ONLINESUBSYSTEMPICO_Pico_User_generated_h
#error "Pico_User.generated.h already included, missing '#pragma once' in Pico_User.h"
#endif
#define ONLINESUBSYSTEMPICO_Pico_User_generated_h

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_34_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetOrgScopedID_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_OrgScopedID* OrgScopedID; \
}; \
static inline void FGetOrgScopedID_DelegateWrapper(const FScriptDelegate& GetOrgScopedID, bool bIsError, const FString& ErrorMessage, UPico_OrgScopedID* OrgScopedID) \
{ \
	_Script_OnlineSubsystemPico_eventGetOrgScopedID_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.OrgScopedID=OrgScopedID; \
	GetOrgScopedID.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_33_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetIDToken_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	FString IDToken; \
}; \
static inline void FGetIDToken_DelegateWrapper(const FScriptDelegate& GetIDToken, bool bIsError, const FString& ErrorMessage, const FString& IDToken) \
{ \
	_Script_OnlineSubsystemPico_eventGetIDToken_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.IDToken=IDToken; \
	GetIDToken.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_32_DELEGATE \
struct _Script_OnlineSubsystemPico_eventEntitlementCheckResult_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_EntitlementCheckResult* EntitlementCheck; \
}; \
static inline void FEntitlementCheckResult_DelegateWrapper(const FScriptDelegate& EntitlementCheckResult, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_EntitlementCheckResult* EntitlementCheck) \
{ \
	_Script_OnlineSubsystemPico_eventEntitlementCheckResult_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.EntitlementCheck=EntitlementCheck; \
	EntitlementCheckResult.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_31_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetUserRelationResult_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_UserRelationResult* UserRelationResult; \
}; \
static inline void FGetUserRelationResult_DelegateWrapper(const FScriptDelegate& GetUserRelationResult, bool bIsError, const FString& ErrorMessage, UPico_UserRelationResult* UserRelationResult) \
{ \
	_Script_OnlineSubsystemPico_eventGetUserRelationResult_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.UserRelationResult=UserRelationResult; \
	GetUserRelationResult.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_30_DELEGATE \
struct _Script_OnlineSubsystemPico_eventLaunchFriendRequestResult_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	bool bDidCancel; \
	bool bDidSendRequest; \
}; \
static inline void FLaunchFriendRequestResult_DelegateWrapper(const FScriptDelegate& LaunchFriendRequestResult, bool bIsError, const FString& ErrorMessage, bool bDidCancel, bool bDidSendRequest) \
{ \
	_Script_OnlineSubsystemPico_eventLaunchFriendRequestResult_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.bDidCancel=bDidCancel ? true : false; \
	Parms.bDidSendRequest=bDidSendRequest ? true : false; \
	LaunchFriendRequestResult.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_29_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetAccessTokenResult_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	FString AccessToken; \
}; \
static inline void FGetAccessTokenResult_DelegateWrapper(const FScriptDelegate& GetAccessTokenResult, bool bIsError, const FString& ErrorMessage, const FString& AccessToken) \
{ \
	_Script_OnlineSubsystemPico_eventGetAccessTokenResult_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.AccessToken=AccessToken; \
	GetAccessTokenResult.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_28_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetPermissionResult_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_PermissionResult* PermissionResult; \
}; \
static inline void FGetPermissionResult_DelegateWrapper(const FScriptDelegate& GetPermissionResult, bool bIsError, const FString& ErrorMessage, UPico_PermissionResult* PermissionResult) \
{ \
	_Script_OnlineSubsystemPico_eventGetPermissionResult_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.PermissionResult=PermissionResult; \
	GetPermissionResult.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_27_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetUserInfo_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_User* User; \
}; \
static inline void FGetUserInfo_DelegateWrapper(const FScriptDelegate& GetUserInfo, bool bIsError, const FString& ErrorMessage, UPico_User* User) \
{ \
	_Script_OnlineSubsystemPico_eventGetUserInfo_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.User=User; \
	GetUserInfo.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_26_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetLoginUser_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_User* User; \
}; \
static inline void FGetLoginUser_DelegateWrapper(const FScriptDelegate& GetLoginUser, bool bIsError, const FString& ErrorMessage, UPico_User* User) \
{ \
	_Script_OnlineSubsystemPico_eventGetLoginUser_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.User=User; \
	GetLoginUser.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_25_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetNextUserPage_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_UserArray* UserArray; \
}; \
static inline void FGetNextUserPage_DelegateWrapper(const FScriptDelegate& GetNextUserPage, bool bIsError, const FString& ErrorMessage, UPico_UserArray* UserArray) \
{ \
	_Script_OnlineSubsystemPico_eventGetNextUserPage_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.UserArray=UserArray; \
	GetNextUserPage.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_24_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetLoggedInUserFriends_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_UserArray* UserArray; \
}; \
static inline void FGetLoggedInUserFriends_DelegateWrapper(const FScriptDelegate& GetLoggedInUserFriends, bool bIsError, const FString& ErrorMessage, UPico_UserArray* UserArray) \
{ \
	_Script_OnlineSubsystemPico_eventGetLoggedInUserFriends_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.UserArray=UserArray; \
	GetLoggedInUserFriends.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_23_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetNextUserAndRoomArrayPage_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_UserAndRoomArray* UserAndRoomArray; \
}; \
static inline void FGetNextUserAndRoomArrayPage_DelegateWrapper(const FScriptDelegate& GetNextUserAndRoomArrayPage, bool bIsError, const FString& ErrorMessage, UPico_UserAndRoomArray* UserAndRoomArray) \
{ \
	_Script_OnlineSubsystemPico_eventGetNextUserAndRoomArrayPage_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.UserAndRoomArray=UserAndRoomArray; \
	GetNextUserAndRoomArrayPage.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_22_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetLoggedInUserFriendsAndRooms_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_UserAndRoomArray* UserAndRoomArray; \
}; \
static inline void FGetLoggedInUserFriendsAndRooms_DelegateWrapper(const FScriptDelegate& GetLoggedInUserFriendsAndRooms, bool bIsError, const FString& ErrorMessage, UPico_UserAndRoomArray* UserAndRoomArray) \
{ \
	_Script_OnlineSubsystemPico_eventGetLoggedInUserFriendsAndRooms_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.UserAndRoomArray=UserAndRoomArray; \
	GetLoggedInUserFriendsAndRooms.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_286_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_286_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOrgScopedID); \
	DECLARE_FUNCTION(execGetIDToken); \
	DECLARE_FUNCTION(execEntitlementCheck); \
	DECLARE_FUNCTION(execGetRelations); \
	DECLARE_FUNCTION(execGetAccessToken); \
	DECLARE_FUNCTION(execLaunchFriendRequestFlow); \
	DECLARE_FUNCTION(execRequestUserPermissions); \
	DECLARE_FUNCTION(execGetAuthorizePermissions); \
	DECLARE_FUNCTION(execGetPicoUserInfo); \
	DECLARE_FUNCTION(execGetLoginUser); \
	DECLARE_FUNCTION(execPicoGetNextUserPage); \
	DECLARE_FUNCTION(execPicoGetUserFriends); \
	DECLARE_FUNCTION(execPicoGetNextUserAndRoomArrayPage); \
	DECLARE_FUNCTION(execPicoGetLoggedInUserAndRoom);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_286_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOrgScopedID); \
	DECLARE_FUNCTION(execGetIDToken); \
	DECLARE_FUNCTION(execEntitlementCheck); \
	DECLARE_FUNCTION(execGetRelations); \
	DECLARE_FUNCTION(execGetAccessToken); \
	DECLARE_FUNCTION(execLaunchFriendRequestFlow); \
	DECLARE_FUNCTION(execRequestUserPermissions); \
	DECLARE_FUNCTION(execGetAuthorizePermissions); \
	DECLARE_FUNCTION(execGetPicoUserInfo); \
	DECLARE_FUNCTION(execGetLoginUser); \
	DECLARE_FUNCTION(execPicoGetNextUserPage); \
	DECLARE_FUNCTION(execPicoGetUserFriends); \
	DECLARE_FUNCTION(execPicoGetNextUserAndRoomArrayPage); \
	DECLARE_FUNCTION(execPicoGetLoggedInUserAndRoom);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_286_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePicoUserFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoUserFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoUserFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoUserFunction)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_286_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePicoUserFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoUserFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoUserFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoUserFunction)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_286_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoUserFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoUserFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoUserFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoUserFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoUserFunction(UOnlinePicoUserFunction&&); \
	NO_API UOnlinePicoUserFunction(const UOnlinePicoUserFunction&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_286_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoUserFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoUserFunction(UOnlinePicoUserFunction&&); \
	NO_API UOnlinePicoUserFunction(const UOnlinePicoUserFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoUserFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoUserFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoUserFunction)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_286_PRIVATE_PROPERTY_OFFSET
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_283_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_286_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_286_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_286_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_286_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_286_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_286_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_286_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_286_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_286_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_286_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_286_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_286_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UOnlinePicoUserFunction>();

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_525_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_525_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPresenceIsJoinable); \
	DECLARE_FUNCTION(execGetStoreRegion); \
	DECLARE_FUNCTION(execGetPresenceExtra); \
	DECLARE_FUNCTION(execGetPresenceMatchSessionId); \
	DECLARE_FUNCTION(execGetPresenceLobbySessionId); \
	DECLARE_FUNCTION(execGetPresenceDestinationApiName); \
	DECLARE_FUNCTION(execGetPresenceDeeplinkMessage); \
	DECLARE_FUNCTION(execGetPresence); \
	DECLARE_FUNCTION(execGetGender); \
	DECLARE_FUNCTION(execGetUserPresenceStatus); \
	DECLARE_FUNCTION(execGetPresencePackage); \
	DECLARE_FUNCTION(execGetSmallImageUrl); \
	DECLARE_FUNCTION(execGetInviteToken); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetImageURL); \
	DECLARE_FUNCTION(execGetDisplayName);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_525_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPresenceIsJoinable); \
	DECLARE_FUNCTION(execGetStoreRegion); \
	DECLARE_FUNCTION(execGetPresenceExtra); \
	DECLARE_FUNCTION(execGetPresenceMatchSessionId); \
	DECLARE_FUNCTION(execGetPresenceLobbySessionId); \
	DECLARE_FUNCTION(execGetPresenceDestinationApiName); \
	DECLARE_FUNCTION(execGetPresenceDeeplinkMessage); \
	DECLARE_FUNCTION(execGetPresence); \
	DECLARE_FUNCTION(execGetGender); \
	DECLARE_FUNCTION(execGetUserPresenceStatus); \
	DECLARE_FUNCTION(execGetPresencePackage); \
	DECLARE_FUNCTION(execGetSmallImageUrl); \
	DECLARE_FUNCTION(execGetInviteToken); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetImageURL); \
	DECLARE_FUNCTION(execGetDisplayName);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_525_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_User(); \
	friend struct Z_Construct_UClass_UPico_User_Statics; \
public: \
	DECLARE_CLASS(UPico_User, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_User)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_525_INCLASS \
private: \
	static void StaticRegisterNativesUPico_User(); \
	friend struct Z_Construct_UClass_UPico_User_Statics; \
public: \
	DECLARE_CLASS(UPico_User, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_User)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_525_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_User(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_User) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_User); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_User); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_User(UPico_User&&); \
	NO_API UPico_User(const UPico_User&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_525_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_User(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_User(UPico_User&&); \
	NO_API UPico_User(const UPico_User&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_User); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_User); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_User)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_525_PRIVATE_PROPERTY_OFFSET
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_522_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_525_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_525_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_525_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_525_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_525_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_525_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_525_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_525_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_525_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_525_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_525_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_525_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_User>();

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_619_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_619_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetNextPageParam); \
	DECLARE_FUNCTION(execGetElement);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_619_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetNextPageParam); \
	DECLARE_FUNCTION(execGetElement);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_619_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_UserArray(); \
	friend struct Z_Construct_UClass_UPico_UserArray_Statics; \
public: \
	DECLARE_CLASS(UPico_UserArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_UserArray)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_619_INCLASS \
private: \
	static void StaticRegisterNativesUPico_UserArray(); \
	friend struct Z_Construct_UClass_UPico_UserArray_Statics; \
public: \
	DECLARE_CLASS(UPico_UserArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_UserArray)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_619_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_UserArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_UserArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_UserArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_UserArray); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_UserArray(UPico_UserArray&&); \
	NO_API UPico_UserArray(const UPico_UserArray&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_619_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_UserArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_UserArray(UPico_UserArray&&); \
	NO_API UPico_UserArray(const UPico_UserArray&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_UserArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_UserArray); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_UserArray)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_619_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UserArray() { return STRUCT_OFFSET(UPico_UserArray, UserArray); }


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_615_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_619_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_619_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_619_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_619_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_619_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_619_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_619_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_619_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_619_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_619_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_619_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_619_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_UserArray>();

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_655_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_655_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUser); \
	DECLARE_FUNCTION(execGetRoom);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_655_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUser); \
	DECLARE_FUNCTION(execGetRoom);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_655_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_UserAndRoom(); \
	friend struct Z_Construct_UClass_UPico_UserAndRoom_Statics; \
public: \
	DECLARE_CLASS(UPico_UserAndRoom, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_UserAndRoom)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_655_INCLASS \
private: \
	static void StaticRegisterNativesUPico_UserAndRoom(); \
	friend struct Z_Construct_UClass_UPico_UserAndRoom_Statics; \
public: \
	DECLARE_CLASS(UPico_UserAndRoom, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_UserAndRoom)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_655_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_UserAndRoom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_UserAndRoom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_UserAndRoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_UserAndRoom); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_UserAndRoom(UPico_UserAndRoom&&); \
	NO_API UPico_UserAndRoom(const UPico_UserAndRoom&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_655_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_UserAndRoom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_UserAndRoom(UPico_UserAndRoom&&); \
	NO_API UPico_UserAndRoom(const UPico_UserAndRoom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_UserAndRoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_UserAndRoom); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_UserAndRoom)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_655_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Room() { return STRUCT_OFFSET(UPico_UserAndRoom, Room); } \
	FORCEINLINE static uint32 __PPO__User() { return STRUCT_OFFSET(UPico_UserAndRoom, User); }


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_651_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_655_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_655_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_655_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_655_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_655_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_655_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_655_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_655_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_655_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_655_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_655_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_655_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_UserAndRoom>();

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_679_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_679_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetNextPageParam); \
	DECLARE_FUNCTION(execGetElement);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_679_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetNextPageParam); \
	DECLARE_FUNCTION(execGetElement);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_679_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_UserAndRoomArray(); \
	friend struct Z_Construct_UClass_UPico_UserAndRoomArray_Statics; \
public: \
	DECLARE_CLASS(UPico_UserAndRoomArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_UserAndRoomArray)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_679_INCLASS \
private: \
	static void StaticRegisterNativesUPico_UserAndRoomArray(); \
	friend struct Z_Construct_UClass_UPico_UserAndRoomArray_Statics; \
public: \
	DECLARE_CLASS(UPico_UserAndRoomArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_UserAndRoomArray)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_679_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_UserAndRoomArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_UserAndRoomArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_UserAndRoomArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_UserAndRoomArray); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_UserAndRoomArray(UPico_UserAndRoomArray&&); \
	NO_API UPico_UserAndRoomArray(const UPico_UserAndRoomArray&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_679_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_UserAndRoomArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_UserAndRoomArray(UPico_UserAndRoomArray&&); \
	NO_API UPico_UserAndRoomArray(const UPico_UserAndRoomArray&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_UserAndRoomArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_UserAndRoomArray); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_UserAndRoomArray)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_679_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UserAndRoomArray() { return STRUCT_OFFSET(UPico_UserAndRoomArray, UserAndRoomArray); }


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_675_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_679_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_679_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_679_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_679_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_679_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_679_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_679_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_679_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_679_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_679_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_679_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_679_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_UserAndRoomArray>();

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_711_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_711_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUserID); \
	DECLARE_FUNCTION(execGetAccessToken); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetAuthorizedPermission);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_711_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUserID); \
	DECLARE_FUNCTION(execGetAccessToken); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetAuthorizedPermission);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_711_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_PermissionResult(); \
	friend struct Z_Construct_UClass_UPico_PermissionResult_Statics; \
public: \
	DECLARE_CLASS(UPico_PermissionResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_PermissionResult)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_711_INCLASS \
private: \
	static void StaticRegisterNativesUPico_PermissionResult(); \
	friend struct Z_Construct_UClass_UPico_PermissionResult_Statics; \
public: \
	DECLARE_CLASS(UPico_PermissionResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_PermissionResult)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_711_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_PermissionResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_PermissionResult) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_PermissionResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_PermissionResult); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_PermissionResult(UPico_PermissionResult&&); \
	NO_API UPico_PermissionResult(const UPico_PermissionResult&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_711_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_PermissionResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_PermissionResult(UPico_PermissionResult&&); \
	NO_API UPico_PermissionResult(const UPico_PermissionResult&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_PermissionResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_PermissionResult); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_PermissionResult)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_711_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AuthorizedPermissions() { return STRUCT_OFFSET(UPico_PermissionResult, AuthorizedPermissions); }


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_708_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_711_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_711_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_711_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_711_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_711_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_711_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_711_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_711_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_711_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_711_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_711_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_711_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_PermissionResult>();

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_743_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_743_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRelationTypeValue); \
	DECLARE_FUNCTION(execGetRelationMapSize); \
	DECLARE_FUNCTION(execGetUserID); \
	DECLARE_FUNCTION(execContains);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_743_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRelationTypeValue); \
	DECLARE_FUNCTION(execGetRelationMapSize); \
	DECLARE_FUNCTION(execGetUserID); \
	DECLARE_FUNCTION(execContains);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_743_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_UserRelationResult(); \
	friend struct Z_Construct_UClass_UPico_UserRelationResult_Statics; \
public: \
	DECLARE_CLASS(UPico_UserRelationResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_UserRelationResult)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_743_INCLASS \
private: \
	static void StaticRegisterNativesUPico_UserRelationResult(); \
	friend struct Z_Construct_UClass_UPico_UserRelationResult_Statics; \
public: \
	DECLARE_CLASS(UPico_UserRelationResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_UserRelationResult)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_743_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_UserRelationResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_UserRelationResult) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_UserRelationResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_UserRelationResult); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_UserRelationResult(UPico_UserRelationResult&&); \
	NO_API UPico_UserRelationResult(const UPico_UserRelationResult&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_743_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_UserRelationResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_UserRelationResult(UPico_UserRelationResult&&); \
	NO_API UPico_UserRelationResult(const UPico_UserRelationResult&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_UserRelationResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_UserRelationResult); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_UserRelationResult)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_743_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UserRelationMap() { return STRUCT_OFFSET(UPico_UserRelationResult, UserRelationMap); }


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_740_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_743_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_743_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_743_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_743_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_743_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_743_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_743_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_743_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_743_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_743_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_743_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_743_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_UserRelationResult>();

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_779_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_779_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStatusMessage); \
	DECLARE_FUNCTION(execGetStatusCode); \
	DECLARE_FUNCTION(execGetHasEntitlement);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_779_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStatusMessage); \
	DECLARE_FUNCTION(execGetStatusCode); \
	DECLARE_FUNCTION(execGetHasEntitlement);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_779_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_EntitlementCheckResult(); \
	friend struct Z_Construct_UClass_UPico_EntitlementCheckResult_Statics; \
public: \
	DECLARE_CLASS(UPico_EntitlementCheckResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_EntitlementCheckResult)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_779_INCLASS \
private: \
	static void StaticRegisterNativesUPico_EntitlementCheckResult(); \
	friend struct Z_Construct_UClass_UPico_EntitlementCheckResult_Statics; \
public: \
	DECLARE_CLASS(UPico_EntitlementCheckResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_EntitlementCheckResult)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_779_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_EntitlementCheckResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_EntitlementCheckResult) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_EntitlementCheckResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_EntitlementCheckResult); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_EntitlementCheckResult(UPico_EntitlementCheckResult&&); \
	NO_API UPico_EntitlementCheckResult(const UPico_EntitlementCheckResult&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_779_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_EntitlementCheckResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_EntitlementCheckResult(UPico_EntitlementCheckResult&&); \
	NO_API UPico_EntitlementCheckResult(const UPico_EntitlementCheckResult&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_EntitlementCheckResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_EntitlementCheckResult); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_EntitlementCheckResult)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_779_PRIVATE_PROPERTY_OFFSET
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_776_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_779_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_779_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_779_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_779_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_779_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_779_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_779_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_779_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_779_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_779_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_779_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_779_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_EntitlementCheckResult>();

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_808_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_808_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetID);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_808_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetID);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_808_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_OrgScopedID(); \
	friend struct Z_Construct_UClass_UPico_OrgScopedID_Statics; \
public: \
	DECLARE_CLASS(UPico_OrgScopedID, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_OrgScopedID)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_808_INCLASS \
private: \
	static void StaticRegisterNativesUPico_OrgScopedID(); \
	friend struct Z_Construct_UClass_UPico_OrgScopedID_Statics; \
public: \
	DECLARE_CLASS(UPico_OrgScopedID, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_OrgScopedID)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_808_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_OrgScopedID(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_OrgScopedID) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_OrgScopedID); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_OrgScopedID); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_OrgScopedID(UPico_OrgScopedID&&); \
	NO_API UPico_OrgScopedID(const UPico_OrgScopedID&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_808_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_OrgScopedID(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_OrgScopedID(UPico_OrgScopedID&&); \
	NO_API UPico_OrgScopedID(const UPico_OrgScopedID&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_OrgScopedID); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_OrgScopedID); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_OrgScopedID)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_808_PRIVATE_PROPERTY_OFFSET
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_805_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_808_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_808_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_808_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_808_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_808_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_808_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_808_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_808_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_808_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_808_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_808_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h_808_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_OrgScopedID>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_User_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
