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



	/*EXEMPEL P� INITIERING OCH TILL�G AV SAKER --->>
	RadioButtonGroup * radioGroup = new RadioButtonGroup("titel",storlek)
	radiogroup->add(new Radiobutton);
	window->add(radioGroup);*/
	Color MyColor;
	MyColor.b = 255;
	MyColor.g = 255;
	MyColor.r = 255;

	Button* button = new Button(30,60,140,70,Color());
	ImageBox* picture = new ImageBox(30, 300, 350, 250, Color(0, 0, 0));
	Label* Mylabel = new Label(250, 240, Color(255, 0, 0), "I'm just a standalone label");

	RadioButtonGroup *RBGroup = new RadioButtonGroup(400, 60, 300, 150, Color(100, 255, 255), "RadioBoxGroup1");
	RBGroup->AddObject(new RadioButton(10, 10, 20, 20, Color(0, 0, 0), "RadioButton 1"));
	RBGroup->AddObject(new RadioButton(10, 35, 20, 20, Color(0, 0, 0), "RadioButton 2"));
	RBGroup->AddObject(new RadioButton(10, 60, 20, 20, Color(0, 0, 0), "RadioButton 3"));
	RBGroup->AddObject(new RadioButton(10, 85, 20, 20, Color(0, 0, 0), "RadioButton 4"));
	RBGroup->AddObject(new RadioButton(10, 110, 20, 20, Color(0, 0, 0), "RadioButton 5"));
	
	CheckBoxGroup * CBGroup = new CheckBoxGroup(20, 60, 300, 150, Color(100, 255, 255), "CheckBoxGroup1");
	CBGroup->AddObject(new CheckBox(10, 10, 20, 20, Color(0, 0, 0), "CheckBox 1"));
	CBGroup->AddObject(new CheckBox(10, 35, 20, 20, Color(0, 0, 0), "CheckBox 2"));
	CBGroup->AddObject(new CheckBox(10, 60, 20, 20, Color(0, 0, 0), "CheckBox 3"));
	CBGroup->AddObject(new CheckBox(10, 85, 20, 20, Color(0, 0, 0), "CheckBox 4"));
	CBGroup->AddObject(new CheckBox(10, 110, 20, 20, Color(0, 0, 0), "CheckBox 5"));

	Panel *panel = new Panel(400, 280, 200, 140, Color(100, 255, 200));
	Panel *panel2 = new Panel(550, 300, 200, 200, Color(0, 0, 0));
	panel2->Add(button);

	CheckBox *checkAlone = new CheckBox(20, 220, 20, 20, Color(), "StandAloneCheck");
	RadioButton * radioAlone = new RadioButton(20, 250, 20, 20, Color(), "RadioAloneButton");

	Window *myWindow = new Window(20, 20, 750, 550, Color(100, 255, 255), Color(100, 255, 255), "Ghetto Window with weird colors");
	myWindow->Add(RBGroup);
	myWindow->Add(CBGroup);
	myWindow->Add(panel);
	myWindow->Add(panel2);
	myWindow->Add(checkAlone);
	myWindow->Add(radioAlone);
	myWindow->Add(picture);
	myWindow->Add(Mylabel);

	//100, 200, 150



	InitOGL(argc, argv, myWindow);



	return 0;
}

