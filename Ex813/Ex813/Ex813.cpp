// Ex813.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "CBox.h"
#include "BoxOperators.h"

using std::cout;
using std::endl;

int main()
{
	CBox candy{ 1.5,1.0,1.0 };
	CBox candyBox{ 4.9,3.4,1.7 };
	CBox carton{ 4.8,3.5,1.2 };
	int numCandies{ candyBox / candy };


    return 0;
}

