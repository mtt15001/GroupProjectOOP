#pragma once
#include "Container.h"
#include "Label.h"
#include <vector>

using namespace std;
class Window : public Container
{
private:
	bool borderPressed;
	int prevX;
	int prevY;
	Color borderColor;
	Color bgColor;
	Label title;
public:
	//ZControlbase array fylld med objekt. Initierar sedan ett window i main och skickar in det objektet i InitOGL
	Window(int x, int y, int width, int height, Color background, Color border,string Title);
	void OnMouseMove(int button, int x, int y);
	void OnMouseUp(int button, int x, int y);

	~Window();
};
