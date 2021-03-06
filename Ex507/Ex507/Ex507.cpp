// Ex507.cpp : Defines the entry point for the console application.
//lvalue reference to modify caller arguments

#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;

int incr10(int& num);

int main()
{
	int num{ 3 };
	int value{ 6 };
	int result{ incr10(num) };
	
	cout << endl << "incr10(num) = " << result
		<< endl << "num = " << num;

	result = incr10(value);
	cout << endl << "incr10(value) = " << result
		<< endl << "value = " << value << endl;

    return 0;
}

int incr10(int& num) {
	cout << endl << " Value received = " << num;
	num += 10;
	return num;
}

