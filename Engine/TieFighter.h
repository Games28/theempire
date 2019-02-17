#pragma once
#include "Graphics.h"
#include "Keyboard.h"

class TieFighter
{
public:
	TieFighter(int t_x, int t_y);
	void DrawUp(Graphics& gfx);
	void DrawDown(Graphics& gfx);
	void DrawLeft(Graphics& gfx);
	void DrawRight(Graphics& gfx);
	int getWidth();
	int getHeight();
	void Boundry();
	void Update(Keyboard& kbd);

private:
	static constexpr int width = 32;
	static constexpr int height = 32;
	int speed = 2;
	int x;
	int y;
	
};
