#pragma once
#include "ControlBase.h"
//#learntoprogram
class ZControlBase : public ControlBase
{
protected:
	int z;
public:
	ZControlBase();
	ZControlBase(int x, int y, int width, int height, int z);
	~ZControlBase();
	virtual void OnLoaded();
	virtual void OnPaint(void);
	virtual void OnKeyboard(unsigned char key, int x, int y);
	virtual void OnMouseDown(int button, int x, int y);
	virtual void OnMouseUp(int button, int x, int y);
	virtual void OnMouseMove(int button, int x, int y);
	virtual void OnResize(int width, int height);
};

