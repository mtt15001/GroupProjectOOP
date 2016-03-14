#pragma once
#include "Container.h"
#include "Label.h"
class Window : public Container , public Label
{
public:
	Window();
	~Window();
};

