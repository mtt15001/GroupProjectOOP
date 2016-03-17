#include "stdafx.h"
#include "Label.h"



Label::Label()
{
	z = 0;
}
Label::Label(int x, int y, int width, int height, int z, Color color) : ZControlBase(x, y, width, height, z, color)
{
}
Label::Label(int x, int y, int width, int height, int z, Color color, string text) : ZControlBase(x+100,y,width,height,z, color)
{
	setText(text);
}
Label::~Label()
{
}
void Label::setText(string n)
{
	text = n;
}
void Label::setLocation(int x, int y)
{
}
void Label::OnPaint(void)
{
	SetColor(color);
	DrawString(text,this->X+10,this->Y+45);
}