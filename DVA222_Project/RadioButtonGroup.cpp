#include "stdafx.h"
#include "RadioButtonGroup.h"


RadioButtonGroup::RadioButtonGroup()
{

}
RadioButtonGroup::RadioButtonGroup(int x, int y, int width, int height, int z, Color color, string n) : Container(x, y, width, height, z, color)
{
	title.setText(n);
	counter = 0;
}


RadioButtonGroup::~RadioButtonGroup()
{
}

void RadioButtonGroup::OnPaint() {

}