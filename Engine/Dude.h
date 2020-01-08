#pragma once
class Dude
{
public:
	/////Member Functions///////

	void ScreenCollisionCheck();

	/////Member Variables//////

	int x;
	int y;

	static constexpr int width = 20;
	static constexpr int height = 20;
	static constexpr int speed = 4;
};
