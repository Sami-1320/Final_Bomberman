// Copyright Epic Games, Inc. All Rights Reserved.
#include "ConstructorMapa.h"
#include "Tile.h"
#include "BloqueAcero.h"
#include "Engine/World.h"
#include "UObject/ConstructorHelpers.h"

UConstructorMapa::UConstructorMapa()
{
    MundoActual = nullptr;
}

UConstructorMapa* UConstructorMapa::EstablecerMundo(UWorld* Mundo)
{
	MundoActual = Mundo;
	return this;
}

UConstructorMapa* UConstructorMapa::EstablecerTamano(int32 NuevoAncho, int32 NuevoAlto)
{
	this->Ancho = NuevoAncho;
	this->Alto = NuevoAlto;
	
	DatosMapaActual.Ancho = NuevoAncho;
	DatosMapaActual.Alto = NuevoAlto;
    DatosMapaActual.InicializarGrid();

    // Redimensionar grid de tiles
	int32 TotalCeldas = NuevoAncho * NuevoAlto;
    GridTiles.SetNum(TotalCeldas);
    for (int32 i = 0; i < TotalCeldas; i++)
    {
        GridTiles[i] = nullptr;
    }

    return this;
}

UConstructorMapa* UConstructorMapa::EstablecerTamanoTile(float NuevoTamano)
{
	this->TamanoTile = NuevoTamano;
	DatosMapaActual.TamanoTile = NuevoTamano;
    return this;
}

UConstructorMapa* UConstructorMapa::ColocarBordesIndestructibles()
{
    // Bordes superiores e inferiores
    for (int32 X = 0; X < DatosMapaActual.Ancho; X++)
    {
        EstablecerTipoTile(X, 0, ETipoTile::BloqueIndestructible);
        EstablecerTipoTile(X, DatosMapaActual.Alto - 1, ETipoTile::BloqueIndestructible);
    }

    // Bordes izquierdo y derecho
    for (int32 Y = 0; Y < DatosMapaActual.Alto; Y++)
    {
        EstablecerTipoTile(0, Y, ETipoTile::BloqueIndestructible);
        EstablecerTipoTile(DatosMapaActual.Ancho - 1, Y, ETipoTile::BloqueIndestructible);
    }

    return this;
}

