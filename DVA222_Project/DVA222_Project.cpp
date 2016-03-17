// DVA222_Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Graphix.h"
#include "glut.h"
#include "MyButton.h"
#include "Button.h"
#include "ImageBox.h"
#include "RadioButton.h"
#include "CheckBox.h"
#include "resource1.h"
#include "RadioButtonGroup.h"
#include "CheckBoxGroup.h"
#include "Panel.h"
#include "Container.h"
#include "Button.h"
#include "CheckBox.h"
#include "CheckBoxGroup.h"
#include "Window.h"

using namespace std;


int _tmain(int argc, char** argv)
{
	//A new object of Button type is create and passed to the InitOGL function. 
	//From that point the control is handed over to the OpenGL window and stays there until the user closes the Window.
	//This means after calling the InitOGL function no further lines of code in the main function are executed until we close the Window.
	//------------------------------------------------------------------------------------------------------------------------------------



	/*EXEMPEL PÅ INITIERING OCH TILLÄG AV SAKER --->>
	RadioButtonGroup * radioGroup = new RadioButtonGroup("titel",storlek)
	radiogroup->add(new Radiobutton);
	window->add(radioGroup);*/
	Color MyColo;
	MyColo.b = 255;
	MyColo.g = 255;
	MyColo.r = 255;

	RadioButtonGroup *RBGroup = new RadioButtonGroup(320, 40, 300, 150, Color(100, 255, 255), "CheckBoxGroup1");
	RBGroup->AddObject(new RadioButton(10, 10, 20, 20, Color(0,0,0), "RadioButtonTest1"));
	RadioButton *button = new RadioButton(20, 10, 400, 100,MyColo,"hej");
	MyButton *mmh = new MyButton(40, 40, 200, 100);
	InitOGL(argc, argv, RBGroup);



	return 0;
}

