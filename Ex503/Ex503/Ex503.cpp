// Ex503.cpp : Defines the entry point for the console application.
//A successful attempt to modify caller arguments

#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;

int incr10(int* num);

int main()
{
	int num{ 3 };
	int* pnum{ &num };
	
	cout << endl << "Adress passed = " << pnum;
	
	int result{ incr10(pnum) };
	cout << endl << "incr10(npum) = " << num << endl;

	cout << endl << "num = " << num << endl;

    return 0;
}

int incr10(int* num) {
	cout << endl << "Address received = " << num;
	*num += 10;
	return *num;
}
