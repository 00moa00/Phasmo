// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Phasmo/PhasmoGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhasmoGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PHASMO_API UClass* Z_Construct_UClass_APhasmoGameModeBase();
	PHASMO_API UClass* Z_Construct_UClass_APhasmoGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Phasmo();
// End Cross Module References
	void APhasmoGameModeBase::StaticRegisterNativesAPhasmoGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APhasmoGameModeBase);
	UClass* Z_Construct_UClass_APhasmoGameModeBase_NoRegister()
	{
		return APhasmoGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APhasmoGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhasmoGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Phasmo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhasmoGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PhasmoGameModeBase.h" },
		{ "ModuleRelativePath", "PhasmoGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhasmoGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhasmoGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APhasmoGameModeBase_Statics::ClassParams = {
		&APhasmoGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APhasmoGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APhasmoGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhasmoGameModeBase()
	{
		if (!Z_Registration_Info_UClass_APhasmoGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APhasmoGameModeBase.OuterSingleton, Z_Construct_UClass_APhasmoGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APhasmoGameModeBase.OuterSingleton;
	}
	template<> PHASMO_API UClass* StaticClass<APhasmoGameModeBase>()
	{
		return APhasmoGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhasmoGameModeBase);
	APhasmoGameModeBase::~APhasmoGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Phasmo_Source_Phasmo_PhasmoGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Phasmo_Source_Phasmo_PhasmoGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APhasmoGameModeBase, APhasmoGameModeBase::StaticClass, TEXT("APhasmoGameModeBase"), &Z_Registration_Info_UClass_APhasmoGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APhasmoGameModeBase), 801567297U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Phasmo_Source_Phasmo_PhasmoGameModeBase_h_1748784922(TEXT("/Script/Phasmo"),
		Z_CompiledInDeferFile_FID_Phasmo_Source_Phasmo_PhasmoGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Phasmo_Source_Phasmo_PhasmoGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
