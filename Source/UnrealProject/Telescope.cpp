// Fill out your copyright notice in the Description page of Project Settings.


#include "Telescope.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ATelescope::ATelescope(const FObjectInitializer& ObjectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ProxSphere = ObjectInitializer.CreateDefaultSubobject<USphereComponent>(this, TEXT("ProxSphere"));
	Mesh = ObjectInitializer.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("Mesh"));

	RootComponent = Mesh;

	ProxSphere->OnComponentBeginOverlap.AddDynamic(this, &ATelescope::Prox);
	ProxSphere->SetupAttachment(RootComponent);
}

int ATelescope::Prox_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	////InRange = false;
	//APawn* avatar = Cast<APawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	//if (!avatar) return -1;

	//FVector toPlayer = avatar->GetActorLocation() - GetActorLocation();
	//float distanceToPlayer = toPlayer.Size();
	//if (distanceToPlayer > ProxSphere->GetScaledSphereRadius())
	//{
	//	InRange = true;
	//}

	//return 0;
	return 0;
}

// Called when the game starts or when spawned
void ATelescope::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATelescope::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	APawn* avatar = Cast<APawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if (!avatar) return;

	FVector toPlayer = avatar->GetActorLocation() - GetActorLocation();
	float distanceToPlayer = toPlayer.Size();
	if (distanceToPlayer > ProxSphere->GetScaledSphereRadius())
	{
		InRange = false;
	}
	else
	{
		InRange = true;
	}
}

