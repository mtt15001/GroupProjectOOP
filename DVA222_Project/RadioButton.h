#pragma once
#include "Button.h"
#include "Graphix.h"
#include "glut.h"

class RadioButton : public Button
{
public:
	RadioButton();
	RadioButton(int x, int y, int width, int height, int z, Color color, string n);
	~RadioButton();
	bool isPressed() { return pressed; }
	void OnLoaded();
	void OnPaint(void);
	void OnMouseMove(int button, int x, int y);
	void OnMouseDown(int button, int x, int y);
};

