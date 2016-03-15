#pragma once
#include "Label.h"
#include "ZControlBase.h"
class Button : public ZControlBase
{
protected:
	Label headLabel;
public:
	Button();
	Button(int x, int y, int width, int height, int z, string n);
	void setLabel(string n);
	string getLabel() { return headLabel.getText(); }
	~Button();
};

