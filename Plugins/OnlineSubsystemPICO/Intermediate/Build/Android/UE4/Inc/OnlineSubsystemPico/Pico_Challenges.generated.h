// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPico_Challenge;
class UPico_ChallengeArray;
class UPico_ChallengeEntryArray;
class UObject;
struct FPico_ChallengeOptions;
enum class ELeaderboardStartAt : uint8;
enum class ELeaderboardFilterType : uint8;
class UPico_UserArray;
class UPico_Leaderboard;
enum class EChallengeVisibility : uint8;
struct FDateTime;
enum class EChallengeCreationType : uint8;
class UPico_User;
class UPico_ChallengeEntry;
#ifdef ONLINESUBSYSTEMPICO_Pico_Challenges_generated_h
#error "Pico_Challenges.generated.h already included, missing '#pragma once' in Pico_Challenges.h"
#endif
#define ONLINESUBSYSTEMPICO_Pico_Challenges_generated_h

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPico_ChallengeOptions_Statics; \
	ONLINESUBSYSTEMPICO_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMPICO_API UScriptStruct* StaticStruct<struct FPico_ChallengeOptions>();

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_70_DELEGATE \
struct _Script_OnlineSubsystemPico_eventChallengeLaunchInvitableUserFlow_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
}; \
static inline void FChallengeLaunchInvitableUserFlow_DelegateWrapper(const FScriptDelegate& ChallengeLaunchInvitableUserFlow, bool bIsError, int32 ErrorCode, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventChallengeLaunchInvitableUserFlow_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	ChallengeLaunchInvitableUserFlow.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_69_DELEGATE \
struct _Script_OnlineSubsystemPico_eventChallengeJoin_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_Challenge* Challenge; \
}; \
static inline void FChallengeJoin_DelegateWrapper(const FScriptDelegate& ChallengeJoin, bool bIsError, const FString& ErrorMessage, UPico_Challenge* Challenge) \
{ \
	_Script_OnlineSubsystemPico_eventChallengeJoin_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.Challenge=Challenge; \
	ChallengeJoin.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_66_DELEGATE \
struct _Script_OnlineSubsystemPico_eventChallengeLeave_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_Challenge* Challenge; \
}; \
static inline void FChallengeLeave_DelegateWrapper(const FScriptDelegate& ChallengeLeave, bool bIsError, const FString& ErrorMessage, UPico_Challenge* Challenge) \
{ \
	_Script_OnlineSubsystemPico_eventChallengeLeave_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.Challenge=Challenge; \
	ChallengeLeave.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_63_DELEGATE \
struct _Script_OnlineSubsystemPico_eventChallengeInvite_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_Challenge* Challenge; \
}; \
static inline void FChallengeInvite_DelegateWrapper(const FScriptDelegate& ChallengeInvite, bool bIsError, const FString& ErrorMessage, UPico_Challenge* Challenge) \
{ \
	_Script_OnlineSubsystemPico_eventChallengeInvite_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.Challenge=Challenge; \
	ChallengeInvite.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_60_DELEGATE \
struct _Script_OnlineSubsystemPico_eventChallengeGetList_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_ChallengeArray* ChallengeList; \
}; \
static inline void FChallengeGetList_DelegateWrapper(const FScriptDelegate& ChallengeGetList, bool bIsError, const FString& ErrorMessage, UPico_ChallengeArray* ChallengeList) \
{ \
	_Script_OnlineSubsystemPico_eventChallengeGetList_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.ChallengeList=ChallengeList; \
	ChallengeGetList.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_57_DELEGATE \
struct _Script_OnlineSubsystemPico_eventChallengeGetEntriesByIds_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_ChallengeEntryArray* ChallengeEntryList; \
}; \
static inline void FChallengeGetEntriesByIds_DelegateWrapper(const FScriptDelegate& ChallengeGetEntriesByIds, bool bIsError, const FString& ErrorMessage, UPico_ChallengeEntryArray* ChallengeEntryList) \
{ \
	_Script_OnlineSubsystemPico_eventChallengeGetEntriesByIds_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.ChallengeEntryList=ChallengeEntryList; \
	ChallengeGetEntriesByIds.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_54_DELEGATE \
struct _Script_OnlineSubsystemPico_eventChallengeGetEntriesAfterRank_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_ChallengeEntryArray* ChallengeEntryList; \
}; \
static inline void FChallengeGetEntriesAfterRank_DelegateWrapper(const FScriptDelegate& ChallengeGetEntriesAfterRank, bool bIsError, const FString& ErrorMessage, UPico_ChallengeEntryArray* ChallengeEntryList) \
{ \
	_Script_OnlineSubsystemPico_eventChallengeGetEntriesAfterRank_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.ChallengeEntryList=ChallengeEntryList; \
	ChallengeGetEntriesAfterRank.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_51_DELEGATE \
struct _Script_OnlineSubsystemPico_eventChallengeGetEntries_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_ChallengeEntryArray* ChallengeEntryList; \
}; \
static inline void FChallengeGetEntries_DelegateWrapper(const FScriptDelegate& ChallengeGetEntries, bool bIsError, const FString& ErrorMessage, UPico_ChallengeEntryArray* ChallengeEntryList) \
{ \
	_Script_OnlineSubsystemPico_eventChallengeGetEntries_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.ChallengeEntryList=ChallengeEntryList; \
	ChallengeGetEntries.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_48_DELEGATE \
struct _Script_OnlineSubsystemPico_eventChallengeGet_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_Challenge* Challenge; \
}; \
static inline void FChallengeGet_DelegateWrapper(const FScriptDelegate& ChallengeGet, bool bIsError, const FString& ErrorMessage, UPico_Challenge* Challenge) \
{ \
	_Script_OnlineSubsystemPico_eventChallengeGet_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.Challenge=Challenge; \
	ChallengeGet.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_284_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_284_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLaunchInvitableUserFlow); \
	DECLARE_FUNCTION(execInvite); \
	DECLARE_FUNCTION(execLeave); \
	DECLARE_FUNCTION(execJoin); \
	DECLARE_FUNCTION(execGetList); \
	DECLARE_FUNCTION(execGetEntriesByIds); \
	DECLARE_FUNCTION(execGetEntriesAfterRank); \
	DECLARE_FUNCTION(execGetEntries); \
	DECLARE_FUNCTION(execGet);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_284_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLaunchInvitableUserFlow); \
	DECLARE_FUNCTION(execInvite); \
	DECLARE_FUNCTION(execLeave); \
	DECLARE_FUNCTION(execJoin); \
	DECLARE_FUNCTION(execGetList); \
	DECLARE_FUNCTION(execGetEntriesByIds); \
	DECLARE_FUNCTION(execGetEntriesAfterRank); \
	DECLARE_FUNCTION(execGetEntries); \
	DECLARE_FUNCTION(execGet);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_284_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePicoChallengesFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoChallengesFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoChallengesFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoChallengesFunction)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_284_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePicoChallengesFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoChallengesFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoChallengesFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoChallengesFunction)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_284_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoChallengesFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoChallengesFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoChallengesFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoChallengesFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoChallengesFunction(UOnlinePicoChallengesFunction&&); \
	NO_API UOnlinePicoChallengesFunction(const UOnlinePicoChallengesFunction&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_284_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoChallengesFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoChallengesFunction(UOnlinePicoChallengesFunction&&); \
	NO_API UOnlinePicoChallengesFunction(const UOnlinePicoChallengesFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoChallengesFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoChallengesFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoChallengesFunction)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_284_PRIVATE_PROPERTY_OFFSET
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_281_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_284_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_284_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_284_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_284_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_284_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_284_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_284_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_284_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_284_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_284_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_284_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_284_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UOnlinePicoChallengesFunction>();

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_420_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_420_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetParticipantsOptional); \
	DECLARE_FUNCTION(execGetLeaderboard); \
	DECLARE_FUNCTION(execGetInvitedUsersOptional); \
	DECLARE_FUNCTION(execGetVisibility); \
	DECLARE_FUNCTION(execGetTitle); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetStartDate); \
	DECLARE_FUNCTION(execGetEndDate); \
	DECLARE_FUNCTION(execGetStartDateTime); \
	DECLARE_FUNCTION(execGetEndDateTime); \
	DECLARE_FUNCTION(execGetCreationType);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_420_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetParticipantsOptional); \
	DECLARE_FUNCTION(execGetLeaderboard); \
	DECLARE_FUNCTION(execGetInvitedUsersOptional); \
	DECLARE_FUNCTION(execGetVisibility); \
	DECLARE_FUNCTION(execGetTitle); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetStartDate); \
	DECLARE_FUNCTION(execGetEndDate); \
	DECLARE_FUNCTION(execGetStartDateTime); \
	DECLARE_FUNCTION(execGetEndDateTime); \
	DECLARE_FUNCTION(execGetCreationType);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_420_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_Challenge(); \
	friend struct Z_Construct_UClass_UPico_Challenge_Statics; \
