#pragma once
class Foe
{
public:
	void Update();
	int x;
	int y;
	int vx;
	int vy;
	static constexpr int width = 24; //if you leave int width=24; it will copy that same value ...
	static constexpr int height = 24;//...to every foe object created (REDUNDANT) therefore use static const expr
	bool isEaten = false;
};