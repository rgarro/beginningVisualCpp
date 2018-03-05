// Ex407.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	const char* pstr1{"nelson hoffman"};
	const char* pstr2{ "chiricuto" };
	const char* pstr3{ "malacrianza" };
	const char* pstr4{ "mongomongo" };
	const char* pstr5{ "glenda peraza" };
	const char* pstr6{ "medford" };
	const char* pstr{ "linda diaz" };

	int dice{};

	cout << endl
		<< "Pick a lucky a star: "
		<< "Enter a number between 1 and 6:";
	cin >> dice;

	cout << endl;

	switch (dice) {
		case 1: cout << pstr << pstr1;
			break;
		case 2: cout << pstr << pstr2;
			break;
		case 3: cout << pstr << pstr3;
			break;
		case 4: cout << pstr << pstr4;
			break;
		case 5: cout << pstr << pstr5;
			break;
		case 6: cout << pstr << pstr6;
			break;
		default: cout << "No sea bruto vote por chiricuto ...";
		}
	cout << endl;

    return 0;
}

