// Ex404.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	const int MAX{ 80 };
	char buffer[MAX];
	int count{};

	cout << "Enter a string of less than: "
		<< MAX << " characters: \n";
	cin.getline(buffer,MAX,'\n');

	while (buffer[count] != '\0') {
		count++;
	}

	cout << endl
		<< "The string \"" << buffer
		<< "\" has" << count << " characters.";
	cout << endl;

    return 0;
}

