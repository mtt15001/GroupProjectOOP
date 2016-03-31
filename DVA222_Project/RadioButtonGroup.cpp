#include "stdafx.h"
#include "RadioButtonGroup.h"


RadioButtonGroup::RadioButtonGroup()
{
	indexOfPressed = -1;
}
RadioButtonGroup::RadioButtonGroup(int x, int y, int width, int height, Color color, string n) : Container(x, y, width, height, color)
{
	title = new Label(x, y, Color(), n);
	counter = 0;
	indexOfPressed = -1;
}


RadioButtonGroup::~RadioButtonGroup()
{
}

void RadioButtonGroup::AddObject(RadioButton* obj)
{
	Objects.push_back(obj);
	counter++;
}

void RadioButtonGroup::OnPaint() {
	glColor3f(0 / 255, 0 / 255, 0 / 255);
	
	FillRectangle(X + relativePos.X, Y + relativePos.Y, Width, Height);
	glColor3f(color.r / 255.0, color.g / 255.0, color.b / 255.0);
	FillRectangle(X + relativePos.X + 1, Y + relativePos.Y + 1, Width - 2, Height - 2);

	/*for (size_t i = 0; i < Objects.size(); i++)
	{
		Objects.at(i)->setRelativePos(Point(this->X + relativePos.X, this->Y + relativePos.Y));
		Objects.at(i)->OnPaint();
	}*/
	Container::OnPaint();
	
	title->setRelativePos(getRelativePos());
	title->OnPaint();
}

void RadioButtonGroup::OnMouseDown(int button, int x, int y) {
	RadioButton* tmp;

	for (size_t i = 0; i < Objects.size(); i++) {
		tmp = static_cast<RadioButton*>(Objects.at(i));
		tmp->setPressed(false);
	}

	for (size_t i = 0; i < Objects.size(); i++) {
		Objects.at(i)->OnMouseDown(button, x, y);
	}

	for (size_t i = 0; i < Objects.size(); i++) {
		tmp = static_cast<RadioButton*>(Objects.at(i));
		if (tmp->isPressed())
			indexOfPressed = i;
	}

	if (indexOfPressed == -1)
		return;

	tmp = static_cast<RadioButton*>(Objects.at(indexOfPressed));
	tmp->setPressed(true);
}