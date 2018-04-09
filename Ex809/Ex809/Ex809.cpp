//
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
	}

};


int main()
{

    return 0;
}

