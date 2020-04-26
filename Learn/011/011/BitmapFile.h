#pragma once

#include <stdio.h>
#include <Windows.h>
#include "Graphic.h"

typedef struct _Image {
	int width;
	int height;
	unsigned int * argb;
} Image;

int BitmapLoad(Image *img, const char *path);
void BitmapDraw(Image *img, float px, float py);