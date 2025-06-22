// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FinalBomberManCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINALBOMBERMAN_FinalBomberManCharacter_generated_h
#error "FinalBomberManCharacter.generated.h already included, missing '#pragma once' in FinalBomberManCharacter.h"
#endif
#define FINALBOMBERMAN_FinalBomberManCharacter_generated_h

#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_FinalBomberManCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetExplosionRadius); \
	DECLARE_FUNCTION(execGetExplosionRadius); \
	DECLARE_FUNCTION(execSetBombCount); \
	DECLARE_FUNCTION(execGetBombCount); \
	DECLARE_FUNCTION(execPlaceBombAtLocation);


#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_FinalBomberManCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFinalBomberManCharacter(); \
	friend struct Z_Construct_UClass_AFinalBomberManCharacter_Statics; \
public: \
	DECLARE_CLASS(AFinalBomberManCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalBomberMan"), NO_API) \
	DECLARE_SERIALIZER(AFinalBomberManCharacter)


#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_FinalBomberManCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFinalBomberManCharacter(AFinalBomberManCharacter&&); \
	AFinalBomberManCharacter(const AFinalBomberManCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFinalBomberManCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinalBomberManCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFinalBomberManCharacter) \
	NO_API virtual ~AFinalBomberManCharacter();


#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_FinalBomberManCharacter_h_18_PROLOG
#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_FinalBomberManCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_FinalBomberManCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_FinalBomberManCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_FinalBomberManCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALBOMBERMAN_API UClass* StaticClass<class AFinalBomberManCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_FinalBomberManCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
