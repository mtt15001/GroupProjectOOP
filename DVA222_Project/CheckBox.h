#pragma once
#include "Button.h"
class CheckBox :
	public Button
{
public:
	CheckBox();
	CheckBox(int x, int y, int height, int width, int z, string n);
	~CheckBox();
};

