#include "stdafx.h"
#include "ZControlBase.h"


ZControlBase::ZControlBase()
{
	z = 0;
}
ZControlBase::ZControlBase(int x, int y, int height, int width, int z) : ControlBase(x, y, height, width)
{
	this->z = z;
}
ZControlBase::~ZControlBase()
{
	
}
