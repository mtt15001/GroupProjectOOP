// DVA222_Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Graphix.h"
#include "glut.h"
#include "MyButton.h"
#include "Button.h"
#include "ImageBox.h"

using namespace std;


int _tmain(int argc, char** argv)
{
	//A new object of Button type is create and passed to the InitOGL function. 
	//From that point the control is handed over to the OpenGL window and stays there until the user closes the Window.
	//This means after calling the InitOGL function no further lines of code in the main function are executed until we close the Window.
	//------------------------------------------------------------------------------------------------------------------------------------
	ZControlBase** Controls = new ZControlBase*[2];
	Controls[0] = new Button(20, 20, 100, 50, 1);
	Controls[1] = new ImageBox(50,50, 150, 60, 2);
	InitOGL(argc, argv, *Controls);

	return 0;
}

