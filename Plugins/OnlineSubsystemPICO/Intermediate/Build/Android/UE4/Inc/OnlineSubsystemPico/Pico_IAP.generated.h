// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPico_Purchase;
class UPico_SubscriptionStatus;
class UPico_PurchaseArray;
class UPico_ProductArray;
class UObject;
enum class EPeriodType : uint8;
enum class EAddonsType : uint8;
class UPico_Product;
enum class EDiscountType : uint8;
enum class ECancelReason : uint8;
enum class EEntitlementStatus : uint8;
#ifdef ONLINESUBSYSTEMPICO_Pico_IAP_generated_h
#error "Pico_IAP.generated.h already included, missing '#pragma once' in Pico_IAP.h"
#endif
#define ONLINESUBSYSTEMPICO_Pico_IAP_generated_h

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_26_DELEGATE \
struct _Script_OnlineSubsystemPico_eventLaunchCheckoutFlow_V3Delegate_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_Purchase* Purchase; \
}; \
static inline void FLaunchCheckoutFlow_V3Delegate_DelegateWrapper(const FScriptDelegate& LaunchCheckoutFlow_V3Delegate, bool bIsError, const FString& ErrorMessage, UPico_Purchase* Purchase) \
{ \
	_Script_OnlineSubsystemPico_eventLaunchCheckoutFlow_V3Delegate_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.Purchase=Purchase; \
	LaunchCheckoutFlow_V3Delegate.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_25_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetSubscriptionStatusDelegate_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_SubscriptionStatus* SubscriptionStatus; \
}; \
static inline void FGetSubscriptionStatusDelegate_DelegateWrapper(const FScriptDelegate& GetSubscriptionStatusDelegate, bool bIsError, const FString& ErrorMessage, UPico_SubscriptionStatus* SubscriptionStatus) \
{ \
	_Script_OnlineSubsystemPico_eventGetSubscriptionStatusDelegate_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.SubscriptionStatus=SubscriptionStatus; \
	GetSubscriptionStatusDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_24_DELEGATE \
struct _Script_OnlineSubsystemPico_eventLaunchCheckoutFlow_V2Delegate_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_Purchase* Purchase; \
}; \
static inline void FLaunchCheckoutFlow_V2Delegate_DelegateWrapper(const FScriptDelegate& LaunchCheckoutFlow_V2Delegate, bool bIsError, const FString& ErrorMessage, UPico_Purchase* Purchase) \
{ \
	_Script_OnlineSubsystemPico_eventLaunchCheckoutFlow_V2Delegate_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.Purchase=Purchase; \
	LaunchCheckoutFlow_V2Delegate.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_23_DELEGATE \
struct _Script_OnlineSubsystemPico_eventLaunchCheckoutFlowDelegate_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_Purchase* Purchase; \
}; \
static inline void FLaunchCheckoutFlowDelegate_DelegateWrapper(const FScriptDelegate& LaunchCheckoutFlowDelegate, bool bIsError, const FString& ErrorMessage, UPico_Purchase* Purchase) \
{ \
	_Script_OnlineSubsystemPico_eventLaunchCheckoutFlowDelegate_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.Purchase=Purchase; \
	LaunchCheckoutFlowDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_22_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetNextPurchaseArrayPageDelegate_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_PurchaseArray* PurchaseArray; \
}; \
static inline void FGetNextPurchaseArrayPageDelegate_DelegateWrapper(const FScriptDelegate& GetNextPurchaseArrayPageDelegate, bool bIsError, const FString& ErrorMessage, UPico_PurchaseArray* PurchaseArray) \
{ \
	_Script_OnlineSubsystemPico_eventGetNextPurchaseArrayPageDelegate_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.PurchaseArray=PurchaseArray; \
	GetNextPurchaseArrayPageDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_21_DELEGATE \
struct _Script_OnlineSubsystemPico_eventConsumePurchaseDelegate_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
}; \
static inline void FConsumePurchaseDelegate_DelegateWrapper(const FScriptDelegate& ConsumePurchaseDelegate, bool bIsError, const FString& ErrorMessage) \
{ \
	_Script_OnlineSubsystemPico_eventConsumePurchaseDelegate_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	ConsumePurchaseDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_20_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetNextProductArrayPageDelegate_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_ProductArray* ProductArray; \
}; \
static inline void FGetNextProductArrayPageDelegate_DelegateWrapper(const FScriptDelegate& GetNextProductArrayPageDelegate, bool bIsError, const FString& ErrorMessage, UPico_ProductArray* ProductArray) \
{ \
	_Script_OnlineSubsystemPico_eventGetNextProductArrayPageDelegate_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.ProductArray=ProductArray; \
	GetNextProductArrayPageDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_19_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetViewerPurchasesDelegate_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_PurchaseArray* PurchaseArray; \
}; \
static inline void FGetViewerPurchasesDelegate_DelegateWrapper(const FScriptDelegate& GetViewerPurchasesDelegate, bool bIsError, const FString& ErrorMessage, UPico_PurchaseArray* PurchaseArray) \
{ \
	_Script_OnlineSubsystemPico_eventGetViewerPurchasesDelegate_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.PurchaseArray=PurchaseArray; \
	GetViewerPurchasesDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_18_DELEGATE \
struct _Script_OnlineSubsystemPico_eventGetProductsBySKUDelegate_Parms \
{ \
	bool bIsError; \
	FString ErrorMessage; \
	UPico_ProductArray* ProductArray; \
}; \
static inline void FGetProductsBySKUDelegate_DelegateWrapper(const FScriptDelegate& GetProductsBySKUDelegate, bool bIsError, const FString& ErrorMessage, UPico_ProductArray* ProductArray) \
{ \
	_Script_OnlineSubsystemPico_eventGetProductsBySKUDelegate_Parms Parms; \
	Parms.bIsError=bIsError ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	Parms.ProductArray=ProductArray; \
	GetProductsBySKUDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_206_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_206_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLaunchCheckoutFlowV3); \
	DECLARE_FUNCTION(execGetSubscriptionStatus); \
	DECLARE_FUNCTION(execLaunchCheckoutFlowV2); \
	DECLARE_FUNCTION(execLaunchCheckoutFlow); \
	DECLARE_FUNCTION(execGetNextPurchaseArrayPage); \
	DECLARE_FUNCTION(execGetViewerPurchases); \
	DECLARE_FUNCTION(execGetNextProductsArrayPage); \
	DECLARE_FUNCTION(execGetProductsBySKU); \
	DECLARE_FUNCTION(execConsumePurchase);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_206_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLaunchCheckoutFlowV3); \
	DECLARE_FUNCTION(execGetSubscriptionStatus); \
	DECLARE_FUNCTION(execLaunchCheckoutFlowV2); \
	DECLARE_FUNCTION(execLaunchCheckoutFlow); \
	DECLARE_FUNCTION(execGetNextPurchaseArrayPage); \
	DECLARE_FUNCTION(execGetViewerPurchases); \
	DECLARE_FUNCTION(execGetNextProductsArrayPage); \
	DECLARE_FUNCTION(execGetProductsBySKU); \
	DECLARE_FUNCTION(execConsumePurchase);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_206_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePicoIAPFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoIAPFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoIAPFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoIAPFunction)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_206_INCLASS \
