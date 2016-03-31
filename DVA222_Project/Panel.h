#pragma once
#include "Container.h"
#include "ZControlBase.h"
class Panel : public Container
{
public:
	Panel(int x, int y, int width, int height, Color color);
	void Add(ZControlBase *Object);
	void OnPaint();
	void OnMouseDown(int button, int x, int y);
	void OnMouseMove(int button, int x, int y);
	void OnLoaded();
	~Panel();
};

