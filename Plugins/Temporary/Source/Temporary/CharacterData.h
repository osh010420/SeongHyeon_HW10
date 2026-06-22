#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CharacterData.generated.h"

UCLASS()
class TEMPORARY_API UCharacterData : public UObject
{
    GENERATED_BODY()

public:
    UCharacterData();

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString CharacterName = TEXT("Challenger");

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MaxHealth = 100.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MoveSpeed = 600.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 Level = 1;
};