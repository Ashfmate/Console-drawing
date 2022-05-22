#include "CharGraphics.h"
#include <assert.h>
#include <stdlib.h>
#include <Windows.h>

void Graphics::MakeChar(int x, int y, char letter) // set the character in the 2d array
{
	assert(x >= 0);
	assert(x < width);
	assert(y >= 0);
	assert(y < height);
	// all the asserts are there for making sure the values are in range of the array
	// these asserts trigger when the expression inside them are false and so they will crash the system
	// we should not trigger those so when coding we have to not trigger any of these asserts
	Char[y * width + x] = letter;
}

void Graphics::BeginFrame() // prints all the characters in the Char array values
{
	for (int y = 0; y < height; ++y)
	{
		for (int x = 0; x < width; ++x)
		{
			std::cout << Char[y * width + x];
		}
		std::cout << std::endl;
	}
	for (char& c : Char) // setting Char back to space so that we can update the screen everytime
	{
		c = StartingChar;
	}
}

void Graphics::EndFrame() //clears the screen
{
	std::system("CLS");
}
