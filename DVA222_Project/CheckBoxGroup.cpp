#include "stdafx.h"
#include "CheckBoxGroup.h"


CheckBoxGroup::CheckBoxGroup(int x, int y, int width, int height, int z, string n) : Container(x, y, width, height, z)
{
	title.setText(n);
}


CheckBoxGroup::~CheckBoxGroup()
{
}

void CheckBoxGroup::AddObject(ZControlBase *Obj) {
	Objects.push_back(Obj);
	counter++;
}