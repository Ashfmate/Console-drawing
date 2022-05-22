#include <iostream>
#include "Game.h"
#include <windows.h>

Game game;

void hidecursor() //Saih gave me this, it just hides the cursor, I don't know exactly what it do but the bVisible is set to false, that I understand
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = false;
	SetConsoleCursorInfo(consoleHandle, &info);
}

void BigWindow() //The name heh, it just set the size of the console window in the beginning so that we don't have to set anything
{
	HWND console = GetConsoleWindow();
	RECT ConsoleRect;
	GetWindowRect(console, &ConsoleRect);

	MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 1440, 900, TRUE);
}

int main()
{
	BigWindow();
	hidecursor();
	//calling the two functions at start so that they don't have to be repeated
	while (true) //	I did not want any code to be made in main because it is cpp without a header file and I am more used to header files
	{
		game.Go();
	} // repeates the go functions which implements all of the code we would need (another cpp file is made for implementation) until the console is closed
}