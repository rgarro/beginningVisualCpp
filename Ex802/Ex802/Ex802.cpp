// Ex802.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <cstring>


using std::cout;
using std::endl;

class CMessage {
private:
	char* m_pMessage;

public:
	void showIt() const
	{
		std::cout << m_pMessage << endl;
	}

	CMessage(const char* text = "Default message")
	{
		size_t length{ strlen(text) + 1 };
		m_pMessage = new char[length + 1];
		strcpy_s(m_pMessage, length + 1, text);
	}
	 
	~CMessage();
};

CMessage::~CMessage() {
	cout << "Destructor called" << endl;
	delete[] m_pMessage;
}

int main()
{
	CMessage motto{ "A miss is a good mile" };
	//php is a php dynamic variable ...
	CMessage* pM{new CMessage("a cat can look at the queen")};

	pM->showIt();
	delete pM;

    return 0;
}

