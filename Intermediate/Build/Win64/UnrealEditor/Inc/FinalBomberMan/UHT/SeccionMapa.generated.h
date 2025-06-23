// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SeccionMapa.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IIElementoMapa;
#ifdef FINALBOMBERMAN_SeccionMapa_generated_h
#error "SeccionMapa.generated.h already included, missing '#pragma once' in SeccionMapa.h"
#endif
#define FINALBOMBERMAN_SeccionMapa_generated_h

#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_SeccionMapa_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAplicarExplosionEnCadena); \
	DECLARE_FUNCTION(execObtenerElementosEnPosicion); \
	DECLARE_FUNCTION(execContienePosicion); \
	DECLARE_FUNCTION(execConfigurarSeccion); \
	DECLARE_FUNCTION(execLimpiarElementos); \
	DECLARE_FUNCTION(execObtenerCantidadElementos); \
	DECLARE_FUNCTION(execObtenerElementos); \
	DECLARE_FUNCTION(execRemoverElemento); \
	DECLARE_FUNCTION(execAgregarElemento);


#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_SeccionMapa_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASeccionMapa(); \
	friend struct Z_Construct_UClass_ASeccionMapa_Statics; \
public: \
	DECLARE_CLASS(ASeccionMapa, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalBomberMan"), NO_API) \
	DECLARE_SERIALIZER(ASeccionMapa) \
	virtual UObject* _getUObject() const override { return const_cast<ASeccionMapa*>(this); }


#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_SeccionMapa_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASeccionMapa(ASeccionMapa&&); \
	ASeccionMapa(const ASeccionMapa&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASeccionMapa); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASeccionMapa); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASeccionMapa) \
	NO_API virtual ~ASeccionMapa();


#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_SeccionMapa_h_9_PROLOG
#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_SeccionMapa_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_SeccionMapa_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_SeccionMapa_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_SeccionMapa_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALBOMBERMAN_API UClass* StaticClass<class ASeccionMapa>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_SeccionMapa_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
