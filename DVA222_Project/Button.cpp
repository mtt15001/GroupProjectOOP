#include "stdafx.h"
#include "Button.h"


Button::Button()
{
	hit = pressed = false; 
	relativePos = Point(0, 0);
}
Button::Button(int x, int y, int height, int width, Color color) : ZControlBase(x, y, height, width, color)
{
	hit = pressed = false;
	relativePos = Point(0, 0);
}
Button::~Button()
{
	delete normal;
	delete press;
	delete hover;
}
void Button::OnMouseMove(int button,int x, int y)
{
	if (x>X + relativePos.X && x < X + relativePos.X + Width && y>Y + relativePos.Y && y < Y + relativePos.Y + Height)
		hit = true;
	else
	{
		pressed = hit = false;
	}
}
void Button::OnPaint()
{
	if (pressed)
		DrawBitmap(*press, X + relativePos.X, Y + relativePos.Y, Width, Height);
	else if (hit)
		DrawBitmap(*hover, X + relativePos.X, Y + relativePos.Y, Width, Height);
	else
		DrawBitmap(*normal, X + relativePos.X, Y + relativePos.Y, Width, Height);

}
void Button::OnLoaded()
{
	normal = new Bitmap("ButtonHover.bmp");
	hover = new Bitmap("ButtonHover.bmp");
	press = new Bitmap("ButtonHover.bmp");
}
void Button::OnMouseDown(int button, int x, int y)
{
	if (hit && button == MOUSE_LEFT)
		pressed = true;
}
void Button::OnMouseUp(int button, int x, int y)
{
	pressed = false;
}
