#include "stdafx.h"
#include "Label.h"



Label::Label()
{
	z = 0;
}
Label::Label(int x, int y, string n) : ZControlBase(x, y, 0, 0, Color())
{
	relativePos = Point(0, 0);
	text = n;
}
Label::Label(int x, int y, Color color, string n) : ZControlBase(x,y,0,0, color)
{
	relativePos = Point(0, 0);
	text = n;
}
Label::~Label()
{
}
void Label::setText(string n)
{
	text = n;
}
/*void Label::setPosition(int x, int y)
{
	this->X = x;
	this->Y = y;
}*/
void Label::DrawLabel()
{
	glColor3f(color.r / 255.0, color.g / 255.0, color.b / 255.0);

	DrawString(text, Y + relativePos.Y, X + relativePos.X + 10);
}
void Label::OnPaint()
{
	this->DrawLabel();
}