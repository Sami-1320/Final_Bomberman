// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalBomberMan/DirectorNiveles.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectorNiveles() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UConstructorMapa_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UDirectorNiveles();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UDirectorNiveles_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalBomberMan();
// End Cross Module References

// Begin Class UDirectorNiveles Function CrearConstructorMapa
struct Z_Construct_UFunction_UDirectorNiveles_CrearConstructorMapa_Statics
{
	struct DirectorNiveles_eventCrearConstructorMapa_Parms
	{
		UConstructorMapa* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Director Niveles" },
		{ "ModuleRelativePath", "DirectorNiveles.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDirectorNiveles_CrearConstructorMapa_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectorNiveles_eventCrearConstructorMapa_Parms, ReturnValue), Z_Construct_UClass_UConstructorMapa_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectorNiveles_CrearConstructorMapa_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectorNiveles_CrearConstructorMapa_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectorNiveles_CrearConstructorMapa_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectorNiveles_CrearConstructorMapa_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectorNiveles, nullptr, "CrearConstructorMapa", nullptr, nullptr, Z_Construct_UFunction_UDirectorNiveles_CrearConstructorMapa_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectorNiveles_CrearConstructorMapa_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDirectorNiveles_CrearConstructorMapa_Statics::DirectorNiveles_eventCrearConstructorMapa_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectorNiveles_CrearConstructorMapa_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDirectorNiveles_CrearConstructorMapa_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDirectorNiveles_CrearConstructorMapa_Statics::DirectorNiveles_eventCrearConstructorMapa_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDirectorNiveles_CrearConstructorMapa()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectorNiveles_CrearConstructorMapa_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDirectorNiveles::execCrearConstructorMapa)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UConstructorMapa**)Z_Param__Result=UDirectorNiveles::CrearConstructorMapa();
	P_NATIVE_END;
}
// End Class UDirectorNiveles Function CrearConstructorMapa

// Begin Class UDirectorNiveles Function CrearNivel1
struct Z_Construct_UFunction_UDirectorNiveles_CrearNivel1_Statics
{
	struct DirectorNiveles_eventCrearNivel1_Parms
	{
		UWorld* Mundo;
		UConstructorMapa* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Director Niveles" },
		{ "ModuleRelativePath", "DirectorNiveles.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mundo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDirectorNiveles_CrearNivel1_Statics::NewProp_Mundo = { "Mundo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectorNiveles_eventCrearNivel1_Parms, Mundo), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDirectorNiveles_CrearNivel1_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectorNiveles_eventCrearNivel1_Parms, ReturnValue), Z_Construct_UClass_UConstructorMapa_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectorNiveles_CrearNivel1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectorNiveles_CrearNivel1_Statics::NewProp_Mundo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectorNiveles_CrearNivel1_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectorNiveles_CrearNivel1_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectorNiveles_CrearNivel1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectorNiveles, nullptr, "CrearNivel1", nullptr, nullptr, Z_Construct_UFunction_UDirectorNiveles_CrearNivel1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectorNiveles_CrearNivel1_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDirectorNiveles_CrearNivel1_Statics::DirectorNiveles_eventCrearNivel1_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectorNiveles_CrearNivel1_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDirectorNiveles_CrearNivel1_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDirectorNiveles_CrearNivel1_Statics::DirectorNiveles_eventCrearNivel1_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDirectorNiveles_CrearNivel1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectorNiveles_CrearNivel1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDirectorNiveles::execCrearNivel1)
{
	P_GET_OBJECT(UWorld,Z_Param_Mundo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UConstructorMapa**)Z_Param__Result=UDirectorNiveles::CrearNivel1(Z_Param_Mundo);
	P_NATIVE_END;
}
// End Class UDirectorNiveles Function CrearNivel1

// Begin Class UDirectorNiveles Function CrearNivel2
struct Z_Construct_UFunction_UDirectorNiveles_CrearNivel2_Statics
{
	struct DirectorNiveles_eventCrearNivel2_Parms
	{
		UWorld* Mundo;
		UConstructorMapa* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Director Niveles" },
		{ "ModuleRelativePath", "DirectorNiveles.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mundo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDirectorNiveles_CrearNivel2_Statics::NewProp_Mundo = { "Mundo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectorNiveles_eventCrearNivel2_Parms, Mundo), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDirectorNiveles_CrearNivel2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectorNiveles_eventCrearNivel2_Parms, ReturnValue), Z_Construct_UClass_UConstructorMapa_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectorNiveles_CrearNivel2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectorNiveles_CrearNivel2_Statics::NewProp_Mundo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectorNiveles_CrearNivel2_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectorNiveles_CrearNivel2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectorNiveles_CrearNivel2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectorNiveles, nullptr, "CrearNivel2", nullptr, nullptr, Z_Construct_UFunction_UDirectorNiveles_CrearNivel2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectorNiveles_CrearNivel2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDirectorNiveles_CrearNivel2_Statics::DirectorNiveles_eventCrearNivel2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectorNiveles_CrearNivel2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDirectorNiveles_CrearNivel2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDirectorNiveles_CrearNivel2_Statics::DirectorNiveles_eventCrearNivel2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDirectorNiveles_CrearNivel2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectorNiveles_CrearNivel2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDirectorNiveles::execCrearNivel2)
{
	P_GET_OBJECT(UWorld,Z_Param_Mundo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UConstructorMapa**)Z_Param__Result=UDirectorNiveles::CrearNivel2(Z_Param_Mundo);
	P_NATIVE_END;
}
// End Class UDirectorNiveles Function CrearNivel2

// Begin Class UDirectorNiveles
void UDirectorNiveles::StaticRegisterNativesUDirectorNiveles()
{
	UClass* Class = UDirectorNiveles::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CrearConstructorMapa", &UDirectorNiveles::execCrearConstructorMapa },
		{ "CrearNivel1", &UDirectorNiveles::execCrearNivel1 },
		{ "CrearNivel2", &UDirectorNiveles::execCrearNivel2 },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDirectorNiveles);
UClass* Z_Construct_UClass_UDirectorNiveles_NoRegister()
{
	return UDirectorNiveles::StaticClass();
}
struct Z_Construct_UClass_UDirectorNiveles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DirectorNiveles.h" },
		{ "ModuleRelativePath", "DirectorNiveles.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDirectorNiveles_CrearConstructorMapa, "CrearConstructorMapa" }, // 373275046
		{ &Z_Construct_UFunction_UDirectorNiveles_CrearNivel1, "CrearNivel1" }, // 2803008985
		{ &Z_Construct_UFunction_UDirectorNiveles_CrearNivel2, "CrearNivel2" }, // 2003004726
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDirectorNiveles>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDirectorNiveles_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalBomberMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDirectorNiveles_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDirectorNiveles_Statics::ClassParams = {
	&UDirectorNiveles::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDirectorNiveles_Statics::Class_MetaDataParams), Z_Construct_UClass_UDirectorNiveles_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDirectorNiveles()
{
	if (!Z_Registration_Info_UClass_UDirectorNiveles.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDirectorNiveles.OuterSingleton, Z_Construct_UClass_UDirectorNiveles_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDirectorNiveles.OuterSingleton;
}
template<> FINALBOMBERMAN_API UClass* StaticClass<UDirectorNiveles>()
{
	return UDirectorNiveles::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDirectorNiveles);
UDirectorNiveles::~UDirectorNiveles() {}
// End Class UDirectorNiveles

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_DirectorNiveles_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDirectorNiveles, UDirectorNiveles::StaticClass, TEXT("UDirectorNiveles"), &Z_Registration_Info_UClass_UDirectorNiveles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDirectorNiveles), 3356267901U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_DirectorNiveles_h_3140487132(TEXT("/Script/FinalBomberMan"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_DirectorNiveles_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Final_Bomberman_Source_FinalBomberMan_DirectorNiveles_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
