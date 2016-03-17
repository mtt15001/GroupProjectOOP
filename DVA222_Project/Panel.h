#pragma once
#include "Container.h"
class Panel : public Container
{
public:
	Panel(int x, int y, int width, int height, Color color);
	~Panel();
};

