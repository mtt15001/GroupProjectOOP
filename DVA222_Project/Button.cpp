#include "stdafx.h"
#include "Button.h"


Button::Button()
{
	hit = pressed = false; 
}
Button::Button(int x, int y, int height, int width, int z) : ZControlBase(x, y, height, width, z)
{
}
Button::~Button()
{
	delete normal;
	delete press;
	delete hover;
}
void Button::OnMouseMove(int button,int x, int y)
{
	if (x>X && x < X + Width && y>Y && y < Y + Height)
		hit = true;
	else
	{
		pressed = hit = false;
	}
}
void Button::OnPaint()
{
	if (pressed)
		DrawBitmap(*press, X, Y, Width, Height);
	else if (hit)
		DrawBitmap(*hover, X, Y, Width, Height);
	else
		DrawBitmap(*normal, X, Y, Width, Height);

}
void Button::OnLoaded()
{
	normal = new Bitmap("Button_Standard.bmp");
	hover = new Bitmap("Button_Standard.bmp");
	press = new Bitmap("Button_Standard.bmp");
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
