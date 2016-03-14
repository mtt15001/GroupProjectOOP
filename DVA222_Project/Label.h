#pragma once
#include "ZControlBase.h"
class Label : public ZControlBase
{
private:
	string *text;
public:
	Label();
	~Label();
	void setText(string n);
	string getText() {return text; }

};

