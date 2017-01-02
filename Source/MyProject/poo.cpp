// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject.h"
#include "poo.h"


// Sets default values
Apoo::Apoo(const FObjectInitializer& ObjectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent = ObjectInitializer.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("SphereComp"));

	//Set Root
	RootComponent = CollisionComponent;
}

// Called when the game starts or when spawned
void Apoo::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void Apoo::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

