// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPickUpTest.h"

// Sets default values
AMyPickUpTest::AMyPickUpTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPickUpTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPickUpTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

