// Ex602.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

double squared(double);
double cubed(double);
double sumarray(const double data[], size_t len, double(*pfun)(double));

int main()
{
	double data[]{ 1.5,2.3,5.6,2.4,5.8,2.1,4.8 };
	size_t len{ _countof(data) };
	cout << endl << "Sum of squares: " << sumarray(data, len, squared);
	cout << endl << "Sum of cubes: " << sumarray(data, len, cubed);
	cout << endl;

    return 0;
}

double squared(double x) {
	return x * x ;
}

double cubed(double x) {
	return x * x*x;
}

double sumarray(const double data[],size_t len,double(*pfun)(double)) {
	double total{};
	for (size_t i{};i < len; i++) {
		total += pfun(data[i]);
	}
	return total;
}
