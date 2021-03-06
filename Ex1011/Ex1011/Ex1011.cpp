// Ex1011.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <array>
#include <string>
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <tuple>

const size_t maxRecords{ 100 };
using Record = std::tuple<int,std::string,std::string,int>;
using Records = std::array<Records,maxRecords>;

void listRecords(const Records& people) {
	const size_t ID{}, firstname{ 1 }, secondname{ 2 }, age{ 3 };
	std::cout << std::setiosflags(std::ios::left);
	Record empty;
	for (const auto& record:people) {
		if (record == empty) {
			break;
		}
		
		std::cout << "ID: " << std::setw(6) << std::get<ID>(record)
			<< "Name " << std::setw(25)
			<< (std::get<firstname>(record) + " " + std::get<secondname>(record))
			<< "Age: " << std::setw(5) << std::get<age>(record) << std::endl;
	}
}

int main()
{
	Records personnel{
		Record{1001,"Arthur","Dent",35},
		Record{ 1002,"brthur","Eent",31 },
		Record{ 1003,"crthur","Fent",41 }};
	
	personnel[4] = std::make_tuple(1004, "Harry", "Potter", 15);
	personnel.at(5) = Record{ 1006,"Bertie","Wooster",28};
	listRecords(personnel);

    return 0;
}

