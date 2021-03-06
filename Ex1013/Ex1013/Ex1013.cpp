// Ex1013.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <iterator>


int main()
{
	std::map<std::string, int> words;
	std::cout << "Enter some text, press enter with ctrl enter to end" << std::endl;
	std::istream_iterator<std::string> stream_begin{ std::cin };
	std::istream_iterator<std::string> stream_end;
	while (stream_begin != stream_end) {
		words[*stream_begin++]++;
	}
	std::cout << "here are the word count" << std::endl;
	const int wordsPerLine{ 4 };
	int wordCount{};
	std::cout << std::setiosflags(std::ios::left);
	for (const auto& word : words) {
		std::cout << std::setw(15) << word.first << " " << std::setw(5) << word.second;
		if(++wordCount % wordsPerLine == 0){
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}

    return 0;
}

