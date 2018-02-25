// Ex305.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int choice{};

	cout << endl
		<< "Your electronic recipe book is at your service." << endl
		<< "You can choose from the following delicious dishes: "
		<< endl
		<< endl << "1 Boiled eggs"
		<< endl << "2 Fried eggs"
		<< endl << "3 Scrambled eggs"
		<< endl << "4 Coddled eggs"
		<< endl << endl << "Enter your Selection number:";
	cin >> choice;

	switch (choice) {
		case 1: cout << endl << "Boil some eggs." << endl;
			break;
		case 2: cout << endl << "Fry some eggs." << endl;
			break;
		case 3: cout << endl << "Scramble some eggs." << endl;
			break;
		case 4: cout << endl << "Coddle some eggs." << endl;
			break;
		default: cout << endl << "Boil some eggs." << endl;
			break;
	}

    return 0;
}