private: \
	static void StaticRegisterNativesUOnlinePicoIAPFunction(); \
	friend struct Z_Construct_UClass_UOnlinePicoIAPFunction_Statics; \
public: \
	DECLARE_CLASS(UOnlinePicoIAPFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UOnlinePicoIAPFunction)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_206_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoIAPFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoIAPFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoIAPFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoIAPFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoIAPFunction(UOnlinePicoIAPFunction&&); \
	NO_API UOnlinePicoIAPFunction(const UOnlinePicoIAPFunction&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_206_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlinePicoIAPFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlinePicoIAPFunction(UOnlinePicoIAPFunction&&); \
	NO_API UOnlinePicoIAPFunction(const UOnlinePicoIAPFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePicoIAPFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePicoIAPFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePicoIAPFunction)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_206_PRIVATE_PROPERTY_OFFSET
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_203_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_206_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_206_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_206_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_206_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_206_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_206_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_206_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_206_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_206_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_206_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_206_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_206_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UOnlinePicoIAPFunction>();

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_370_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_370_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetIsContinuous); \
	DECLARE_FUNCTION(execGetOriginalPrice); \
	DECLARE_FUNCTION(execGetOuterId); \
	DECLARE_FUNCTION(execGetTrialPeriodValue); \
	DECLARE_FUNCTION(execGetTrialPeriodUnit); \
	DECLARE_FUNCTION(execGetPeriodType); \
	DECLARE_FUNCTION(execGetAddonsType); \
	DECLARE_FUNCTION(execGetIcon); \
	DECLARE_FUNCTION(execGetSKU); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execGetCurrency); \
	DECLARE_FUNCTION(execGetFormattedPrice); \
	DECLARE_FUNCTION(execGetPrice); \
	DECLARE_FUNCTION(execGetDetailDescription); \
	DECLARE_FUNCTION(execGetDescription);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_370_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIsContinuous); \
	DECLARE_FUNCTION(execGetOriginalPrice); \
	DECLARE_FUNCTION(execGetOuterId); \
	DECLARE_FUNCTION(execGetTrialPeriodValue); \
	DECLARE_FUNCTION(execGetTrialPeriodUnit); \
	DECLARE_FUNCTION(execGetPeriodType); \
	DECLARE_FUNCTION(execGetAddonsType); \
	DECLARE_FUNCTION(execGetIcon); \
	DECLARE_FUNCTION(execGetSKU); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execGetCurrency); \
	DECLARE_FUNCTION(execGetFormattedPrice); \
	DECLARE_FUNCTION(execGetPrice); \
	DECLARE_FUNCTION(execGetDetailDescription); \
	DECLARE_FUNCTION(execGetDescription);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_370_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_Product(); \
	friend struct Z_Construct_UClass_UPico_Product_Statics; \
