
#include "stdafx.h"
#include <iostream>
#include <vector>
#include "Person.h";

using std::vector;

int Bmain()
{
	vector<Person> people;
	const size_t maxlength{ 50 };
	char firstname[maxlength];
	char secondname[maxlength];
	while (true) {
		std::cout << "enter a first name or press enter to end: ";
		std::cin.getline(firstname, maxlength, '\n');
		people.emplace_back(Person(firstname, secondname));

	}
	std::cout << std::endl;
	auto iter = cbegin(people);
	while (iter != cend(people)) {
		iter->showPerson();
		++iter;
	}

	return 0;
}

