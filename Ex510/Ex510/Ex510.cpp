// Ex510.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

int main(int argc,char* argv[])
{
	cout << endl << " argc = " << argc << endl;
	cout << " Command line arguments received  are: " << endl;
	for (int i{};i < argc; i++) {
		cout << "argument " << (i + 1) << " : " << argv[i] << endl;
	}

    return 0;
}

