// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UOnlineSubsystemPicoManager;
struct FPicoOnlineLeaderboardWrite;
struct FPicoOnlineLeaderboardRead;
struct FPicoSystemInfo;
enum class ELaunchResult : uint8;
struct FLaunchDetails;
enum class EShareMediaType : uint8;
enum class EShareAppTyp : uint8;
struct FPicoDestination;
struct FPicoApplicationInvite;
struct FPicoUserInfo;
struct FPicoOnlineSessionSettings;
struct FPicoOnlineSession;
struct FPicoNamedOnlineSession;
enum class EOnlineSessionStatePicoType : uint8;
struct FPicoOnlineSessionSearchResult;
struct FPicoOnlineSessionSearch;
enum class ERtcMediaStreamType : uint8;
enum class ERtcStreamIndex : uint8;
enum class ERtcSyncInfoStreamType : uint8;
enum class ERtcEarMonitorMode : uint8;
enum class ERtcAudioScenarioType : uint8;
enum class ERtcAudioPlaybackDevice : uint8;
enum class ERtcPauseResumeMediaType : uint8;
enum class ERtcMuteState : uint8;
enum class ERtcRoomProfileType : uint8;
enum class ERtcEngineInitResult : uint8;
class UPico_User;
#ifdef ONLINESUBSYSTEMPICO_OnlinePicoFunctionLibrary_generated_h
#error "OnlinePicoFunctionLibrary.generated.h already included, missing '#pragma once' in OnlinePicoFunctionLibrary.h"
#endif
#define ONLINESUBSYSTEMPICO_OnlinePicoFunctionLibrary_generated_h

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_23_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindFileOrForder); \
	DECLARE_FUNCTION(execParseErrorInfo); \
	DECLARE_FUNCTION(execGetOnlineSubsystemPicoManager); \
	DECLARE_FUNCTION(execWriteLeaderboards); \
	DECLARE_FUNCTION(execReadLeaderboardsForFriends); \
	DECLARE_FUNCTION(execReadLeaderboards); \
	DECLARE_FUNCTION(execGetSystemInfo); \
	DECLARE_FUNCTION(execLogDeeplinkResult); \
	DECLARE_FUNCTION(execGetLaunchDetails); \
	DECLARE_FUNCTION(execLaunchStore); \
	DECLARE_FUNCTION(execLaunchOtherAppByAppId); \
	DECLARE_FUNCTION(execLaunchOtherAppByPresence); \
	DECLARE_FUNCTION(execGetVersion); \
	DECLARE_FUNCTION(execLaunchOtherApp); \
	DECLARE_FUNCTION(execShareMedia); \
	DECLARE_FUNCTION(execLaunchInvitePanel); \
	DECLARE_FUNCTION(execPresenceGetDestinationsList); \
	DECLARE_FUNCTION(execPresenceGetDestinations); \
	DECLARE_FUNCTION(execGetSendInvitesList); \
	DECLARE_FUNCTION(execPresenceSendInvites); \
	DECLARE_FUNCTION(execPresenceReadSendInvites); \
	DECLARE_FUNCTION(execPresenceSetExtra); \
	DECLARE_FUNCTION(execPresenceSetMatchSession); \
	DECLARE_FUNCTION(execPresenceSetLobbySession); \
	DECLARE_FUNCTION(execPresenceSetIsJoinable); \
	DECLARE_FUNCTION(execPresenceSetDestination); \
	DECLARE_FUNCTION(execPresenceSet); \
	DECLARE_FUNCTION(execGetInvitableFriendList); \
	DECLARE_FUNCTION(execReadInvitableUser); \
	DECLARE_FUNCTION(execPresenceClear); \
	DECLARE_FUNCTION(execSendSessionInviteToFriend); \
	DECLARE_FUNCTION(execGetSessionSettings); \
	DECLARE_FUNCTION(execAddNamedSession); \
	DECLARE_FUNCTION(execAddNamedSessionBySettings); \
	DECLARE_FUNCTION(execGetNamedSession); \
	DECLARE_FUNCTION(execGetSessionState); \
	DECLARE_FUNCTION(execDumpSessionState); \
	DECLARE_FUNCTION(execJoinSession); \
	DECLARE_FUNCTION(execFindSessionById); \
	DECLARE_FUNCTION(execFindSessions); \
	DECLARE_FUNCTION(execCancelMatchmaking); \
	DECLARE_FUNCTION(execStartMatchmaking); \
	DECLARE_FUNCTION(execIsPlayerInSession); \
	DECLARE_FUNCTION(execDestroySession); \
	DECLARE_FUNCTION(execEndSession); \
	DECLARE_FUNCTION(execUpdateSession); \
	DECLARE_FUNCTION(execStartSession); \
	DECLARE_FUNCTION(execCreateSession); \
	DECLARE_FUNCTION(execGameUninitialize); \
	DECLARE_FUNCTION(execGameInitialize); \
	DECLARE_FUNCTION(execIsGameInitSuccess); \
	DECLARE_FUNCTION(execRtcSendUserMessage); \
	DECLARE_FUNCTION(execRtcSendUserBytesBinaryMessage); \
	DECLARE_FUNCTION(execRtcSendUserBinaryMessage); \
	DECLARE_FUNCTION(execRtcSendRoomMessage); \
	DECLARE_FUNCTION(execRtcSendRoomBytesBinaryMessage); \
	DECLARE_FUNCTION(execRtcSendRoomBinaryMessage); \
	DECLARE_FUNCTION(execRtcRoomUnsubscribeStream); \
	DECLARE_FUNCTION(execRtcRoomUnPublishStream); \
	DECLARE_FUNCTION(execRtcRoomSubscribeStream); \
	DECLARE_FUNCTION(execRtcRoomSetRemoteAudioPlaybackVolume); \
	DECLARE_FUNCTION(execRtcRoomPublishStream); \
	DECLARE_FUNCTION(execRtcSendStreamSyncBytesInfo); \
	DECLARE_FUNCTION(execRtcSendStreamSyncInfo); \
	DECLARE_FUNCTION(execRtcUpdateToken); \
	DECLARE_FUNCTION(execRtcStopAudioCapture); \
	DECLARE_FUNCTION(execRtcStartAudioCapture); \
	DECLARE_FUNCTION(execRtcSetPlaybackVolume); \
	DECLARE_FUNCTION(execRtcSetEarMonitorVolume); \
	DECLARE_FUNCTION(execRtcSetEarMonitorMode); \
	DECLARE_FUNCTION(execRtcSetCaptureVolume); \
	DECLARE_FUNCTION(execRtcSetAudioScenario); \
	DECLARE_FUNCTION(execRtcSetAudioPlaybackDevice); \
	DECLARE_FUNCTION(execRtcRoomResumeAllSubscribedStream); \
	DECLARE_FUNCTION(execRtcRoomPauseAllSubscribedStream); \
	DECLARE_FUNCTION(execRtcUnPublishRoom); \
	DECLARE_FUNCTION(execRtcPublishRoom); \
	DECLARE_FUNCTION(execRtcMuteLocalAudio); \
	DECLARE_FUNCTION(execRtcLeaveRoom); \
	DECLARE_FUNCTION(execRtcEnableAudioPropertiesReport); \
	DECLARE_FUNCTION(execRtcDestroyRoom); \
	DECLARE_FUNCTION(execPicoRtcJoinRoom); \
	DECLARE_FUNCTION(execPicoGetRtcEngineInit); \
	DECLARE_FUNCTION(execPicoRtcGetToken); \
	DECLARE_FUNCTION(execPicoGetFriend); \
	DECLARE_FUNCTION(execPicoGetFriendList); \
	DECLARE_FUNCTION(execPicoReadFriendList); \
	DECLARE_FUNCTION(execGetLoginPicoUser); \
	DECLARE_FUNCTION(execPicoGetNickName); \
	DECLARE_FUNCTION(execPicoGetOpenIDToken); \
	DECLARE_FUNCTION(execPicoLogin);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindFileOrForder); \
	DECLARE_FUNCTION(execParseErrorInfo); \
	DECLARE_FUNCTION(execGetOnlineSubsystemPicoManager); \
	DECLARE_FUNCTION(execWriteLeaderboards); \
	DECLARE_FUNCTION(execReadLeaderboardsForFriends); \
	DECLARE_FUNCTION(execReadLeaderboards); \
	DECLARE_FUNCTION(execGetSystemInfo); \
	DECLARE_FUNCTION(execLogDeeplinkResult); \
	DECLARE_FUNCTION(execGetLaunchDetails); \
	DECLARE_FUNCTION(execLaunchStore); \
	DECLARE_FUNCTION(execLaunchOtherAppByAppId); \
	DECLARE_FUNCTION(execLaunchOtherAppByPresence); \
	DECLARE_FUNCTION(execGetVersion); \
	DECLARE_FUNCTION(execLaunchOtherApp); \
	DECLARE_FUNCTION(execShareMedia); \
	DECLARE_FUNCTION(execLaunchInvitePanel); \
	DECLARE_FUNCTION(execPresenceGetDestinationsList); \
	DECLARE_FUNCTION(execPresenceGetDestinations); \
	DECLARE_FUNCTION(execGetSendInvitesList); \
	DECLARE_FUNCTION(execPresenceSendInvites); \
	DECLARE_FUNCTION(execPresenceReadSendInvites); \
	DECLARE_FUNCTION(execPresenceSetExtra); \
	DECLARE_FUNCTION(execPresenceSetMatchSession); \
	DECLARE_FUNCTION(execPresenceSetLobbySession); \
	DECLARE_FUNCTION(execPresenceSetIsJoinable); \
	DECLARE_FUNCTION(execPresenceSetDestination); \
	DECLARE_FUNCTION(execPresenceSet); \
	DECLARE_FUNCTION(execGetInvitableFriendList); \
	DECLARE_FUNCTION(execReadInvitableUser); \
	DECLARE_FUNCTION(execPresenceClear); \
	DECLARE_FUNCTION(execSendSessionInviteToFriend); \
	DECLARE_FUNCTION(execGetSessionSettings); \
	DECLARE_FUNCTION(execAddNamedSession); \
	DECLARE_FUNCTION(execAddNamedSessionBySettings); \
	DECLARE_FUNCTION(execGetNamedSession); \
	DECLARE_FUNCTION(execGetSessionState); \
	DECLARE_FUNCTION(execDumpSessionState); \
	DECLARE_FUNCTION(execJoinSession); \
	DECLARE_FUNCTION(execFindSessionById); \
	DECLARE_FUNCTION(execFindSessions); \
	DECLARE_FUNCTION(execCancelMatchmaking); \
	DECLARE_FUNCTION(execStartMatchmaking); \
	DECLARE_FUNCTION(execIsPlayerInSession); \
	DECLARE_FUNCTION(execDestroySession); \
	DECLARE_FUNCTION(execEndSession); \
	DECLARE_FUNCTION(execUpdateSession); \
	DECLARE_FUNCTION(execStartSession); \
	DECLARE_FUNCTION(execCreateSession); \
	DECLARE_FUNCTION(execGameUninitialize); \
	DECLARE_FUNCTION(execGameInitialize); \
	DECLARE_FUNCTION(execIsGameInitSuccess); \
	DECLARE_FUNCTION(execRtcSendUserMessage); \
	DECLARE_FUNCTION(execRtcSendUserBytesBinaryMessage); \
	DECLARE_FUNCTION(execRtcSendUserBinaryMessage); \
	DECLARE_FUNCTION(execRtcSendRoomMessage); \
	DECLARE_FUNCTION(execRtcSendRoomBytesBinaryMessage); \
	DECLARE_FUNCTION(execRtcSendRoomBinaryMessage); \
	DECLARE_FUNCTION(execRtcRoomUnsubscribeStream); \
	DECLARE_FUNCTION(execRtcRoomUnPublishStream); \
	DECLARE_FUNCTION(execRtcRoomSubscribeStream); \
	DECLARE_FUNCTION(execRtcRoomSetRemoteAudioPlaybackVolume); \
	DECLARE_FUNCTION(execRtcRoomPublishStream); \
	DECLARE_FUNCTION(execRtcSendStreamSyncBytesInfo); \
	DECLARE_FUNCTION(execRtcSendStreamSyncInfo); \
	DECLARE_FUNCTION(execRtcUpdateToken); \
	DECLARE_FUNCTION(execRtcStopAudioCapture); \
	DECLARE_FUNCTION(execRtcStartAudioCapture); \
	DECLARE_FUNCTION(execRtcSetPlaybackVolume); \
	DECLARE_FUNCTION(execRtcSetEarMonitorVolume); \
	DECLARE_FUNCTION(execRtcSetEarMonitorMode); \
	DECLARE_FUNCTION(execRtcSetCaptureVolume); \
	DECLARE_FUNCTION(execRtcSetAudioScenario); \
	DECLARE_FUNCTION(execRtcSetAudioPlaybackDevice); \
	DECLARE_FUNCTION(execRtcRoomResumeAllSubscribedStream); \
	DECLARE_FUNCTION(execRtcRoomPauseAllSubscribedStream); \
	DECLARE_FUNCTION(execRtcUnPublishRoom); \
	DECLARE_FUNCTION(execRtcPublishRoom); \
	DECLARE_FUNCTION(execRtcMuteLocalAudio); \
	DECLARE_FUNCTION(execRtcLeaveRoom); \
	DECLARE_FUNCTION(execRtcEnableAudioPropertiesReport); \
	DECLARE_FUNCTION(execRtcDestroyRoom); \
	DECLARE_FUNCTION(execPicoRtcJoinRoom); \
	DECLARE_FUNCTION(execPicoGetRtcEngineInit); \
	DECLARE_FUNCTION(execPicoRtcGetToken); \
	DECLARE_FUNCTION(execPicoGetFriend); \
	DECLARE_FUNCTION(execPicoGetFriendList); \
	DECLARE_FUNCTION(execPicoReadFriendList); \
	DECLARE_FUNCTION(execGetLoginPicoUser); \
	DECLARE_FUNCTION(execPicoGetNickName); \
	DECLARE_FUNCTION(execPicoGetOpenIDToken); \
	DECLARE_FUNCTION(execPicoLogin);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePicoFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOnlinePicoFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoFunctionLibrary)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePicoFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOnlinePicoFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoFunctionLibrary)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoFunctionLibrary(UOnlinePicoFunctionLibrary&&); \
	NO_API UOnlinePicoFunctionLibrary(const UOnlinePicoFunctionLibrary&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoFunctionLibrary(UOnlinePicoFunctionLibrary&&); \
	NO_API UOnlinePicoFunctionLibrary(const UOnlinePicoFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOnlinePicoFunctionLibrary)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_23_PRIVATE_PROPERTY_OFFSET
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_20_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_23_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_23_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_23_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_23_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_23_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_23_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_23_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UOnlinePicoFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_OnlinePicoFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
