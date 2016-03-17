#include "stdafx.h"
#include "ZControlBase.h"


ZControlBase::ZControlBase()
{
	z = 0;
}
ZControlBase::ZControlBase(int x, int y, int width, int height, int z, Color color) : ControlBase(x, y, width, height)
{
	this->z = z;
	SetColor(color);
	relativePos = Point(0, 0);
}
ZControlBase::~ZControlBase()
{
}
void ZControlBase::SetColor(Color c)
{
	color.r = c.r;
	color.b = c.b;
	color.g = c.g;
}

bool ZControlBase::CompareZ(ZControlBase* first, ZControlBase* second)
{
	return first->z > second->z ? true : false;
}
Point ZControlBase::getRelativePos()
{
	return relativePos;
}
void ZControlBase::setRelativePos(Point p)
{
	relativePos.X = p.X;
	relativePos.Y = p.Y;
}