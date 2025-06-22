// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VFXManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINALBOMBERMAN_VFXManager_generated_h
#error "VFXManager.generated.h already included, missing '#pragma once' in VFXManager.h"
#endif
#define FINALBOMBERMAN_VFXManager_generated_h

#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_VFXManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCrearEfectoDano); \
	DECLARE_FUNCTION(execCrearEfectoVictoria); \
	DECLARE_FUNCTION(execCrearEfectoMuerte); \
	DECLARE_FUNCTION(execCrearEfectoPowerUp); \
	DECLARE_FUNCTION(execCrearEfectoDestruccion); \
	DECLARE_FUNCTION(execCrearEfectoExplosion);


#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_VFXManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVFXManager(); \
	friend struct Z_Construct_UClass_UVFXManager_Statics; \
public: \
	DECLARE_CLASS(UVFXManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FinalBomberMan"), NO_API) \
	DECLARE_SERIALIZER(UVFXManager) \
	virtual UObject* _getUObject() const override { return const_cast<UVFXManager*>(this); }


#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_VFXManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVFXManager(UVFXManager&&); \
	UVFXManager(const UVFXManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVFXManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVFXManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVFXManager) \
	NO_API virtual ~UVFXManager();


#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_VFXManager_h_13_PROLOG
#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_VFXManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_VFXManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_VFXManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_VFXManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALBOMBERMAN_API UClass* StaticClass<class UVFXManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_VFXManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
