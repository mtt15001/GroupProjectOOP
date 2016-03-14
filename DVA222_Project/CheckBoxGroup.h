#pragma once
#include "Container.h"
#include "Label.h"
class CheckBoxGroup :
	public Container
{
public:
	CheckBoxGroup(int x, int y, int height, int width, int z, string n);
	~CheckBoxGroup();
private:
	Label title;
};

