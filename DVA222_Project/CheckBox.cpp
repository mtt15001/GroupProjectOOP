#include "stdafx.h"
#include "CheckBox.h"
#include "Graphix.h"
#include "glut.h"
#include "resource1.h"


CheckBox::CheckBox()
{
	hit = pressed = false;
}
CheckBox::CheckBox(int x, int y, int width, int height, Color color, string n) : Button(x, y, width, height, color)
{
	hit = pressed = false;
	headLabel = new Label(X + Width, Y + Height - 5, color, n);
	relativePos = Point(0, 0);
}
CheckBox::~CheckBox()
{
	delete normal;
	delete press;
	delete hover;
}
void CheckBox::OnLoaded()
{
	normal = new Bitmap("checkbox_unchecked.bmp");
	hover = new Bitmap("checkbox_hover.bmp");
	press = new Bitmap("checkbox_checked.bmp");
}

void CheckBox::OnPaint(void)
{
	if (pressed)
		DrawBitmap(*press, X + relativePos.X, Y + relativePos.Y, Width, Height);
	else if (hit)
		DrawBitmap(*normal, X + relativePos.X, Y + relativePos.Y, Width, Height);
	else
		DrawBitmap(*normal, X + relativePos.X, Y + relativePos.Y, Width, Height);

	headLabel->setRelativePos(getRelativePos());
	headLabel->OnPaint();
}
void CheckBox::OnMouseDown(int button, int x, int y)
{
	if (hit && pressed)
		pressed = false;
	else if(hit && !pressed && button==MOUSE_LEFT)
		pressed = true;
}
void CheckBox::OnMouseMove(int button, int x, int y)
{
	if (x>X + relativePos.X && x < X + relativePos.X + Width && y>Y + relativePos.Y && y < Y + relativePos.Y + Height)
		hit = true;
	else
	{
		hit = false;
	}
}
void CheckBox::OnMouseUp(int button, int x, int y)
{
	//pressed = true;
}