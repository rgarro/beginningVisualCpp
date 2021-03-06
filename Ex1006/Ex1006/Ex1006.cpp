// Ex1006.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <list>
#include <string>
#include <functional>

using std::string;

void listAll(const std::list<string>& strings) {
	for (auto& s : strings) {
		std::cout << s << std::endl;
	}
}

int main()
{
	std::list<string> text;

	std::cout << "Type few lines, ENTER to exit: " << std::endl;
	string sentence;
	while (getline(std::cin, sentence, '\n')) {
		text.push_front(sentence);
	}
	std::cout << "in reverse order:" << std::endl;
	listAll(text);

	text.sort();
	std::cout << "in ascending sequence:" << std::endl;
	listAll(text);

	text.sort(std::greater<>());
	std::cout << "in descending sequence:" << std::endl;
	listAll(text);

    return 0;
}

