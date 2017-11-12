// Mandelbrot.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "WindowManager.h"
#include "DrawWindow.h"


int main()
{
	WindowManager::getInstance()->init();

	new DrawWindow();
	WindowManager::getInstance()->startLoop();

    return 0;
}

