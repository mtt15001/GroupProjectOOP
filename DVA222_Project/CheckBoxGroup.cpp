#include "stdafx.h"
#include "CheckBoxGroup.h"


CheckBoxGroup::CheckBoxGroup(int x, int y, int width, int height, Color color, string n) : Container(x, y, width, height, color)
{
	title.setText(n);
}


CheckBoxGroup::~CheckBoxGroup()
{
}

void CheckBoxGroup::AddObject(CheckBox* Obj) {
	Objects.push_back(Obj);
	counter++;
}