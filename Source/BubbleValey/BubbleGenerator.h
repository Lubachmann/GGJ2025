// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BubbleGenerator.generated.h"

UCLASS()
class BUBBLEVALEY_API ABubbleGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABubbleGenerator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generate")
		int AirPerWeed = 5;	
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generate")
		int AvailableAir = 0;	

};
