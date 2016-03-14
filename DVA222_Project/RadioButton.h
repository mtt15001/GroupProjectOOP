#pragma once
#include "Button.h"
class RadioButton : public Button
{
public:
	RadioButton();
	RadioButton(int x, int y, int height, int width, int z, string n);
	~RadioButton();
};

