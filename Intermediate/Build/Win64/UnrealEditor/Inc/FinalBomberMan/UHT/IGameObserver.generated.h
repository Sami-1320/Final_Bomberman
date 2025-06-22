// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IGameObserver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINALBOMBERMAN_IGameObserver_generated_h
#error "IGameObserver.generated.h already included, missing '#pragma once' in IGameObserver.h"
#endif
#define FINALBOMBERMAN_IGameObserver_generated_h

#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IGameObserver_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FINALBOMBERMAN_API UIGameObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIGameObserver(UIGameObserver&&); \
	UIGameObserver(const UIGameObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FINALBOMBERMAN_API, UIGameObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIGameObserver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIGameObserver) \
	FINALBOMBERMAN_API virtual ~UIGameObserver();


#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IGameObserver_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIGameObserver(); \
	friend struct Z_Construct_UClass_UIGameObserver_Statics; \
public: \
	DECLARE_CLASS(UIGameObserver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FinalBomberMan"), FINALBOMBERMAN_API) \
	DECLARE_SERIALIZER(UIGameObserver)


#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IGameObserver_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IGameObserver_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IGameObserver_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IGameObserver_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIGameObserver() {} \
public: \
	typedef UIGameObserver UClassType; \
	typedef IIGameObserver ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IGameObserver_h_11_PROLOG
#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IGameObserver_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IGameObserver_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALBOMBERMAN_API UClass* StaticClass<class UIGameObserver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IGameObserver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
