#pragma once
#include "ZControlBase.h"
#include <vector>
#include <algorithm>


class Container : public ZControlBase
{
public:
	Container();
	~Container();
	Container(int x, int y, int width, int height, int z,Color c);

	void AddObject(ZControlBase *obj);

	virtual void OnPaint(void);
	void OnLoaded();
	virtual void OnMouseDown(int button, int x, int y);
	void OnMouseUp(int button, int x, int y);
	virtual void OnMouseMove(int button, int x, int y);
protected:
	vector<ZControlBase*> Objects;
	int counter;
};

