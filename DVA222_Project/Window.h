#pragma once
#include "Container.h"
#include "Label.h"
#include <vector>

using namespace std;
class Window : public Container
{
public:
	//ZControlbase array fylld med objekt. Initierar sedan ett window i main och skickar in det objektet i InitOGL
	Window(int x, int y, int width, int height, int z,int size);

	void AddObject(ZControlBase &container);

	~Window();
};
