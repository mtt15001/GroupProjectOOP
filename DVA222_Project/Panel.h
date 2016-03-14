#pragma once
#include "Container.h"
class Panel : public Container
{
public:
	Panel(){}
	Panel(int x, int y, int height, int width, int z);
	~Panel();
};

