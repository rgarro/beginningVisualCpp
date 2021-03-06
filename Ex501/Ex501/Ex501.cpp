// Ex501.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

double power(double X, int n);//prototype

int main()
{
	int index{ 3 };
	double x{ 1 };
	double y{};

	y = power(5.0, 3);
	cout << endl << "5.0 cubed = " << y;

	cout << endl << "3.0 cubed = " << power(3.0, index);
	x = power(x, power(2.0, 2.0));
	cout << endl << "x= " << x;

	cout << endl;
    return 0;
}

double power(double x, int n) {
	double result{ 1.0 };
	for (int i{ 1 };i <= n;i++) {
		result *= x;
		return result;
	}
}