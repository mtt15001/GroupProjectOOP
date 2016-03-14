#include "stdafx.h"
#include "RadioButtonGroup.h"


RadioButtonGroup::RadioButtonGroup(int x, int y, int height, int width, int z, string n) : Container(x, y, height, width, z)
{
	title.setText(n);
}


RadioButtonGroup::~RadioButtonGroup()
{
}
