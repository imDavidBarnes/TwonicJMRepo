// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void APlayerCharacter::AddToMoney(int amount)
{
	if (amount < 0) return;
	if (MoneyAmount + amount > 255)
	{
		MoneyAmount = 255;
		return;
	}
	MoneyAmount += amount;
}

void APlayerCharacter::RemoveFromMoney(int amount)
{
	if (amount < 0) return;
	if (MoneyAmount - amount < 0)
	{
		MoneyAmount = 0;
		return;
	}
	MoneyAmount -= amount;
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

