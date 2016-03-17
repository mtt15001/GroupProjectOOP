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

//Tagit bort Point, den fanns redan i Graphix.h!!! Fredrik