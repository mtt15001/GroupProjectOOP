#include "stdafx.h"
#include "Window.h"


Window::Window(int x, int y, int width, int height, Color background, Color border, string Title) : Container(x, y, width, height, z, background)
{
	this->z = 0;
	this->title.setText(Title);
	borderPressed = false;
	this->borderColor = border;
}
Window::~Window()
{
	for (int i = 0; i < Objects.size(); i++)
	{
		delete Objects.at(i);
	}
}

void Window::Add(ZControlBase *Object)
{
	Objects.push_back(Object);
}

void Window::OnMouseMove(int button, int x, int y)
{
	if (borderPressed)
	{
		int deltaX = prevX - x;
		int deltaY = prevY - y;


		X -= deltaX;
		Y -= deltaY;
	}


	for (int i = 0; i < Objects.size(); i++)		//Call OnMouseMove() for each control in the container  
	{
		//controls.at(i)->SetRelativePos(Point(this->X, this->Y));  
		Objects.at(i)->OnMouseMove(button, x, y);
}
	prevX = x;
	prevY = y;
}

void Window::OnMouseUp(int button, int x, int y)
{

	borderPressed = false;

	for (int i = 0; i < Objects.size(); i++)		//Call OnMouseUp() for each control in the container  
	{
		Objects.at(i)->OnMouseUp(button, x, y);
	}
	prevX = 0;
	prevY = 0;

}

void Window::OnMouseDown(int button, int x, int y)
{
	if (x > X + relativePos.X && x < X + relativePos.X + Width  && y>Y + relativePos.Y && y < Y + relativePos.Y + 20 && button == MOUSE_LEFT) // To avoid unecessary OnMouseDown calls outside container 
	{
		if (!borderPressed)
		{
			prevX = x;
			prevY = y;
		}

		borderPressed = true;
	}

	for (int i = 0; i < Objects.size(); i++)		//Call OnMouseDown() for each control in the container  
	{
		Objects.at(i)->OnMouseDown(button, x, y);
	}
}


void Window::OnPaint(void)
{
	glColor3f(0 / 255.0, 0 / 255.0, 0 / 255.0);
	FillRectangle(X + relativePos.X, Y + relativePos.Y, Width, Height);
	glColor3f(color.r / 255.0, color.g / 255.0, color.b / 255.0);
	FillRectangle(X + relativePos.X + 1, Y + relativePos.Y + 1, Width - 2, Height - 2);

	for (int i = 0; i < Objects.size(); i++)
	{
		Objects.at(i)->setRelativePos(Point(this->X + relativePos.X, this->Y + relativePos.Y + 20));
		Objects.at(i)->OnPaint();
	}

	glColor3f(0 / 255.0, 0 / 255.0, 0 / 255.0);
	FillRectangle(X + relativePos.X, Y + relativePos.Y, Width, 20);
	glColor3f(borderColor.r / 255.0, borderColor.g / 255.0, borderColor.b / 255.0);
	DrawRectangle(X + relativePos.X, Y + relativePos.Y, Width, 20);
	DrawString(title.getText(), X + relativePos.X + 5, Y + relativePos.Y + 14);

}