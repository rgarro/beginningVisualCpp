// Ex210.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

namespace myStuff {
	int value{};
}

int main()
{
	std::cout << "enter an integer: ";
	std::cin >> myStuff::value;
	std::cout << "You entered " << myStuff::value
		<< std::endl;

    return 0;
}

