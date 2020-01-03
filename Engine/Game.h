/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"


class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */

	void DrawFace(int x, int y);
	void DrawFoe(int x, int y);
	int ClampScreenX(int x, int width);
	int ClampScreenY(int y, int height);
	bool IsColliding(int x0, int y0, int width0, int height0, int x1, int y1, int width1, int height1);
	void DrawGameOver(int x, int y);
	void DrawTitle(int x, int y);
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */

	int dudeX = 300;
	int dudeY = 400;
	int dudeWidth = 20;
	int dudeHeight = 20;
	int dudeSpeed = 4;

	int foe0X = 300;
	int foe0Y = 300;
	bool foe0IsEaten = false;
	int foe1X = 100;
	int foe1Y = 500;
	bool foe1IsEaten = false;
	int foe2X = 600;
	int foe2Y = 400;
	bool foe2IsEaten = false;
	int foeWidth = 24;
	int foeHeight = 24;

	bool isStarted = false;

	
	/********************************/
};