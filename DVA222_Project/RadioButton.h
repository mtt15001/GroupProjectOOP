#pragma once
#include "Button.h"
class RadioButton : public Button
{
public:
	RadioButton();
	RadioButton(int x, int y, int width, int height, int z, string n);
	~RadioButton();
};

