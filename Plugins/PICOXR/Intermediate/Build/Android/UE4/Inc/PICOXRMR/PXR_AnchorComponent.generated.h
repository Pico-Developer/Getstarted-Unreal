// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPICOSpatialTrackingState : uint8;
enum class EPICOSpatialTrackingStateMessage : uint8;
struct FPICOAnchorUUID;
struct FPICOAnchor;
#ifdef PICOXRMR_PXR_AnchorComponent_generated_h
#error "PXR_AnchorComponent.generated.h already included, missing '#pragma once' in PXR_AnchorComponent.h"
#endif
#define PICOXRMR_PXR_AnchorComponent_generated_h

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_16_SPARSE_DATA
#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_16_RPC_WRAPPERS
#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_16_EVENT_PARMS \
	struct PICOMREventComponent_eventOnSpatialTrackingStateUpdate_Parms \
	{ \
		EPICOSpatialTrackingState SpatialTrackingState; \
		EPICOSpatialTrackingStateMessage SpatialTrackingStateMessage; \
	};


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_16_CALLBACK_WRAPPERS
#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPICOMREventComponent(); \
	friend struct Z_Construct_UClass_UPICOMREventComponent_Statics; \
public: \
	DECLARE_CLASS(UPICOMREventComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOMREventComponent)


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPICOMREventComponent(); \
	friend struct Z_Construct_UClass_UPICOMREventComponent_Statics; \
public: \
	DECLARE_CLASS(UPICOMREventComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOMREventComponent)


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOMREventComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOMREventComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOMREventComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOMREventComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOMREventComponent(UPICOMREventComponent&&); \
	NO_API UPICOMREventComponent(const UPICOMREventComponent&); \
public:


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOMREventComponent(UPICOMREventComponent&&); \
	NO_API UPICOMREventComponent(const UPICOMREventComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOMREventComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOMREventComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOMREventComponent)


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_16_PRIVATE_PROPERTY_OFFSET
#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_13_PROLOG \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_16_EVENT_PARMS


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_16_SPARSE_DATA \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_16_RPC_WRAPPERS \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_16_CALLBACK_WRAPPERS \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_16_INCLASS \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_16_SPARSE_DATA \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_16_CALLBACK_WRAPPERS \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_16_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRMR_API UClass* StaticClass<class UPICOMREventComponent>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_33_SPARSE_DATA
#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAnchorUUIDString); \
	DECLARE_FUNCTION(execGetAnchorUUID); \
	DECLARE_FUNCTION(execSetAnchorUUID); \
	DECLARE_FUNCTION(execIsAnchorValid); \
	DECLARE_FUNCTION(execGetAnchorHandleString); \
	DECLARE_FUNCTION(execSetAnchorHandle); \
	DECLARE_FUNCTION(execGetAnchorHandle);


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAnchorUUIDString); \
	DECLARE_FUNCTION(execGetAnchorUUID); \
	DECLARE_FUNCTION(execSetAnchorUUID); \
	DECLARE_FUNCTION(execIsAnchorValid); \
	DECLARE_FUNCTION(execGetAnchorHandleString); \
	DECLARE_FUNCTION(execSetAnchorHandle); \
	DECLARE_FUNCTION(execGetAnchorHandle);


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPICOAnchorComponent(); \
	friend struct Z_Construct_UClass_UPICOAnchorComponent_Statics; \
public: \
	DECLARE_CLASS(UPICOAnchorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOAnchorComponent)


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUPICOAnchorComponent(); \
	friend struct Z_Construct_UClass_UPICOAnchorComponent_Statics; \
public: \
	DECLARE_CLASS(UPICOAnchorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PICOXRMR"), NO_API) \
	DECLARE_SERIALIZER(UPICOAnchorComponent)


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOAnchorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOAnchorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOAnchorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOAnchorComponent(UPICOAnchorComponent&&); \
	NO_API UPICOAnchorComponent(const UPICOAnchorComponent&); \
public:


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOAnchorComponent(UPICOAnchorComponent&&); \
	NO_API UPICOAnchorComponent(const UPICOAnchorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOAnchorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOAnchorComponent)


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_33_PRIVATE_PROPERTY_OFFSET
#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_30_PROLOG
#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_33_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_33_SPARSE_DATA \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_33_RPC_WRAPPERS \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_33_INCLASS \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_33_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_33_SPARSE_DATA \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_33_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRMR_API UClass* StaticClass<class UPICOAnchorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_AnchorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
