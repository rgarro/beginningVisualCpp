// Ex704.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

class Box {
public:
	double Length{ 1.0 };
	double Width{ 1.0 };
	double Height{ 1.0 };

	Box(double lv = 1.0,double wv = 1.0,double hv = 1.0) {
		cout << "El pueblo unido jamas sera vencido. " << endl;
		this->Length = lv;
		this->Width = wv;
		this->Height = hv;
	}

	double volume() {
		return this->Length*this->Width*this->Height;
	}

};

int main()
{
	Box box1{ 78.0,24.0,18.0 };
	Box cigarBox{8.0,5.0,1.0};

	cout << "Volume of Box1 is now " << box1.volume() << endl;
	cout << "Volume of cigarBox1 is now " << cigarBox.volume() << endl;

    return 0;
}

