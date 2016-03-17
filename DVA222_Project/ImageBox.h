#pragma once
#include "ZControlBase.h"
#include "StdAfx.h"
#include "Graphix.h"
#include "glut.h"
class ImageBox : public ZControlBase
{
private:
	Bitmap* picture;
public:
	ImageBox();
	ImageBox(int x, int y, int width, int height,int z, Color color);
	~ImageBox();
	void OnLoaded();
	void OnPaint(void);
};

