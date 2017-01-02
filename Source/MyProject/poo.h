// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "poo.generated.h"

UCLASS()
class MYPROJECT_API Apoo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Apoo();
	Apoo(const FObjectInitializer& ObjectInitializer);

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	UPROPERTY(Category = Poo, EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* CollisionComponent;

	UPROPERTY(Category = Poo, EditAnywhere, BlueprintReadWrite)
	float CollisionComponentName;

};
