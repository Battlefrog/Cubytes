/*
AssaultCube
Class: Goal
Purpose: Where you move to the next level!

@author Battlefrog
*/

#pragma once

#include "Graphics.h"
#include "Player.h"
#include "Sound.h"
#include "GameManager.h"
#include "MainWindow.h"

class Goal
{

	public:

	const int GetX() const;
	const int GetY() const;

	bool IsPlayerColliding( Player player );
	bool PlayerCollision(MainWindow& wnd);
	
	void DrawGoal( Graphics& gfx ) const;
	void InitGoal( int in_x, int in_y );

	private:

	int x;
	int y;

	static constexpr int width = 15;
	static constexpr int height = 15;

	Color goalColor = Colors::Yellow;

	Sound levelEnd = L"completeLevel.wav";
};