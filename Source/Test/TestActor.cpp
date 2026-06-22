#include "TestActor.h"

ATestActor::ATestActor()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ATestActor::BeginPlay()
{
    Super::BeginPlay();

    UE_LOG(LogTemp, Warning, TEXT("=== TestActor BeginPlay! Test Module Working! ==="));

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green,
            TEXT("Test Module Working!"));
    }
}