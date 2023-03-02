// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Shield.h"
#include "MeleeWeapon.h"
#include "PlayerCharacter.generated.h"


UCLASS()
class UNREALPROJECT_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Currency)
		uint8 MoneyAmount{ 0 };
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attacking)
		UClass* BPWeapon{ nullptr };
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attacking)
		UClass* BPShield{ nullptr };


	AShield* Shield{ nullptr };
	AMeleeWeapon* Weapon{ nullptr };

	UFUNCTION(BlueprintCallable)
		void AddToMoney(int amount);
	UFUNCTION(BlueprintCallable)
		void RemoveFromMoney(int amount);

	virtual void PostInitializeComponents() override;

protected:
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
