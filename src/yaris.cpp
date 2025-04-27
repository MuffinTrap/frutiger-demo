#include <mgdl.h>
#include "yaris.h"

static Image* car;

void Yaris_Load()
{
	car = LoadImage("assets/yaris_64.png", gdl::TextureFilterModes::Linear);
}

void Yaris_Draw()
{

	float scale = 1.0f + abs(sin(GetElapsedSeconds()*4.0f)) * 0.2f;
	Image_Draw2DAligned(car, GetScreenWidth()/2, GetScreenHeight()/2, scale, Centered, Centered);
}
