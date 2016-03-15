#pragma once
#include "ControlBase.h"
//#learntoprogram
class ZControlBase : public ControlBase
{
protected:
	int z;
public:
	ZControlBase();
	ZControlBase(int x, int y, int width, int height, int z);
	~ZControlBase();
};

