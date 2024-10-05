// Fill out your copyright notice in the Description page of Project Settings.


#include "SkeletalMeshAnomaly.h"




ASkeletalMeshAnomaly::ASkeletalMeshAnomaly()
{   
    SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    RootComponent = SkeletalMesh;


    PrimaryActorTick.bCanEverTick = true;
}

void ASkeletalMeshAnomaly::BeginPlay()
{
    Super::BeginPlay();

    SkeletalMesh->SetVisibility(false);
}


void ASkeletalMeshAnomaly::TriggerAnomaly()
{
    SkeletalMesh->SetVisibility(true);
    
    UnfixedAnamolyCount++;
}

void ASkeletalMeshAnomaly::FixAnomaly()
{
    SkeletalMesh->SetVisibility(false); 
    UnfixedAnamolyCount--;
}

void ASkeletalMeshAnomaly::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}




