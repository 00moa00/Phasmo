// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHASMO_GameInfo_generated_h
#error "GameInfo.generated.h already included, missing '#pragma once' in GameInfo.h"
#endif
#define PHASMO_GameInfo_generated_h

#define FID_Phasmo_Source_Phasmo_GameInfo_h_15_SPARSE_DATA
#define FID_Phasmo_Source_Phasmo_GameInfo_h_15_RPC_WRAPPERS
#define FID_Phasmo_Source_Phasmo_GameInfo_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Phasmo_Source_Phasmo_GameInfo_h_15_ACCESSORS
#define FID_Phasmo_Source_Phasmo_GameInfo_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameInfo(); \
	friend struct Z_Construct_UClass_UGameInfo_Statics; \
public: \
	DECLARE_CLASS(UGameInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Phasmo"), NO_API) \
	DECLARE_SERIALIZER(UGameInfo)


#define FID_Phasmo_Source_Phasmo_GameInfo_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGameInfo(); \
	friend struct Z_Construct_UClass_UGameInfo_Statics; \
public: \
	DECLARE_CLASS(UGameInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Phasmo"), NO_API) \
	DECLARE_SERIALIZER(UGameInfo)


#define FID_Phasmo_Source_Phasmo_GameInfo_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameInfo(UGameInfo&&); \
	NO_API UGameInfo(const UGameInfo&); \
public: \
	NO_API virtual ~UGameInfo();


#define FID_Phasmo_Source_Phasmo_GameInfo_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameInfo(UGameInfo&&); \
	NO_API UGameInfo(const UGameInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameInfo) \
	NO_API virtual ~UGameInfo();


#define FID_Phasmo_Source_Phasmo_GameInfo_h_12_PROLOG
#define FID_Phasmo_Source_Phasmo_GameInfo_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Phasmo_Source_Phasmo_GameInfo_h_15_SPARSE_DATA \
	FID_Phasmo_Source_Phasmo_GameInfo_h_15_RPC_WRAPPERS \
	FID_Phasmo_Source_Phasmo_GameInfo_h_15_ACCESSORS \
	FID_Phasmo_Source_Phasmo_GameInfo_h_15_INCLASS \
	FID_Phasmo_Source_Phasmo_GameInfo_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Phasmo_Source_Phasmo_GameInfo_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Phasmo_Source_Phasmo_GameInfo_h_15_SPARSE_DATA \
	FID_Phasmo_Source_Phasmo_GameInfo_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Phasmo_Source_Phasmo_GameInfo_h_15_ACCESSORS \
	FID_Phasmo_Source_Phasmo_GameInfo_h_15_INCLASS_NO_PURE_DECLS \
	FID_Phasmo_Source_Phasmo_GameInfo_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PHASMO_API UClass* StaticClass<class UGameInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Phasmo_Source_Phasmo_GameInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
