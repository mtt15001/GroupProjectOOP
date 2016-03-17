#pragma once
#include "Container.h"
#include "Label.h"
#include "RadioButton.h"
class RadioButtonGroup : public Container
{
public:
	RadioButtonGroup();
	RadioButtonGroup(int x, int y, int width, int height,Color color, string n);
	void AddObject(RadioButton* obj);
	void OnPaint();
	void OnMouseDown(int button, int x, int y);
	~RadioButtonGroup();
private:
	Label title;
	int indexOfPressed;
};
