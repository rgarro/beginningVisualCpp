// Ex202B.cpp : Defines the entry point for the console application.
//

//wa wa wa ..

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;


int main() {
	int num1{ 1234 }, num2{ 5678 };
	cout << std::setiosflags(std::ios::left);
	cout << endl;
	cout << num1 << setw(6) << num2 << "\a";
	cout << endl;
	return 0;
}

