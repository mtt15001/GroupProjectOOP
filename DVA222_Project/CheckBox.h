#pragma once
#include "Button.h"
class CheckBox :
	public Button
{
public:
	CheckBox();
	CheckBox(int x, int y, int width, int height, int z, string n);
	~CheckBox();
};

