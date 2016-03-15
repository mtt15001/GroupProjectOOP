#pragma once
#include "ZControlBase.h"
class Container : public ZControlBase
{
public:
	Container();
	Container(int x, int y, int width, int height, int z );
	~Container();
protected:
	ZControlBase *ObjectsArr;

};

