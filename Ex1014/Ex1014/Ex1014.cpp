// Ex1014.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <numeric>
#include <vector>
#include <iterator>

int main()
{
	std::vector<int> numbers;
	std::cout << "enter a series of int space separated ctrl-z letter" << std::endl;
	std::istream_iterator<int> input(std::cin), input_end;
	std::ostream_iterator<int> out{ std::cout,"" };

	std::copy(input, input_end, std::back_inserter<std::vector<int>> ({numbers}));
	std::cout << "you entered the following:" << std::endl;
	std::copy(std::cbegin(numbers),std::cend(numbers),out);
	std::cout << "the sum of these values is: " << std::accumulate(std::cbegin(numbers), std::cend(numbers), 0) << std::endl;

    return 0;
}

