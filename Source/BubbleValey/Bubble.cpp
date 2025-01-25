// Fill out your copyright notice in the Description page of Project Settings.


#include "Bubble.h"

// Sets default values
ABubble::ABubble()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TheSphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TheSphere"));

}

void ABubble::AddAir(float AirToAdd)
{
	Air += AirToAdd;
	float Size = 6 + (Air*0.25);
	// scale the sphere
	TheSphere->SetWorldScale3D(FVector(Size, Size, Size));
}

void ABubble::SubAir(float AirToSubtract)
{
	Air -= AirToSubtract;
	float Size = 6 + (Air*0.25);
	// scale the sphere
	TheSphere->SetWorldScale3D(FVector(Size, Size, Size));
}

// Called when the game starts or when spawned
void ABubble::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABubble::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// test adding air
	// AddAir(0.01);

}

