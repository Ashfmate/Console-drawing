#pragma once
#include <iostream>

class Graphics
{
public:
	Graphics() // constructer, gets called and implemented at the time of declaring an object since it has no parameters
	{
		for (char& c : Char) // ranged base for loop that takes all the elements in an array and runs through them
		{
			c = StartingChar;
			// set all the characters in the Char array to the starting character (space)
			// the c is a referenced variable so any changes to it changes the Char variable
		}
	}
	void MakeChar(int x, int y, char letter);
	void BeginFrame();
	void EndFrame();
private:
	//Starting character set to space but can be changed prebuild time
	static constexpr char StartingChar = ' ';
public:
	//Dimensions of the array
	static constexpr int width = 60;
	static constexpr int height = 45;
	// Used to represent a character in a 2d array of characters
	char Char[width * height];
};