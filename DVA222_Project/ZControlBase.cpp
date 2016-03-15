#include "stdafx.h"
#include "ZControlBase.h"


ZControlBase::ZControlBase()
{
	z = 0;
}
ZControlBase::ZControlBase(int x, int y, int width, int height, int z) : ControlBase(x, y, width, height)
{
	this->z = z;
}
ZControlBase::~ZControlBase()
{
	
}
