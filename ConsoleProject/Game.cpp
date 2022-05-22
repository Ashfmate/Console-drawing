#include "Game.h"
#include <fstream>
#include <conio.h>

using namespace std;

void Game::Go() // Calls the two functions when implementing our code and begin and end frame, this function will be repeated
{
	gfx.BeginFrame();
	Update();
	Compose();
	gfx.EndFrame();
}

void Game::Update() // Function to put our code in, preferable if it is logic because it gets called before drawing
{
	if (_kbhit())
	{
		switch (_getch()) {
		case 'w':
			if (y >= 1)
			{
				--y;
			}
		break;
		case 's':
			if (y <= Graphics::height)
			{
				++y;
			}
			break;
		case 'a':
			if (x >= 1)
			{
				--x;
			}
			break;
		case 'd':
			if (x <= Graphics::width)
			{
				++x;
			}
			break;
		}
	}
	// it is there for the input, might make a header file and cpp file for keyboard input to make life easier
}

void Game::Compose() // Function to put our code in, preferable if it is graphics because it gets called after logic
{
	gfx.MakeChar(x, y, 'a');
}
