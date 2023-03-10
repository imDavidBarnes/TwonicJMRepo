// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup.h"
#include "PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APickup::APickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ProxSphere = ObjectInitializer.CreateDefaultSubobject<USphereComponent>(this, TEXT("ProxSphere"));
	Mesh = ObjectInitializer.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("Mesh"));

	RootComponent = Mesh;

	ProxSphere->OnComponentBeginOverlap.AddDynamic(this, &APickup::Prox);
	ProxSphere->OnComponentEndOverlap.AddDynamic(this, &APickup::ProxEnd);
	ProxSphere->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);
}

int APickup::Prox_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Cast<APlayerCharacter>(OtherActor) == nullptr)
	{
		return -1;
	}
	InRange = true;
	APlayerCharacter* character = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if (name == "Coin")
	{
		character->AddToMoney(quantity);
		Destroy();
	}
	else if (name == "Bomb")
	{
	}
	else if (name == "HealthDrop")
	{
		character->UpdateHealthAmount(quantity);
		Destroy();
	}
	else if (name == "ManaDrop")
	{
		character->UpdateManaAmount(quantity);
		Destroy();
	}
	return 0;
}

int APickup::ProxEnd_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (Cast<APlayerCharacter>(OtherActor) == nullptr)
	{
		return -1;
	}
	InRange = false;
	return 0;
}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

