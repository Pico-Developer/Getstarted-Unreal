// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemPico/Public/PICOPlatformSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePICOPlatformSubsystem() {}
// Cross Module References
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPICOPlatformSubsystem_NoRegister();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UPICOPlatformSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemPico();
	ONLINESUBSYSTEMPICO_API UClass* Z_Construct_UClass_UOnlineSubsystemPicoManager_NoRegister();
// End Cross Module References
	void UPICOPlatformSubsystem::StaticRegisterNativesUPICOPlatformSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UPICOPlatformSubsystem_NoRegister()
	{
		return UPICOPlatformSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UPICOPlatformSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PicoManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PicoManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPICOPlatformSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPico,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOPlatformSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PICOPlatformSubsystem.h" },
		{ "ModuleRelativePath", "Public/PICOPlatformSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPICOPlatformSubsystem_Statics::NewProp_PicoManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/PICOPlatformSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPICOPlatformSubsystem_Statics::NewProp_PicoManager = { "PicoManager", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPICOPlatformSubsystem, PicoManager), Z_Construct_UClass_UOnlineSubsystemPicoManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPICOPlatformSubsystem_Statics::NewProp_PicoManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOPlatformSubsystem_Statics::NewProp_PicoManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPICOPlatformSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPICOPlatformSubsystem_Statics::NewProp_PicoManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPICOPlatformSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPICOPlatformSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPICOPlatformSubsystem_Statics::ClassParams = {
		&UPICOPlatformSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPICOPlatformSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPICOPlatformSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPICOPlatformSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPICOPlatformSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPICOPlatformSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPICOPlatformSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPICOPlatformSubsystem, 3523194699);
	template<> ONLINESUBSYSTEMPICO_API UClass* StaticClass<UPICOPlatformSubsystem>()
	{
		return UPICOPlatformSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPICOPlatformSubsystem(Z_Construct_UClass_UPICOPlatformSubsystem, &UPICOPlatformSubsystem::StaticClass, TEXT("/Script/OnlineSubsystemPico"), TEXT("UPICOPlatformSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPICOPlatformSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
