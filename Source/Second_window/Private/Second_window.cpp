// Copyright Epic Games, Inc. All Rights Reserved.

#include "Second_window.h"

#define LOCTEXT_NAMESPACE "FSecond_windowModule"

void FSecond_windowModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FSecond_windowModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSecond_windowModule, Second_window)