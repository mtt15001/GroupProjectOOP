#pragma once
#include "Container.h"
#include "Label.h"
#include "CheckBox.h"
class CheckBoxGroup :
	public Container
{
public:
	CheckBoxGroup(int x, int y, int width, int height, Color color, string n);
	void AddObject(CheckBox* Obj);
	~CheckBoxGroup();
private:
	Label title;
};