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
	Color MyColor;
	MyColor.b = 255;
	MyColor.g = 255;
	MyColor.r = 255;

	Button* button = new Button(10,10,120,80,Color());

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

	Panel *panel = new Panel(400, 400, 200, 80, Color(100, 255, 200));
	Panel *panel2 = new Panel(450, 450, 200, 80, Color(50, 255, 50));
	panel2->Add(button);

	CheckBox *checkAlone = new CheckBox(60, 360, 20, 20, Color(), "StandAloneCheck");
	RadioButton * radioAlone = new RadioButton(60, 400, 20, 20, Color(), "RadioAloneButton");

	Window *myWindow = new Window(20, 20, 750, 550, Color(100, 200, 150), Color(100, 255, 255), "Window");
	myWindow->Add(RBGroup);
	myWindow->Add(CBGroup);
	myWindow->Add(panel);
	myWindow->Add(panel2);
	myWindow->Add(checkAlone);
	myWindow->Add(radioAlone);





	InitOGL(argc, argv, myWindow);



	return 0;
}

