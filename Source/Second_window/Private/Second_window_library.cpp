// Fill out your copyright notice in the Description page of Project Settings.

#include "Second_window_library.h"

void USecond_window_library::SetTextureTargetSize(UTextureRenderTarget2D* target, int x, int y)
{
	target->ResizeTarget(x, y);
}