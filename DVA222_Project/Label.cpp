#include "stdafx.h"
#include "Label.h"



Label::Label()
{
	z = 0;
	text = nullptr;
}
Label::Label(int x, int y, int width, int height, int z) : ZControlBase(x, y, width, height, z)
{
}
Label::Label(int x, int y, int width, int height, int z,string text)
{
	Label(x, y, width, height, z);
	setText(text);
}
Label::~Label()
{
	delete text;
}
void Label::setText(string n)
{
	text = new string;
	*text = n;
}
