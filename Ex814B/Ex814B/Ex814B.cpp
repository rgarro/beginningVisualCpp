
#include "stdafx.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

void listnames(string names[],string ages[], size_t count) {
	cout << "the names you typed: " << endl;
	for (size_t i{};i < count && !names[i].empty();++i) {
		cout << names[i] + " aged:" + ages[i] + '.' << endl;
	}
}

int main()
{
	const size_t count{ 100 };
	string names[count];
	string ages[count];
	string firstname;
	string secondname;

	for (size_t i{};i < count; ++i) {
		cout << "Enter a first name or press enter to end: ";
		std::getline(std::cin, firstname, '\n');
		if (firstname.empty()) {
			listnames(names, ages, i);
			cout << "Done!!" << endl;
			return 0;
		}

		cout << "enter a second name..";
		std::getline(std::cin, secondname, '\n');
		names[i] = firstname + ' ' + secondname;
		cout << "enter " + firstname + " age: ";
		std::getline(std::cin, ages[i], '\n');
	
	}
	cout << "no space for more names " << endl;
	listnames(names, ages, count);
    return 0;
}

