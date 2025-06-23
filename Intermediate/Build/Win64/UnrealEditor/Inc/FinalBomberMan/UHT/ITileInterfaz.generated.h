// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ITileInterfaz.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINALBOMBERMAN_ITileInterfaz_generated_h
#error "ITileInterfaz.generated.h already included, missing '#pragma once' in ITileInterfaz.h"
#endif
#define FINALBOMBERMAN_ITileInterfaz_generated_h

#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_ITileInterfaz_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FINALBOMBERMAN_API UITileInterfaz(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UITileInterfaz(UITileInterfaz&&); \
	UITileInterfaz(const UITileInterfaz&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FINALBOMBERMAN_API, UITileInterfaz); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UITileInterfaz); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UITileInterfaz) \
	FINALBOMBERMAN_API virtual ~UITileInterfaz();


#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_ITileInterfaz_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUITileInterfaz(); \
	friend struct Z_Construct_UClass_UITileInterfaz_Statics; \
public: \
	DECLARE_CLASS(UITileInterfaz, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FinalBomberMan"), FINALBOMBERMAN_API) \
	DECLARE_SERIALIZER(UITileInterfaz)


#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_ITileInterfaz_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_ITileInterfaz_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_ITileInterfaz_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_ITileInterfaz_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IITileInterfaz() {} \
public: \
	typedef UITileInterfaz UClassType; \
	typedef IITileInterfaz ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_ITileInterfaz_h_11_PROLOG
#define FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_ITileInterfaz_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_ITileInterfaz_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALBOMBERMAN_API UClass* StaticClass<class UITileInterfaz>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_ITileInterfaz_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
