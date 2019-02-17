#pragma once
#include "Graphics.h"

class Xwing
{
public:
	void Wing(int in_x, int in_y);


private:
	static constexpr int width = 30;
	static constexpr int height = 30;
	int x;
	int y;
};
