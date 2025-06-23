// Copyright Epic Games, Inc. All Rights Reserved.
#include "PowerUp.h"
#include "IPrototype.h"
#include "FinalBomberManCharacter.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/World.h"
#include "Materials/MaterialInterface.h"
#include "GameEventManager.h"
#include "Kismet/GameplayStatics.h"

APowerUp::APowerUp()
{
    PrimaryActorTick.bCanEverTick = true;

    // Crear el componente de malla estática
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    RootComponent = MeshComponent;

    // Crear el componente de colisión
    CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
    CollisionComponent->SetupAttachment(RootComponent);
    CollisionComponent->SetSphereRadius(50.0f);
    CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &APowerUp::OnOverlapBegin);

    // Configurar propiedades por defecto
    TipoPowerUp = ETipoPowerUp::BombaExtra;
    Duracion = 10.0f;
    Valor = 1;
    EsPermanente = false;

    // Cargar todos los materiales en el constructor
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialBombaExtraAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Brushed_Nickel.M_Metal_Brushed_Nickel'"));
    MaterialBombaExtra = MaterialBombaExtraAsset.Succeeded() ? MaterialBombaExtraAsset.Object : nullptr;
    UE_LOG(LogTemp, Warning, TEXT("PowerUp Constructor: MaterialBombaExtra cargado: %s"), MaterialBombaExtra ? TEXT("SÍ") : TEXT("NO"));
    
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialRadioExplosionAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Copper.M_Metal_Copper'"));
    MaterialRadioExplosion = MaterialRadioExplosionAsset.Succeeded() ? MaterialRadioExplosionAsset.Object : nullptr;
    UE_LOG(LogTemp, Warning, TEXT("PowerUp Constructor: MaterialRadioExplosion cargado: %s"), MaterialRadioExplosion ? TEXT("SÍ") : TEXT("NO"));
    
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialVelocidadAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'"));
    MaterialVelocidad = MaterialVelocidadAsset.Succeeded() ? MaterialVelocidadAsset.Object : nullptr;
    UE_LOG(LogTemp, Warning, TEXT("PowerUp Constructor: MaterialVelocidad cargado: %s"), MaterialVelocidad ? TEXT("SÍ") : TEXT("NO"));
    
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialEscudoAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Steel.M_Metal_Steel'"));
    MaterialEscudo = MaterialEscudoAsset.Succeeded() ? MaterialEscudoAsset.Object : nullptr;
    UE_LOG(LogTemp, Warning, TEXT("PowerUp Constructor: MaterialEscudo cargado: %s"), MaterialEscudo ? TEXT("SÍ") : TEXT("NO"));
    
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialBombaRemotaAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Chrome.M_Metal_Chrome'"));
    MaterialBombaRemota = MaterialBombaRemotaAsset.Succeeded() ? MaterialBombaRemotaAsset.Object : nullptr;
    UE_LOG(LogTemp, Warning, TEXT("PowerUp Constructor: MaterialBombaRemota cargado: %s"), MaterialBombaRemota ? TEXT("SÍ") : TEXT("NO"));
    
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialInmortalidadAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Brushed_Steel.M_Metal_Brushed_Steel'"));
    MaterialInmortalidad = MaterialInmortalidadAsset.Succeeded() ? MaterialInmortalidadAsset.Object : nullptr;
    UE_LOG(LogTemp, Warning, TEXT("PowerUp Constructor: MaterialInmortalidad cargado: %s"), MaterialInmortalidad ? TEXT("SÍ") : TEXT("NO"));
    
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialSaltoAltoAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Glass.M_Glass'"));
    MaterialSaltoAlto = MaterialSaltoAltoAsset.Succeeded() ? MaterialSaltoAltoAsset.Object : nullptr;
    UE_LOG(LogTemp, Warning, TEXT("PowerUp Constructor: MaterialSaltoAlto cargado: %s"), MaterialSaltoAlto ? TEXT("SÍ") : TEXT("NO"));
    
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialVidaExtraAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Plastic_White.M_Plastic_White'"));
    MaterialVidaExtra = MaterialVidaExtraAsset.Succeeded() ? MaterialVidaExtraAsset.Object : nullptr;
    UE_LOG(LogTemp, Warning, TEXT("PowerUp Constructor: MaterialVidaExtra cargado: %s"), MaterialVidaExtra ? TEXT("SÍ") : TEXT("NO"));
    
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialDoradoAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'"));
    MaterialDorado = MaterialDoradoAsset.Succeeded() ? MaterialDoradoAsset.Object : nullptr;
    UE_LOG(LogTemp, Warning, TEXT("PowerUp Constructor: MaterialDorado cargado: %s"), MaterialDorado ? TEXT("SÍ") : TEXT("NO"));

    // Solo configurar la malla básica, el material se configurará después cuando se establezca el tipo
    ConfigurarMeshBasico();
}

