// Copyright Epic Games, Inc. All Rights Reserved.
#include "SeccionMapa.h"
#include "IElementoMapa.h"
#include "Tile.h"

ASeccionMapa::ASeccionMapa()
{
    PrimaryActorTick.bCanEverTick = true;
    PosicionSeccion = FVector2D::ZeroVector;
    TamanoSeccion = FVector2D(100.0f, 100.0f);
    bEsDestructible = false;
}

void ASeccionMapa::BeginPlay()
{
    Super::BeginPlay();
}

void ASeccionMapa::Renderizar()
{
    // Renderizar todos los elementos hijos
    for (const TScriptInterface<IIElementoMapa>& Elemento : ElementosHijos)
    {
        if (Elemento.GetInterface())
        {
            Elemento->Renderizar();
        }
    }
}

void ASeccionMapa::Actualizar(float DeltaTime)
{
    // Actualizar todos los elementos hijos
    for (const TScriptInterface<IIElementoMapa>& Elemento : ElementosHijos)
    {
        if (Elemento.GetInterface())
        {
            Elemento->Actualizar(DeltaTime);
        }
    }
}

bool ASeccionMapa::EsDestructible() const
{
    // Una sección es destructible si al menos uno de sus elementos es destructible
    for (const TScriptInterface<IIElementoMapa>& Elemento : ElementosHijos)
    {
        if (Elemento.GetInterface() && Elemento->EsDestructible())
        {
            return true;
        }
    }
    return bEsDestructible;
}

void ASeccionMapa::RecibirDano(int32 Dano)
{
    // Aplicar daño a todos los elementos destructibles
    for (const TScriptInterface<IIElementoMapa>& Elemento : ElementosHijos)
    {
        if (Elemento.GetInterface() && Elemento->EsDestructible())
        {
            Elemento->RecibirDano(Dano);
        }
    }
}

FVector2D ASeccionMapa::ObtenerPosicion() const
{
    return PosicionSeccion;
}

void ASeccionMapa::EstablecerPosicion(FVector2D NuevaPosicion)
{
    PosicionSeccion = NuevaPosicion;
    SetActorLocation(FVector(NuevaPosicion.X, NuevaPosicion.Y, 0));
}

void ASeccionMapa::AgregarElemento(TScriptInterface<IIElementoMapa> Elemento)
{
    if (Elemento.GetInterface())
    {
        ElementosHijos.Add(Elemento);
        UE_LOG(LogTemp, Log, TEXT("SeccionMapa: Elemento agregado. Total: %d"), ElementosHijos.Num());
    }
}

void ASeccionMapa::RemoverElemento(TScriptInterface<IIElementoMapa> Elemento)
{
    if (Elemento.GetInterface())
    {
        ElementosHijos.Remove(Elemento);
        UE_LOG(LogTemp, Log, TEXT("SeccionMapa: Elemento removido. Total: %d"), ElementosHijos.Num());
    }
}

TArray<TScriptInterface<IIElementoMapa>> ASeccionMapa::ObtenerElementos() const
{
    return ElementosHijos;
}

int32 ASeccionMapa::ObtenerCantidadElementos() const
{
    return ElementosHijos.Num();
}

void ASeccionMapa::LimpiarElementos()
{
    ElementosHijos.Empty();
    UE_LOG(LogTemp, Log, TEXT("SeccionMapa: Todos los elementos removidos"));
}

void ASeccionMapa::ConfigurarSeccion(FVector2D PosicionInicial, FVector2D Tamano)
{
    PosicionSeccion = PosicionInicial;
    TamanoSeccion = Tamano;
    SetActorLocation(FVector(PosicionInicial.X, PosicionInicial.Y, 0));
    
    UE_LOG(LogTemp, Log, TEXT("SeccionMapa: Configurada en (%f, %f) con tamaño (%f, %f)"), 
           PosicionInicial.X, PosicionInicial.Y, Tamano.X, Tamano.Y);
}

bool ASeccionMapa::ContienePosicion(FVector2D Posicion) const
{
    return Posicion.X >= PosicionSeccion.X && 
           Posicion.X <= PosicionSeccion.X + TamanoSeccion.X &&
           Posicion.Y >= PosicionSeccion.Y && 
           Posicion.Y <= PosicionSeccion.Y + TamanoSeccion.Y;
}

TArray<TScriptInterface<IIElementoMapa>> ASeccionMapa::ObtenerElementosEnPosicion(FVector2D Posicion)
{
    TArray<TScriptInterface<IIElementoMapa>> ElementosEnPosicion;
    
    for (const TScriptInterface<IIElementoMapa>& Elemento : ElementosHijos)
    {
        if (Elemento.GetInterface())
        {
            FVector2D PosicionElemento = Elemento->ObtenerPosicion();
            if (FVector2D::DistSquared(Posicion, PosicionElemento) < 100.0f) // Radio de 10 unidades
            {
                ElementosEnPosicion.Add(Elemento);
            }
        }
    }
    
    return ElementosEnPosicion;
}

void ASeccionMapa::AplicarExplosionEnCadena(FVector2D PosicionInicial, int32 RadioExplosion)
{
    TSet<TScriptInterface<IIElementoMapa>> ElementosAfectados;
    ProcesarExplosionRecursiva(PosicionInicial, RadioExplosion, ElementosAfectados);
    
    UE_LOG(LogTemp, Warning, TEXT("SeccionMapa: Explosión en cadena aplicada. Elementos afectados: %d"), ElementosAfectados.Num());
}

void ASeccionMapa::ProcesarExplosionRecursiva(FVector2D Posicion, int32 RadioRestante, TSet<TScriptInterface<IIElementoMapa>>& ElementosAfectados)
{
    if (RadioRestante <= 0)
    {
        return;
    }

    // Buscar elementos en la posición actual
    TArray<TScriptInterface<IIElementoMapa>> ElementosEnPosicion = ObtenerElementosEnPosicion(Posicion);
    
    for (const TScriptInterface<IIElementoMapa>& Elemento : ElementosEnPosicion)
    {
        if (Elemento.GetInterface() && !ElementosAfectados.Contains(Elemento))
        {
            ElementosAfectados.Add(Elemento);
            
            // Aplicar daño al elemento
            if (Elemento->EsDestructible())
            {
                Elemento->RecibirDano(100); // Daño estándar
            }
            
            // Si es una sección, procesar recursivamente
            ASeccionMapa* Seccion = Cast<ASeccionMapa>(Elemento.GetObject());
            if (Seccion)
            {
                Seccion->ProcesarExplosionRecursiva(Posicion, RadioRestante - 1, ElementosAfectados);
            }
        }
    }
    
    // Continuar la explosión en las 4 direcciones
    if (RadioRestante > 1)
    {
        float Distancia = 200.0f; // Distancia entre tiles
        
        // Norte
        ProcesarExplosionRecursiva(Posicion + FVector2D(0, Distancia), RadioRestante - 1, ElementosAfectados);
        
        // Sur
        ProcesarExplosionRecursiva(Posicion + FVector2D(0, -Distancia), RadioRestante - 1, ElementosAfectados);
        
        // Este
        ProcesarExplosionRecursiva(Posicion + FVector2D(Distancia, 0), RadioRestante - 1, ElementosAfectados);
        
        // Oeste
        ProcesarExplosionRecursiva(Posicion + FVector2D(-Distancia, 0), RadioRestante - 1, ElementosAfectados);
    }
}

float ASeccionMapa::CalcularDistancia(FVector2D Pos1, FVector2D Pos2) const
{
    return FVector2D::Distance(Pos1, Pos2);
} 