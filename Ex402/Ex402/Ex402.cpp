// Ex402.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iomanip>
#include <iostream>

using std::cout;
using std::endl;
using std::setw;


int main()
{
	int value[5]{ 1,2,3 };
	int junk[5];

	cout << endl;
	for (int i{};i < 5;i++) {
		cout << setw(12) << junk[i];
	}
	cout << endl;

	return 0;
}

