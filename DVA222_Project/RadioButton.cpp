#include "stdafx.h"
#include "RadioButton.h"


RadioButton::RadioButton()
{
	hit = pressed = false;
}
RadioButton::RadioButton(int x, int y, int width, int height, Color color, string n) : Button(x,y,width,height, color)
{
	headLabel = new Label(x, y, width, height, color);
	hit = pressed = false;
	headLabel->setText(n);
	headLabel->setLocation(x + 100, y);
	relativePos = Point(0, 0);
}
RadioButton::~RadioButton()
{
	delete normal;
	delete press;
	delete hover;
}
void RadioButton::OnMouseMove(int button, int x, int y)
{
	if (x>X + relativePos.X && x < X + relativePos.X + Width && y>Y + relativePos.Y && y < Y + relativePos.Y + Height)
		hit = true;
	else
	{
		hit = false;
	}
}
void RadioButton::OnPaint()
{
	if (pressed)
		DrawBitmap(*press, X + relativePos.X, Y + relativePos.Y, Width, Height);
	else if (hit)
		DrawBitmap(*normal, X + relativePos.X, Y + relativePos.Y, Width, Height);
	else
		DrawBitmap(*normal, X + relativePos.X, Y + relativePos.Y, Width, Height);

	headLabel->OnPaint();
	
}
void RadioButton::OnLoaded()
{
	normal = new Bitmap("Button_Standard.bmp");
	hover = new Bitmap("Button_Hover.bmp");
	press = new Bitmap("Picture.bmp");
}
void RadioButton::OnMouseDown(int button, int x, int y)
{
	if (hit && pressed)
		pressed = false;
	else if (hit && !pressed && button == MOUSE_LEFT)
		pressed = true;
}
void RadioButton::OnMouseUp(int button, int x, int y)
{
	//pressed = true;
}