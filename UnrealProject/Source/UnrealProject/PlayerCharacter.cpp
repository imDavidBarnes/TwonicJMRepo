// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "Enemy.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APlayerCharacter::APlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

void APlayerCharacter::AddToMoney(int amount)
{
	if (amount < 0) return;
	if (MoneyAmount + amount > 9999)
	{
		MoneyAmount = 9999;
		return;
	}
	MoneyAmount += amount;

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Money: %i"), MoneyAmount));
	}
}

bool APlayerCharacter::RemoveFromMoney(int amount)
{
	if (amount < 0) return false;
	if (MoneyAmount - amount < 0)
	{
		return false;
	}
	MoneyAmount -= amount;

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Money: %i"), MoneyAmount));
	}
	return true;
}

void APlayerCharacter::AddToScarab(int amount)
{
	ScarabAmount += amount;
}

bool APlayerCharacter::RemoveFromScarab(int amount)
{
	if (ScarabAmount <= 0)
	{
		ScarabAmount = 0;
		return false;
	}
	ScarabAmount -= amount;
	return true;
}

void APlayerCharacter::UpdateHealthAmount(int amount)
{
	HealthCPP = amount;
}

void APlayerCharacter::UpdateManaAmount(int amount)
{
	ManaCPP = amount;
}

float APlayerCharacter::GetHealth()
{
	float temp = HealthCPP;
	HealthCPP = 0.0f;
	return temp;
}

float APlayerCharacter::GetMana()
{
	float temp = ManaCPP;
	ManaCPP = 0.0f;
	return temp;
}

void APlayerCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	if (BPShield)
	{
		Shield = GetWorld()->SpawnActor<AShield>(BPShield, FVector(), FRotator());
		if (Shield)
		{
			const USkeletalMeshSocket* socket = GetMesh()->GetSocketByName(FName("LeftHandSocket"));
			socket->AttachActor(Shield, GetMesh());
		}
	}
	if (BPWeapon)
	{
		Weapon = GetWorld()->SpawnActor<AMeleeWeapon>(BPWeapon, FVector(), FRotator());
		if (Weapon)
		{
			const USkeletalMeshSocket* socket = GetMesh()->GetSocketByName(FName("RightHandSocket"));
			socket->AttachActor(Weapon, GetMesh());
			Weapon->WeaponHolder = this;
		}

	}
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

