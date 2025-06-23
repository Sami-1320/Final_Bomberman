// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Bomba.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINALBOMBERMAN_Bomba_generated_h
#error "Bomba.generated.h already included, missing '#pragma once' in Bomba.h"
#endif
#define FINALBOMBERMAN_Bomba_generated_h

#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_Bomba_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEstaActivada); \
	DECLARE_FUNCTION(execObtenerTiempoRestante); \
	DECLARE_FUNCTION(execCancelarExplosion); \
	DECLARE_FUNCTION(execDetonar); \
	DECLARE_FUNCTION(execIniciarExplosion);


#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_Bomba_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABomba(); \
	friend struct Z_Construct_UClass_ABomba_Statics; \
public: \
	DECLARE_CLASS(ABomba, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalBomberMan"), NO_API) \
	DECLARE_SERIALIZER(ABomba) \
	virtual UObject* _getUObject() const override { return const_cast<ABomba*>(this); }


#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_Bomba_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABomba(ABomba&&); \
	ABomba(const ABomba&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomba); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomba); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABomba) \
	NO_API virtual ~ABomba();


#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_Bomba_h_20_PROLOG
#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_Bomba_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_Bomba_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_Bomba_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_Bomba_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALBOMBERMAN_API UClass* StaticClass<class ABomba>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_Bomba_h


#define FOREACH_ENUM_ETIPOBOMBA(op) \
	op(ETipoBomba::Normal) \
	op(ETipoBomba::Remota) \
	op(ETipoBomba::Cronometro) \
	op(ETipoBomba::Cascada) 

enum class ETipoBomba : uint8;
template<> struct TIsUEnumClass<ETipoBomba> { enum { Value = true }; };
template<> FINALBOMBERMAN_API UEnum* StaticEnum<ETipoBomba>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
