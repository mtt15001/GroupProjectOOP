#include "stdafx.h"
#include "Button.h"


Button::Button()
{
}
Button::Button(int x, int y, int width, int height, int z,string n) : ZControlBase(x, y, width, height, z)
{
	setLabel(n);
}
void Button::setLabel(string n)
{
	headLabel.setText(n);
}
Button::~Button()
{
}
