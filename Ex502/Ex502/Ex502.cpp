// Ex502.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;

int incr10(int num);


int main()
{
	int num{ 3 };
	cout << endl << " incr10(num) = " << incr10(num) << endl << "num = " << num << endl;
    return 0;
}

int incr10(int num) {
	num += 10;
	return num;
}