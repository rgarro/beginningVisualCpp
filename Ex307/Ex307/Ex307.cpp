// Ex307.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int i{ 1 }, sum{};
	const int max{ 10 };

loop:
	sum += i;
	if (++i <= max) {
		goto loop;
	}

	cout << endl
		<< "sum = " << sum << endl
		<< "i = " << i << endl;

    return 0;
}

