// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OBSERVATION2GameMode.h"
#include "Blueprint/UserWidget.h"
#include "MainGameMode.generated.h"


/**
 * 
 */
UCLASS()
class OBSERVATION2_API AMainGameMode : public AOBSERVATION2GameMode
{
	GENERATED_BODY()

public:

    AMainGameMode();

	int32 UnfixedAnamoly;

    UPROPERTY(BlueprintReadWrite, Category = "Game")
    bool bIsGameOver;
    
    UPROPERTY(BlueprintReadWrite, Category = "Game")
    bool bIsPlayerWinner;    

protected:
    // Game Over Widget Class
    virtual void BeginPlay() override;


private:

    UFUNCTION(BlueprintCallable, Category = "Game")
	void EndGame();

    UFUNCTION(BlueprintCallable, Category = "Game")
    void WinGame();

    float CurrentTime;


public:    
    virtual void Tick(float DeltaTime) override;

};
