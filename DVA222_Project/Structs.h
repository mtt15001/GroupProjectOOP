#pragma once
#include <stdlib.h>

//Structs for project

struct Color
{
	int r;
	int g;
	int b;

	Color() { r = 0; g = 0; b = 0; }
	Color(int r, int g, int b) { this->r = r; this->b = b; this->g = g; }
};

struct Point
{
	int PosX;
	int PosY;

	Point() { PosX = 0; PosY = 0; }
	Point(int x, int y) { PosX = x; PosY = y; }
};