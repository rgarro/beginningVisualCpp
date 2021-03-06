// Ex913.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "CBox.h"
#include "CGlassBox.h"
#include "CStack.h"

int main()
{
	CBox* pBoxes[]{ new CBox(2.0,3.0,4.0),
					new CGlassBox(2.0,3.0,4.0),
					new CBox(4.0,5.0,6.0),
					new CGlassBox(4.0,5.0,6.0)};

	std::cout << "the boxes have the following volumes:\n ";
	for (const CBox* pBox : pBoxes) {
		pBox->showVolume();
	}

	std::cout << "\n Now pushing the boxes on the stack ... \n";
	CStack stk;
	for (CBox* pBox : pBoxes) {
		stk.push(pBox);
	}

	std::cout << "\n Now popping the boxes in reverse ... \n";
	CBox* pTemp;
	while (pTemp = stk.pop()) {
		pTemp->showVolume();
	}


	for (CBox* pBox : pBoxes) {
		delete pBox;
	}

    return 0;
}

