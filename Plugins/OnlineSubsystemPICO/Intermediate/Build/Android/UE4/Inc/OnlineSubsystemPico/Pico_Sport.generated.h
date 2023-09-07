// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPico_SportUserInfo;
class UPico_SportSummary;
class UPico_SportDailySummaryArray;
struct FDateTime;
class UObject;
class UPico_SportDailySummary;
enum class ESportTarget : uint8;
enum class EUserGender : uint8;
#ifdef ONLINESUBSYSTEMPICO_Pico_Sport_generated_h
#error "Pico_Sport.generated.h already included, missing '#pragma once' in Pico_Sport.h"
#endif
#define ONLINESUBSYSTEMPICO_Pico_Sport_generated_h

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_24_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetSportUserInfo_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_SportUserInfo* SportUserInfo; \
}; \
static inline void FGetSportUserInfo_DelegateWrapper(const FScriptDelegate& GetSportUserInfo, bool bIsError, const FString& ErrorMessage, UPico_SportUserInfo* SportUserInfo) \
{ \
	_Script_OnlineSubsystemPico_eventGetSportUserInfo_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.SportUserInfo=SportUserInfo; \
	GetSportUserInfo.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_23_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetSummary_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_SportSummary* SportSummary; \
}; \
static inline void FGetSummary_DelegateWrapper(const FScriptDelegate& GetSummary, bool bIsError, const FString& ErrorMessage, UPico_SportSummary* SportSummary) \
{ \
	_Script_OnlineSubsystemPico_eventGetSummary_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.SportSummary=SportSummary; \
	GetSummary.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_22_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetDailySummary_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_SportDailySummaryArray* SportDailySummaryArray; \
}; \
static inline void FGetDailySummary_DelegateWrapper(const FScriptDelegate& GetDailySummary, bool bIsError, const FString& ErrorMessage, UPico_SportDailySummaryArray* SportDailySummaryArray) \
{ \
	_Script_OnlineSubsystemPico_eventGetDailySummary_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.SportDailySummaryArray=SportDailySummaryArray; \
	GetDailySummary.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_117_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_117_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertInt64ToDateTime); \
	DECLARE_FUNCTION(execConvertDateTimeToInt64); \
	DECLARE_FUNCTION(execGetSportUserInfo); \
	DECLARE_FUNCTION(execGetSummary); \
	DECLARE_FUNCTION(execGetDailySummary);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertInt64ToDateTime); \
	DECLARE_FUNCTION(execConvertDateTimeToInt64); \
	DECLARE_FUNCTION(execGetSportUserInfo); \
	DECLARE_FUNCTION(execGetSummary); \
	DECLARE_FUNCTION(execGetDailySummary);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePicoSportFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoSportFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoSportFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoSportFunction)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_117_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePicoSportFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoSportFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoSportFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoSportFunction)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_117_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoSportFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoSportFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoSportFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoSportFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoSportFunction(UOnlinePicoSportFunction&&); \
	NO_API UOnlinePicoSportFunction(const UOnlinePicoSportFunction&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_117_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoSportFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoSportFunction(UOnlinePicoSportFunction&&); \
	NO_API UOnlinePicoSportFunction(const UOnlinePicoSportFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoSportFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoSportFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoSportFunction)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_117_PRIVATE_PROPERTY_OFFSET
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_114_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_117_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_117_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_117_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_117_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_117_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_117_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_117_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_117_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_117_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UOnlinePicoSportFunction>();

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_199_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_199_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlanCalorie); \
	DECLARE_FUNCTION(execGetCalorie); \
	DECLARE_FUNCTION(execGetPlanDurationInMinutes); \
	DECLARE_FUNCTION(execGetDurationInSeconds); \
	DECLARE_FUNCTION(execGetDate); \
	DECLARE_FUNCTION(execGetID);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_199_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlanCalorie); \
	DECLARE_FUNCTION(execGetCalorie); \
	DECLARE_FUNCTION(execGetPlanDurationInMinutes); \
	DECLARE_FUNCTION(execGetDurationInSeconds); \
	DECLARE_FUNCTION(execGetDate); \
	DECLARE_FUNCTION(execGetID);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_199_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_SportDailySummary(); \
	friend struct Z_Construct_UClass_UPico_SportDailySummary_Statics; \
public: \
	DECLARE_CLASS(UPico_SportDailySummary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_SportDailySummary)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_199_INCLASS \
private: \
	static void StaticRegisterNativesUPico_SportDailySummary(); \
	friend struct Z_Construct_UClass_UPico_SportDailySummary_Statics; \
public: \
	DECLARE_CLASS(UPico_SportDailySummary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_SportDailySummary)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_199_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_SportDailySummary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_SportDailySummary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_SportDailySummary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_SportDailySummary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_SportDailySummary(UPico_SportDailySummary&&); \
	NO_API UPico_SportDailySummary(const UPico_SportDailySummary&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_199_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_SportDailySummary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_SportDailySummary(UPico_SportDailySummary&&); \
	NO_API UPico_SportDailySummary(const UPico_SportDailySummary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_SportDailySummary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_SportDailySummary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_SportDailySummary)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_199_PRIVATE_PROPERTY_OFFSET
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_196_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_199_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_199_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_199_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_199_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_199_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_199_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_199_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_199_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_199_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_199_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_199_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_199_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_SportDailySummary>();

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_243_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_243_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetElement); \
	DECLARE_FUNCTION(execGetSize);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_243_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetElement); \
	DECLARE_FUNCTION(execGetSize);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_243_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_SportDailySummaryArray(); \
	friend struct Z_Construct_UClass_UPico_SportDailySummaryArray_Statics; \
