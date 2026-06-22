#include "Test.h"

void FTestModule::StartupModule()
{
    UE_LOG(LogTemp, Warning, TEXT("=== Test Module Started! ==="));
}

void FTestModule::ShutdownModule()
{
    UE_LOG(LogTemp, Warning, TEXT("=== Test Module Shutdown! ==="));
}

IMPLEMENT_MODULE(FTestModule, Test);