// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhasmo_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Phasmo;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Phasmo()
	{
		if (!Z_Registration_Info_UPackage__Script_Phasmo.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Phasmo",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x2C513F38,
				0xB0BC28B1,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Phasmo.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Phasmo.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Phasmo(Z_Construct_UPackage__Script_Phasmo, TEXT("/Script/Phasmo"), Z_Registration_Info_UPackage__Script_Phasmo, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2C513F38, 0xB0BC28B1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
