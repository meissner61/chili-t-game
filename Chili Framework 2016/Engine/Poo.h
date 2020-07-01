#pragma once
#include "Graphics.h"
class Poo
{
public:
	static constexpr int width = 24;
	static constexpr int height = 24;
	int speed;

	int xVel; //velocity
	int yVel;
	int x;
	int y;
	bool isEaten = false;


public:
	void Update();
	void ProcessConsumption(int dudeX, int dudeY, int dudeWidth, int dudeHeight);
	void Draw(Graphics& gfx);

};