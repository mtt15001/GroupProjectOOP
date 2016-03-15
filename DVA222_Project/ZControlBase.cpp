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

void ZControlBase::OnLoaded()
{
}
void ZControlBase::OnPaint(void)
{
}
void ZControlBase::OnKeyboard(unsigned char key, int x, int y)
{
}
void ZControlBase::OnMouseDown(int button, int x, int y)
{
}
void ZControlBase::OnMouseUp(int button, int x, int y)
{
}
void ZControlBase::OnMouseMove(int button, int x, int y)
{
}
void ZControlBase::OnResize(int width, int height)
{
}
