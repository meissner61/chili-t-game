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
	Game(class MainWindow& wnd);
	Game(const Game&) = delete;
	Game& operator=(const Game&) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */
	void DrawGameOver(int x, int y);
	void DrawDude(int x, int y);
	void DrawPoo(int x, int y);
	int pooBounceX(int x, int width, int& speed);
	int pooBounceY(int y, int height, int& speed);
	int ClampScreenX(int x, int width);
	int ClampScreenY(int y, int height);
	bool IsColliding(int x0, int y0, int width0, int height0
		, int x1, int y1, int width1, int height1);

	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */
	bool isStarted = true;

	int dudeSpeed = 5;
	int dudeWidth = 20;
	int dudeHeight = 20;
	int dudeX = 500;
	int dudeY = 500;

	int pooSpeed = 1;
	int pooSpeedX = 1;
	int pooSpeedY = 1;
	int pooWidth = 24;
	int pooHeight = 24;

	int pooSpeed0X = 1;
	int pooSpeed0Y = 1;
	int poo0X = 5;
	int poo0Y = 300;
	bool poo0isEaten = false;

	int pooSpeed1X = 1;
	int pooSpeed1Y = 1;
	int poo1X = 100;
	int poo1Y = 500;
	bool poo1isEaten = false;

	int pooSpeed2X = 1;
	int pooSpeed2Y = 1;
	int poo2X = 600;
	int poo2Y = 400;
	bool poo2isEaten = false;

	/********************************/
};