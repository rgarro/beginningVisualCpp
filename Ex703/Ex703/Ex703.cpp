// Ex703.cpp : Defines the entry point for the console application.
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

		double volume() {
			return this->Length*this->Width*this->Height;
		}

};

int main()
{
	Box box1;
	Box box2;
	Box box3;


	double boxVolume{ box1.volume() };

	cout << "Default Box1 Value: " << boxVolume << endl;

	box1.Height = 18.0;
	box1.Length = 78.0;
	box1.Width = 24;

	boxVolume = box1.volume();
	cout << "Volume of Box1 is now " << boxVolume << endl;

	box2.Height = box1.Height - 10;
	box2.Length = box1.Length / 2.0;
	box2.Width = 0.25 * box1.Length;
	cout << "Volume of Box2 is now " << box2.volume() << endl;

	box3 = box2;
	cout << "Volume of Box3 is now " << box3.volume() << endl;

	cout << "A Box object occupies " << sizeof box1 << " bytes" << endl;

    return 0;
}

