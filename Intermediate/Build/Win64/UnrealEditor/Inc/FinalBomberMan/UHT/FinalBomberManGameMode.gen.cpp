// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalBomberMan/FinalBomberManGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFinalBomberManGameMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_AEnemigo_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_AFinalBomberManGameMode();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_AFinalBomberManGameMode_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_APowerUp_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_ATile_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UConstructorMapa_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UDirectorNiveles_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalBomberMan();
// End Cross Module References

// Begin Class AFinalBomberManGameMode Function CargarNivel
struct Z_Construct_UFunction_AFinalBomberManGameMode_CargarNivel_Statics
{
	struct FinalBomberManGameMode_eventCargarNivel_Parms
	{
		int32 NumeroNivel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nivel" },
		{ "ModuleRelativePath", "FinalBomberManGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumeroNivel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFinalBomberManGameMode_CargarNivel_Statics::NewProp_NumeroNivel = { "NumeroNivel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FinalBomberManGameMode_eventCargarNivel_Parms, NumeroNivel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFinalBomberManGameMode_CargarNivel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFinalBomberManGameMode_CargarNivel_Statics::NewProp_NumeroNivel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManGameMode_CargarNivel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFinalBomberManGameMode_CargarNivel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFinalBomberManGameMode, nullptr, "CargarNivel", nullptr, nullptr, Z_Construct_UFunction_AFinalBomberManGameMode_CargarNivel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManGameMode_CargarNivel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFinalBomberManGameMode_CargarNivel_Statics::FinalBomberManGameMode_eventCargarNivel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManGameMode_CargarNivel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFinalBomberManGameMode_CargarNivel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFinalBomberManGameMode_CargarNivel_Statics::FinalBomberManGameMode_eventCargarNivel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFinalBomberManGameMode_CargarNivel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFinalBomberManGameMode_CargarNivel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFinalBomberManGameMode::execCargarNivel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumeroNivel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CargarNivel(Z_Param_NumeroNivel);
	P_NATIVE_END;
}
// End Class AFinalBomberManGameMode Function CargarNivel

// Begin Class AFinalBomberManGameMode Function ObtenerAltoMapa
struct Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAltoMapa_Statics
{
	struct FinalBomberManGameMode_eventObtenerAltoMapa_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nivel" },
		{ "ModuleRelativePath", "FinalBomberManGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAltoMapa_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FinalBomberManGameMode_eventObtenerAltoMapa_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAltoMapa_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAltoMapa_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAltoMapa_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAltoMapa_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFinalBomberManGameMode, nullptr, "ObtenerAltoMapa", nullptr, nullptr, Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAltoMapa_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAltoMapa_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAltoMapa_Statics::FinalBomberManGameMode_eventObtenerAltoMapa_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAltoMapa_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAltoMapa_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAltoMapa_Statics::FinalBomberManGameMode_eventObtenerAltoMapa_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAltoMapa()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAltoMapa_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFinalBomberManGameMode::execObtenerAltoMapa)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ObtenerAltoMapa();
	P_NATIVE_END;
}
// End Class AFinalBomberManGameMode Function ObtenerAltoMapa

// Begin Class AFinalBomberManGameMode Function ObtenerAnchoMapa
struct Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAnchoMapa_Statics
{
	struct FinalBomberManGameMode_eventObtenerAnchoMapa_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nivel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Funciones para obtener dimensiones del mapa\n" },
#endif
		{ "ModuleRelativePath", "FinalBomberManGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Funciones para obtener dimensiones del mapa" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAnchoMapa_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FinalBomberManGameMode_eventObtenerAnchoMapa_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAnchoMapa_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAnchoMapa_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAnchoMapa_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAnchoMapa_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFinalBomberManGameMode, nullptr, "ObtenerAnchoMapa", nullptr, nullptr, Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAnchoMapa_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAnchoMapa_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAnchoMapa_Statics::FinalBomberManGameMode_eventObtenerAnchoMapa_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAnchoMapa_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAnchoMapa_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAnchoMapa_Statics::FinalBomberManGameMode_eventObtenerAnchoMapa_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAnchoMapa()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAnchoMapa_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFinalBomberManGameMode::execObtenerAnchoMapa)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ObtenerAnchoMapa();
	P_NATIVE_END;
}
// End Class AFinalBomberManGameMode Function ObtenerAnchoMapa

// Begin Class AFinalBomberManGameMode Function ObtenerNivelActual
struct Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerNivelActual_Statics
{
	struct FinalBomberManGameMode_eventObtenerNivelActual_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nivel" },
		{ "ModuleRelativePath", "FinalBomberManGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerNivelActual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FinalBomberManGameMode_eventObtenerNivelActual_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerNivelActual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerNivelActual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerNivelActual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerNivelActual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFinalBomberManGameMode, nullptr, "ObtenerNivelActual", nullptr, nullptr, Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerNivelActual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerNivelActual_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerNivelActual_Statics::FinalBomberManGameMode_eventObtenerNivelActual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerNivelActual_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerNivelActual_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerNivelActual_Statics::FinalBomberManGameMode_eventObtenerNivelActual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerNivelActual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerNivelActual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFinalBomberManGameMode::execObtenerNivelActual)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ObtenerNivelActual();
	P_NATIVE_END;
}
// End Class AFinalBomberManGameMode Function ObtenerNivelActual

// Begin Class AFinalBomberManGameMode Function ObtenerTileEn
struct Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerTileEn_Statics
{
	struct FinalBomberManGameMode_eventObtenerTileEn_Parms
	{
		int32 X;
		int32 Y;
		ATile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nivel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Nueva funci\xc3\xb3n para obtener tile espec\xc3\xad""fico\n" },
#endif
		{ "ModuleRelativePath", "FinalBomberManGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Nueva funci\xc3\xb3n para obtener tile espec\xc3\xad""fico" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerTileEn_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FinalBomberManGameMode_eventObtenerTileEn_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerTileEn_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FinalBomberManGameMode_eventObtenerTileEn_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerTileEn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FinalBomberManGameMode_eventObtenerTileEn_Parms, ReturnValue), Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerTileEn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerTileEn_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerTileEn_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerTileEn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerTileEn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerTileEn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFinalBomberManGameMode, nullptr, "ObtenerTileEn", nullptr, nullptr, Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerTileEn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerTileEn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerTileEn_Statics::FinalBomberManGameMode_eventObtenerTileEn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerTileEn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerTileEn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerTileEn_Statics::FinalBomberManGameMode_eventObtenerTileEn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerTileEn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerTileEn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFinalBomberManGameMode::execObtenerTileEn)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ATile**)Z_Param__Result=P_THIS->ObtenerTileEn(Z_Param_X,Z_Param_Y);
	P_NATIVE_END;
}
// End Class AFinalBomberManGameMode Function ObtenerTileEn

// Begin Class AFinalBomberManGameMode Function ReiniciarNivel
struct Z_Construct_UFunction_AFinalBomberManGameMode_ReiniciarNivel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nivel" },
		{ "ModuleRelativePath", "FinalBomberManGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFinalBomberManGameMode_ReiniciarNivel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFinalBomberManGameMode, nullptr, "ReiniciarNivel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManGameMode_ReiniciarNivel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFinalBomberManGameMode_ReiniciarNivel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFinalBomberManGameMode_ReiniciarNivel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFinalBomberManGameMode_ReiniciarNivel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFinalBomberManGameMode::execReiniciarNivel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReiniciarNivel();
	P_NATIVE_END;
}
// End Class AFinalBomberManGameMode Function ReiniciarNivel

// Begin Class AFinalBomberManGameMode Function SiguienteNivel
struct Z_Construct_UFunction_AFinalBomberManGameMode_SiguienteNivel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nivel" },
		{ "ModuleRelativePath", "FinalBomberManGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFinalBomberManGameMode_SiguienteNivel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFinalBomberManGameMode, nullptr, "SiguienteNivel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFinalBomberManGameMode_SiguienteNivel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFinalBomberManGameMode_SiguienteNivel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFinalBomberManGameMode_SiguienteNivel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFinalBomberManGameMode_SiguienteNivel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFinalBomberManGameMode::execSiguienteNivel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SiguienteNivel();
	P_NATIVE_END;
}
// End Class AFinalBomberManGameMode Function SiguienteNivel

// Begin Class AFinalBomberManGameMode
void AFinalBomberManGameMode::StaticRegisterNativesAFinalBomberManGameMode()
{
	UClass* Class = AFinalBomberManGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CargarNivel", &AFinalBomberManGameMode::execCargarNivel },
		{ "ObtenerAltoMapa", &AFinalBomberManGameMode::execObtenerAltoMapa },
		{ "ObtenerAnchoMapa", &AFinalBomberManGameMode::execObtenerAnchoMapa },
		{ "ObtenerNivelActual", &AFinalBomberManGameMode::execObtenerNivelActual },
		{ "ObtenerTileEn", &AFinalBomberManGameMode::execObtenerTileEn },
		{ "ReiniciarNivel", &AFinalBomberManGameMode::execReiniciarNivel },
		{ "SiguienteNivel", &AFinalBomberManGameMode::execSiguienteNivel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFinalBomberManGameMode);
UClass* Z_Construct_UClass_AFinalBomberManGameMode_NoRegister()
{
	return AFinalBomberManGameMode::StaticClass();
}
struct Z_Construct_UClass_AFinalBomberManGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FinalBomberManGameMode.h" },
		{ "ModuleRelativePath", "FinalBomberManGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PowerUpClass_MetaData[] = {
		{ "Category", "PowerUps" },
		{ "ModuleRelativePath", "FinalBomberManGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumeroDePowerUpsAlInicio_MetaData[] = {
		{ "Category", "PowerUps" },
		{ "ModuleRelativePath", "FinalBomberManGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemigoClass_MetaData[] = {
		{ "Category", "Enemigos" },
		{ "ModuleRelativePath", "FinalBomberManGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumeroDeEnemigosAlInicio_MetaData[] = {
		{ "Category", "Enemigos" },
		{ "ModuleRelativePath", "FinalBomberManGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstructorMapaActual_MetaData[] = {
		{ "ModuleRelativePath", "FinalBomberManGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectorNivelesActual_MetaData[] = {
		{ "ModuleRelativePath", "FinalBomberManGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NivelActual_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Nivel" },
		{ "ModuleRelativePath", "FinalBomberManGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapaActual_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Nivel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cambiar de TArray<TArray<ATile*>> a UConstructorMapa*\n" },
#endif
		{ "ModuleRelativePath", "FinalBomberManGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cambiar de TArray<TArray<ATile*>> a UConstructorMapa*" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PowerUpClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumeroDePowerUpsAlInicio;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemigoClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumeroDeEnemigosAlInicio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstructorMapaActual;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DirectorNivelesActual;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NivelActual;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapaActual;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFinalBomberManGameMode_CargarNivel, "CargarNivel" }, // 3856233953
		{ &Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAltoMapa, "ObtenerAltoMapa" }, // 524510399
		{ &Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerAnchoMapa, "ObtenerAnchoMapa" }, // 1043068457
		{ &Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerNivelActual, "ObtenerNivelActual" }, // 139676049
		{ &Z_Construct_UFunction_AFinalBomberManGameMode_ObtenerTileEn, "ObtenerTileEn" }, // 2432518739
		{ &Z_Construct_UFunction_AFinalBomberManGameMode_ReiniciarNivel, "ReiniciarNivel" }, // 4220081112
		{ &Z_Construct_UFunction_AFinalBomberManGameMode_SiguienteNivel, "SiguienteNivel" }, // 796757977
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFinalBomberManGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFinalBomberManGameMode_Statics::NewProp_PowerUpClass = { "PowerUpClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFinalBomberManGameMode, PowerUpClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APowerUp_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PowerUpClass_MetaData), NewProp_PowerUpClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFinalBomberManGameMode_Statics::NewProp_NumeroDePowerUpsAlInicio = { "NumeroDePowerUpsAlInicio", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFinalBomberManGameMode, NumeroDePowerUpsAlInicio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumeroDePowerUpsAlInicio_MetaData), NewProp_NumeroDePowerUpsAlInicio_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFinalBomberManGameMode_Statics::NewProp_EnemigoClass = { "EnemigoClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFinalBomberManGameMode, EnemigoClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemigo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemigoClass_MetaData), NewProp_EnemigoClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFinalBomberManGameMode_Statics::NewProp_NumeroDeEnemigosAlInicio = { "NumeroDeEnemigosAlInicio", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFinalBomberManGameMode, NumeroDeEnemigosAlInicio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumeroDeEnemigosAlInicio_MetaData), NewProp_NumeroDeEnemigosAlInicio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFinalBomberManGameMode_Statics::NewProp_ConstructorMapaActual = { "ConstructorMapaActual", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFinalBomberManGameMode, ConstructorMapaActual), Z_Construct_UClass_UConstructorMapa_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstructorMapaActual_MetaData), NewProp_ConstructorMapaActual_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFinalBomberManGameMode_Statics::NewProp_DirectorNivelesActual = { "DirectorNivelesActual", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFinalBomberManGameMode, DirectorNivelesActual), Z_Construct_UClass_UDirectorNiveles_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectorNivelesActual_MetaData), NewProp_DirectorNivelesActual_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFinalBomberManGameMode_Statics::NewProp_NivelActual = { "NivelActual", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFinalBomberManGameMode, NivelActual), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NivelActual_MetaData), NewProp_NivelActual_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFinalBomberManGameMode_Statics::NewProp_MapaActual = { "MapaActual", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFinalBomberManGameMode, MapaActual), Z_Construct_UClass_UConstructorMapa_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapaActual_MetaData), NewProp_MapaActual_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFinalBomberManGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFinalBomberManGameMode_Statics::NewProp_PowerUpClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFinalBomberManGameMode_Statics::NewProp_NumeroDePowerUpsAlInicio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFinalBomberManGameMode_Statics::NewProp_EnemigoClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFinalBomberManGameMode_Statics::NewProp_NumeroDeEnemigosAlInicio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFinalBomberManGameMode_Statics::NewProp_ConstructorMapaActual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFinalBomberManGameMode_Statics::NewProp_DirectorNivelesActual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFinalBomberManGameMode_Statics::NewProp_NivelActual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFinalBomberManGameMode_Statics::NewProp_MapaActual,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFinalBomberManGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFinalBomberManGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalBomberMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFinalBomberManGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFinalBomberManGameMode_Statics::ClassParams = {
	&AFinalBomberManGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFinalBomberManGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFinalBomberManGameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFinalBomberManGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFinalBomberManGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFinalBomberManGameMode()
{
	if (!Z_Registration_Info_UClass_AFinalBomberManGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFinalBomberManGameMode.OuterSingleton, Z_Construct_UClass_AFinalBomberManGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFinalBomberManGameMode.OuterSingleton;
}
template<> FINALBOMBERMAN_API UClass* StaticClass<AFinalBomberManGameMode>()
{
	return AFinalBomberManGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFinalBomberManGameMode);
AFinalBomberManGameMode::~AFinalBomberManGameMode() {}
// End Class AFinalBomberManGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_FinalBomberManGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFinalBomberManGameMode, AFinalBomberManGameMode::StaticClass, TEXT("AFinalBomberManGameMode"), &Z_Registration_Info_UClass_AFinalBomberManGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFinalBomberManGameMode), 2400662154U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_FinalBomberManGameMode_h_1783815256(TEXT("/Script/FinalBomberMan"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_FinalBomberManGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_FinalBomberManGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
