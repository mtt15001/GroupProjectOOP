#include "stdafx.h"
#include "Panel.h"


Panel::Panel(int x, int y, int width, int height, Color color) : Container(x, y, width, height, color)
{
	relativePos = Point(0, 0);
}
Panel::~Panel()
{
}
void Panel::Add(ZControlBase *Object)
{
	Objects.push_back(Object);
}
void Panel::OnPaint()
{
	glColor3f(color.r / 255.0, color.g / 255.0, color.b / 255.0);
	FillRectangle(X + relativePos.X + 1, Y + relativePos.Y + 1, Width - 2, Height - 2);

	Container::OnPaint();
}
void Panel::OnMouseDown(int button, int x, int y)
{
	for (size_t i = 0; i < Objects.size(); i++)
	{
		Objects.at(i)->OnMouseDown(button, x, y);
	}
}
void Panel::OnMouseMove(int button, int x, int y)
{
	for (size_t i = 0; i < Objects.size(); i++)
	{
		Objects.at(i)->OnMouseMove(button, x, y);
	}
}
void Panel::OnLoaded()
{
	for (size_t i = 0; i < Objects.size(); i++)
	{
		Objects.at(i)->OnLoaded();
	}
}