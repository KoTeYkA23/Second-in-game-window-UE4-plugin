// Fill out your copyright notice in the Description page of Project Settings.

#include "SecondWindow_library.h"

void USecondWindow_library::SetTextureTargetSize(UTextureRenderTarget2D* target, int x, int y)
{
	target->ResizeTarget(x, y);
}