void APowerUp::BeginPlay()
{
    Super::BeginPlay();
    
    // Configurar el material específico según el tipo de power-up
    UE_LOG(LogTemp, Warning, TEXT("PowerUp BeginPlay: Configurando material para tipo %d"), (int32)TipoPowerUp);
    UMaterialInterface* Material = ObtenerMaterialPorTipo(TipoPowerUp);
    if (Material)
    {
        MeshComponent->SetMaterial(0, Material);
        UE_LOG(LogTemp, Warning, TEXT("PowerUp BeginPlay: Material aplicado correctamente para tipo %d"), (int32)TipoPowerUp);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("PowerUp BeginPlay: ERROR - No se pudo obtener material para tipo %d"), (int32)TipoPowerUp);
    }
    
    ConfigurarCollision();
}

void APowerUp::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Rotar el power-up constantemente
    if (MeshComponent)
    {
        FRotator CurrentRotation = MeshComponent->GetRelativeRotation();
        CurrentRotation.Yaw += DeltaTime * 90.0f; // 90 grados por segundo
        MeshComponent->SetRelativeRotation(CurrentRotation);
    }
}

UObject* APowerUp::Clone()
{
    APowerUp* Clon = GetWorld()->SpawnActor<APowerUp>(APowerUp::StaticClass(), GetActorLocation(), GetActorRotation());
    if (Clon)
    {
        Clon->TipoPowerUp = TipoPowerUp;
        Clon->Duracion = Duracion;
        Clon->Valor = Valor;
        Clon->EsPermanente = EsPermanente;
        
        UE_LOG(LogTemp, Log, TEXT("PowerUp: Clon creado del tipo %d"), (int32)TipoPowerUp);
    }
    return Clon;
}

void APowerUp::AplicarPowerUp(AFinalBomberManCharacter* Jugador)
{
    if (!Jugador)
    {
        return;
    }

    Jugador->AplicarBonus(TipoPowerUp);
    
    Destroy();
}

void APowerUp::RemoverPowerUp(AFinalBomberManCharacter* Jugador)
{
    if (!Jugador)
    {
        return;
    }

    UE_LOG(LogTemp, Log, TEXT("PowerUp: Removido del jugador - Tipo: %d"), (int32)TipoPowerUp);
}

ETipoPowerUp APowerUp::ObtenerTipo() const
{
    return TipoPowerUp;
}

float APowerUp::ObtenerDuracion() const
{
    return Duracion;
}

int32 APowerUp::ObtenerValor() const
{
    return Valor;
}

bool APowerUp::EsPowerUpPermanente() const
{
    return EsPermanente;
}

float APowerUp::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
    // Los power-ups son completamente inmunes a las bombas
    // No reciben ningún daño y no se destruyen
    return 0.0f;
}

void APowerUp::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    AFinalBomberManCharacter* Jugador = Cast<AFinalBomberManCharacter>(OtherActor);
    if (Jugador)
    {
        // Aplicar el efecto del power-up al jugador
        AplicarPowerUp(Jugador);
        
        // Contar power-ups restantes antes de destruir este
        int32 PowerUpsRestantes = ContarPowerUpsRestantes();
        
        // Obtener el nombre del tipo de power-up
        FString NombreTipo = "";
        switch (TipoPowerUp)
        {
        case ETipoPowerUp::BombaExtra: NombreTipo = "Bomba Extra"; break;
        case ETipoPowerUp::RadioExplosion: NombreTipo = "Radio Explosión"; break;
        case ETipoPowerUp::Velocidad: NombreTipo = "Velocidad"; break;
        case ETipoPowerUp::Escudo: NombreTipo = "Escudo"; break;
        case ETipoPowerUp::BombaRemota: NombreTipo = "Bomba Remota"; break;
        case ETipoPowerUp::Inmortalidad: NombreTipo = "Inmortalidad"; break;
        case ETipoPowerUp::SaltoAlto: NombreTipo = "Salto Alto"; break;
        case ETipoPowerUp::VidaExtra: NombreTipo = "Vida Extra"; break;
        }
        
        // Mostrar mensaje con power-ups restantes
        FString Mensaje = FString::Printf(TEXT("¡%s recogido! Power-ups restantes: %d"), *NombreTipo, PowerUpsRestantes);
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Cyan, Mensaje);
        }
        
        UE_LOG(LogTemp, Warning, TEXT("PowerUp recogido: %s. Power-ups restantes: %d"), *NombreTipo, PowerUpsRestantes);
    }
}

void APowerUp::ConfigurarMesh()
{
    // Cargar la malla de cápsula estrecha especificada
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsuleMeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_NarrowCapsule"));
    if (CapsuleMeshAsset.Succeeded())
    {
        MeshComponent->SetStaticMesh(CapsuleMeshAsset.Object);
        UE_LOG(LogTemp, Log, TEXT("PowerUp: Malla de cápsula estrecha cargada correctamente"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("PowerUp: No se pudo cargar la malla de cápsula estrecha"));
    }

    // Configurar material según el tipo de power-up
    UE_LOG(LogTemp, Warning, TEXT("PowerUp: Configurando material para tipo: %d"), (int32)TipoPowerUp);
    UMaterialInterface* Material = ObtenerMaterialPorTipo(TipoPowerUp);
    if (Material)
    {
        MeshComponent->SetMaterial(0, Material);
        UE_LOG(LogTemp, Warning, TEXT("PowerUp: Material aplicado correctamente para tipo %d"), (int32)TipoPowerUp);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("PowerUp: ERROR - No se pudo obtener material para tipo %d"), (int32)TipoPowerUp);
    }

    // Configurar escala y propiedades físicas
    SetActorScale3D(FVector(0.8f, 0.8f, 0.8f));
    
    // Configurar propiedades físicas
    MeshComponent->SetSimulatePhysics(false);
    MeshComponent->SetEnableGravity(false);
    MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision); // La colisión se maneja con el SphereComponent
}

