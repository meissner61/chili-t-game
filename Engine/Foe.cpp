#include "Foe.h"
#include "Graphics.h"

void Foe::Update()
{
	x += vx;
	y += vy;
	const int right = x + width; //LEFT and TOP is just the x and y coord. which the image starts at (0,0)

	if (x < 0)
	{
		x = 0;
		vx = -vx;
	}

	else if (right >= Graphics::ScreenWidth)
	{
		x = (Graphics::ScreenWidth - 1) - width;
		vx = -vx;
	}

	const int bottom = y + height; //LEFT and TOP is just the x and y coord. which the image starts at (0,0)

	if (y < 0)
	{
		y = 0;
		vy = -vy;
	}

	else if (bottom >= Graphics::ScreenHeight)
	{
		y = (Graphics::ScreenHeight - 1) - (height);
		vy = -vy;
	}

}

void Foe::FoeCollisionCheck(int dudeX, int dudeY, int dudeHeight, int dudeWidth)
{
	const int dudeRight = dudeX + dudeWidth;
	const int dudeBottom = dudeY + dudeHeight;
	const int foeRight = x + width;
	const int foeBottom = y + height;

	if (dudeRight >= x && dudeX <= foeRight && dudeBottom >= y && dudeY <= foeBottom)
	{
		isEaten = true;
	}
		

}
