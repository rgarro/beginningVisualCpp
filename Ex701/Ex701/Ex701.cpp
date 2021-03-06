// Ex701.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

struct Rectangle {
	int left;
	int top;
	int right;
	int bottom;
};

long area(const Rectangle& aRect);
void moveRect(Rectangle& aRect, const int x, const int y);

int exmain()
{
	Rectangle yard{ 0,0,100,120 };
	Rectangle pool{30,40,70,80};
	Rectangle hut1, hut2;

	hut1.left = 70;
	hut1.top = 10;
	hut1.right = hut1.left + 25;
	hut1.bottom = 30;

	hut2 = hut1;

	moveRect(hut2,10,90);
	
	cout << "Coordinates of hut2 are " << area(yard) << endl;
	cout << "The area of the pool is " << area(pool) << endl;

    return 0;
}

long area(const Rectangle& aRect) {
	return (aRect.right - aRect.left) * (aRect.bottom - aRect.top );
}

void moveRect(Rectangle& aRect, const int x, const int y) {
	const int length{aRect.right - aRect.left};
	const int width{aRect.bottom - aRect.top};

	aRect.left = x;
	aRect.top = y;
	aRect.right = x + length;
	aRect.bottom = y + width;
	return;
}

