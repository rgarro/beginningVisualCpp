// Ex901.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "CCandyBox.h"


int main()
{
	CBox myBox{ 4.0,3.0,2.0 };
	CCandyBox myCandyBox;
	CCandyBox myMintBox{"confites gallito"};
	std::cout << "my box occupies " << sizeof myBox << " bytes" << std::endl
		<< "my candyBox ocupies " << sizeof myMintBox << " bytes" << std::endl;
	myBox.m_Length = 10.0;

    return 0;
}

