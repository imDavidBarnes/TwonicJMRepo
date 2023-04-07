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
	Health = MaxHealth;
	Stamina = MaxStamina;
	Mana = MaxMana;
}

void APlayerCharacter::AddToMoney(int32 amount)
{
	if (amount < 0) return;
	MoneyCollected = true;
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

bool APlayerCharacter::RemoveFromMoney(int32 amount)
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

void APlayerCharacter::AddToScarab(int32 amount)
{
	ScarabCollected = true;
	ScarabAmount += amount;
}

bool APlayerCharacter::RemoveFromScarab(int32 amount)
{
	if (ScarabAmount <= 0)
	{
		ScarabAmount = 0;
		return false;
	}
	ScarabAmount -= amount;
	return true;
}

void APlayerCharacter::UpdateHealthAmount(float amount)
{
	if (Health + amount > MaxHealth)
	{
		Health = MaxHealth;
		return;
	}
	if (Health + amount < 0)
	{
		TestDead((-1 * amount) / MaxHealth);
		return;
	}
	Health += amount;
}

void APlayerCharacter::UpdateManaAmount(float amount)
{
	Mana += amount;
}
void APlayerCharacter::UpdateStaminaAmount(float amount)
{
	Stamina += amount;
}

float APlayerCharacter::GetHealth()
{
	return Health;
}

float APlayerCharacter::GetMana()
{
	return Mana;
}

float APlayerCharacter::GetStamina()
{
	return Stamina;
}

void APlayerCharacter::TestDead(float percentAmountLost)
{
	if (Health <= 0.0f)
	{
		Health = -1.0f;
		return;
	}
	if (percentAmountLost * 100.0f > 40.0f)
	{
		Health = 0.0f;
		return;
	}
	else if (percentAmountLost * 100.0f + 20.0f > Health)
	{
		Health = -1.0f;
		return;
	}
	Health = 0.0f;
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