public: \
	DECLARE_CLASS(UPico_Product, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_Product)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_370_INCLASS \
private: \
	static void StaticRegisterNativesUPico_Product(); \
	friend struct Z_Construct_UClass_UPico_Product_Statics; \
public: \
	DECLARE_CLASS(UPico_Product, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_Product)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_370_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_Product(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_Product) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_Product); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_Product); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_Product(UPico_Product&&); \
	NO_API UPico_Product(const UPico_Product&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_370_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_Product(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_Product(UPico_Product&&); \
	NO_API UPico_Product(const UPico_Product&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_Product); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_Product); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_Product)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_370_PRIVATE_PROPERTY_OFFSET
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_367_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_370_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_370_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_370_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_370_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_370_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_370_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_370_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_370_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_370_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_370_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_370_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_370_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_Product>();

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_463_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_463_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetNextPageParam); \
	DECLARE_FUNCTION(execGetElement);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_463_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetNextPageParam); \
	DECLARE_FUNCTION(execGetElement);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_463_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_ProductArray(); \
	friend struct Z_Construct_UClass_UPico_ProductArray_Statics; \
public: \
	DECLARE_CLASS(UPico_ProductArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_ProductArray)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_463_INCLASS \
private: \
	static void StaticRegisterNativesUPico_ProductArray(); \
	friend struct Z_Construct_UClass_UPico_ProductArray_Statics; \
public: \
	DECLARE_CLASS(UPico_ProductArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_ProductArray)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_463_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_ProductArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_ProductArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_ProductArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_ProductArray); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_ProductArray(UPico_ProductArray&&); \
	NO_API UPico_ProductArray(const UPico_ProductArray&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_463_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_ProductArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_ProductArray(UPico_ProductArray&&); \
	NO_API UPico_ProductArray(const UPico_ProductArray&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_ProductArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_ProductArray); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_ProductArray)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_463_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProductArray() { return STRUCT_OFFSET(UPico_ProductArray, ProductArray); }


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_460_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_463_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_463_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_463_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_463_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_463_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_463_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_463_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_463_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_463_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_463_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_463_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_463_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_ProductArray>();

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_500_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_500_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOrderComment); \
	DECLARE_FUNCTION(execGetDiscountType); \
	DECLARE_FUNCTION(execGetNextPayTime); \
	DECLARE_FUNCTION(execGetOuterId); \
	DECLARE_FUNCTION(execGetNextPeriodType); \
	DECLARE_FUNCTION(execGetCurrentPeriodType); \
	DECLARE_FUNCTION(execGetAddonsType); \
	DECLARE_FUNCTION(execGetIcon); \
	DECLARE_FUNCTION(execGetSKU); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetGrantTime); \
	DECLARE_FUNCTION(execGetExpirationTime);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_500_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOrderComment); \
	DECLARE_FUNCTION(execGetDiscountType); \
	DECLARE_FUNCTION(execGetNextPayTime); \
	DECLARE_FUNCTION(execGetOuterId); \
	DECLARE_FUNCTION(execGetNextPeriodType); \
	DECLARE_FUNCTION(execGetCurrentPeriodType); \
	DECLARE_FUNCTION(execGetAddonsType); \
	DECLARE_FUNCTION(execGetIcon); \
	DECLARE_FUNCTION(execGetSKU); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetGrantTime); \
	DECLARE_FUNCTION(execGetExpirationTime);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_500_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_Purchase(); \
	friend struct Z_Construct_UClass_UPico_Purchase_Statics; \
public: \
	DECLARE_CLASS(UPico_Purchase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_Purchase)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_500_INCLASS \
private: \
	static void StaticRegisterNativesUPico_Purchase(); \
	friend struct Z_Construct_UClass_UPico_Purchase_Statics; \
