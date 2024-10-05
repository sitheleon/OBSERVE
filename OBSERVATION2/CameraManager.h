#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Camera/CameraActor.h" // ACameraActor 사용을 위해 포함
#include "Components/AudioComponent.h" // UAudioComponent 사용을 위해 포함
#include "Sound/SoundCue.h" // USoundCue 사용을 위해 포함
#include "CameraManager.generated.h"

UCLASS()
class OBSERVATION2_API ACameraManager : public AActor
{
    GENERATED_BODY()

public:    
    // Sets default values for this actor's properties
    ACameraManager();

    UFUNCTION(BlueprintCallable, Category = "Camera")
    void SwitchToNextCamera();

    void SwitchToCamera(int32 CameraIndex);

    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    float CurrentCamera();

private:
    // 카메라 저장 배열
    UPROPERTY(EditAnywhere)
    TArray<AActor*> Cameras;

    int32 CurrentCameraIndex;

    UAudioComponent* SwitchCameraAudioComponent;

    UPROPERTY(EditAnywhere, Category = "Audio")
    USoundCue* SwitchCameraSoundCue; 

public:    
    // Called every frame
    virtual void Tick(float DeltaTime) override;
};
