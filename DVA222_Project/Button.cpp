#include "stdafx.h"
#include "Button.h"


Button::Button()
{
}
Button::Button(int x, int y, int height, int width, int z,string n) : ZControlBase(x, y, height, width, z)
{
	this->setLabel(n);
}
void Button::setLabel(string n)
{
	headLabel.setText(n);
}
Button::~Button()
{
}
