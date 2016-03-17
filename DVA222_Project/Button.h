#pragma once
#include "Label.h"
#include "ZControlBase.h"
#include "Graphix.h"
#include "glut.h"
class Button : public ZControlBase
{
protected:
	Bitmap *normal;
	Bitmap *press;
	Bitmap *hover;
public:
	bool hit;
	bool pressed;

	Button();
	~Button();
	Button(int x, int y, int height, int width, Color color);
	virtual void OnLoaded(); // kallas en gång när fönstret laddas
	virtual void OnPaint(void); // 
	//virtual void OnKeyboard(unsigned char key, int x, int y);
	virtual void OnMouseDown(int button, int x, int y);
	virtual void OnMouseUp(int button, int x, int y);
	virtual void OnMouseMove(int button, int x, int y);
	//virtual void OnResize(int width, int height);
};
