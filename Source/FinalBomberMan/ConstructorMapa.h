// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TipoTile.h"  // AGREGAR INCLUDE
#include "ConstructorMapa.generated.h"

class ATile;
class AActor;

USTRUCT(BlueprintType)
struct FDatosMapa
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mapa")
    int32 Ancho = 17;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mapa")
    int32 Alto = 15;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mapa")
    float TamanoTile = 200.0f;

    // Array unidimensional
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mapa")
    TArray<ETipoTile> GridTipos;

    FDatosMapa()
    {
        Ancho = 17;
        Alto = 15;
        TamanoTile = 200.0f;
        InicializarGrid();
    }

    void InicializarGrid()
    {
        int32 TotalCeldas = Ancho * Alto;
        GridTipos.SetNum(TotalCeldas);
        for (int32 i = 0; i < TotalCeldas; i++)
        {
            GridTipos[i] = ETipoTile::Vacio;
        }
    }

    // Funciones helper para convertir coordenadas 2D a �ndice 1D
    int32 CoordenadaAIndice(int32 X, int32 Y) const
    {
        return Y * Ancho + X;
    }

    ETipoTile ObtenerTipo(int32 X, int32 Y) const
    {
        int32 Indice = CoordenadaAIndice(X, Y);
        if (Indice >= 0 && Indice < GridTipos.Num())
        {
            return GridTipos[Indice];
        }
        return ETipoTile::Vacio;
    }

    void EstablecerTipo(int32 X, int32 Y, ETipoTile Tipo)
    {
        int32 Indice = CoordenadaAIndice(X, Y);
        if (Indice >= 0 && Indice < GridTipos.Num())
        {
            GridTipos[Indice] = Tipo;
        }
    }
};

UCLASS(BlueprintType)
class FINALBOMBERMAN_API UConstructorMapa : public UObject
{
    GENERATED_BODY()

public:
    UConstructorMapa();

    // M�todos del patr�n Builder
    UConstructorMapa* EstablecerMundo(UWorld* Mundo);
    UConstructorMapa* EstablecerTamano(int32 NuevoAncho, int32 NuevoAlto);
    UConstructorMapa* EstablecerTamanoTile(float NuevoTamano);

    UFUNCTION(BlueprintCallable, Category = "Constructor Mapa")
    UConstructorMapa* ColocarBordesIndestructibles();

    UFUNCTION(BlueprintCallable, Category = "Constructor Mapa")
    UConstructorMapa* ColocarPatronColumnas();

    UFUNCTION(BlueprintCallable, Category = "Constructor Mapa")
    UConstructorMapa* ColocarSpawnJugador(FVector2D Posicion);

    UFUNCTION(BlueprintCallable, Category = "Constructor Mapa")
    UConstructorMapa* ColocarSpawnsEnemigos(const TArray<FVector2D>& Posiciones);

    UFUNCTION(BlueprintCallable, Category = "Constructor Mapa")
    UConstructorMapa* ColocarSalidaNivel(FVector2D Posicion);

    UFUNCTION(BlueprintCallable, Category = "Constructor Mapa")
    UConstructorMapa* LlenarConBloquesDestructibles(float Porcentaje, TSubclassOf<AActor> ClaseBloque);

    UFUNCTION(BlueprintCallable, Category = "Constructor Mapa")
    void Construir(UWorld* Mundo);

    UFUNCTION(BlueprintCallable, Category = "Constructor Mapa")
    void ConstruirMapa(const FDatosMapa& DatosMapa);

    UFUNCTION(BlueprintCallable, Category = "Constructor Mapa")
    void Inicializar(UWorld* Mundo, int32 NuevoAncho, int32 NuevoAlto, float NuevoTamanoTile);

    UFUNCTION(BlueprintCallable, Category = "Constructor Mapa")
    void LimpiarMapa();

    // Funciones para acceder a tiles individuales
    UFUNCTION(BlueprintCallable, Category = "Constructor Mapa")
    ATile* ObtenerTileEn(int32 X, int32 Y) const;

    // Funciones para obtener las dimensiones del mapa
    int32 ObtenerAncho() const { return Ancho; }
    int32 ObtenerAlto() const { return Alto; }
    float ObtenerTamanoTile() const { return TamanoTile; }

private:
    UPROPERTY()
    FDatosMapa DatosMapaActual;

    // Array unidimensional para tiles
    UPROPERTY()
    TArray<ATile*> GridTiles;

    UPROPERTY()
    UWorld* MundoActual;

    // M�todos auxiliares
    void CrearTilesBase();
    void ColocarBloqueEnTile(int32 X, int32 Y, TSubclassOf<AActor> ClaseBloque);
    void EstablecerTipoTile(int32 X, int32 Y, ETipoTile Tipo);
    FVector CalcularPosicionMundo(int32 X, int32 Y) const;
    bool EsPosicionValida(int32 X, int32 Y) const;

    // Helper para convertir coordenadas
    int32 CoordenadaAIndice(int32 X, int32 Y) const;
    ATile* ObtenerTile(int32 X, int32 Y) const;
    void EstablecerTile(int32 X, int32 Y, ATile* Tile);

    // Dimensiones del último mapa construido
    int32 Ancho = 0;
    int32 Alto = 0;
    float TamanoTile = 0.f;
};