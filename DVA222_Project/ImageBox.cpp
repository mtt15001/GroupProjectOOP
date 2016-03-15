#include "stdafx.h"
#include "ImageBox.h"

ImageBox::ImageBox()
{
}
ImageBox::ImageBox(int x, int y,int width,int height,int z) : ZControlBase(x,y,width,height,z)
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
