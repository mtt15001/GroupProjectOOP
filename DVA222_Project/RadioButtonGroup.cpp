#include "stdafx.h"
#include "RadioButtonGroup.h"


RadioButtonGroup::RadioButtonGroup(int x, int y, int width, int height, int z, string n) : Container(x, y, width, height, z)
{
	title.setText(n);
	counter = 0;
}


RadioButtonGroup::~RadioButtonGroup()
{
}

void RadioButtonGroup::AddObject(RadioButton *Obj) {
	Objects.push_back(Obj);
	counter++;
}

void RadioButtonGroup::ButtonPressed(void)
{
	int size = Objects.size();
	for (int i = 0; i < size; i++) {
		if(Objects.at(i)->
	}

}