UConstructorMapa* UConstructorMapa::ColocarPatronColumnas()
{
    int32 BloquesColocados = 0;
    
	// Patrón de columnas internas (cada 2 casillas)
    for (int32 Y = 2; Y < DatosMapaActual.Alto - 2; Y += 2)
    {
        for (int32 X = 2; X < DatosMapaActual.Ancho - 2; X += 2)
        {
            // Colocar bloques de acero normalmente en el patrón de columnas
            // (incluyendo la zona segura, ya que son permanentes)
            EstablecerTipoTile(X, Y, ETipoTile::BloqueIndestructible);
            BloquesColocados++;
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("ConstructorMapa: Patrón de columnas - Bloques de acero colocados: %d"), BloquesColocados);

    return this;
}

UConstructorMapa* UConstructorMapa::ColocarSpawnJugador(FVector2D Posicion)
{
    if (EsPosicionValida(Posicion.X, Posicion.Y))
    {
        EstablecerTipoTile(Posicion.X, Posicion.Y, ETipoTile::SpawnJugador);

        // Crear zona segura más grande alrededor del spawn del jugador (3x3)
        TArray<FVector2D> ZonaSegura = {
            // Posición del spawn
            FVector2D(Posicion.X, Posicion.Y),
            // Posiciones adyacentes
            FVector2D(Posicion.X + 1, Posicion.Y),
            FVector2D(Posicion.X, Posicion.Y + 1),
            FVector2D(Posicion.X + 1, Posicion.Y + 1),
            // Posiciones diagonales
            FVector2D(Posicion.X - 1, Posicion.Y),
            FVector2D(Posicion.X, Posicion.Y - 1),
            FVector2D(Posicion.X - 1, Posicion.Y - 1),
            FVector2D(Posicion.X + 1, Posicion.Y - 1),
            FVector2D(Posicion.X - 1, Posicion.Y + 1)
        };

        for (const FVector2D& Pos : ZonaSegura)
        {
            if (EsPosicionValida(Pos.X, Pos.Y))
            {
                // Solo establecer como vacío si no es el spawn del jugador Y si no es un bloque de acero
                if (Pos != Posicion && DatosMapaActual.ObtenerTipo(Pos.X, Pos.Y) != ETipoTile::BloqueIndestructible)
                {
                    EstablecerTipoTile(Pos.X, Pos.Y, ETipoTile::Vacio);
                }
            }
        }
        
        UE_LOG(LogTemp, Warning, TEXT("ConstructorMapa: Zona segura creada alrededor del spawn del jugador en (%f, %f)"), Posicion.X, Posicion.Y);
        UE_LOG(LogTemp, Warning, TEXT("ConstructorMapa: Zona segura de 3x3 tiles (9 posiciones totales) - Bloques de acero preservados"));
    }

    return this;
}

UConstructorMapa* UConstructorMapa::ColocarSpawnsEnemigos(const TArray<FVector2D>& Posiciones)
{
    for (const FVector2D& Posicion : Posiciones)
    {
        if (EsPosicionValida(Posicion.X, Posicion.Y))
        {
            EstablecerTipoTile(Posicion.X, Posicion.Y, ETipoTile::SpawnEnemigo);
        }
    }

    return this;
}

UConstructorMapa* UConstructorMapa::ColocarSalidaNivel(FVector2D Posicion)
{
    if (EsPosicionValida(Posicion.X, Posicion.Y))
    {
        EstablecerTipoTile(Posicion.X, Posicion.Y, ETipoTile::SalidaNivel);
    }

    return this;
}

UConstructorMapa* UConstructorMapa::LlenarConBloquesDestructibles(float Porcentaje, TSubclassOf<AActor> ClaseBloque)
{
    // Solo llenar espacios vacíos, excluyendo la zona segura del spawn del jugador
    TArray<FVector2D> EspaciosVacios;

    for (int32 Y = 1; Y < DatosMapaActual.Alto - 1; Y++)
    {
        for (int32 X = 1; X < DatosMapaActual.Ancho - 1; X++)
        {
            if (DatosMapaActual.ObtenerTipo(X, Y) == ETipoTile::Vacio)
            {
                // Verificar si está en la zona segura del spawn del jugador
                bool bEnZonaSegura = false;
                
                // Buscar el spawn del jugador
                for (int32 SY = 0; SY < DatosMapaActual.Alto; SY++)
                {
                    for (int32 SX = 0; SX < DatosMapaActual.Ancho; SX++)
                    {
                        if (DatosMapaActual.ObtenerTipo(SX, SY) == ETipoTile::SpawnJugador)
                        {
                            // Verificar si la posición actual está en la zona segura (3x3)
                            if (FMath::Abs(X - SX) <= 1 && FMath::Abs(Y - SY) <= 1)
                            {
                                bEnZonaSegura = true;
                                break;
                            }
                        }
                    }
                    if (bEnZonaSegura) break;
                }
                
                // Solo agregar si no está en la zona segura
                if (!bEnZonaSegura)
                {
                    EspaciosVacios.Add(FVector2D(X, Y));
                }
            }
        }
    }

    // Calcular cantidad de bloques a colocar
    int32 CantidadBloques = FMath::RoundToInt(EspaciosVacios.Num() * (Porcentaje / 100.0f));

    UE_LOG(LogTemp, Warning, TEXT("ConstructorMapa: Espacios disponibles para bloques destructibles: %d, Cantidad a colocar: %d"), EspaciosVacios.Num(), CantidadBloques);

    // Colocar bloques aleatoriamente
    for (int32 i = 0; i < CantidadBloques && EspaciosVacios.Num() > 0; i++)
    {
        int32 IndiceAleatorio = FMath::RandRange(0, EspaciosVacios.Num() - 1);
        FVector2D Posicion = EspaciosVacios[IndiceAleatorio];

        EstablecerTipoTile(Posicion.X, Posicion.Y, ETipoTile::BloqueDestructible);
        EspaciosVacios.RemoveAt(IndiceAleatorio);
    }

    return this;
}

void UConstructorMapa::Construir(UWorld* Mundo)
{
    MundoActual = Mundo;
    if (!MundoActual)
    {
		UE_LOG(LogTemp, Error, TEXT("ConstructorMapa: Mundo no válido"));
        return;
    }

    CrearTilesBase();
    UE_LOG(LogTemp, Warning, TEXT("ConstructorMapa: Mapa construido exitosamente"));
}

ATile* UConstructorMapa::ObtenerTileEn(int32 X, int32 Y) const
{
    return ObtenerTile(X, Y);
}

void UConstructorMapa::CrearTilesBase()
{
    // Limpiar grid anterior
    int32 TotalCeldas = DatosMapaActual.Ancho * DatosMapaActual.Alto;
    GridTiles.SetNum(TotalCeldas);

    // Crear tiles y bloques
    for (int32 Y = 0; Y < DatosMapaActual.Alto; Y++)
    {
        for (int32 X = 0; X < DatosMapaActual.Ancho; X++)
        {
            FVector PosicionMundo = CalcularPosicionMundo(X, Y);
            ETipoTile TipoActual = DatosMapaActual.ObtenerTipo(X, Y);

            // Crear tile base
            ATile* NuevoTile = MundoActual->SpawnActor<ATile>(ATile::StaticClass(), PosicionMundo, FRotator::ZeroRotator);
            if (NuevoTile)
            {
                NuevoTile->EstablecerPosicionGrid(FVector2D(X, Y));
                NuevoTile->EstablecerTipoTile(TipoActual);
                EstablecerTile(X, Y, NuevoTile);

				// Colocar bloque según tipo
                switch (TipoActual)
                {
                case ETipoTile::BloqueIndestructible:
                    ColocarBloqueEnTile(X, Y, ABloqueAcero::StaticClass());
                    break;
                case ETipoTile::BloqueDestructible:
					// Se asignará el tipo específico desde el Director
                    break;
                }
            }
        }
    }
}

void UConstructorMapa::ColocarBloqueEnTile(int32 X, int32 Y, TSubclassOf<AActor> ClaseBloque)
{
    if (!ClaseBloque || !EsPosicionValida(X, Y))
        return;

    ATile* TileActual = ObtenerTile(X, Y);
    if (!TileActual)
        return;

	// CALCULAR POSICIÓN EXACTA AL RAS
    FVector PosicionTile = TileActual->GetActorLocation();

	// El tile tiene escala 0.2 en Z, así que su altura es 100 * 0.2 = 20 unidades
    // El bloque debe empezar donde termina el tile
	FVector PosicionBloque = PosicionTile + FVector(0, 0, 20); 

    AActor* NuevoBloque = MundoActual->SpawnActor<AActor>(ClaseBloque, PosicionBloque, FRotator::ZeroRotator);

    if (NuevoBloque)
    {
        // Ajustar escala del bloque
        NuevoBloque->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
        TileActual->ColocarBloque(NuevoBloque);
    }
}

void UConstructorMapa::EstablecerTipoTile(int32 X, int32 Y, ETipoTile Tipo)
{
    if (EsPosicionValida(X, Y))
    {
        DatosMapaActual.EstablecerTipo(X, Y, Tipo);
    }
}

FVector UConstructorMapa::CalcularPosicionMundo(int32 X, int32 Y) const
{
    float PosX = X * DatosMapaActual.TamanoTile;
    float PosY = Y * DatosMapaActual.TamanoTile;
	float PosZ = 0.0f; // CAMBIAR ESTE VALOR PARA MODIFICAR LA ALTURA DEL MAPA
	return FVector(PosX, PosY, PosZ);
}

bool UConstructorMapa::EsPosicionValida(int32 X, int32 Y) const
{
    return X >= 0 && X < DatosMapaActual.Ancho && Y >= 0 && Y < DatosMapaActual.Alto;
}

int32 UConstructorMapa::CoordenadaAIndice(int32 X, int32 Y) const
{
    return Y * DatosMapaActual.Ancho + X;
}

ATile* UConstructorMapa::ObtenerTile(int32 X, int32 Y) const
{
	if (EsPosicionValida(X, Y))
	{
    int32 Indice = CoordenadaAIndice(X, Y);
		if (GridTiles.IsValidIndex(Indice))
    {
        return GridTiles[Indice];
		}
    }
    return nullptr;
}

void UConstructorMapa::EstablecerTile(int32 X, int32 Y, ATile* Tile)
{
	if (EsPosicionValida(X, Y))
	{
    int32 Indice = CoordenadaAIndice(X, Y);
		if (GridTiles.IsValidIndex(Indice))
    {
        GridTiles[Indice] = Tile;
		}
    }
}

void UConstructorMapa::LimpiarMapa()
{
    for (ATile* Tile : GridTiles)
    {
		if (Tile)
        {
			Tile->DestruirBloque();
            Tile->Destroy();
        }
    }
    GridTiles.Empty();
}

void UConstructorMapa::ConstruirMapa(const FDatosMapa& DatosMapa)
{
    DatosMapaActual = DatosMapa;
    
    // Guardar las dimensiones del mapa actual
	Ancho = DatosMapa.Ancho;
	Alto = DatosMapa.Alto;
	TamanoTile = DatosMapa.TamanoTile;

    if (!MundoActual)
    {
        UE_LOG(LogTemp, Error, TEXT("ConstructorMapa: Mundo no válido"));
        return;
    }

    LimpiarMapa();

    CrearTilesBase();
    UE_LOG(LogTemp, Warning, TEXT("ConstructorMapa: Mapa construido exitosamente"));
}

void UConstructorMapa::Inicializar(UWorld* Mundo, int32 NuevoAncho, int32 NuevoAlto, float NuevoTamanoTile) 
{
    MundoActual = Mundo;
    this->Ancho = NuevoAncho;
    this->Alto = NuevoAlto;
    this->TamanoTile = NuevoTamanoTile;
    GridTiles.SetNum(NuevoAncho * NuevoAlto);
}