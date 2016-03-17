#pragma once
#include "Container.h"
class Panel : public Container
{
public:
	Panel(int x, int y, int width, int height, int z, Color color);
	~Panel();
};

