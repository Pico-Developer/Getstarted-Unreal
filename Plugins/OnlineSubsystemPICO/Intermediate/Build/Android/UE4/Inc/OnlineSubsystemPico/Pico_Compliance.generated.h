// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPico_DetectSensitiveResult;
class UObject;
enum class EDetectSensitiveScene : uint8;
enum class ESensitiveProposal : uint8;
#ifdef ONLINESUBSYSTEMPICO_Pico_Compliance_generated_h
#error "Pico_Compliance.generated.h already included, missing '#pragma once' in Pico_Compliance.h"
#endif
#define ONLINESUBSYSTEMPICO_Pico_Compliance_generated_h

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_16_DELEGATE \
struct _Script_OnlineSubsystemPico_eventDetectSensitive_Parms \
{ \
	bool bIsError; \
	int32 ErrorCode; \
	FString ErrorMessage; \
	UPico_DetectSensitiveResult* DetectSensitiveResult; \
}; \
static inline void FDetectSensitive_DelegateWrapper(const FScriptDelegate& DetectSensitive, bool bIsError, int32 ErrorCode, const FString& ErrorMessage, UPico_DetectSensitiveResult* DetectSensitiveResult) \
{ \
	_Script_OnlineSubsystemPico_eventDetectSensitive_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.DetectSensitiveResult=DetectSensitiveResult; \
	DetectSensitive.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_77_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_77_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDetectSensitive);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDetectSensitive);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePicoComplianceFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoComplianceFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoComplianceFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoComplianceFunction)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePicoComplianceFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoComplianceFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoComplianceFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoComplianceFunction)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoComplianceFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoComplianceFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoComplianceFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoComplianceFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoComplianceFunction(UOnlinePicoComplianceFunction&&); \
	NO_API UOnlinePicoComplianceFunction(const UOnlinePicoComplianceFunction&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoComplianceFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoComplianceFunction(UOnlinePicoComplianceFunction&&); \
	NO_API UOnlinePicoComplianceFunction(const UOnlinePicoComplianceFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoComplianceFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoComplianceFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoComplianceFunction)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_77_PRIVATE_PROPERTY_OFFSET
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_74_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_77_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_77_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_77_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_77_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_77_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_77_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_77_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UOnlinePicoComplianceFunction>();

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_107_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_107_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFilteredText); \
	DECLARE_FUNCTION(execGetSensitiveProposal);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFilteredText); \
	DECLARE_FUNCTION(execGetSensitiveProposal);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_107_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_DetectSensitiveResult(); \
	friend struct Z_Construct_UClass_UPico_DetectSensitiveResult_Statics; \
public: \
	DECLARE_CLASS(UPico_DetectSensitiveResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_DetectSensitiveResult)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_107_INCLASS \
private: \
	static void StaticRegisterNativesUPico_DetectSensitiveResult(); \
	friend struct Z_Construct_UClass_UPico_DetectSensitiveResult_Statics; \
public: \
	DECLARE_CLASS(UPico_DetectSensitiveResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_DetectSensitiveResult)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_107_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_DetectSensitiveResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_DetectSensitiveResult) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_DetectSensitiveResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_DetectSensitiveResult); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_DetectSensitiveResult(UPico_DetectSensitiveResult&&); \
	NO_API UPico_DetectSensitiveResult(const UPico_DetectSensitiveResult&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_107_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_DetectSensitiveResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_DetectSensitiveResult(UPico_DetectSensitiveResult&&); \
	NO_API UPico_DetectSensitiveResult(const UPico_DetectSensitiveResult&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_DetectSensitiveResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_DetectSensitiveResult); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_DetectSensitiveResult)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_107_PRIVATE_PROPERTY_OFFSET
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_103_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_107_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_107_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_107_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_107_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_107_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_107_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_107_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_107_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_107_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_107_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h_107_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_DetectSensitiveResult>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_Compliance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