public: \
	DECLARE_CLASS(UPico_Purchase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_Purchase)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_500_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_Purchase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_Purchase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_Purchase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_Purchase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_Purchase(UPico_Purchase&&); \
	NO_API UPico_Purchase(const UPico_Purchase&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_500_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_Purchase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_Purchase(UPico_Purchase&&); \
	NO_API UPico_Purchase(const UPico_Purchase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_Purchase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_Purchase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_Purchase)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_500_PRIVATE_PROPERTY_OFFSET
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_497_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_500_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_500_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_500_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_500_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_500_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_500_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_500_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_500_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_500_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_500_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_500_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_500_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_Purchase>();

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_576_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_576_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetNextPageParam); \
	DECLARE_FUNCTION(execGetElement);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_576_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasNextPage); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetNextPageParam); \
	DECLARE_FUNCTION(execGetElement);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_576_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_PurchaseArray(); \
	friend struct Z_Construct_UClass_UPico_PurchaseArray_Statics; \
public: \
	DECLARE_CLASS(UPico_PurchaseArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_PurchaseArray)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_576_INCLASS \
private: \
	static void StaticRegisterNativesUPico_PurchaseArray(); \
	friend struct Z_Construct_UClass_UPico_PurchaseArray_Statics; \
public: \
	DECLARE_CLASS(UPico_PurchaseArray, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_PurchaseArray)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_576_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_PurchaseArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_PurchaseArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_PurchaseArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_PurchaseArray); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_PurchaseArray(UPico_PurchaseArray&&); \
	NO_API UPico_PurchaseArray(const UPico_PurchaseArray&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_576_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_PurchaseArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_PurchaseArray(UPico_PurchaseArray&&); \
	NO_API UPico_PurchaseArray(const UPico_PurchaseArray&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_PurchaseArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_PurchaseArray); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_PurchaseArray)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_576_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PurchaseArray() { return STRUCT_OFFSET(UPico_PurchaseArray, PurchaseArray); }


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_573_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_576_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_576_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_576_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_576_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_576_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_576_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_576_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_576_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_576_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_576_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_576_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_576_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_PurchaseArray>();

#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_613_SPARSE_DATA
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_613_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNextPeriod); \
	DECLARE_FUNCTION(execGetIsFreeTrial); \
	DECLARE_FUNCTION(execGetCancelReason); \
	DECLARE_FUNCTION(execGetEntitlementStatus); \
	DECLARE_FUNCTION(execGetCurrentPeriodType); \
	DECLARE_FUNCTION(execGetEndTime); \
	DECLARE_FUNCTION(execGetStartTime); \
	DECLARE_FUNCTION(execGetOuterId); \
	DECLARE_FUNCTION(execGetSKU);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_613_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNextPeriod); \
	DECLARE_FUNCTION(execGetIsFreeTrial); \
	DECLARE_FUNCTION(execGetCancelReason); \
	DECLARE_FUNCTION(execGetEntitlementStatus); \
	DECLARE_FUNCTION(execGetCurrentPeriodType); \
	DECLARE_FUNCTION(execGetEndTime); \
	DECLARE_FUNCTION(execGetStartTime); \
	DECLARE_FUNCTION(execGetOuterId); \
	DECLARE_FUNCTION(execGetSKU);


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_613_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPico_SubscriptionStatus(); \
	friend struct Z_Construct_UClass_UPico_SubscriptionStatus_Statics; \
public: \
	DECLARE_CLASS(UPico_SubscriptionStatus, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_SubscriptionStatus)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_613_INCLASS \
private: \
	static void StaticRegisterNativesUPico_SubscriptionStatus(); \
	friend struct Z_Construct_UClass_UPico_SubscriptionStatus_Statics; \
public: \
	DECLARE_CLASS(UPico_SubscriptionStatus, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemPico"), NO_API) \
	DECLARE_SERIALIZER(UPico_SubscriptionStatus)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_613_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_SubscriptionStatus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_SubscriptionStatus) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_SubscriptionStatus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_SubscriptionStatus); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_SubscriptionStatus(UPico_SubscriptionStatus&&); \
	NO_API UPico_SubscriptionStatus(const UPico_SubscriptionStatus&); \
public:


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_613_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPico_SubscriptionStatus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPico_SubscriptionStatus(UPico_SubscriptionStatus&&); \
	NO_API UPico_SubscriptionStatus(const UPico_SubscriptionStatus&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPico_SubscriptionStatus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPico_SubscriptionStatus); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPico_SubscriptionStatus)


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_613_PRIVATE_PROPERTY_OFFSET
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_610_PROLOG
#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_613_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_613_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_613_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_613_RPC_WRAPPERS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_613_INCLASS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_613_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_613_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_613_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_613_SPARSE_DATA \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_613_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_613_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h_613_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<class UPico_SubscriptionStatus>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeveloperScene_Plugins_OnlineSubsystemPICO_Source_OnlineSubsystemPico_Public_Pico_IAP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
