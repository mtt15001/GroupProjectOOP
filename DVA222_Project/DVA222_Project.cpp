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



	/*EXEMPEL PÅ INITIERING OCH TILLÄG AV SAKER --->>
	RadioButtonGroup * radioGroup = new RadioButtonGroup("titel",storlek)
	radiogroup->add(new Radiobutton);
	window->add(radioGroup);*/

	MyButton *button = new MyButton(20, 40, 150, 200);
	InitOGL(argc, argv, button);



	return 0;
}

