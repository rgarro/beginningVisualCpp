// Ex610.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cctype>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

void eatspaces(char* str);
double expr(char* str);
double term(const char* str, size_t& index);

const size_t MAX{ 80 };

int main()
{
	char buffer[MAX]{};
	for (;;) {
		cin.getline(buffer, sizeof buffer);
		eatspaces(buffer);
		if (!buffer[0]) {
			return 0;
		}
		try {
			cout << " t= " << expr(buffer) << endl << endl;

		}
		catch (const char* pEx) {
			cerr << pEx << endl;
			cerr << "Ending Program." << endl;
			return 1;
		}
	}
	
    return 0;
}

