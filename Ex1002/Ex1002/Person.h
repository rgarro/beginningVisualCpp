#pragma once
#include <cstring>
#include <iostream>

class Person
{
public:
	Person(const char* first,const char* second) {
		initName(first, second);
	}

	//copy
	Person(const Person& p) {
		initName(p.firstname,p.secondname);
	}

	//move
	Person(Person&& p) {
		firstname = p.firstname;
		secondname = p.secondname;
		//reset pointers to prevent deletion
		p.firstname = nullptr;
		p.secondname = nullptr;
	}

	virtual ~Person() {
		delete[] firstname;
		delete[] secondname;
	}

	//copy assigment operator
	Person& operator=(const Person& p) {
		if (&p != this) {
			delete[] firstname;
			delete[] secondname;
			initName(p.firstname, p.secondname);
		}
		return *this;
	}

	//Move assigment operator
	Person& operator=(Person&& p) {
		if (&p != this) {
			delete[] firstname;
			delete[] secondname;
			firstname = p.firstname;
			secondname = p.secondname;
			p.firstname = nullptr;
			p.secondname = nullptr;
		}
		return *this;
	}

	//less than operator
	bool operator<(const Person& p) const 
	{
		int result{strcmp(secondname,p.secondname)};
		return (result < 0 || result == 0 && strcmp(firstname,p.firstname) < 0);
	}

	//output a person
	void showPerson() const
	{
		std::cout << firstname << " " << secondname << std::endl;
	}

private:
	char* firstname{};
	char* secondname{};
	
	//helper to avoid code duplication
	void initName(const char* first, const char* second) {
		size_t length{ strlen(first) + 1 };
		firstname = new char[length];
		strcpy_s(firstname, length, first);
		length = strlen(second) + 1;
		secondname = new char[length];
		strcpy_s(secondname,length,second);
	}
};