public: \
	DECLARE_CLASS(UPico_SportDailySummaryArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_SportDailySummaryArray)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_243_INCLASS \
private: \
	static void StaticRegisterNativesUPico_SportDailySummaryArray(); \
	friend struct Z_Construct_UClass_UPico_SportDailySummaryArray_Statics; \
public: \
	DECLARE_CLASS(UPico_SportDailySummaryArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_SportDailySummaryArray)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_243_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_SportDailySummaryArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_SportDailySummaryArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_SportDailySummaryArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_SportDailySummaryArray); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_SportDailySummaryArray(UPico_SportDailySummaryArray&&); \
	NO_API UPico_SportDailySummaryArray(const UPico_SportDailySummaryArray&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_243_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_SportDailySummaryArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_SportDailySummaryArray(UPico_SportDailySummaryArray&&); \
	NO_API UPico_SportDailySummaryArray(const UPico_SportDailySummaryArray&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_SportDailySummaryArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_SportDailySummaryArray); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_SportDailySummaryArray)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_243_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SportDailySummaryArray() { return STRUCT_OFFSET(UPico_SportDailySummaryArray, SportDailySummaryArray); }


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_240_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_243_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_243_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_243_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_243_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_243_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_243_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_243_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_243_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_243_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_243_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_243_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_243_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_SportDailySummaryArray>();

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_268_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_268_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEndTime); \
	DECLARE_FUNCTION(execGetStartTime); \
	DECLARE_FUNCTION(execGetCalorie); \
	DECLARE_FUNCTION(execGetDurationInSeconds);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_268_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEndTime); \
	DECLARE_FUNCTION(execGetStartTime); \
	DECLARE_FUNCTION(execGetCalorie); \
	DECLARE_FUNCTION(execGetDurationInSeconds);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_268_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_SportSummary(); \
	friend struct Z_Construct_UClass_UPico_SportSummary_Statics; \
public: \
	DECLARE_CLASS(UPico_SportSummary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_SportSummary)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_268_INCLASS \
private: \
	static void StaticRegisterNativesUPico_SportSummary(); \
	friend struct Z_Construct_UClass_UPico_SportSummary_Statics; \
public: \
	DECLARE_CLASS(UPico_SportSummary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_SportSummary)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_268_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_SportSummary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_SportSummary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_SportSummary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_SportSummary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_SportSummary(UPico_SportSummary&&); \
	NO_API UPico_SportSummary(const UPico_SportSummary&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_268_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_SportSummary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_SportSummary(UPico_SportSummary&&); \
	NO_API UPico_SportSummary(const UPico_SportSummary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_SportSummary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_SportSummary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_SportSummary)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_268_PRIVATE_PROPERTY_OFFSET
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_265_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_268_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_268_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_268_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_268_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_268_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_268_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_268_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_268_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_268_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_268_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_268_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_268_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_SportSummary>();

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_301_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_301_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSportTarget); \
	DECLARE_FUNCTION(execGetDaysPerWeek); \
	DECLARE_FUNCTION(execGetDailyDurationInMinutes); \
	DECLARE_FUNCTION(execGetSportLevel); \
	DECLARE_FUNCTION(execGetWeight); \
	DECLARE_FUNCTION(execGetStature); \
	DECLARE_FUNCTION(execGetBirthday); \
	DECLARE_FUNCTION(execGetGender);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_301_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSportTarget); \
	DECLARE_FUNCTION(execGetDaysPerWeek); \
	DECLARE_FUNCTION(execGetDailyDurationInMinutes); \
	DECLARE_FUNCTION(execGetSportLevel); \
	DECLARE_FUNCTION(execGetWeight); \
	DECLARE_FUNCTION(execGetStature); \
	DECLARE_FUNCTION(execGetBirthday); \
	DECLARE_FUNCTION(execGetGender);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_301_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_SportUserInfo(); \
	friend struct Z_Construct_UClass_UPico_SportUserInfo_Statics; \
public: \
	DECLARE_CLASS(UPico_SportUserInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_SportUserInfo)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_301_INCLASS \
private: \
	static void StaticRegisterNativesUPico_SportUserInfo(); \
	friend struct Z_Construct_UClass_UPico_SportUserInfo_Statics; \
public: \
	DECLARE_CLASS(UPico_SportUserInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_SportUserInfo)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_301_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_SportUserInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_SportUserInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_SportUserInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_SportUserInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_SportUserInfo(UPico_SportUserInfo&&); \
	NO_API UPico_SportUserInfo(const UPico_SportUserInfo&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_301_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_SportUserInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_SportUserInfo(UPico_SportUserInfo&&); \
	NO_API UPico_SportUserInfo(const UPico_SportUserInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_SportUserInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_SportUserInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_SportUserInfo)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_301_PRIVATE_PROPERTY_OFFSET
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_298_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_301_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_301_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_301_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_301_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_301_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_301_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_301_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_301_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_301_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_301_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_301_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h_301_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_SportUserInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Sport_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
