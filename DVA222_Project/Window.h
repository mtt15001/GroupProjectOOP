#pragma once
#include "Container.h"
#include "Label.h"
#include <vector>
class Window : public Container , public Label
{
public:
	//ZControlbase array fylld med objekt. Initierar sedan ett window i main och skickar in det objektet i InitOGL
	vector <ZControlBase> Objects;
	Window(int x, int y, int width, int height, int z);

	void Add();

	~Window();
};
