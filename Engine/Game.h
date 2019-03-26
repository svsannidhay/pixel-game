
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
	void DrawPoo(int x, int y);
	void DrawGameOver(int x, int y);
	void DrawTitleScreen(int x, int y);
	int ClampScreenX(int x, int width);
	int ClampScreenY(int y, int height);
	bool IsColliding(int x0, int y0, int width0, int height0, int x1, int y1, int width1, int height1);

	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	
	int dudeX = 400;
	int dudeY = 300;
	int dudeWidth = 20;
	int dudeHeight = 20;
	int poo0X = 300;
	int poo0Y = 150;
	int poo0vx = 1;
	int poo0vy = 1;
	bool poo0IsEaten = false;
	int poo1X = 100;
	int poo1Y = 500;
	int poo1vx = 1;
	int poo1vy = 1;
	bool poo1IsEaten = false;
	int poo2X = 500;
	int poo2Y = 400;
	int poo2vx = 1;
	int poo2vy = 1;
	bool poo2IsEaten = false;
	int pooWidth = 24;
	int pooHeight = 24;
	bool isStarted = false;
	bool ifHit = false;
	bool firstHitRight = false;
	int swt;

};
