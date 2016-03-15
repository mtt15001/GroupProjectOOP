#pragma once
#include "Container.h"
#include "Label.h"
class Window : public Container , public Label
{
public:
	Window(int x, int y, int width, int height, int z);
	~Window();
};

