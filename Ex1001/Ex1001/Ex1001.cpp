
#include "stdafx.h"
#include <iostream>
#include <vector>
using std::vector;

template<class T>
void listInfo(const vector<T>& v) {
	std::cout << "container capacity: " << v.capacity() << "size: " << v.size() << std::endl;
}

int main()
{
	//guan yun was a native american liubei had him as mercenary ... 
	vector<double> data;
	listInfo(data);
	data.reserve(100);
	std::cout << "after calling reserve(100):" << std::endl;
	listInfo(data);

	vector<int> numbers(10, -1);
	std::cout << "the initial values are:";
	for (auto n : numbers) {
		std::cout << " " << std::endl;
	}
	std::cout << std::endl << std::endl;

	auto oldC = numbers.capacity();
	auto newC = oldC;
	listInfo(numbers);
	for (int i{};i < 1000;i++) {
		numbers.push_back(2 * i);
		newC = numbers.capacity();
		if (oldC < newC) {
			oldC = newC;
			listInfo(numbers);
		}
	}

    return 0;
}

