#include "Poo.h"
#include "Graphics.h"


void Poo::Update()
{
	x += xVel;
	y += yVel;

	const int right = x + width;

	if (x <= 0)
	{
		x = 0;
		xVel = -xVel;
	}

	else if (x >= Graphics::ScreenWidth - width)
	{
		x = Graphics::ScreenWidth - width - 1;
		xVel = -xVel;

	}

	const int bottom = y + height;

	if (y <= 0)
	{
		y = 0;
		yVel = -yVel;
	}

	else if (y >= Graphics::ScreenHeight - height)
	{
		y = Graphics::ScreenHeight - height - 1;
		yVel = -yVel;
	}

}