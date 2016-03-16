#pragma once
#include "ZControlBase.h"
#include <vector>
#include <algorithm>


class Container : public ZControlBase
{
public:
	Container();
	Container(int x, int y, int width, int height, int z );
	void AddObject();
	bool isPressed();
	void SetColor(Color color);
	~Container();
protected:
	vector<ZControlBase*> Objects;
	int counter;
};

