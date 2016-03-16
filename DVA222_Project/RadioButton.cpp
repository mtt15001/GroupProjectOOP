#include "stdafx.h"
#include "RadioButton.h"


RadioButton::RadioButton()
{
	hit = pressed = false;
}
RadioButton::RadioButton(int x, int y, int width, int height, int z, string n) : Button(x,y,width,height,z)
{
	hit = pressed = false;
}
RadioButton::~RadioButton()
{
	delete normal;
	delete press;
	delete hover;
}
void RadioButton::OnMouseMove(int button, int x, int y)
{
	if (x>X && x < X + Width && y>Y && y < Y + Height)
		hit = true;
	else
	{
		pressed = hit = false;
	}
}
void RadioButton::OnPaint()
{
	if (pressed)
		DrawBitmap(*press, X, Y, Width, Height);
	else if (hit)
		DrawBitmap(*hover, X, Y, Width, Height);
	else
		DrawBitmap(*normal, X, Y, Width, Height);

}
void RadioButton::OnLoaded()
{
	normal = new Bitmap("ButtonNorm.bmp");
	hover = new Bitmap("ButtonHover.bmp");
	press = new Bitmap("ButtonPressed.bmp");
}
void RadioButton::OnMouseDown(int button, int x, int y)
{
	if (hit && button == MOUSE_LEFT)
		pressed = true;
}
