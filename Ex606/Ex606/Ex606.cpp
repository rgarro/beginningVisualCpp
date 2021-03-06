// Ex606.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <new>
#include <iostream>

using std::bad_alloc;
using std::cout;
using std::endl;

int main()
{
	char* pdata{};
	size_t count{static_cast<size_t>(0)/2};
	try {
		pdata = new char[count];
		cout << "Memory allocated." << endl;
	}
	catch (bad_alloc& ex) {
		cout << "Memory allocated Failed." << ex.what() << endl;
	}
	delete[] pdata;

    return 0;
}

