#pragma once
#include "ControlBase.h"
//#learntoprogram
class ZControlBase : public ControlBase
{
private:
	int z;
public:
	ZControlBase();
	ZControlBase(int x, int y, int w, int h, int z);
	~ZControlBase();
};

