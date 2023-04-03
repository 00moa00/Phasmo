// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Phasmo/PhasmoGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhasmoGameInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	PHASMO_API UClass* Z_Construct_UClass_UPhasmoGameInstance();
	PHASMO_API UClass* Z_Construct_UClass_UPhasmoGameInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Phasmo();
// End Cross Module References
	void UPhasmoGameInstance::StaticRegisterNativesUPhasmoGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhasmoGameInstance);
	UClass* Z_Construct_UClass_UPhasmoGameInstance_NoRegister()
	{
		return UPhasmoGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPhasmoGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhasmoGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Phasmo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhasmoGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PhasmoGameInstance.h" },
		{ "ModuleRelativePath", "PhasmoGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhasmoGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhasmoGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhasmoGameInstance_Statics::ClassParams = {
		&UPhasmoGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPhasmoGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhasmoGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhasmoGameInstance()
	{
		if (!Z_Registration_Info_UClass_UPhasmoGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhasmoGameInstance.OuterSingleton, Z_Construct_UClass_UPhasmoGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhasmoGameInstance.OuterSingleton;
	}
	template<> PHASMO_API UClass* StaticClass<UPhasmoGameInstance>()
	{
		return UPhasmoGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhasmoGameInstance);
	UPhasmoGameInstance::~UPhasmoGameInstance() {}
	struct Z_CompiledInDeferFile_FID_Phasmo_Source_Phasmo_PhasmoGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Phasmo_Source_Phasmo_PhasmoGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhasmoGameInstance, UPhasmoGameInstance::StaticClass, TEXT("UPhasmoGameInstance"), &Z_Registration_Info_UClass_UPhasmoGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhasmoGameInstance), 317570252U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Phasmo_Source_Phasmo_PhasmoGameInstance_h_3681291925(TEXT("/Script/Phasmo"),
		Z_CompiledInDeferFile_FID_Phasmo_Source_Phasmo_PhasmoGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Phasmo_Source_Phasmo_PhasmoGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
