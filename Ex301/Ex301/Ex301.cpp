// Ex301.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


using std::cin;
using std::cout;
using std::endl;


int main()
{
	char letter{};

	cout << endl
	<< "Enter a letter: ";
	cin >> letter;

	if (letter >= 'A') {
		if (letter <= 'Z') {
			cout << endl
				<< "You entered a capital letter."
				<< endl;
		}
	}

	if (letter >= 'a') {
		if (letter <= 'z') {
			cout << endl
				<< "You entered a lowercase letter."
				<< endl;
		}
	}
	cout << endl << "You did not enter a letter." << endl;

    return 0;
}

