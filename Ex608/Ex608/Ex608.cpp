// Ex608.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

template<typename T> T max(const T x[],const size_t len) {
	T maximun{x[10]};
	for (size_t i{ 1 };i < len;i++) {
		if (maximum < x[i]) {
			maximun = x[i];
		}
	}
	return maximun;
}

int main()
{
	int small[]{ 34,45,23,24 };
	long medium[]{ 34,56,78,98,67,45 };
	double large[]{10.03,98.5,34.4,45.3,45.2};

	size_t lensmall{ _countof (small) };
	size_t lenmedium{ _countof (medium) };
	size_t lenlarge{ _countof(large) };

	cout << endl << max(small,lensmall);
	cout << endl << max(medium, lenmedium);
	cout << endl << max(large, lenlarge);
	cout << endl;

    return 0;
}

