// Ex707.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

class Box {
public:
	
	explicit Box(double lv = 1.0, double wv = 1.0, double hv = 1.0) {
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
    return 0;
}

