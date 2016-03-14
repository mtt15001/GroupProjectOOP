#pragma once
#include "ZControlBase.h"
class Container : public ZControlBase
{
public:
	Container();
	Container(int x, int y, int height, int width, int z );
	~Container();
protected:
	ZControlBase *ObjectsArr;

};

