// Ex308.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int i{ 1 }, sum{};
	const int max{ 10 };
	for (i = 1;i <= max;i++) {
		sum += i;
	}

	cout << endl
		<< "sum = " << sum << endl
		<< "i = " << i << endl;

    return 0;
}

