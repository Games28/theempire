#include "Stars.h"

void Stars::StarSet(int in_x, int in_y)
{
	x = in_x;
	y = in_y;
}

void Stars::DrawBrightStar1(Graphics & gfx) const
{
	gfx.PutPixel(x + 2, y + 2, 255, 255, 255);
}

void Stars::DrawBrightStar2(Graphics & gfx) const
{
	gfx.PutPixel(x + 2, y + 2, 255, 255, 255);
	gfx.PutPixel(x + 2, y + 1, 255, 255, 255);
	gfx.PutPixel(x + 2, y + 3, 255, 255, 255);
	gfx.PutPixel(x + 1, y + 2, 255, 255, 255);
	gfx.PutPixel(x + 3, y + 2, 255, 255, 255);
}

void Stars::DrawDStar(Graphics & gfx) const
{
	gfx.PutPixel(x, y, 255, 255, 255);
	gfx.PutPixel(x + 1, y, 255, 255, 255);
	gfx.PutPixel(x, y + 1, 255, 255, 255);
	gfx.PutPixel(x + 1, y + 1, 255, 255, 255);
}
