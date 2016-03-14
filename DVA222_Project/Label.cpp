#include "stdafx.h"
#include "Label.h"



Label::Label()
{
	z = 0;
	text = nullptr;
}
Label::Label(int x, int y, int height, int width, int z) : ZControlBase(x, y, height, width, z)
{
}
Label::Label(int x, int y, int height, int width, int z,string text)
{
	Label(x, y, height, width, z);
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
