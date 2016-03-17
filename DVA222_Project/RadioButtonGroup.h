#pragma once
#include "Container.h"
#include "Label.h"
#include "RadioButton.h"
class RadioButtonGroup : public Container
{
public:
	RadioButtonGroup(int x, int y, int width, int height, int z, string n);
	void AddObject(RadioButton *Obj);
	void ButtonPressed(void);
	~RadioButtonGroup();
private:
	Label title;
	
};