public: \
	DECLARE_CLASS(UPico_Challenge, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_Challenge)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_420_INCLASS \
private: \
	static void StaticRegisterNativesUPico_Challenge(); \
	friend struct Z_Construct_UClass_UPico_Challenge_Statics; \
public: \
	DECLARE_CLASS(UPico_Challenge, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_Challenge)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_420_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_Challenge(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_Challenge) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_Challenge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_Challenge); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_Challenge(UPico_Challenge&&); \
	NO_API UPico_Challenge(const UPico_Challenge&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_420_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_Challenge(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_Challenge(UPico_Challenge&&); \
	NO_API UPico_Challenge(const UPico_Challenge&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_Challenge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_Challenge); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_Challenge)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_420_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InvitedUsersOptional() { return STRUCT_OFFSET(UPico_Challenge, InvitedUsersOptional); } \
	FORCEINLINE static uint32 __PPO__ParticipantsOptional() { return STRUCT_OFFSET(UPico_Challenge, ParticipantsOptional); } \
	FORCEINLINE static uint32 __PPO__Leaderboard() { return STRUCT_OFFSET(UPico_Challenge, Leaderboard); }


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_417_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_420_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_420_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_420_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_420_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_420_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_420_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_420_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_420_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_420_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_420_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_420_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_420_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_Challenge>();

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_490_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_490_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUser); \
	DECLARE_FUNCTION(execGetTimestamp); \
	DECLARE_FUNCTION(execGetScore); \
	DECLARE_FUNCTION(execGetRank); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetExtraDataString); \
	DECLARE_FUNCTION(execGetExtraData); \
	DECLARE_FUNCTION(execGetDisplayScore);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_490_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUser); \
	DECLARE_FUNCTION(execGetTimestamp); \
	DECLARE_FUNCTION(execGetScore); \
	DECLARE_FUNCTION(execGetRank); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetExtraDataString); \
	DECLARE_FUNCTION(execGetExtraData); \
	DECLARE_FUNCTION(execGetDisplayScore);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_490_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_ChallengeEntry(); \
	friend struct Z_Construct_UClass_UPico_ChallengeEntry_Statics; \
