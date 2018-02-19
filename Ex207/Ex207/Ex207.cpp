// Ex207.cpp : Defines the entry point for the console application.
//variables scope

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int count1{ 10 };
	int count3{ 50 };

	cout << endl
		<< "Value of outer count1 = " << count1
		<< endl;
	//just a funky block
	{
		int count1 {20};
		int count2{ 30 };
		cout << "Value of other count1 " << count1
			<< endl;
		count1 += 3;
		count3 += count2;
	}
	cout << "Value of outer count1 = " << count1
		<< endl
		<< "Value of outer count3 = " << count3
		<< endl;

    return 0;
}

