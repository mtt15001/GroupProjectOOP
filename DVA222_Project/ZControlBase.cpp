#include "stdafx.h"
#include "ZControlBase.h"


ZControlBase::ZControlBase()
{

}
ZControlBase::ZControlBase(int x, int y, int w, int h, int z) : ControlBase(x, y, w, h)
{
	this->z = z;
}


ZControlBase::~ZControlBase()
{
	
}
