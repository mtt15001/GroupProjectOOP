#include "stdafx.h"
#include "CheckBox.h"
#include "Graphix.h"
#include "glut.h"



CheckBox::CheckBox()
{
	hit = pressed = false;
}
CheckBox::CheckBox(int x, int y, int width, int height, int z, string n) : Button(x, y, width, height, z)
{
	hit = pressed = false;
	headLabel.setText(n);
}
CheckBox::~CheckBox()
{
	delete normal;
	delete press;
	delete hover;
}
void CheckBox::OnLoaded()
{
	normal = new Bitmap("ButtonNorm.bmp");
	press = new Bitmap("ButtonPressed.bmp");
	hover = new Bitmap("ButtonHover.bmp");
}

void CheckBox::OnPaint(void)
{
	if (pressed)
		DrawBitmap(*press, X, Y, Width, Height);
	else if (hit)
		DrawBitmap(*hover, X, Y, Width, Height);
	else
		DrawBitmap(*normal, X, Y, Width, Height);


}
void CheckBox::OnMouseDown(int button, int x, int y)
{
	if (pressed)
		pressed = false;
	else if(hit && button==MOUSE_LEFT)
		pressed = true;
}
void CheckBox::OnMouseMove(int button, int x, int y)
{

}