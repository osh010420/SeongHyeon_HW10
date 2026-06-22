#include "Temporary.h"

void FTemporaryModule::StartupModule()
{
    UE_LOG(LogTemp, Warning, TEXT("=== Temporary Plugin Started! ==="));
}

void FTemporaryModule::ShutdownModule()
{
    UE_LOG(LogTemp, Warning, TEXT("=== Temporary Plugin Shutdown! ==="));
}

IMPLEMENT_MODULE(FTemporaryModule, Temporary);