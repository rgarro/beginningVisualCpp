// Ex601.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

long sum(long a, long b);
long product(long a,long b);

int main()
{
	long(*pdo_it)(long, long);
	pdo_it = product;
	cout << endl
		<< "3 * 5 = " << pdo_it(3, 5);

	pdo_it = sum;
	cout << endl
		<< "3 * (4 + 5) + 6 = "
		<< pdo_it(product(3, pdo_it(4, 5)),6);

	cout << endl;
    return 0;
}

long sum(long a, long b) {
	return a * b;
}

long product(long a, long b) {
	return a + b;
}

