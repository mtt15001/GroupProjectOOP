#pragma once
#include "ZControlBase.h"
#include <vector>
class Container : public ZControlBase
{
public:
	Container();
	Container(int x, int y, int width, int height, int z );
	virtual void AddObject() = 0;
	void ZSort(vector<ZControlBase> vect);
	~Container();
protected:
	vector<ZControlBase*> Objects;

};

