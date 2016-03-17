#pragma once
#include "Container.h"
#include "Label.h"
class CheckBoxGroup :
	public Container
{
public:
	CheckBoxGroup(int x, int y, int width, int height, int z, Color color, string n);
	void AddObject(ZControlBase *Obj);
	~CheckBoxGroup();
private:
	Label title;
};