public: \
	DECLARE_CLASS(UPico_ChallengeEntry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_ChallengeEntry)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_490_INCLASS \
private: \
	static void StaticRegisterNativesUPico_ChallengeEntry(); \
	friend struct Z_Construct_UClass_UPico_ChallengeEntry_Statics; \
public: \
	DECLARE_CLASS(UPico_ChallengeEntry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_ChallengeEntry)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_490_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_ChallengeEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_ChallengeEntry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_ChallengeEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_ChallengeEntry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_ChallengeEntry(UPico_ChallengeEntry&&); \
	NO_API UPico_ChallengeEntry(const UPico_ChallengeEntry&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_490_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_ChallengeEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_ChallengeEntry(UPico_ChallengeEntry&&); \
	NO_API UPico_ChallengeEntry(const UPico_ChallengeEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_ChallengeEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_ChallengeEntry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_ChallengeEntry)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_490_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__User() { return STRUCT_OFFSET(UPico_ChallengeEntry, User); }


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_487_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_490_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_490_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_490_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_490_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_490_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_490_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_490_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_490_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_490_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_490_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_490_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_490_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_ChallengeEntry>();

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_544_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_544_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTotalCount); \
	DECLARE_FUNCTION(execHasPreviousPage); \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetElement);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_544_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTotalCount); \
	DECLARE_FUNCTION(execHasPreviousPage); \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetElement);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_544_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_ChallengeEntryArray(); \
	friend struct Z_Construct_UClass_UPico_ChallengeEntryArray_Statics; \
