#include "stdafx.h"
#include "CheckBox.h"
#include "Graphix.h"
#include "glut.h"
#include "resource1.h"


CheckBox::CheckBox()
{
	hit = pressed = false;
}
CheckBox::CheckBox(int x, int y, int width, int height, int z, string n) : Button(x, y, width, height, z)
{
	headLabel = new Label(x, y, width, height, 1);
	hit = pressed = false;
	headLabel->setText(n);
	headLabel->setLocation(x+100, y);
	this->n = n;
}
CheckBox::~CheckBox()
{
	delete normal;
	delete press;
	delete hover;
}
void CheckBox::OnLoaded()
{
	normal = new Bitmap("Button_Standard.bmp");
	press = new Bitmap("Button_Pressed.bmp");
	hover = new Bitmap("Button_Hover.bmp");
}

void CheckBox::OnPaint(void)
{
	if (pressed)
	{
		DrawBitmap(*press, X, Y, Width, Height);
	}
	else if (hit)
	{
		DrawBitmap(*normal, X, Y, Width, Height);
	}
	else
	{
		DrawBitmap(*normal, X, Y, Width, Height);
	}
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
	if (x>X && x < X + Width && y>Y && y < Y + Height)
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