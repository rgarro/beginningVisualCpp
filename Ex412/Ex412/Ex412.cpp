// Ex412.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

int main()
{
	char str[]{"Smith Jones had had had had the examiners approval"};
	const char* word{ "had" };
	cout << "the string to be searched is: " << endl << str << endl;
	
	int count{};
	char* pstr{ str };
	char* found{};
	const size_t wordLength{ std::strlen(word) };
	while (true) {
		found = std::strstr(pstr,word);
		if (!found) {
			break;
		}
		++count;
		pstr = found + wordLength;
	}
	cout << "\"" << word << "\" was found " << count << " times in the string. " << endl;
		
	return 0;
}

