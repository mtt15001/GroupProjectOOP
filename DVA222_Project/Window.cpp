#include "stdafx.h"
#include "Window.h"


Window::Window(int x, int y, int width, int height,Color background,Color border,string Title) : Container(x, y, width, height, background)
{
}
Window::~Window()
{
}
void Window::OnMouseMove(int button, int x, int y)
{
}
void Window::OnMouseUp(int button, int x, int y)
{

}