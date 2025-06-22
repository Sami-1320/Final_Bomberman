// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemigo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AFinalBomberManCharacter;
class UPrimitiveComponent;
enum class ETipoEnemigo : uint8;
struct FHitResult;
#ifdef FINALBOMBERMAN_Enemigo_generated_h
#error "Enemigo.generated.h already included, missing '#pragma once' in Enemigo.h"
#endif
#define FINALBOMBERMAN_Enemigo_generated_h

#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_Enemigo_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execObtenerDistanciaAlJugador); \
	DECLARE_FUNCTION(execEstaPersiguiendoJugador); \
	DECLARE_FUNCTION(execObtenerPuntuacion); \
	DECLARE_FUNCTION(execObtenerTipo); \
	DECLARE_FUNCTION(execObtenerVida); \
	DECLARE_FUNCTION(execEstaVivo); \
	DECLARE_FUNCTION(execAtacarJugador); \
	DECLARE_FUNCTION(execMoverHaciaJugador); \
	DECLARE_FUNCTION(execMorir); \
	DECLARE_FUNCTION(execRecibirDano);


#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_Enemigo_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemigo(); \
	friend struct Z_Construct_UClass_AEnemigo_Statics; \
public: \
	DECLARE_CLASS(AEnemigo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalBomberMan"), NO_API) \
	DECLARE_SERIALIZER(AEnemigo) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemigo*>(this); }


#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_Enemigo_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemigo(AEnemigo&&); \
	AEnemigo(const AEnemigo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemigo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemigo) \
	NO_API virtual ~AEnemigo();


#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_Enemigo_h_19_PROLOG
#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_Enemigo_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_Enemigo_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_Enemigo_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_Enemigo_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALBOMBERMAN_API UClass* StaticClass<class AEnemigo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_Enemigo_h


#define FOREACH_ENUM_ETIPOENEMIGO(op) \
	op(ETipoEnemigo::Basico) \
	op(ETipoEnemigo::Rapido) \
	op(ETipoEnemigo::Tanque) \
	op(ETipoEnemigo::Explosivo) \
	op(ETipoEnemigo::Volador) 

enum class ETipoEnemigo : uint8;
template<> struct TIsUEnumClass<ETipoEnemigo> { enum { Value = true }; };
template<> FINALBOMBERMAN_API UEnum* StaticEnum<ETipoEnemigo>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
