// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseItem.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
ABaseItem::ABaseItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

 Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
 SetRootComponent(Scene);

 Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
 Collision->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
 Collision->SetupAttachment(Scene);

 StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
 StaticMesh->SetupAttachment(Collision);

 // 이벤트 바인딩
 Collision->OnComponentBeginOverlap.AddDynamic(this, &ABaseItem::OnItemOverlap);
 Collision->OnComponentEndOverlap.AddDynamic(this, &ABaseItem::OnItemEndOverlap);
}

void ABaseItem::OnItemOverlap(
  UPrimitiveComponent* OverlappedComp,
  AActor* OtherActor, 
  UPrimitiveComponent* OtherComp, 
  int32 OtherBodyIndex, 
  bool bFromSweep, 
  const FHitResult& SweepResult)
{
   if (OtherActor && OtherActor->ActorHasTag("Player"))
   {
    GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, FString::Printf(TEXT("Overlap!!!")));
    ActivateItem(OtherActor);
   }
}
void ABaseItem::OnItemEndOverlap(
  UPrimitiveComponent* OverlappedComp, 
  AActor* OtherActor, 
  UPrimitiveComponent* OtherComp, 
  int32 OtherBodyIndex)
{
}
void ABaseItem::ActivateItem(AActor* Activator)
{
 TWeakObjectPtr<UParticleSystemComponent> Particle = nullptr;

 if (PickupParticle)
 {
  Particle = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), PickupParticle, GetActorLocation(),
   GetActorRotation(), true);
 }

 if (PickupSound)
 {
  UGameplayStatics::PlaySoundAtLocation(GetWorld(), PickupSound, GetActorLocation());
 }

 if (Particle.Get())
 {
  FTimerHandle DestroyParticleTimerHandle;

  GetWorld()->GetTimerManager().SetTimer(DestroyParticleTimerHandle,
   [Particle]()
   {
    if (IsValid(Particle.Get()))
    {
     Particle->DestroyComponent();
    }
   },
   2.0f,
   false);
 }
}
 FName ABaseItem::GetItemType() const
{
 return ItemType;
}

void ABaseItem::DestroyItem()
{
 Destroy();
}
