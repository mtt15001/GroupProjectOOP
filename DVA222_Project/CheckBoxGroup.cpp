#include "stdafx.h"
#include "CheckBoxGroup.h"


CheckBoxGroup::CheckBoxGroup(int x, int y, int width, int height, Color color, string n) : Container(x, y, width, height, color)
{
	title = new Label(x, y,Color(), n);
	counter = 0;
}
CheckBoxGroup::~CheckBoxGroup()
{
}
void CheckBoxGroup::AddObject(CheckBox* Obj) {
	Objects.push_back(Obj);
	counter++;
}
void CheckBoxGroup::OnPaint()
{
	glColor3f(0 / 255, 0 / 255, 0 / 255);
	FillRectangle(X + relativePos.X, Y + relativePos.Y, Width, Height);
	glColor3f(color.r / 255.0, color.g / 255.0, color.b / 255.0);
	FillRectangle(X + relativePos.X + 1, Y + relativePos.Y + 1, Width - 2, Height - 2);

	Container::OnPaint();

	title->setRelativePos(getRelativePos());
	title->OnPaint();
}
void CheckBoxGroup::OnMouseDown(int button, int x, int y)
{
	for (size_t i = 0; i < Objects.size(); i++)
	{
		Objects.at(i)->OnMouseDown(button, x, y);
	}
}