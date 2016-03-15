#include "stdafx.h"
#include "RadioButtonGroup.h"


RadioButtonGroup::RadioButtonGroup(int x, int y, int width, int height, int z, string n) : Container(x, y, width, height, z)
{
	title.setText(n);
}


RadioButtonGroup::~RadioButtonGroup()
{
}
