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
	Label(int x, int y, int width, int height, int z, Color color);
	Label(int x, int y, int width, int height, int z, Color color, string text);
	~Label();
	void setText(string n);
	string &getText() {return text; }
	void setLocation(int x, int y);
	void OnPaint(void);

};

