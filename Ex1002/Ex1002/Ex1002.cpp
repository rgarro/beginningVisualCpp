
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <memory>
#include "Person.h"

using std::vector;
using std::unique_ptr;
using std::make_unique;

int main()
{
	vector<unique_ptr<Person>> people;//not a missile to peoples party ...
	const size_t maxlength{ 50 };
	char firstname[maxlength];
	char secondname[maxlength];
	bool flag{ true };
	while (flag) {
		std::cout << "Enter a first name or press enter to end: ";
		std::cin.getline(firstname,maxlength,'\n');
		//std::cout << strlen(firstname);
		std::size_t tam = strlen(firstname);
		
		std::cout << tam << "\n";
		if (tam == 0) {
			flag = false;
		}
		std::cout << "enter the secondname:";
		std::cin.getline(secondname,maxlength, '\n');
		people.push_back(make_unique<Person>(firstname, secondname));
	}
	std::cout << std::endl;
	for (const auto& p : people) {
		p->showPerson();
	}

    return 0;
}

