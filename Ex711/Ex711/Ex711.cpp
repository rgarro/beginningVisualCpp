// Ex711.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

class Box {
public:
	explicit Box(double lv, double wv, double hv) :Length{ lv }, Width{ wv }, Height{ hv } {
		cout << "Constructor called. " << endl;
	}

	Box() {
		cout << "Default consructor called: " << endl;
		Length = Width = Height = 1.0;
	}

	double volume() const {
		return this->Length * this->Width * this->Height;
	}

private:
	double Length;
	double Width;
	double Height;
};

int main()
{
	Box boxes[5];
	Box cigar(8.0, 5.0, 1.0);
	cout << "Voluma of boxes[3]= " << boxes[3].volume() << endl
		<< "Volume of Cigear= " << cigar.volume() << endl;

    return 0;
}

