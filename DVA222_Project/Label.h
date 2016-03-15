#pragma once
#include "ZControlBase.h"
class Label : public ZControlBase
{
private:
	string *text;
public:
	Label();
	Label(int x, int y, int width, int height, int z);
	Label(int x, int y, int width, int height, int z, string text);
	~Label();
	void setText(string n);
	string getText() {return *text; }

};

