#include "Dude.h"
#include "Graphics.h"


void Dude::Update()
{
	if (x <= 0)
	{
		x = 0;
	}

	else if (x >= Graphics::ScreenWidth - width)
	{
		x = Graphics::ScreenWidth - width - 1;
	}

	if (y <= 0)
	{
		y = 0;
	}

	else if (y >= Graphics::ScreenHeight - height)
	{
		y = Graphics::ScreenHeight - height - 1;
	}

}