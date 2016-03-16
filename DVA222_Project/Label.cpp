#include "stdafx.h"
#include "Label.h"



Label::Label()
{
	z = 0;
}
Label::Label(int x, int y, int width, int height, int z) : ZControlBase(x, y, width, height, z)
{
}
Label::Label(int x, int y, int width, int height, int z,string text) : ZControlBase(x+100,y,width,height,z)
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
	SetColor(0, 0, 0);
	DrawString(text,this->X+10,this->Y+45);
}