// Basic Aritmethic Exersice
//

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	double height{}, width{}, length{};//room dimetions
	double perimeter{};//room perimeter
	const double rollWidth{ 21.0 };
	const double rollLength{ 12.0*33.0 };
	int strips_per_roll{};
	int strips_reqd{};
	int nrolls{};

	cout << endl
		<< "Enter the Height of the room in inches:";
	cin >> height;

	cout << endl
		<< "Enter the Lenght and Width in inches:";
	cin >> length >> width;

	strips_per_roll = rollLength / height;
	perimeter = 2.0 * (length + width);
	strips_reqd = perimeter / rollWidth;
	nrolls = strips_reqd / strips_per_roll;

	cout << endl
		<< "For your room you need:" << nrolls << "rolls of paper."
		<< endl;

    return 0;
}

