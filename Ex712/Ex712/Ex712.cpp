
#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

class Box {
public:

	static int objectCount;

	explicit Box(double lv, double wv, double hv) :Length{ lv }, Width{ wv }, Height{ hv } {
		cout << "Constructor called. " << endl;
		objectCount++;
	}

	Box() {
		cout << "Default consructor called: " << endl;
		Length = Width = Height = 1.0;
		objectCount++;
	}

	double volume() const {
		return this->Length * this->Width * this->Height;
	}

private:
	double Length;
	double Width;
	double Height;
};

int Box::objectCount{};

int main()
{
	Box boxes[5];
	Box cigar(8.0, 5.0, 1.0);
	cout << "Number of Objects through class= " << Box::objectCount << endl
		<< "Number of Objects trough object= " << boxes[2].objectCount << endl;

	return 0;
}

