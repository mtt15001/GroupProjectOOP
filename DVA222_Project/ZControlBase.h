#pragma once
#include "ControlBase.h"
#include "Structs.h"
#include "resource1.h"
#include "Graphix.h"
//#learntoprogram
class ZControlBase : public ControlBase
{
protected:
	int z;
	Color color;

	Point relativePos;
public:
	ZControlBase();
	ZControlBase(int x, int y, int width, int height, int z, Color color);
	~ZControlBase();

	Point getRelativePos();
	void setRelativePos(Point p);
	int getZ() { return z; }
	void setZ(int z) { this->z = z; }
	void SetColor(Color c);
	Color getColor() { return color; }
	static bool CompareZ(ZControlBase* first, ZControlBase* second);
};

