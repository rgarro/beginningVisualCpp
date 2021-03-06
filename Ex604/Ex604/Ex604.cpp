// Ex604.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int counts[]{34,5,67,34,5,12,98,0};
	double time{ 60 };
	int hour{};
	for (auto count : counts) {
		try {
			cout << endl << "Hour " << ++hour;
			if (0 == count) {
				throw "Zero count - calculation not possible";
				cout << " minutes per item: " << time / count;
			}
		}
		catch (const char aMessage[]) {
			cout << endl << aMessage << endl;
		}
	}
    return 0;
}

