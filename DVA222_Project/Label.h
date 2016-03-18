#pragma once
#include "ZControlBase.h"
#include "Graphix.h"
#include "glut.h"
class Label : public ZControlBase
{
private:
	string text;
public:
	Label();
	Label(int x, int y, string n);
	Label(int x, int y,Color color, string text);
	~Label();
	void DrawLabel();
	void OnPaint();
	void setText(string n);
	void setPosition(int x, int y);
	string getText() { return text; }
};

