// Ex312.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	double value{};
	double sum{};
	int i{};
	char indicator{ 'y' };
	
	while ('y' == indicator) {
		cout << endl
			<< "Enter a value: ";
		cin >> value;
		++i;
		sum += value;
		cout << endl
			<< "Do you want to enter another value (y/n): ";
		cin >> indicator;
	}

	cout << endl
		<< " values you entered is " << sum / i << "."
		<< endl;

    return 0;
}

