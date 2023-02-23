// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/SphereComponent.h"
#include "AttackingEntity.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UNREALPROJECT_API UAttackingEntity : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAttackingEntity();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AttackStats)
		float Damage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AttackStats)
		float AttackMultiplier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AttackStats)
		float DefenseMultiplier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AttackStats)
		float Knockback;

	UFUNCTION(BlueprintCallable)
		float GetAttackDamage() { return Damage * AttackMultiplier; }


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//void Attack();
		
};
