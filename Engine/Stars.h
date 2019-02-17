#pragma once
#include "Graphics.h"

class Stars
{
public:
	void StarSet(int in_x, int in_y);
	void DrawBrightStar1(Graphics& gfx) const;
	void DrawBrightStar2(Graphics& gfx) const;
	void DrawDStar(Graphics& gfx) const;
private:
	int x;
	int y;

};