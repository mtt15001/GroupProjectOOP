#pragma once
#include "Container.h"
#include "Label.h"
class RadioButtonGroup : public Container
{
public:
	RadioButtonGroup(int x, int y, int width, int height, int z, string n);
	void AddObject(ZControlBase *Obj);

	~RadioButtonGroup();
private:
	Label title;
	
};

