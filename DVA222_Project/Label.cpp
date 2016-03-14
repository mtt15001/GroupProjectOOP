#include "stdafx.h"
#include "Label.h"


Label::Label()
{
	text = nullptr;
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
