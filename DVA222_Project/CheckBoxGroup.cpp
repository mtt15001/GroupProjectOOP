#include "stdafx.h"
#include "CheckBoxGroup.h"


CheckBoxGroup::CheckBoxGroup(int x, int y, int height, int width, int z, string n) : Container(x, y, height, width, z)
{
	title.setText(n);
}


CheckBoxGroup::~CheckBoxGroup()
{
}
