// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Bubble.generated.h"

UCLASS()
class BUBBLEVALEY_API ABubble : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABubble();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Air = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UStaticMeshComponent> TheSphere = nullptr;
	UFUNCTION(BlueprintCallable)
	void AddAir(float AirToAdd);
	UFUNCTION(BlueprintCallable)
	void SubAir(float AirToSubtract);
	//a funtion to be implemented in blueprint
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void OnExplode();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
