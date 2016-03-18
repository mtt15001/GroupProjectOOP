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
	void OnPaint();
	void OnMouseDown(int button, int x, int y);
	~CheckBoxGroup();
private:
	Label title;
};