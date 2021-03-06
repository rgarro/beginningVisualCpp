//
#include "stdafx.h"
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;


class CText
{
private:
	char* pText;

public:
	void showIt() const {
		cout << pText << endl;
	}

	CText(const char* pStr = "la revolucion no se vera por televison") 
	{
		cout << "constructor ..." << endl;
		size_t len{ strlen(pStr) + 1 };
		this->pText = new char[len];
		strcpy_s(this->pText, len, pStr);
	}

	CText(const CText& txt) {
		cout << "constructor copy" << endl;
		size_t len{ strlen(txt.pText) + 1 };
		this->pText = new char[len];
		strcpy_s(this->pText, len, txt.pText);
	}

	CText(CText&& txt) {
		cout << "move constructor ... " << endl;
		this->pText = txt.pText;
		txt.pText = nullptr;
	}
	//fucking destruction ...
	~CText() {
		cout << "destructor ..." << endl;
		delete[] this->pText;
	}

	CText& operator=(const CText& txt) {
		cout << "assigment called ..." << endl;
		if (this != &txt) {
			delete[] this->pText;
			size_t length{strlen(txt.pText) + 1};
			this->pText = new char[length];
			strcpy_s(this->pText, length, txt.pText);
		}
		return *this;
	}

	CText& operator=(CText&& txt) {
		cout << "move assigment called ..." << endl;
		delete[] this->pText;
		this->pText = txt.pText;
		txt.pText = nullptr;
		return *this;
	}

	CText operator+ (const CText& txt) const {
		cout << "add operartor ... " << endl;
		size_t length{strlen(this->pText) + strlen(txt.pText) + 1};
		CText aText;
		aText.pText = new char[length];
		strcpy_s(aText.pText, length, this->pText);
		strcpy_s(aText.pText, length, txt.pText);
		return aText;
	}
};

class CMessage {
private:
	CText m_Text;

public:
	
	void showIt() const
	{
		m_Text.showIt();
	}

	CMessage operator+(const CMessage& aMess) const {
		cout << "cm add operator ..." << endl;
		CMessage message;
		message.m_Text = this->m_Text + aMess.m_Text;
		return message;
	}
	 
	CMessage& operator= (const CMessage& aMess) {
		cout << "copy assigment operator ..." << endl;
		if (this != &aMess) {
			this->m_Text = aMess.m_Text;
		}
		return *this;
	}

	CMessage(const char* str = "el pueblo unido jamas sera vencido ...") {
		cout << "constructor ..." << endl;
		this->m_Text = CText(str);
	}

	CMessage(const CMessage& aMess) {
		cout << "copy constructor ..." << endl;
		this->m_Text = aMess.m_Text;
	}

	CMessage(CMessage&& aMess) {
		cout << "move constructor ..." << endl;
		this->m_Text = aMess.m_Text;
	}
};


int main()
{
	CMessage motto1{ "the devil takes care of his own" };
	CMessage motto2{ "if you sup with the devil use a long spon" };
	cout << endl << "cmessage motto3 1+2" << endl;
	CMessage motto3{ motto1 + motto2 };
	motto3.showIt();

	CMessage motto4;
	motto4 = motto3 + motto2;
	motto4.showIt();

    return 0;
}

