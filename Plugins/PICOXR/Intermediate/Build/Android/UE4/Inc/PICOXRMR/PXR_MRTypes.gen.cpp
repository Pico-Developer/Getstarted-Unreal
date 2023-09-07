// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PICOXRMR/Public/PXR_MRTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_MRTypes() {}
// Cross Module References
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneCaptureStatus();
	UPackage* Z_Construct_UPackage__Script_PICOXRMR();
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOLoadFilterType();
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOPersistLocation();
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOAnchorSceneLabel();
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneDataTypeFlags();
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOAnchorComponentTypeFlag();
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingStateMessage();
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingState();
	PICOXRMR_API UEnum* Z_Construct_UEnum_PICOXRMR_EPICOResult();
	PICOXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FAnchorLoadResult();
	PICOXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchor();
	PICOXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorUUID();
	PICOXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorLoadInfo();
	PICOXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PICOXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo();
	PICOXRMR_API UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	static UEnum* EPICOSpatialSceneCaptureStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneCaptureStatus, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("EPICOSpatialSceneCaptureStatus"));
		}
		return Singleton;
	}
	template<> PICOXRMR_API UEnum* StaticEnum<EPICOSpatialSceneCaptureStatus>()
	{
		return EPICOSpatialSceneCaptureStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOSpatialSceneCaptureStatus(EPICOSpatialSceneCaptureStatus_StaticEnum, TEXT("/Script/PICOXRMR"), TEXT("EPICOSpatialSceneCaptureStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneCaptureStatus_Hash() { return 1631045047U; }
	UEnum* Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneCaptureStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOSpatialSceneCaptureStatus"), 0, Get_Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneCaptureStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOSpatialSceneCaptureStatus::SpatialSceneCaptureStatus_NotDefined", (int64)EPICOSpatialSceneCaptureStatus::SpatialSceneCaptureStatus_NotDefined },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
				{ "SpatialSceneCaptureStatus_NotDefined.Name", "EPICOSpatialSceneCaptureStatus::SpatialSceneCaptureStatus_NotDefined" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR,
				nullptr,
				"EPICOSpatialSceneCaptureStatus",
				"EPICOSpatialSceneCaptureStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPICOLoadFilterType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMR_EPICOLoadFilterType, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("EPICOLoadFilterType"));
		}
		return Singleton;
	}
	template<> PICOXRMR_API UEnum* StaticEnum<EPICOLoadFilterType>()
	{
		return EPICOLoadFilterType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOLoadFilterType(EPICOLoadFilterType_StaticEnum, TEXT("/Script/PICOXRMR"), TEXT("EPICOLoadFilterType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRMR_EPICOLoadFilterType_Hash() { return 692352675U; }
	UEnum* Z_Construct_UEnum_PICOXRMR_EPICOLoadFilterType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOLoadFilterType"), 0, Get_Z_Construct_UEnum_PICOXRMR_EPICOLoadFilterType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOLoadFilterType::LoadFilterType_None", (int64)EPICOLoadFilterType::LoadFilterType_None },
				{ "EPICOLoadFilterType::LoadFilterType_UUID", (int64)EPICOLoadFilterType::LoadFilterType_UUID },
				{ "EPICOLoadFilterType::LoadFilterType_SpatialSceneData", (int64)EPICOLoadFilterType::LoadFilterType_SpatialSceneData },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LoadFilterType_None.Name", "EPICOLoadFilterType::LoadFilterType_None" },
				{ "LoadFilterType_SpatialSceneData.Name", "EPICOLoadFilterType::LoadFilterType_SpatialSceneData" },
				{ "LoadFilterType_UUID.Name", "EPICOLoadFilterType::LoadFilterType_UUID" },
				{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR,
				nullptr,
				"EPICOLoadFilterType",
				"EPICOLoadFilterType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPICOPersistLocation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMR_EPICOPersistLocation, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("EPICOPersistLocation"));
		}
		return Singleton;
	}
	template<> PICOXRMR_API UEnum* StaticEnum<EPICOPersistLocation>()
	{
		return EPICOPersistLocation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOPersistLocation(EPICOPersistLocation_StaticEnum, TEXT("/Script/PICOXRMR"), TEXT("EPICOPersistLocation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRMR_EPICOPersistLocation_Hash() { return 1470425004U; }
	UEnum* Z_Construct_UEnum_PICOXRMR_EPICOPersistLocation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOPersistLocation"), 0, Get_Z_Construct_UEnum_PICOXRMR_EPICOPersistLocation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOPersistLocation::PersistLocation_None", (int64)EPICOPersistLocation::PersistLocation_None },
				{ "EPICOPersistLocation::PersistLocation_Local", (int64)EPICOPersistLocation::PersistLocation_Local },
				{ "EPICOPersistLocation::PersistLocation_Remote", (int64)EPICOPersistLocation::PersistLocation_Remote },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
				{ "PersistLocation_Local.Name", "EPICOPersistLocation::PersistLocation_Local" },
				{ "PersistLocation_None.Hidden", "" },
				{ "PersistLocation_None.Name", "EPICOPersistLocation::PersistLocation_None" },
				{ "PersistLocation_Remote.Name", "EPICOPersistLocation::PersistLocation_Remote" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR,
				nullptr,
				"EPICOPersistLocation",
				"EPICOPersistLocation",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPICOAnchorSceneLabel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMR_EPICOAnchorSceneLabel, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("EPICOAnchorSceneLabel"));
		}
		return Singleton;
	}
	template<> PICOXRMR_API UEnum* StaticEnum<EPICOAnchorSceneLabel>()
	{
		return EPICOAnchorSceneLabel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOAnchorSceneLabel(EPICOAnchorSceneLabel_StaticEnum, TEXT("/Script/PICOXRMR"), TEXT("EPICOAnchorSceneLabel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRMR_EPICOAnchorSceneLabel_Hash() { return 3651961575U; }
	UEnum* Z_Construct_UEnum_PICOXRMR_EPICOAnchorSceneLabel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOAnchorSceneLabel"), 0, Get_Z_Construct_UEnum_PICOXRMR_EPICOAnchorSceneLabel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOAnchorSceneLabel::SceneLabel_Unknown", (int64)EPICOAnchorSceneLabel::SceneLabel_Unknown },
				{ "EPICOAnchorSceneLabel::SceneLabel_Floor", (int64)EPICOAnchorSceneLabel::SceneLabel_Floor },
				{ "EPICOAnchorSceneLabel::SceneLabel_Ceiling", (int64)EPICOAnchorSceneLabel::SceneLabel_Ceiling },
				{ "EPICOAnchorSceneLabel::SceneLabel_Wall", (int64)EPICOAnchorSceneLabel::SceneLabel_Wall },
				{ "EPICOAnchorSceneLabel::SceneLabel_Door", (int64)EPICOAnchorSceneLabel::SceneLabel_Door },
				{ "EPICOAnchorSceneLabel::SceneLabel_Window", (int64)EPICOAnchorSceneLabel::SceneLabel_Window },
				{ "EPICOAnchorSceneLabel::SceneLabel_Opening", (int64)EPICOAnchorSceneLabel::SceneLabel_Opening },
				{ "EPICOAnchorSceneLabel::SceneLabel_Table", (int64)EPICOAnchorSceneLabel::SceneLabel_Table },
				{ "EPICOAnchorSceneLabel::SceneLabel_Sofa", (int64)EPICOAnchorSceneLabel::SceneLabel_Sofa },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
				{ "SceneLabel_Ceiling.Name", "EPICOAnchorSceneLabel::SceneLabel_Ceiling" },
				{ "SceneLabel_Door.Name", "EPICOAnchorSceneLabel::SceneLabel_Door" },
				{ "SceneLabel_Floor.Name", "EPICOAnchorSceneLabel::SceneLabel_Floor" },
				{ "SceneLabel_Opening.Name", "EPICOAnchorSceneLabel::SceneLabel_Opening" },
				{ "SceneLabel_Sofa.Name", "EPICOAnchorSceneLabel::SceneLabel_Sofa" },
				{ "SceneLabel_Table.Name", "EPICOAnchorSceneLabel::SceneLabel_Table" },
				{ "SceneLabel_Unknown.Name", "EPICOAnchorSceneLabel::SceneLabel_Unknown" },
				{ "SceneLabel_Wall.Name", "EPICOAnchorSceneLabel::SceneLabel_Wall" },
				{ "SceneLabel_Window.Name", "EPICOAnchorSceneLabel::SceneLabel_Window" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR,
				nullptr,
				"EPICOAnchorSceneLabel",
				"EPICOAnchorSceneLabel",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPICOSpatialSceneDataTypeFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneDataTypeFlags, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("EPICOSpatialSceneDataTypeFlags"));
		}
		return Singleton;
	}
	template<> PICOXRMR_API UEnum* StaticEnum<EPICOSpatialSceneDataTypeFlags>()
	{
		return EPICOSpatialSceneDataTypeFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOSpatialSceneDataTypeFlags(EPICOSpatialSceneDataTypeFlags_StaticEnum, TEXT("/Script/PICOXRMR"), TEXT("EPICOSpatialSceneDataTypeFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneDataTypeFlags_Hash() { return 39118939U; }
	UEnum* Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneDataTypeFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOSpatialSceneDataTypeFlags"), 0, Get_Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneDataTypeFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_None", (int64)EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_None },
				{ "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Unknown", (int64)EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Unknown },
				{ "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Floor", (int64)EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Floor },
				{ "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Ceiling", (int64)EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Ceiling },
				{ "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Wall", (int64)EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Wall },
				{ "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Door", (int64)EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Door },
				{ "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Window", (int64)EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Window },
				{ "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Opening", (int64)EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Opening },
				{ "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Object", (int64)EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Object },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
				{ "SpatialSceneDataTypeFlag_Ceiling.Name", "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Ceiling" },
				{ "SpatialSceneDataTypeFlag_Door.Name", "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Door" },
				{ "SpatialSceneDataTypeFlag_Floor.Name", "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Floor" },
				{ "SpatialSceneDataTypeFlag_None.Name", "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_None" },
				{ "SpatialSceneDataTypeFlag_Object.Name", "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Object" },
				{ "SpatialSceneDataTypeFlag_Opening.Name", "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Opening" },
				{ "SpatialSceneDataTypeFlag_Unknown.Name", "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Unknown" },
				{ "SpatialSceneDataTypeFlag_Wall.Name", "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Wall" },
				{ "SpatialSceneDataTypeFlag_Window.Name", "EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Window" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR,
				nullptr,
				"EPICOSpatialSceneDataTypeFlags",
				"EPICOSpatialSceneDataTypeFlags",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPICOAnchorComponentTypeFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMR_EPICOAnchorComponentTypeFlag, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("EPICOAnchorComponentTypeFlag"));
		}
		return Singleton;
	}
	template<> PICOXRMR_API UEnum* StaticEnum<EPICOAnchorComponentTypeFlag>()
	{
		return EPICOAnchorComponentTypeFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOAnchorComponentTypeFlag(EPICOAnchorComponentTypeFlag_StaticEnum, TEXT("/Script/PICOXRMR"), TEXT("EPICOAnchorComponentTypeFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRMR_EPICOAnchorComponentTypeFlag_Hash() { return 872888590U; }
	UEnum* Z_Construct_UEnum_PICOXRMR_EPICOAnchorComponentTypeFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOAnchorComponentTypeFlag"), 0, Get_Z_Construct_UEnum_PICOXRMR_EPICOAnchorComponentTypeFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOAnchorComponentTypeFlag::ComponentFlag_None", (int64)EPICOAnchorComponentTypeFlag::ComponentFlag_None },
				{ "EPICOAnchorComponentTypeFlag::ComponentFlag_Pose", (int64)EPICOAnchorComponentTypeFlag::ComponentFlag_Pose },
				{ "EPICOAnchorComponentTypeFlag::ComponentFlag_Persistence", (int64)EPICOAnchorComponentTypeFlag::ComponentFlag_Persistence },
				{ "EPICOAnchorComponentTypeFlag::ComponentFlag_SceneLabel", (int64)EPICOAnchorComponentTypeFlag::ComponentFlag_SceneLabel },
				{ "EPICOAnchorComponentTypeFlag::ComponentFlag_Plane", (int64)EPICOAnchorComponentTypeFlag::ComponentFlag_Plane },
				{ "EPICOAnchorComponentTypeFlag::ComponentFlag_Volume", (int64)EPICOAnchorComponentTypeFlag::ComponentFlag_Volume },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ComponentFlag_None.Name", "EPICOAnchorComponentTypeFlag::ComponentFlag_None" },
				{ "ComponentFlag_Persistence.Name", "EPICOAnchorComponentTypeFlag::ComponentFlag_Persistence" },
				{ "ComponentFlag_Plane.Name", "EPICOAnchorComponentTypeFlag::ComponentFlag_Plane" },
				{ "ComponentFlag_Pose.Name", "EPICOAnchorComponentTypeFlag::ComponentFlag_Pose" },
				{ "ComponentFlag_SceneLabel.Name", "EPICOAnchorComponentTypeFlag::ComponentFlag_SceneLabel" },
				{ "ComponentFlag_Volume.Name", "EPICOAnchorComponentTypeFlag::ComponentFlag_Volume" },
				{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR,
				nullptr,
				"EPICOAnchorComponentTypeFlag",
				"EPICOAnchorComponentTypeFlag",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPICOSpatialTrackingStateMessage_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingStateMessage, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("EPICOSpatialTrackingStateMessage"));
		}
		return Singleton;
	}
	template<> PICOXRMR_API UEnum* StaticEnum<EPICOSpatialTrackingStateMessage>()
	{
		return EPICOSpatialTrackingStateMessage_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOSpatialTrackingStateMessage(EPICOSpatialTrackingStateMessage_StaticEnum, TEXT("/Script/PICOXRMR"), TEXT("EPICOSpatialTrackingStateMessage"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingStateMessage_Hash() { return 2911146691U; }
	UEnum* Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingStateMessage()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOSpatialTrackingStateMessage"), 0, Get_Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingStateMessage_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOSpatialTrackingStateMessage::SpatialTrackingStateMessage_Unknown", (int64)EPICOSpatialTrackingStateMessage::SpatialTrackingStateMessage_Unknown },
				{ "EPICOSpatialTrackingStateMessage::SpatialTrackingStateMessage_InternalError", (int64)EPICOSpatialTrackingStateMessage::SpatialTrackingStateMessage_InternalError },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
				{ "SpatialTrackingStateMessage_InternalError.Name", "EPICOSpatialTrackingStateMessage::SpatialTrackingStateMessage_InternalError" },
				{ "SpatialTrackingStateMessage_Unknown.Name", "EPICOSpatialTrackingStateMessage::SpatialTrackingStateMessage_Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR,
				nullptr,
				"EPICOSpatialTrackingStateMessage",
				"EPICOSpatialTrackingStateMessage",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPICOSpatialTrackingState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingState, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("EPICOSpatialTrackingState"));
		}
		return Singleton;
	}
	template<> PICOXRMR_API UEnum* StaticEnum<EPICOSpatialTrackingState>()
	{
		return EPICOSpatialTrackingState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOSpatialTrackingState(EPICOSpatialTrackingState_StaticEnum, TEXT("/Script/PICOXRMR"), TEXT("EPICOSpatialTrackingState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingState_Hash() { return 1192145507U; }
	UEnum* Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOSpatialTrackingState"), 0, Get_Z_Construct_UEnum_PICOXRMR_EPICOSpatialTrackingState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOSpatialTrackingState::SpatialTrackingState_Invalid", (int64)EPICOSpatialTrackingState::SpatialTrackingState_Invalid },
				{ "EPICOSpatialTrackingState::SpatialTrackingState_Valid", (int64)EPICOSpatialTrackingState::SpatialTrackingState_Valid },
				{ "EPICOSpatialTrackingState::SpatialTrackingState_Limited", (int64)EPICOSpatialTrackingState::SpatialTrackingState_Limited },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
				{ "SpatialTrackingState_Invalid.Name", "EPICOSpatialTrackingState::SpatialTrackingState_Invalid" },
				{ "SpatialTrackingState_Limited.Name", "EPICOSpatialTrackingState::SpatialTrackingState_Limited" },
				{ "SpatialTrackingState_Valid.Name", "EPICOSpatialTrackingState::SpatialTrackingState_Valid" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR,
				nullptr,
				"EPICOSpatialTrackingState",
				"EPICOSpatialTrackingState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPICOResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PICOXRMR_EPICOResult, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("EPICOResult"));
		}
		return Singleton;
	}
	template<> PICOXRMR_API UEnum* StaticEnum<EPICOResult>()
	{
		return EPICOResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPICOResult(EPICOResult_StaticEnum, TEXT("/Script/PICOXRMR"), TEXT("EPICOResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PICOXRMR_EPICOResult_Hash() { return 3418292693U; }
	UEnum* Z_Construct_UEnum_PICOXRMR_EPICOResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPICOResult"), 0, Get_Z_Construct_UEnum_PICOXRMR_EPICOResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPICOResult::PXR_Success", (int64)EPICOResult::PXR_Success },
				{ "EPICOResult::PXR_TimeoutExpired", (int64)EPICOResult::PXR_TimeoutExpired },
				{ "EPICOResult::PXR_Error_ValidationFailure", (int64)EPICOResult::PXR_Error_ValidationFailure },
				{ "EPICOResult::PXR_Error_RuntimeFailure", (int64)EPICOResult::PXR_Error_RuntimeFailure },
				{ "EPICOResult::PXR_Error_OutOfMemory", (int64)EPICOResult::PXR_Error_OutOfMemory },
				{ "EPICOResult::PXR_Error_APIVersionUnsupported", (int64)EPICOResult::PXR_Error_APIVersionUnsupported },
				{ "EPICOResult::PXR_Error_InitializationFailed", (int64)EPICOResult::PXR_Error_InitializationFailed },
				{ "EPICOResult::PXR_Error_FunctionUnsupported", (int64)EPICOResult::PXR_Error_FunctionUnsupported },
				{ "EPICOResult::PXR_Error_FeatureUnsupported", (int64)EPICOResult::PXR_Error_FeatureUnsupported },
				{ "EPICOResult::PXR_Error_LimitReached", (int64)EPICOResult::PXR_Error_LimitReached },
				{ "EPICOResult::PXR_Error_SizeInsufficient", (int64)EPICOResult::PXR_Error_SizeInsufficient },
				{ "EPICOResult::PXR_Error_HandleInvalid", (int64)EPICOResult::PXR_Error_HandleInvalid },
				{ "EPICOResult::PXR_Error_SpatialLocalizationRunning", (int64)EPICOResult::PXR_Error_SpatialLocalizationRunning },
				{ "EPICOResult::PXR_Error_SpatialLocalizationNotRunning", (int64)EPICOResult::PXR_Error_SpatialLocalizationNotRunning },
				{ "EPICOResult::PXR_Error_SpatialMapCreated", (int64)EPICOResult::PXR_Error_SpatialMapCreated },
				{ "EPICOResult::PXR_Error_SpatialMapNotCreated", (int64)EPICOResult::PXR_Error_SpatialMapNotCreated },
				{ "EPICOResult::PXR_Error_ComponentNotSupported", (int64)EPICOResult::PXR_Error_ComponentNotSupported },
				{ "EPICOResult::PXR_Error_ComponentConflict", (int64)EPICOResult::PXR_Error_ComponentConflict },
				{ "EPICOResult::PXR_Error_ComponentNotAdded", (int64)EPICOResult::PXR_Error_ComponentNotAdded },
				{ "EPICOResult::PXR_Error_ComponentAdded", (int64)EPICOResult::PXR_Error_ComponentAdded },
				{ "EPICOResult::PXR_Error_AnchorEntityNotFound", (int64)EPICOResult::PXR_Error_AnchorEntityNotFound },
				{ "EPICOResult::PXR_Error_Unknow", (int64)EPICOResult::PXR_Error_Unknow },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
				{ "PXR_Error_AnchorEntityNotFound.Name", "EPICOResult::PXR_Error_AnchorEntityNotFound" },
				{ "PXR_Error_APIVersionUnsupported.Name", "EPICOResult::PXR_Error_APIVersionUnsupported" },
				{ "PXR_Error_ComponentAdded.Name", "EPICOResult::PXR_Error_ComponentAdded" },
				{ "PXR_Error_ComponentConflict.Name", "EPICOResult::PXR_Error_ComponentConflict" },
				{ "PXR_Error_ComponentNotAdded.Name", "EPICOResult::PXR_Error_ComponentNotAdded" },
				{ "PXR_Error_ComponentNotSupported.Name", "EPICOResult::PXR_Error_ComponentNotSupported" },
				{ "PXR_Error_FeatureUnsupported.Name", "EPICOResult::PXR_Error_FeatureUnsupported" },
				{ "PXR_Error_FunctionUnsupported.Name", "EPICOResult::PXR_Error_FunctionUnsupported" },
				{ "PXR_Error_HandleInvalid.Name", "EPICOResult::PXR_Error_HandleInvalid" },
				{ "PXR_Error_InitializationFailed.Name", "EPICOResult::PXR_Error_InitializationFailed" },
				{ "PXR_Error_LimitReached.Name", "EPICOResult::PXR_Error_LimitReached" },
				{ "PXR_Error_OutOfMemory.Name", "EPICOResult::PXR_Error_OutOfMemory" },
				{ "PXR_Error_RuntimeFailure.Name", "EPICOResult::PXR_Error_RuntimeFailure" },
				{ "PXR_Error_SizeInsufficient.Name", "EPICOResult::PXR_Error_SizeInsufficient" },
				{ "PXR_Error_SpatialLocalizationNotRunning.Name", "EPICOResult::PXR_Error_SpatialLocalizationNotRunning" },
				{ "PXR_Error_SpatialLocalizationRunning.Name", "EPICOResult::PXR_Error_SpatialLocalizationRunning" },
				{ "PXR_Error_SpatialMapCreated.Name", "EPICOResult::PXR_Error_SpatialMapCreated" },
				{ "PXR_Error_SpatialMapNotCreated.Name", "EPICOResult::PXR_Error_SpatialMapNotCreated" },
				{ "PXR_Error_Unknow.Name", "EPICOResult::PXR_Error_Unknow" },
				{ "PXR_Error_ValidationFailure.Name", "EPICOResult::PXR_Error_ValidationFailure" },
				{ "PXR_Success.Name", "EPICOResult::PXR_Success" },
				{ "PXR_TimeoutExpired.Name", "EPICOResult::PXR_TimeoutExpired" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PICOXRMR,
				nullptr,
				"EPICOResult",
				"EPICOResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnchorLoadResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRMR_API uint32 Get_Z_Construct_UScriptStruct_FAnchorLoadResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnchorLoadResult, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("AnchorLoadResult"), sizeof(FAnchorLoadResult), Get_Z_Construct_UScriptStruct_FAnchorLoadResult_Hash());
	}
	return Singleton;
}
template<> PICOXRMR_API UScriptStruct* StaticStruct<FAnchorLoadResult>()
{
	return FAnchorLoadResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnchorLoadResult(FAnchorLoadResult::StaticStruct, TEXT("/Script/PICOXRMR"), TEXT("AnchorLoadResult"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRMR_StaticRegisterNativesFAnchorLoadResult
{
	FScriptStruct_PICOXRMR_StaticRegisterNativesFAnchorLoadResult()
	{
		UScriptStruct::DeferCppStructOps<FAnchorLoadResult>(FName(TEXT("AnchorLoadResult")));
	}
} ScriptStruct_PICOXRMR_StaticRegisterNativesFAnchorLoadResult;
	struct Z_Construct_UScriptStruct_FAnchorLoadResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnchorHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnchorHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnchorUUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnchorUUID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PersistLocation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersistLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PersistLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnchorLoadResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_AnchorHandle_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_AnchorHandle = { "AnchorHandle", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnchorLoadResult, AnchorHandle), Z_Construct_UScriptStruct_FPICOAnchor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_AnchorHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_AnchorHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_AnchorUUID_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_AnchorUUID = { "AnchorUUID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnchorLoadResult, AnchorUUID), Z_Construct_UScriptStruct_FPICOAnchorUUID, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_AnchorUUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_AnchorUUID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_PersistLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_PersistLocation_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_PersistLocation = { "PersistLocation", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnchorLoadResult, PersistLocation), Z_Construct_UEnum_PICOXRMR_EPICOPersistLocation, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_PersistLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_PersistLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_AnchorHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_AnchorUUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_PersistLocation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::NewProp_PersistLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMR,
		nullptr,
		&NewStructOps,
		"AnchorLoadResult",
		sizeof(FAnchorLoadResult),
		alignof(FAnchorLoadResult),
		Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnchorLoadResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnchorLoadResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMR();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnchorLoadResult"), sizeof(FAnchorLoadResult), Get_Z_Construct_UScriptStruct_FAnchorLoadResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnchorLoadResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnchorLoadResult_Hash() { return 2504800881U; }
class UScriptStruct* FPICOAnchorLoadInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRMR_API uint32 Get_Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("PICOAnchorLoadInfo"), sizeof(FPICOAnchorLoadInfo), Get_Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Hash());
	}
	return Singleton;
}
template<> PICOXRMR_API UScriptStruct* StaticStruct<FPICOAnchorLoadInfo>()
{
	return FPICOAnchorLoadInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPICOAnchorLoadInfo(FPICOAnchorLoadInfo::StaticStruct, TEXT("/Script/PICOXRMR"), TEXT("PICOAnchorLoadInfo"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRMR_StaticRegisterNativesFPICOAnchorLoadInfo
{
	FScriptStruct_PICOXRMR_StaticRegisterNativesFPICOAnchorLoadInfo()
	{
		UScriptStruct::DeferCppStructOps<FPICOAnchorLoadInfo>(FName(TEXT("PICOAnchorLoadInfo")));
	}
} ScriptStruct_PICOXRMR_StaticRegisterNativesFPICOAnchorLoadInfo;
	struct Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LoadMaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PersistLocation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersistLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PersistLocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IncludeFilterType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeFilterType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IncludeFilterType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IncludeUUIDFilter_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeUUIDFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IncludeUUIDFilter;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IncludeSpatialSceneDataTypeFilter_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IncludeSpatialSceneDataTypeFilter_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeSpatialSceneDataTypeFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IncludeSpatialSceneDataTypeFilter;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ExcludeFilterType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludeFilterType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ExcludeFilterType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExcludeUUIDFilter_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludeUUIDFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludeUUIDFilter;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ExcludeSpatialSceneDataTypeFilter_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ExcludeSpatialSceneDataTypeFilter_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludeSpatialSceneDataTypeFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludeSpatialSceneDataTypeFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPICOAnchorLoadInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_LoadMaxCount_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_LoadMaxCount = { "LoadMaxCount", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPICOAnchorLoadInfo, LoadMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_LoadMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_LoadMaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_Timeout_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPICOAnchorLoadInfo, Timeout), METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_Timeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_Timeout_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_PersistLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_PersistLocation_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_PersistLocation = { "PersistLocation", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPICOAnchorLoadInfo, PersistLocation), Z_Construct_UEnum_PICOXRMR_EPICOPersistLocation, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_PersistLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_PersistLocation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeFilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeFilterType_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeFilterType = { "IncludeFilterType", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPICOAnchorLoadInfo, IncludeFilterType), Z_Construct_UEnum_PICOXRMR_EPICOLoadFilterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeFilterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeFilterType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeUUIDFilter_Inner = { "IncludeUUIDFilter", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPICOAnchorUUID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeUUIDFilter_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeUUIDFilter = { "IncludeUUIDFilter", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPICOAnchorLoadInfo, IncludeUUIDFilter), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeUUIDFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeUUIDFilter_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeSpatialSceneDataTypeFilter_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeSpatialSceneDataTypeFilter_Inner = { "IncludeSpatialSceneDataTypeFilter", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneDataTypeFlags, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeSpatialSceneDataTypeFilter_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeSpatialSceneDataTypeFilter = { "IncludeSpatialSceneDataTypeFilter", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPICOAnchorLoadInfo, IncludeSpatialSceneDataTypeFilter), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeSpatialSceneDataTypeFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeSpatialSceneDataTypeFilter_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeFilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeFilterType_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeFilterType = { "ExcludeFilterType", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPICOAnchorLoadInfo, ExcludeFilterType), Z_Construct_UEnum_PICOXRMR_EPICOLoadFilterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeFilterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeFilterType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeUUIDFilter_Inner = { "ExcludeUUIDFilter", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPICOAnchorUUID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeUUIDFilter_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeUUIDFilter = { "ExcludeUUIDFilter", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPICOAnchorLoadInfo, ExcludeUUIDFilter), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeUUIDFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeUUIDFilter_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeSpatialSceneDataTypeFilter_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeSpatialSceneDataTypeFilter_Inner = { "ExcludeSpatialSceneDataTypeFilter", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_PICOXRMR_EPICOSpatialSceneDataTypeFlags, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeSpatialSceneDataTypeFilter_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeSpatialSceneDataTypeFilter = { "ExcludeSpatialSceneDataTypeFilter", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPICOAnchorLoadInfo, ExcludeSpatialSceneDataTypeFilter), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeSpatialSceneDataTypeFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeSpatialSceneDataTypeFilter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_LoadMaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_Timeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_PersistLocation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_PersistLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeFilterType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeFilterType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeUUIDFilter_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeUUIDFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeSpatialSceneDataTypeFilter_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeSpatialSceneDataTypeFilter_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_IncludeSpatialSceneDataTypeFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeFilterType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeFilterType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeUUIDFilter_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeUUIDFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeSpatialSceneDataTypeFilter_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeSpatialSceneDataTypeFilter_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::NewProp_ExcludeSpatialSceneDataTypeFilter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMR,
		nullptr,
		&NewStructOps,
		"PICOAnchorLoadInfo",
		sizeof(FPICOAnchorLoadInfo),
		alignof(FPICOAnchorLoadInfo),
		Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorLoadInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMR();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PICOAnchorLoadInfo"), sizeof(FPICOAnchorLoadInfo), Get_Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Hash() { return 3622457121U; }
class UScriptStruct* FPICOAnchorVolumeInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRMR_API uint32 Get_Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("PICOAnchorVolumeInfo"), sizeof(FPICOAnchorVolumeInfo), Get_Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Hash());
	}
	return Singleton;
}
template<> PICOXRMR_API UScriptStruct* StaticStruct<FPICOAnchorVolumeInfo>()
{
	return FPICOAnchorVolumeInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPICOAnchorVolumeInfo(FPICOAnchorVolumeInfo::StaticStruct, TEXT("/Script/PICOXRMR"), TEXT("PICOAnchorVolumeInfo"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRMR_StaticRegisterNativesFPICOAnchorVolumeInfo
{
	FScriptStruct_PICOXRMR_StaticRegisterNativesFPICOAnchorVolumeInfo()
	{
		UScriptStruct::DeferCppStructOps<FPICOAnchorVolumeInfo>(FName(TEXT("PICOAnchorVolumeInfo")));
	}
} ScriptStruct_PICOXRMR_StaticRegisterNativesFPICOAnchorVolumeInfo;
	struct Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPICOAnchorVolumeInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPICOAnchorVolumeInfo, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::NewProp_Extent_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPICOAnchorVolumeInfo, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::NewProp_Extent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::NewProp_Extent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::NewProp_Extent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMR,
		nullptr,
		&NewStructOps,
		"PICOAnchorVolumeInfo",
		sizeof(FPICOAnchorVolumeInfo),
		alignof(FPICOAnchorVolumeInfo),
		Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMR();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PICOAnchorVolumeInfo"), sizeof(FPICOAnchorVolumeInfo), Get_Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Hash() { return 3909792659U; }
class UScriptStruct* FPICOAnchorPlanePolygonInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRMR_API uint32 Get_Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("PICOAnchorPlanePolygonInfo"), sizeof(FPICOAnchorPlanePolygonInfo), Get_Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Hash());
	}
	return Singleton;
}
template<> PICOXRMR_API UScriptStruct* StaticStruct<FPICOAnchorPlanePolygonInfo>()
{
	return FPICOAnchorPlanePolygonInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPICOAnchorPlanePolygonInfo(FPICOAnchorPlanePolygonInfo::StaticStruct, TEXT("/Script/PICOXRMR"), TEXT("PICOAnchorPlanePolygonInfo"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRMR_StaticRegisterNativesFPICOAnchorPlanePolygonInfo
{
	FScriptStruct_PICOXRMR_StaticRegisterNativesFPICOAnchorPlanePolygonInfo()
	{
		UScriptStruct::DeferCppStructOps<FPICOAnchorPlanePolygonInfo>(FName(TEXT("PICOAnchorPlanePolygonInfo")));
	}
} ScriptStruct_PICOXRMR_StaticRegisterNativesFPICOAnchorPlanePolygonInfo;
	struct Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticesNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VerticesNum;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPICOAnchorPlanePolygonInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewProp_VerticesNum_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewProp_VerticesNum = { "VerticesNum", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPICOAnchorPlanePolygonInfo, VerticesNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewProp_VerticesNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewProp_VerticesNum_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPICOAnchorPlanePolygonInfo, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewProp_VerticesNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewProp_Vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::NewProp_Vertices,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMR,
		nullptr,
		&NewStructOps,
		"PICOAnchorPlanePolygonInfo",
		sizeof(FPICOAnchorPlanePolygonInfo),
		alignof(FPICOAnchorPlanePolygonInfo),
		Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMR();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PICOAnchorPlanePolygonInfo"), sizeof(FPICOAnchorPlanePolygonInfo), Get_Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Hash() { return 2107745398U; }
class UScriptStruct* FPICOAnchorPlaneBoundaryInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRMR_API uint32 Get_Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("PICOAnchorPlaneBoundaryInfo"), sizeof(FPICOAnchorPlaneBoundaryInfo), Get_Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Hash());
	}
	return Singleton;
}
template<> PICOXRMR_API UScriptStruct* StaticStruct<FPICOAnchorPlaneBoundaryInfo>()
{
	return FPICOAnchorPlaneBoundaryInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo(FPICOAnchorPlaneBoundaryInfo::StaticStruct, TEXT("/Script/PICOXRMR"), TEXT("PICOAnchorPlaneBoundaryInfo"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRMR_StaticRegisterNativesFPICOAnchorPlaneBoundaryInfo
{
	FScriptStruct_PICOXRMR_StaticRegisterNativesFPICOAnchorPlaneBoundaryInfo()
	{
		UScriptStruct::DeferCppStructOps<FPICOAnchorPlaneBoundaryInfo>(FName(TEXT("PICOAnchorPlaneBoundaryInfo")));
	}
} ScriptStruct_PICOXRMR_StaticRegisterNativesFPICOAnchorPlaneBoundaryInfo;
	struct Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPICOAnchorPlaneBoundaryInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPICOAnchorPlaneBoundaryInfo, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::NewProp_Extent_MetaData[] = {
		{ "Category", "PXR|MR" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPICOAnchorPlaneBoundaryInfo, Extent), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::NewProp_Extent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::NewProp_Extent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::NewProp_Extent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMR,
		nullptr,
		&NewStructOps,
		"PICOAnchorPlaneBoundaryInfo",
		sizeof(FPICOAnchorPlaneBoundaryInfo),
		alignof(FPICOAnchorPlaneBoundaryInfo),
		Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMR();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PICOAnchorPlaneBoundaryInfo"), sizeof(FPICOAnchorPlaneBoundaryInfo), Get_Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Hash() { return 4046247912U; }
class UScriptStruct* FPICOAnchorUUID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRMR_API uint32 Get_Z_Construct_UScriptStruct_FPICOAnchorUUID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPICOAnchorUUID, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("PICOAnchorUUID"), sizeof(FPICOAnchorUUID), Get_Z_Construct_UScriptStruct_FPICOAnchorUUID_Hash());
	}
	return Singleton;
}
template<> PICOXRMR_API UScriptStruct* StaticStruct<FPICOAnchorUUID>()
{
	return FPICOAnchorUUID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPICOAnchorUUID(FPICOAnchorUUID::StaticStruct, TEXT("/Script/PICOXRMR"), TEXT("PICOAnchorUUID"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRMR_StaticRegisterNativesFPICOAnchorUUID
{
	FScriptStruct_PICOXRMR_StaticRegisterNativesFPICOAnchorUUID()
	{
		UScriptStruct::DeferCppStructOps<FPICOAnchorUUID>(FName(TEXT("PICOAnchorUUID")));
	}
} ScriptStruct_PICOXRMR_StaticRegisterNativesFPICOAnchorUUID;
	struct Z_Construct_UScriptStruct_FPICOAnchorUUID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchorUUID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPICOAnchorUUID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPICOAnchorUUID>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPICOAnchorUUID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMR,
		nullptr,
		&NewStructOps,
		"PICOAnchorUUID",
		sizeof(FPICOAnchorUUID),
		alignof(FPICOAnchorUUID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchorUUID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchorUUID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchorUUID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPICOAnchorUUID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMR();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PICOAnchorUUID"), sizeof(FPICOAnchorUUID), Get_Z_Construct_UScriptStruct_FPICOAnchorUUID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPICOAnchorUUID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPICOAnchorUUID_Hash() { return 1301303568U; }
class UScriptStruct* FPICOAnchor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRMR_API uint32 Get_Z_Construct_UScriptStruct_FPICOAnchor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPICOAnchor, Z_Construct_UPackage__Script_PICOXRMR(), TEXT("PICOAnchor"), sizeof(FPICOAnchor), Get_Z_Construct_UScriptStruct_FPICOAnchor_Hash());
	}
	return Singleton;
}
template<> PICOXRMR_API UScriptStruct* StaticStruct<FPICOAnchor>()
{
	return FPICOAnchor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPICOAnchor(FPICOAnchor::StaticStruct, TEXT("/Script/PICOXRMR"), TEXT("PICOAnchor"), false, nullptr, nullptr);
static struct FScriptStruct_PICOXRMR_StaticRegisterNativesFPICOAnchor
{
	FScriptStruct_PICOXRMR_StaticRegisterNativesFPICOAnchor()
	{
		UScriptStruct::DeferCppStructOps<FPICOAnchor>(FName(TEXT("PICOAnchor")));
	}
} ScriptStruct_PICOXRMR_StaticRegisterNativesFPICOAnchor;
	struct Z_Construct_UScriptStruct_FPICOAnchor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPICOAnchor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_MRTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPICOAnchor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPICOAnchor>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPICOAnchor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PICOXRMR,
		nullptr,
		&NewStructOps,
		"PICOAnchor",
		sizeof(FPICOAnchor),
		alignof(FPICOAnchor),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPICOAnchor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPICOAnchor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPICOAnchor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPICOAnchor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PICOXRMR();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PICOAnchor"), sizeof(FPICOAnchor), Get_Z_Construct_UScriptStruct_FPICOAnchor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPICOAnchor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPICOAnchor_Hash() { return 1868236356U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
