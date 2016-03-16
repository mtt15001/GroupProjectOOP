#include "stdafx.h"
#include "Container.h"


Container::Container()
{
}
Container::Container(int x, int y, int width, int height, int z) : ZControlBase(x,y,width,height,z)
{

}
Container::~Container()
{
}

/*void Container::ZSort(vector<ZControlBase> vect) {
	int size = vect.size;
	for (int i = 0; i < size; i++) {

	}
}*/
