#pragma once
class Poo
{
public:
	static constexpr int width = 24;
	static constexpr int height = 24;
	int pooSpeed;

	int xVel; //velocity
	int yVel;
	int x;
	int y;
	bool isEaten = false;


public:
	void Update();

};