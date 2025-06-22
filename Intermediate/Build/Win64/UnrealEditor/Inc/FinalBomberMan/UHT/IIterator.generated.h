// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IIterator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINALBOMBERMAN_IIterator_generated_h
#error "IIterator.generated.h already included, missing '#pragma once' in IIterator.h"
#endif
#define FINALBOMBERMAN_IIterator_generated_h

#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IIterator_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FINALBOMBERMAN_API UIIterator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIIterator(UIIterator&&); \
	UIIterator(const UIIterator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FINALBOMBERMAN_API, UIIterator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIIterator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIIterator) \
	FINALBOMBERMAN_API virtual ~UIIterator();


#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IIterator_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIIterator(); \
	friend struct Z_Construct_UClass_UIIterator_Statics; \
public: \
	DECLARE_CLASS(UIIterator, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FinalBomberMan"), FINALBOMBERMAN_API) \
	DECLARE_SERIALIZER(UIIterator)


#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IIterator_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IIterator_h_11_GENERATED_UINTERFACE_BODY() \
	FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IIterator_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IIterator_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIIterator() {} \
public: \
	typedef UIIterator UClassType; \
	typedef IIIterator ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IIterator_h_8_PROLOG
#define FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IIterator_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IIterator_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALBOMBERMAN_API UClass* StaticClass<class UIIterator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_IIterator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
