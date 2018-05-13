// Ex1008.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <queue>
#include <string>

int main()
{
	std::queue<std::string> sayings;
	std::string saying;
	std::cout << "Type the saying, ENTER to end" << std::endl;
	while (true) {
		std::getline(std::cin, saying);
		if (saying.empty()) {
			break;
		}
		sayings.push(saying);
	}
	std::cout << "are " << sayings.size() << "in the queue " << std::endl;
	std::cout << "sayings list" << std::endl;
	while (!sayings.empty()) {
		std::cout << sayings.front() << std::endl;
		sayings.pop();
	}
    return 0;
}

