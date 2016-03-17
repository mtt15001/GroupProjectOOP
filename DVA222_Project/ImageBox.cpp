#include "stdafx.h"
#include "ImageBox.h"

ImageBox::ImageBox()
{
}
ImageBox::ImageBox(int x, int y,int width,int height, Color color) : ZControlBase(x,y,width,height,color)
{
}
ImageBox::~ImageBox()
{
	delete picture;
}
void ImageBox::OnLoaded()
{
	picture = new Bitmap("ButtonPressed.bmp");
}
void ImageBox::OnPaint()
{
	DrawBitmap(*picture, X, Y,Width,Height);
}
