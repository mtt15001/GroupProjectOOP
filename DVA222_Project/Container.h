#pragma once
#include "ZControlBase.h"
#include <vector>
#include <algorithm>
class Container : public ZControlBase
{
public:
	Container();
	Container(int x, int y, int width, int height, int z );
	virtual void AddObject() = 0;
	~Container();
protected:
	vector<ZControlBase*> Objects;
	int counter;
};

