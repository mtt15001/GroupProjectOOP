#pragma once
#include "Button.h"
#include "Graphix.h"
#include "glut.h"
class CheckBox : public Button
{
private:
	Label headLabel;
public:
	CheckBox();
	CheckBox(int x, int y, int width, int height, int z, string n);
	~CheckBox();

	void OnLoaded(); 
	void OnPaint(void);
	void OnMouseDown(int button, int x, int y);
	void OnMouseMove(int button, int x, int y);
};

