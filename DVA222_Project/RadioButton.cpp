#include "stdafx.h"
#include "RadioButton.h"


RadioButton::RadioButton()
{
	hit = pressed = false;
}
RadioButton::RadioButton(int x, int y, int width, int height, int z, Color color, string n) : Button(x,y,width,height,z, color)
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
	normal = new Bitmap("Button_Norm.bmp");
	hover = new Bitmap("Button_Hover.bmp");
	press = new Bitmap("Button_Pressed.bmp");
}
void RadioButton::OnMouseDown(int button, int x, int y)
{
	if (hit && button == MOUSE_LEFT)
		pressed = true;
}
