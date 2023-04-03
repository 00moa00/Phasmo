// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Phasmo/GameInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInfo() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PHASMO_API UClass* Z_Construct_UClass_UGameInfo();
	PHASMO_API UClass* Z_Construct_UClass_UGameInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Phasmo();
// End Cross Module References
	void UGameInfo::StaticRegisterNativesUGameInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameInfo);
	UClass* Z_Construct_UClass_UGameInfo_NoRegister()
	{
		return UGameInfo::StaticClass();
	}
	struct Z_Construct_UClass_UGameInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Phasmo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInfo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameInfo.h" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameInfo_Statics::ClassParams = {
		&UGameInfo::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameInfo()
	{
		if (!Z_Registration_Info_UClass_UGameInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameInfo.OuterSingleton, Z_Construct_UClass_UGameInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameInfo.OuterSingleton;
	}
	template<> PHASMO_API UClass* StaticClass<UGameInfo>()
	{
		return UGameInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameInfo);
	UGameInfo::~UGameInfo() {}
	struct Z_CompiledInDeferFile_FID_Phasmo_Source_Phasmo_GameInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Phasmo_Source_Phasmo_GameInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameInfo, UGameInfo::StaticClass, TEXT("UGameInfo"), &Z_Registration_Info_UClass_UGameInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameInfo), 3009211747U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Phasmo_Source_Phasmo_GameInfo_h_1336077022(TEXT("/Script/Phasmo"),
		Z_CompiledInDeferFile_FID_Phasmo_Source_Phasmo_GameInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Phasmo_Source_Phasmo_GameInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
