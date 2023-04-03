// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Phasmo/Manager/NoteManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoteManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PHASMO_API UClass* Z_Construct_UClass_UNoteManager();
	PHASMO_API UClass* Z_Construct_UClass_UNoteManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Phasmo();
// End Cross Module References
	void UNoteManager::StaticRegisterNativesUNoteManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNoteManager);
	UClass* Z_Construct_UClass_UNoteManager_NoRegister()
	{
		return UNoteManager::StaticClass();
	}
	struct Z_Construct_UClass_UNoteManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNoteManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Phasmo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoteManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Manager/NoteManager.h" },
		{ "ModuleRelativePath", "Manager/NoteManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNoteManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNoteManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNoteManager_Statics::ClassParams = {
		&UNoteManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNoteManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNoteManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNoteManager()
	{
		if (!Z_Registration_Info_UClass_UNoteManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNoteManager.OuterSingleton, Z_Construct_UClass_UNoteManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNoteManager.OuterSingleton;
	}
	template<> PHASMO_API UClass* StaticClass<UNoteManager>()
	{
		return UNoteManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNoteManager);
	UNoteManager::~UNoteManager() {}
	struct Z_CompiledInDeferFile_FID_Phasmo_Source_Phasmo_Manager_NoteManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Phasmo_Source_Phasmo_Manager_NoteManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNoteManager, UNoteManager::StaticClass, TEXT("UNoteManager"), &Z_Registration_Info_UClass_UNoteManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNoteManager), 1346122814U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Phasmo_Source_Phasmo_Manager_NoteManager_h_539726203(TEXT("/Script/Phasmo"),
		Z_CompiledInDeferFile_FID_Phasmo_Source_Phasmo_Manager_NoteManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Phasmo_Source_Phasmo_Manager_NoteManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
