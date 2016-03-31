#include "stdafx.h"
#include "ImageBox.h"

ImageBox::ImageBox()
{
}
ImageBox::ImageBox(int x, int y,int width,int height, Color color) : ZControlBase(x,y,width,height,color)
{
	relativePos = Point(0, 0);
}
ImageBox::~ImageBox()
{
	delete picture;
}
void ImageBox::OnLoaded()
{
	picture = new Bitmap("picture.bmp");
}
void ImageBox::OnPaint()
{
	DrawBitmap(*picture, X + relativePos.X, Y + relativePos.Y, Width, Height);

}
