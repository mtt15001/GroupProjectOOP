#pragma once
#include "Container.h"
#include "Label.h"
#include "RadioButton.h"
class RadioButtonGroup : public Container
{
public:
	RadioButtonGroup();
	RadioButtonGroup(int x, int y, int width, int height, int z,Color color, string n);
	void OnPaint();
	~RadioButtonGroup();
private:
	Label title;
	
};
