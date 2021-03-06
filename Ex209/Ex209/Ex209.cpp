// Ex209.cpp : Defines the entry point for the console application.
//safe and non type safe enumerators

#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

enum Suit : long {Clubs,Diamonds,Hearts,Spades};

int main()
{
	Suit suit{ Clubs };
	Suit another{ Suit::Diamonds };
	//automatic conversion
	cout << "suit value: " << suit << endl;
	cout << "Add 10 to another: " << another + 10 << endl;
	//type safe enumerations
	enum class Color : char { Red, Orange, Yellow, Green, Blue, Indigo };
	Color skyColor{ Color::Blue };

	cout << endl
		<< "Sky color value:"
		<< static_cast<long>(skyColor) << endl;

	cout << "Increment sky color:"
		<< static_cast<long>(skyColor) + 10L
		<< endl;

    return 0;
}

