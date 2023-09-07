// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPXREyePupilInfo;
struct FPXREyeTrackingDataGetInfo;
struct FPXREyeTrackingData;
struct FPXREyeTrackingStopInfo;
struct FPXREyeTrackingStartInfo;
struct FPXREyeTrackingState;
enum class EPXREyeTrackingMode : uint8;
struct FPXRFaceTrackingDataGetInfo;
struct FPXRFaceTrackingData;
struct FPXRFaceTrackingStopInfo;
struct FPXRFaceTrackingStartInfo;
struct FPXRFaceTrackingState;
enum class EPXRFaceTrackingMode : uint8;
#ifdef PICOXRMOTIONTRACKING_PXR_MotionTrackingFunctionLibrary_generated_h
#error "PXR_MotionTrackingFunctionLibrary.generated.h already included, missing '#pragma once' in PXR_MotionTrackingFunctionLibrary.h"
#endif
#define PICOXRMOTIONTRACKING_PXR_MotionTrackingFunctionLibrary_generated_h

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_13_SPARSE_DATA
#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEyePupilInfo); \
	DECLARE_FUNCTION(execGetEyeOpenness); \
	DECLARE_FUNCTION(execGetEyeTrackingData); \
	DECLARE_FUNCTION(execStopEyeTracking); \
	DECLARE_FUNCTION(execStartEyeTracking); \
	DECLARE_FUNCTION(execGetEyeTrackingState); \
	DECLARE_FUNCTION(execGetEyeTrackingSupported); \
	DECLARE_FUNCTION(execGetFaceTrackingData); \
	DECLARE_FUNCTION(execStopFaceTracking); \
	DECLARE_FUNCTION(execStartFaceTracking); \
	DECLARE_FUNCTION(execGetFaceTrackingState); \
	DECLARE_FUNCTION(execGetFaceTrackingSupported);


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEyePupilInfo); \
	DECLARE_FUNCTION(execGetEyeOpenness); \
	DECLARE_FUNCTION(execGetEyeTrackingData); \
	DECLARE_FUNCTION(execStopEyeTracking); \
	DECLARE_FUNCTION(execStartEyeTracking); \
	DECLARE_FUNCTION(execGetEyeTrackingState); \
	DECLARE_FUNCTION(execGetEyeTrackingSupported); \
	DECLARE_FUNCTION(execGetFaceTrackingData); \
	DECLARE_FUNCTION(execStopFaceTracking); \
	DECLARE_FUNCTION(execStartFaceTracking); \
	DECLARE_FUNCTION(execGetFaceTrackingState); \
	DECLARE_FUNCTION(execGetFaceTrackingSupported);


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPICOXRMotionTrackingFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPICOXRMotionTrackingFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMotionTracking"), NO_API) \
	DECLARE_SERIALIZER(UPICOXRMotionTrackingFunctionLibrary)


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPICOXRMotionTrackingFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPICOXRMotionTrackingFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPICOXRMotionTrackingFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRMotionTracking"), NO_API) \
	DECLARE_SERIALIZER(UPICOXRMotionTrackingFunctionLibrary)


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOXRMotionTrackingFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOXRMotionTrackingFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOXRMotionTrackingFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOXRMotionTrackingFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOXRMotionTrackingFunctionLibrary(UPICOXRMotionTrackingFunctionLibrary&&); \
	NO_API UPICOXRMotionTrackingFunctionLibrary(const UPICOXRMotionTrackingFunctionLibrary&); \
public:


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOXRMotionTrackingFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOXRMotionTrackingFunctionLibrary(UPICOXRMotionTrackingFunctionLibrary&&); \
	NO_API UPICOXRMotionTrackingFunctionLibrary(const UPICOXRMotionTrackingFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOXRMotionTrackingFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOXRMotionTrackingFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOXRMotionTrackingFunctionLibrary)


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_13_PRIVATE_PROPERTY_OFFSET
#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_10_PROLOG
#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_13_SPARSE_DATA \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_13_RPC_WRAPPERS \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_13_INCLASS \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_13_SPARSE_DATA \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRMOTIONTRACKING_API UClass* StaticClass<class UPICOXRMotionTrackingFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
