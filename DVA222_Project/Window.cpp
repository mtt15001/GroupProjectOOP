#include "stdafx.h"
#include "Window.h"


Window::Window(int x, int y, int width, int height, int z,int size = 10) : Container(x, y, width, height, z)
{
	Objects.reserve(size);
}
Window::~Window()
{
}
void Window::AddObject(ZControlBase &obj)
{
	
}
