// Ex403.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	const int plant_row_count{ 6 };
	double beans[][plant_row_count]{
		{12,15},
		{0,10,13,0,11,2},
		{8,7,10,10,13},
		{9,8,11,13,16}
	};
	double averages[_countof(beans)]{};

	for (int row{};row < plant_row_count;++row) {
		for (int plant{};plant < plant_row_count;++plant) {
			averages[row] += beans[row][plant];
		}
		averages[row] /= plant_row_count;
	}
	cout << "Average production per row is: "
		<< setiosflags(ios::fixed)
		<< setprecision(2)
		<< endl;
	int n{};
	for (double ave : averages) {
		cout << "Row" << ++n << setw(10) << ave << endl;
	}

    return 0;
}