public: \
	DECLARE_CLASS(UPico_ChallengeEntryArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_ChallengeEntryArray)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_544_INCLASS \
private: \
	static void StaticRegisterNativesUPico_ChallengeEntryArray(); \
	friend struct Z_Construct_UClass_UPico_ChallengeEntryArray_Statics; \
public: \
	DECLARE_CLASS(UPico_ChallengeEntryArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_ChallengeEntryArray)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_544_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_ChallengeEntryArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_ChallengeEntryArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_ChallengeEntryArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_ChallengeEntryArray); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_ChallengeEntryArray(UPico_ChallengeEntryArray&&); \
	NO_API UPico_ChallengeEntryArray(const UPico_ChallengeEntryArray&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_544_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_ChallengeEntryArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_ChallengeEntryArray(UPico_ChallengeEntryArray&&); \
	NO_API UPico_ChallengeEntryArray(const UPico_ChallengeEntryArray&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_ChallengeEntryArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_ChallengeEntryArray); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_ChallengeEntryArray)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_544_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ChallengeEntryArray() { return STRUCT_OFFSET(UPico_ChallengeEntryArray, ChallengeEntryArray); }


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_541_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_544_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_544_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_544_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_544_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_544_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_544_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_544_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_544_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_544_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_544_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_544_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_544_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_ChallengeEntryArray>();

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_578_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_578_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTotalCount); \
	DECLARE_FUNCTION(execHasPreviousPage); \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetElement);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_578_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTotalCount); \
	DECLARE_FUNCTION(execHasPreviousPage); \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetElement);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_578_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_ChallengeArray(); \
	friend struct Z_Construct_UClass_UPico_ChallengeArray_Statics; \
public: \
	DECLARE_CLASS(UPico_ChallengeArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_ChallengeArray)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_578_INCLASS \
private: \
	static void StaticRegisterNativesUPico_ChallengeArray(); \
	friend struct Z_Construct_UClass_UPico_ChallengeArray_Statics; \
public: \
	DECLARE_CLASS(UPico_ChallengeArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_ChallengeArray)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_578_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_ChallengeArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_ChallengeArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_ChallengeArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_ChallengeArray); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_ChallengeArray(UPico_ChallengeArray&&); \
	NO_API UPico_ChallengeArray(const UPico_ChallengeArray&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_578_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_ChallengeArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_ChallengeArray(UPico_ChallengeArray&&); \
	NO_API UPico_ChallengeArray(const UPico_ChallengeArray&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_ChallengeArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_ChallengeArray); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_ChallengeArray)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_578_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ChallengeArray() { return STRUCT_OFFSET(UPico_ChallengeArray, ChallengeArray); }


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_575_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_578_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_578_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_578_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_578_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_578_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_578_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_578_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_578_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_578_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_578_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_578_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h_578_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_ChallengeArray>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Challenges_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
