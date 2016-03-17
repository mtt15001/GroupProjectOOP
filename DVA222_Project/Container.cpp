#include "stdafx.h"
#include "Container.h"
#include "Graphix.h"
#include "glut.h"
#include <algorithm>

Container::Container()
{

}
Container::Container(int x, int y, int width, int height, Color c) : ZControlBase(x,y,width,height,c)
{
	counter = 0;
}
Container::~Container()
{
}
void Container::AddObject(ZControlBase* obj)
{
	Objects.push_back(obj);
	counter++;

	obj->setZ(counter);

	sort(Objects.begin(), Objects.end(), ZControlBase::CompareZ);
}
void Container::OnLoaded()
{
	for (int i = 0; i < Objects.size(); i++) {
		Objects.at(i)->setRelativePos(Point(this->X + relativePos.X, this->Y + relativePos.Y));
		Objects.at(i)->OnLoaded();
	}
}
void Container::OnMouseDown(int button, int x, int y)
{
	for (int i = 0; i < Objects.size(); i++) {
		Objects.at(i)->OnMouseDown(button, x, y);
	}
}
void Container::OnMouseUp(int button, int x, int y)
{
	for (int i = 0; i < Objects.size(); i++) {
		Objects.at(i)->OnMouseUp(button, x, y);
	}
}
void Container::OnMouseMove(int button, int x, int y)
{
	for (int i = 0; i < Objects.size(); i++) {
		Objects.at(i)->OnMouseMove(button, x, y);
	}
}
void Container::OnPaint(void)
{
	for (int i = 0; i < Objects.size(); i++) {
		Objects.at(i)->setRelativePos(Point(this->X + relativePos.X, this->Y + relativePos.Y));
		Objects.at(i)->OnPaint();
	}
}
