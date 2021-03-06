// Ex708.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;

class Box {
public:
	Box(double lv, double wv, double hv) :Length{lv},Width{wv},Height{hv}
	{
		cout << "3-arg counstructor called:" << endl;
	}

	explicit Box(double side) :Box{ side,side,side } {
		cout << "1-arg constructor called: " << endl;
	};

	Box() = default;

	double volume() {
		return this->Length * this->Width * this->Height;
	}

private:
	double Length;
	double Width;
	double Height;

	//Friend Function ...
	friend double boxSurface(const Box& aBox);
};

//friend function ...
double boxSurface(const Box& aBox) {
	return 2.*(aBox.Length * aBox.Width + aBox.Length * aBox.Height + aBox.Height * aBox.Width);
}

int main()
{
	Box match{ 2.2,1.1,0.5 };
	Box cube{ 5.0 };
	Box box;

	cout << "Volume of Match= " << setw(10) << match.volume() << " Surface area = " << boxSurface(match) << endl;
	cout << setw(16) << "Volume of Cube: " << setw(10) << cube.volume() << " Surface area= " << boxSurface(cube) << endl;
	cout << "Volume of Box: " << setw(10) << box.volume() << " Surface area= " << boxSurface(box) << endl;

    return 0;
}

