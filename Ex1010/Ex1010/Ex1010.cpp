// Ex1010.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stack>
#include <list>
#include <string>
#include "Person.h"


int main()
{
	std::stack<Person, std::list<Person>> people;
	std::string first, second;
	while (true) {
		std::cout << "Enter a first name or press enter to end: ";
		std::getline(std::cin,first);
		if (first.empty()) {
			break;
		}
		std::cout << "Enter a second name: ";
		std::getline(std::cin,second);
		people.push(Person{ first,second });
	}
	std::cout << "there are " << people.size() << " people in the stack." << std::endl;
	std::cout << "the names you entered:" << std::endl;
	while (!people.empty()) {
		people.top().showPerson();
		people.pop();
	}

    return 0;
}

