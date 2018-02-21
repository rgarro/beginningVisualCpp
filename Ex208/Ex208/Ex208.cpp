// Ex208.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

int count1{ 100 };

int main()
{
	int count1{ 10 };
	int count3{ 50 };

	cout << endl
		<< "value of other count = " << count1
		<< endl;
	cout << "value of global count = " << ::count1
		<< endl;
	{
		int count1{ 20 };
		int count2{ 30 };
		cout << "value of inner count " << count1
			<< endl;
		cout << "value of global count1 = " << ::count1
			<< endl;
		count1 += 3;
		count3 += count2;
	}

	cout << "value of outer count1 = " << count1
		<< endl
		<< "value of outer count3 = " << count3
		<< endl;

    return 0;
}

