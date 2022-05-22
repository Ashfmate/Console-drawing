#pragma once

#include <iostream>
#include "CharGraphics.h"
#include <Windows.h>

class Game // The class where our code will be implemented
{
public:
	void Go();
private:
	void Update();
	void Compose();
	/*
		We can make our functions here
	*/
private:
	Graphics gfx;
	/*
		We can make our variables here
	*/
	int x = 10;
	int y = 10;
};