// Ex906.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "CGlassBox.h"


int main()
{
	CBox myBox{ 2.0,3.0,4.0 };
	CGlassBox myGlassBox{ 2.0,3.0,4.0 };
	myBox.showVolume();
	myGlassBox.showVolume();

    return 0;
}

