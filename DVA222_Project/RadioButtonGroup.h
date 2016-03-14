#pragma once
#include "Container.h"
#include "Label.h"
class RadioButtonGroup : public Container
{
public:
	RadioButtonGroup();
	RadioButtonGroup(int x, int y, int height, int width, int z, string n);
	~RadioButtonGroup();
private:
	Label title;
};