UMaterialInterface* APowerUp::ObtenerMaterialPorTipo(ETipoPowerUp Tipo)
{
    UE_LOG(LogTemp, Warning, TEXT("PowerUp ObtenerMaterialPorTipo: Buscando material para tipo %d"), (int32)Tipo);
    
    // Usar materiales específicos según el tipo de power-up
    switch (Tipo)
    {
    case ETipoPowerUp::BombaExtra:
        {
            UE_LOG(LogTemp, Warning, TEXT("PowerUp ObtenerMaterialPorTipo: Tipo BombaExtra - Material Níquel Cepillado"));
            return MaterialBombaExtra;
        }
    case ETipoPowerUp::RadioExplosion:
        {
            UE_LOG(LogTemp, Warning, TEXT("PowerUp ObtenerMaterialPorTipo: Tipo RadioExplosion - Material Cobre"));
            return MaterialRadioExplosion;
        }
    case ETipoPowerUp::Velocidad:
        {
            UE_LOG(LogTemp, Warning, TEXT("PowerUp ObtenerMaterialPorTipo: Tipo Velocidad - Material Oro"));
            return MaterialVelocidad;
        }
    case ETipoPowerUp::Escudo:
        {
            UE_LOG(LogTemp, Warning, TEXT("PowerUp ObtenerMaterialPorTipo: Tipo Escudo - Material Acero"));
            return MaterialEscudo;
        }
    case ETipoPowerUp::BombaRemota:
        {
            UE_LOG(LogTemp, Warning, TEXT("PowerUp ObtenerMaterialPorTipo: Tipo BombaRemota - Material Cromo"));
            return MaterialBombaRemota;
        }
    case ETipoPowerUp::Inmortalidad:
        {
            UE_LOG(LogTemp, Warning, TEXT("PowerUp ObtenerMaterialPorTipo: Tipo Inmortalidad - Material Acero Cepillado"));
            return MaterialInmortalidad;
        }
    case ETipoPowerUp::SaltoAlto:
        {
            UE_LOG(LogTemp, Warning, TEXT("PowerUp ObtenerMaterialPorTipo: Tipo SaltoAlto - Material Vidrio"));
            return MaterialSaltoAlto;
        }
    case ETipoPowerUp::VidaExtra:
        {
            UE_LOG(LogTemp, Warning, TEXT("PowerUp ObtenerMaterialPorTipo: Tipo VidaExtra - Material Plástico Blanco"));
            return MaterialVidaExtra;
        }
    default:
        {
            UE_LOG(LogTemp, Warning, TEXT("PowerUp ObtenerMaterialPorTipo: Tipo DESCONOCIDO (%d) - Usando Material Dorado por defecto"), (int32)Tipo);
            // Fallback al material dorado para tipos no especificados
            return MaterialDorado;
        }
    }
}

void APowerUp::ConfigurarCollision()
{
    // Configurar la colisión para que solo detecte al jugador
    CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    CollisionComponent->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
    CollisionComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
    CollisionComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
}

int32 APowerUp::ContarPowerUpsRestantes()
{
    int32 Contador = 0;
    
    // Buscar todos los power-ups en el mundo
    TArray<AActor*> PowerUpsEncontrados;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), APowerUp::StaticClass(), PowerUpsEncontrados);
    
    // Contar solo los power-ups válidos (excluyendo este que está siendo destruido)
    for (AActor* Actor : PowerUpsEncontrados)
    {
        if (Actor && Actor != this && IsValid(Actor))
        {
            Contador++;
        }
    }
    
    return Contador;
}

void APowerUp::ConfigurarMeshBasico()
{
    // Cargar la malla de cápsula estrecha especificada
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsuleMeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_NarrowCapsule"));
    if (CapsuleMeshAsset.Succeeded())
    {
        MeshComponent->SetStaticMesh(CapsuleMeshAsset.Object);
        UE_LOG(LogTemp, Log, TEXT("PowerUp: Malla de cápsula estrecha cargada correctamente"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("PowerUp: No se pudo cargar la malla de cápsula estrecha"));
    }

    // Configurar escala y propiedades físicas
    SetActorScale3D(FVector(0.8f, 0.8f, 0.8f));
    
    // Configurar propiedades físicas
    MeshComponent->SetSimulatePhysics(false);
    MeshComponent->SetEnableGravity(false);
    MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision); // La colisión se maneja con el SphereComponent
} 