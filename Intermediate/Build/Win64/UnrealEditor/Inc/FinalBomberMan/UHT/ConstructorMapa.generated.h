// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConstructorMapa.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ATile;
class UConstructorMapa;
class UWorld;
struct FDatosMapa;
#ifdef FINALBOMBERMAN_ConstructorMapa_generated_h
#error "ConstructorMapa.generated.h already included, missing '#pragma once' in ConstructorMapa.h"
#endif
#define FINALBOMBERMAN_ConstructorMapa_generated_h

#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_ConstructorMapa_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDatosMapa_Statics; \
	FINALBOMBERMAN_API static class UScriptStruct* StaticStruct();


template<> FINALBOMBERMAN_API UScriptStruct* StaticStruct<struct FDatosMapa>();

#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_ConstructorMapa_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execObtenerTileEn); \
	DECLARE_FUNCTION(execLimpiarMapa); \
	DECLARE_FUNCTION(execInicializar); \
	DECLARE_FUNCTION(execConstruirMapa); \
	DECLARE_FUNCTION(execConstruir); \
	DECLARE_FUNCTION(execLlenarConBloquesDestructibles); \
	DECLARE_FUNCTION(execColocarSalidaNivel); \
	DECLARE_FUNCTION(execColocarSpawnsEnemigos); \
	DECLARE_FUNCTION(execColocarSpawnJugador); \
	DECLARE_FUNCTION(execColocarPatronColumnas); \
	DECLARE_FUNCTION(execColocarBordesIndestructibles);


#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_ConstructorMapa_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConstructorMapa(); \
	friend struct Z_Construct_UClass_UConstructorMapa_Statics; \
public: \
	DECLARE_CLASS(UConstructorMapa, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FinalBomberMan"), NO_API) \
	DECLARE_SERIALIZER(UConstructorMapa)


#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_ConstructorMapa_h_77_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UConstructorMapa(UConstructorMapa&&); \
	UConstructorMapa(const UConstructorMapa&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConstructorMapa); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstructorMapa); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConstructorMapa) \
	NO_API virtual ~UConstructorMapa();


#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_ConstructorMapa_h_74_PROLOG
#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_ConstructorMapa_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_ConstructorMapa_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_ConstructorMapa_h_77_INCLASS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_ConstructorMapa_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALBOMBERMAN_API UClass* StaticClass<class UConstructorMapa>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_ConstructorMapa_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
