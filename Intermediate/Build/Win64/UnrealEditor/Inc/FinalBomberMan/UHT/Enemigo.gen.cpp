// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalBomberMan/Enemigo.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigo() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_AEnemigo();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_AEnemigo_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_AFinalBomberManCharacter_NoRegister();
FINALBOMBERMAN_API UClass* Z_Construct_UClass_UIPrototype_NoRegister();
FINALBOMBERMAN_API UEnum* Z_Construct_UEnum_FinalBomberMan_ETipoEnemigo();
UPackage* Z_Construct_UPackage__Script_FinalBomberMan();
// End Cross Module References

// Begin Enum ETipoEnemigo
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETipoEnemigo;
static UEnum* ETipoEnemigo_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETipoEnemigo.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETipoEnemigo.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FinalBomberMan_ETipoEnemigo, (UObject*)Z_Construct_UPackage__Script_FinalBomberMan(), TEXT("ETipoEnemigo"));
	}
	return Z_Registration_Info_UEnum_ETipoEnemigo.OuterSingleton;
}
template<> FINALBOMBERMAN_API UEnum* StaticEnum<ETipoEnemigo>()
{
	return ETipoEnemigo_StaticEnum();
}
struct Z_Construct_UEnum_FinalBomberMan_ETipoEnemigo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Basico.DisplayName", "B\xc3\xa1sico" },
		{ "Basico.Name", "ETipoEnemigo::Basico" },
		{ "BlueprintType", "true" },
		{ "Explosivo.DisplayName", "Explosivo" },
		{ "Explosivo.Name", "ETipoEnemigo::Explosivo" },
		{ "ModuleRelativePath", "Enemigo.h" },
		{ "Rapido.DisplayName", "R\xc3\xa1pido" },
		{ "Rapido.Name", "ETipoEnemigo::Rapido" },
		{ "Tanque.DisplayName", "Tanque" },
		{ "Tanque.Name", "ETipoEnemigo::Tanque" },
		{ "Volador.DisplayName", "Volador" },
		{ "Volador.Name", "ETipoEnemigo::Volador" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETipoEnemigo::Basico", (int64)ETipoEnemigo::Basico },
		{ "ETipoEnemigo::Rapido", (int64)ETipoEnemigo::Rapido },
		{ "ETipoEnemigo::Tanque", (int64)ETipoEnemigo::Tanque },
		{ "ETipoEnemigo::Explosivo", (int64)ETipoEnemigo::Explosivo },
		{ "ETipoEnemigo::Volador", (int64)ETipoEnemigo::Volador },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FinalBomberMan_ETipoEnemigo_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FinalBomberMan,
	nullptr,
	"ETipoEnemigo",
	"ETipoEnemigo",
	Z_Construct_UEnum_FinalBomberMan_ETipoEnemigo_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FinalBomberMan_ETipoEnemigo_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FinalBomberMan_ETipoEnemigo_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FinalBomberMan_ETipoEnemigo_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FinalBomberMan_ETipoEnemigo()
{
	if (!Z_Registration_Info_UEnum_ETipoEnemigo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETipoEnemigo.InnerSingleton, Z_Construct_UEnum_FinalBomberMan_ETipoEnemigo_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETipoEnemigo.InnerSingleton;
}
// End Enum ETipoEnemigo

// Begin Class AEnemigo Function AtacarJugador
struct Z_Construct_UFunction_AEnemigo_AtacarJugador_Statics
{
	struct Enemigo_eventAtacarJugador_Parms
	{
		AFinalBomberManCharacter* Jugador;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemigo" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Jugador;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemigo_AtacarJugador_Statics::NewProp_Jugador = { "Jugador", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemigo_eventAtacarJugador_Parms, Jugador), Z_Construct_UClass_AFinalBomberManCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemigo_AtacarJugador_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemigo_AtacarJugador_Statics::NewProp_Jugador,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_AtacarJugador_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemigo_AtacarJugador_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemigo, nullptr, "AtacarJugador", nullptr, nullptr, Z_Construct_UFunction_AEnemigo_AtacarJugador_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_AtacarJugador_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemigo_AtacarJugador_Statics::Enemigo_eventAtacarJugador_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_AtacarJugador_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemigo_AtacarJugador_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemigo_AtacarJugador_Statics::Enemigo_eventAtacarJugador_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemigo_AtacarJugador()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemigo_AtacarJugador_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemigo::execAtacarJugador)
{
	P_GET_OBJECT(AFinalBomberManCharacter,Z_Param_Jugador);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AtacarJugador(Z_Param_Jugador);
	P_NATIVE_END;
}
// End Class AEnemigo Function AtacarJugador

// Begin Class AEnemigo Function EstaPersiguiendoJugador
struct Z_Construct_UFunction_AEnemigo_EstaPersiguiendoJugador_Statics
{
	struct Enemigo_eventEstaPersiguiendoJugador_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemigo" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AEnemigo_EstaPersiguiendoJugador_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Enemigo_eventEstaPersiguiendoJugador_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemigo_EstaPersiguiendoJugador_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Enemigo_eventEstaPersiguiendoJugador_Parms), &Z_Construct_UFunction_AEnemigo_EstaPersiguiendoJugador_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemigo_EstaPersiguiendoJugador_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemigo_EstaPersiguiendoJugador_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_EstaPersiguiendoJugador_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemigo_EstaPersiguiendoJugador_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemigo, nullptr, "EstaPersiguiendoJugador", nullptr, nullptr, Z_Construct_UFunction_AEnemigo_EstaPersiguiendoJugador_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_EstaPersiguiendoJugador_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemigo_EstaPersiguiendoJugador_Statics::Enemigo_eventEstaPersiguiendoJugador_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_EstaPersiguiendoJugador_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemigo_EstaPersiguiendoJugador_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemigo_EstaPersiguiendoJugador_Statics::Enemigo_eventEstaPersiguiendoJugador_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemigo_EstaPersiguiendoJugador()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemigo_EstaPersiguiendoJugador_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemigo::execEstaPersiguiendoJugador)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EstaPersiguiendoJugador();
	P_NATIVE_END;
}
// End Class AEnemigo Function EstaPersiguiendoJugador

// Begin Class AEnemigo Function EstaVivo
struct Z_Construct_UFunction_AEnemigo_EstaVivo_Statics
{
	struct Enemigo_eventEstaVivo_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemigo" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AEnemigo_EstaVivo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Enemigo_eventEstaVivo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemigo_EstaVivo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Enemigo_eventEstaVivo_Parms), &Z_Construct_UFunction_AEnemigo_EstaVivo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemigo_EstaVivo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemigo_EstaVivo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_EstaVivo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemigo_EstaVivo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemigo, nullptr, "EstaVivo", nullptr, nullptr, Z_Construct_UFunction_AEnemigo_EstaVivo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_EstaVivo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemigo_EstaVivo_Statics::Enemigo_eventEstaVivo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_EstaVivo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemigo_EstaVivo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemigo_EstaVivo_Statics::Enemigo_eventEstaVivo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemigo_EstaVivo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemigo_EstaVivo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemigo::execEstaVivo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EstaVivo();
	P_NATIVE_END;
}
// End Class AEnemigo Function EstaVivo

// Begin Class AEnemigo Function Morir
struct Z_Construct_UFunction_AEnemigo_Morir_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemigo" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemigo_Morir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemigo, nullptr, "Morir", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_Morir_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemigo_Morir_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEnemigo_Morir()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemigo_Morir_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemigo::execMorir)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Morir();
	P_NATIVE_END;
}
// End Class AEnemigo Function Morir

// Begin Class AEnemigo Function MoverHaciaJugador
struct Z_Construct_UFunction_AEnemigo_MoverHaciaJugador_Statics
{
	struct Enemigo_eventMoverHaciaJugador_Parms
	{
		AFinalBomberManCharacter* Jugador;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemigo" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Jugador;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemigo_MoverHaciaJugador_Statics::NewProp_Jugador = { "Jugador", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemigo_eventMoverHaciaJugador_Parms, Jugador), Z_Construct_UClass_AFinalBomberManCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemigo_MoverHaciaJugador_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemigo_MoverHaciaJugador_Statics::NewProp_Jugador,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_MoverHaciaJugador_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemigo_MoverHaciaJugador_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemigo, nullptr, "MoverHaciaJugador", nullptr, nullptr, Z_Construct_UFunction_AEnemigo_MoverHaciaJugador_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_MoverHaciaJugador_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemigo_MoverHaciaJugador_Statics::Enemigo_eventMoverHaciaJugador_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_MoverHaciaJugador_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemigo_MoverHaciaJugador_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemigo_MoverHaciaJugador_Statics::Enemigo_eventMoverHaciaJugador_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemigo_MoverHaciaJugador()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemigo_MoverHaciaJugador_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemigo::execMoverHaciaJugador)
{
	P_GET_OBJECT(AFinalBomberManCharacter,Z_Param_Jugador);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoverHaciaJugador(Z_Param_Jugador);
	P_NATIVE_END;
}
// End Class AEnemigo Function MoverHaciaJugador

// Begin Class AEnemigo Function ObtenerDistanciaAlJugador
struct Z_Construct_UFunction_AEnemigo_ObtenerDistanciaAlJugador_Statics
{
	struct Enemigo_eventObtenerDistanciaAlJugador_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemigo" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEnemigo_ObtenerDistanciaAlJugador_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemigo_eventObtenerDistanciaAlJugador_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemigo_ObtenerDistanciaAlJugador_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemigo_ObtenerDistanciaAlJugador_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_ObtenerDistanciaAlJugador_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemigo_ObtenerDistanciaAlJugador_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemigo, nullptr, "ObtenerDistanciaAlJugador", nullptr, nullptr, Z_Construct_UFunction_AEnemigo_ObtenerDistanciaAlJugador_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_ObtenerDistanciaAlJugador_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemigo_ObtenerDistanciaAlJugador_Statics::Enemigo_eventObtenerDistanciaAlJugador_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_ObtenerDistanciaAlJugador_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemigo_ObtenerDistanciaAlJugador_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemigo_ObtenerDistanciaAlJugador_Statics::Enemigo_eventObtenerDistanciaAlJugador_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemigo_ObtenerDistanciaAlJugador()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemigo_ObtenerDistanciaAlJugador_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemigo::execObtenerDistanciaAlJugador)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->ObtenerDistanciaAlJugador();
	P_NATIVE_END;
}
// End Class AEnemigo Function ObtenerDistanciaAlJugador

// Begin Class AEnemigo Function ObtenerPuntuacion
struct Z_Construct_UFunction_AEnemigo_ObtenerPuntuacion_Statics
{
	struct Enemigo_eventObtenerPuntuacion_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemigo" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemigo_ObtenerPuntuacion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemigo_eventObtenerPuntuacion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemigo_ObtenerPuntuacion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemigo_ObtenerPuntuacion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_ObtenerPuntuacion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemigo_ObtenerPuntuacion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemigo, nullptr, "ObtenerPuntuacion", nullptr, nullptr, Z_Construct_UFunction_AEnemigo_ObtenerPuntuacion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_ObtenerPuntuacion_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemigo_ObtenerPuntuacion_Statics::Enemigo_eventObtenerPuntuacion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_ObtenerPuntuacion_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemigo_ObtenerPuntuacion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemigo_ObtenerPuntuacion_Statics::Enemigo_eventObtenerPuntuacion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemigo_ObtenerPuntuacion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemigo_ObtenerPuntuacion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemigo::execObtenerPuntuacion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ObtenerPuntuacion();
	P_NATIVE_END;
}
// End Class AEnemigo Function ObtenerPuntuacion

// Begin Class AEnemigo Function ObtenerTipo
struct Z_Construct_UFunction_AEnemigo_ObtenerTipo_Statics
{
	struct Enemigo_eventObtenerTipo_Parms
	{
		ETipoEnemigo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemigo" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AEnemigo_ObtenerTipo_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AEnemigo_ObtenerTipo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemigo_eventObtenerTipo_Parms, ReturnValue), Z_Construct_UEnum_FinalBomberMan_ETipoEnemigo, METADATA_PARAMS(0, nullptr) }; // 1003724518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemigo_ObtenerTipo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemigo_ObtenerTipo_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemigo_ObtenerTipo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_ObtenerTipo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemigo_ObtenerTipo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemigo, nullptr, "ObtenerTipo", nullptr, nullptr, Z_Construct_UFunction_AEnemigo_ObtenerTipo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_ObtenerTipo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemigo_ObtenerTipo_Statics::Enemigo_eventObtenerTipo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_ObtenerTipo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemigo_ObtenerTipo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemigo_ObtenerTipo_Statics::Enemigo_eventObtenerTipo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemigo_ObtenerTipo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemigo_ObtenerTipo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemigo::execObtenerTipo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ETipoEnemigo*)Z_Param__Result=P_THIS->ObtenerTipo();
	P_NATIVE_END;
}
// End Class AEnemigo Function ObtenerTipo

// Begin Class AEnemigo Function ObtenerVida
struct Z_Construct_UFunction_AEnemigo_ObtenerVida_Statics
{
	struct Enemigo_eventObtenerVida_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemigo" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemigo_ObtenerVida_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemigo_eventObtenerVida_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemigo_ObtenerVida_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemigo_ObtenerVida_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_ObtenerVida_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemigo_ObtenerVida_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemigo, nullptr, "ObtenerVida", nullptr, nullptr, Z_Construct_UFunction_AEnemigo_ObtenerVida_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_ObtenerVida_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemigo_ObtenerVida_Statics::Enemigo_eventObtenerVida_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_ObtenerVida_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemigo_ObtenerVida_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemigo_ObtenerVida_Statics::Enemigo_eventObtenerVida_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemigo_ObtenerVida()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemigo_ObtenerVida_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemigo::execObtenerVida)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ObtenerVida();
	P_NATIVE_END;
}
// End Class AEnemigo Function ObtenerVida

// Begin Class AEnemigo Function OnOverlapBegin
struct Z_Construct_UFunction_AEnemigo_OnOverlapBegin_Statics
{
	struct Enemigo_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemigo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemigo_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemigo_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemigo_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemigo_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemigo_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemigo_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemigo_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemigo_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AEnemigo_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Enemigo_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemigo_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Enemigo_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AEnemigo_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemigo_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemigo_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemigo_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemigo_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemigo_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemigo_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemigo_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemigo_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemigo_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemigo_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemigo, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_AEnemigo_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemigo_OnOverlapBegin_Statics::Enemigo_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemigo_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemigo_OnOverlapBegin_Statics::Enemigo_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemigo_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemigo_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemigo::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AEnemigo Function OnOverlapBegin

// Begin Class AEnemigo Function RecibirDano
struct Z_Construct_UFunction_AEnemigo_RecibirDano_Statics
{
	struct Enemigo_eventRecibirDano_Parms
	{
		int32 DanoRecibido;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemigo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// M\xc3\xa9todos del enemigo\n" },
#endif
		{ "ModuleRelativePath", "Enemigo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "M\xc3\xa9todos del enemigo" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DanoRecibido;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemigo_RecibirDano_Statics::NewProp_DanoRecibido = { "DanoRecibido", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemigo_eventRecibirDano_Parms, DanoRecibido), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemigo_RecibirDano_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemigo_RecibirDano_Statics::NewProp_DanoRecibido,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_RecibirDano_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemigo_RecibirDano_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemigo, nullptr, "RecibirDano", nullptr, nullptr, Z_Construct_UFunction_AEnemigo_RecibirDano_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_RecibirDano_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemigo_RecibirDano_Statics::Enemigo_eventRecibirDano_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigo_RecibirDano_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemigo_RecibirDano_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemigo_RecibirDano_Statics::Enemigo_eventRecibirDano_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemigo_RecibirDano()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemigo_RecibirDano_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemigo::execRecibirDano)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DanoRecibido);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecibirDano(Z_Param_DanoRecibido);
	P_NATIVE_END;
}
// End Class AEnemigo Function RecibirDano

// Begin Class AEnemigo
void AEnemigo::StaticRegisterNativesAEnemigo()
{
	UClass* Class = AEnemigo::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AtacarJugador", &AEnemigo::execAtacarJugador },
		{ "EstaPersiguiendoJugador", &AEnemigo::execEstaPersiguiendoJugador },
		{ "EstaVivo", &AEnemigo::execEstaVivo },
		{ "Morir", &AEnemigo::execMorir },
		{ "MoverHaciaJugador", &AEnemigo::execMoverHaciaJugador },
		{ "ObtenerDistanciaAlJugador", &AEnemigo::execObtenerDistanciaAlJugador },
		{ "ObtenerPuntuacion", &AEnemigo::execObtenerPuntuacion },
		{ "ObtenerTipo", &AEnemigo::execObtenerTipo },
		{ "ObtenerVida", &AEnemigo::execObtenerVida },
		{ "OnOverlapBegin", &AEnemigo::execOnOverlapBegin },
		{ "RecibirDano", &AEnemigo::execRecibirDano },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigo);
UClass* Z_Construct_UClass_AEnemigo_NoRegister()
{
	return AEnemigo::StaticClass();
}
struct Z_Construct_UClass_AEnemigo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Enemigo.h" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TipoEnemigo_MetaData[] = {
		{ "Category", "Enemigo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Propiedades del enemigo\n" },
#endif
		{ "ModuleRelativePath", "Enemigo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Propiedades del enemigo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vida_MetaData[] = {
		{ "Category", "Enemigo" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dano_MetaData[] = {
		{ "Category", "Enemigo" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocidad_MetaData[] = {
		{ "Category", "Enemigo" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Puntuacion_MetaData[] = {
		{ "Category", "Enemigo" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EsExplosivo_MetaData[] = {
		{ "Category", "Enemigo" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadioExplosion_MetaData[] = {
		{ "Category", "Enemigo" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangoDeteccion_MetaData[] = {
		{ "Category", "Enemigo" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanciaMinimaJugador_MetaData[] = {
		{ "Category", "Enemigo" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemigo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TipoEnemigo_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TipoEnemigo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Vida;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Dano;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Velocidad;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Puntuacion;
	static void NewProp_EsExplosivo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EsExplosivo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadioExplosion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RangoDeteccion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanciaMinimaJugador;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemigo_AtacarJugador, "AtacarJugador" }, // 3116695059
		{ &Z_Construct_UFunction_AEnemigo_EstaPersiguiendoJugador, "EstaPersiguiendoJugador" }, // 1003197259
		{ &Z_Construct_UFunction_AEnemigo_EstaVivo, "EstaVivo" }, // 1584776940
		{ &Z_Construct_UFunction_AEnemigo_Morir, "Morir" }, // 1565536967
		{ &Z_Construct_UFunction_AEnemigo_MoverHaciaJugador, "MoverHaciaJugador" }, // 1716061670
		{ &Z_Construct_UFunction_AEnemigo_ObtenerDistanciaAlJugador, "ObtenerDistanciaAlJugador" }, // 499546109
		{ &Z_Construct_UFunction_AEnemigo_ObtenerPuntuacion, "ObtenerPuntuacion" }, // 3576274196
		{ &Z_Construct_UFunction_AEnemigo_ObtenerTipo, "ObtenerTipo" }, // 2227789733
		{ &Z_Construct_UFunction_AEnemigo_ObtenerVida, "ObtenerVida" }, // 3738686541
		{ &Z_Construct_UFunction_AEnemigo_OnOverlapBegin, "OnOverlapBegin" }, // 1908703144
		{ &Z_Construct_UFunction_AEnemigo_RecibirDano, "RecibirDano" }, // 2033902141
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_TipoEnemigo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_TipoEnemigo = { "TipoEnemigo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo, TipoEnemigo), Z_Construct_UEnum_FinalBomberMan_ETipoEnemigo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TipoEnemigo_MetaData), NewProp_TipoEnemigo_MetaData) }; // 1003724518
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_Vida = { "Vida", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo, Vida), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vida_MetaData), NewProp_Vida_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_Dano = { "Dano", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo, Dano), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dano_MetaData), NewProp_Dano_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_Velocidad = { "Velocidad", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo, Velocidad), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocidad_MetaData), NewProp_Velocidad_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_Puntuacion = { "Puntuacion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo, Puntuacion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Puntuacion_MetaData), NewProp_Puntuacion_MetaData) };
void Z_Construct_UClass_AEnemigo_Statics::NewProp_EsExplosivo_SetBit(void* Obj)
{
	((AEnemigo*)Obj)->EsExplosivo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_EsExplosivo = { "EsExplosivo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEnemigo), &Z_Construct_UClass_AEnemigo_Statics::NewProp_EsExplosivo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EsExplosivo_MetaData), NewProp_EsExplosivo_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_RadioExplosion = { "RadioExplosion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo, RadioExplosion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadioExplosion_MetaData), NewProp_RadioExplosion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_RangoDeteccion = { "RangoDeteccion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo, RangoDeteccion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangoDeteccion_MetaData), NewProp_RangoDeteccion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_DistanciaMinimaJugador = { "DistanciaMinimaJugador", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo, DistanciaMinimaJugador), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanciaMinimaJugador_MetaData), NewProp_DistanciaMinimaJugador_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigo_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigo, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_TipoEnemigo_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_TipoEnemigo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_Vida,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_Dano,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_Velocidad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_Puntuacion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_EsExplosivo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_RadioExplosion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_RangoDeteccion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_DistanciaMinimaJugador,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigo_Statics::NewProp_CollisionComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemigo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalBomberMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEnemigo_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIPrototype_NoRegister, (int32)VTABLE_OFFSET(AEnemigo, IIPrototype), false },  // 1544610603
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigo_Statics::ClassParams = {
	&AEnemigo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemigo_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigo()
{
	if (!Z_Registration_Info_UClass_AEnemigo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigo.OuterSingleton, Z_Construct_UClass_AEnemigo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigo.OuterSingleton;
}
template<> FINALBOMBERMAN_API UClass* StaticClass<AEnemigo>()
{
	return AEnemigo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigo);
AEnemigo::~AEnemigo() {}
// End Class AEnemigo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_Enemigo_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETipoEnemigo_StaticEnum, TEXT("ETipoEnemigo"), &Z_Registration_Info_UEnum_ETipoEnemigo, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1003724518U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigo, AEnemigo::StaticClass, TEXT("AEnemigo"), &Z_Registration_Info_UClass_AEnemigo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigo), 1419279401U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_Enemigo_h_42529495(TEXT("/Script/FinalBomberMan"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_Enemigo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_Enemigo_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_Enemigo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_FinalSam_Source_FinalBomberMan_Enemigo_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
