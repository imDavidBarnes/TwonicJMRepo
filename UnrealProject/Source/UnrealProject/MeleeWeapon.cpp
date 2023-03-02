// Fill out your copyright notice in the Description page of Project Settings.


#include "MeleeWeapon.h"

// Sets default values
AMeleeWeapon::AMeleeWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AttackDamage = 1;
	Swinging = false;
	WeaponHolder = NULL;

	Mesh = ObjectInitializer.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("Mesh"));

	RootComponent = Mesh;

	ProxBox = ObjectInitializer.CreateDefaultSubobject<UBoxComponent>(this, TEXT("ProxBox"));
	ProxBox->OnComponentBeginOverlap.AddDynamic(this, &AMeleeWeapon::Prox);
	ProxBox->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);
}

int AMeleeWeapon::Prox_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherComp != OtherActor->GetRootComponent())
	{
		//only hit root components
		return -1;
	}

	if (Swinging && OtherActor != (AActor*)WeaponHolder && !ThingsHit.Contains(OtherActor))
	{
		OtherActor->TakeDamage(AttackDamage, FDamageEvent(), NULL, this);
		ThingsHit.Add(OtherActor);
	}
	return 0;
}

void AMeleeWeapon::Swing()
{
	ThingsHit.Empty(); // empty list of things hit on swing
	Swinging = true;
}

void AMeleeWeapon::Rest()
{
	ThingsHit.Empty();
	Swinging = false;
}

// Called when the game starts or when spawned
void AMeleeWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMeleeWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

