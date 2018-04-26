#pragma once
#include "CBox.h"
#include <cstring>


class CCandyBox : CBox
{
public:
	char* m_Contents;

	explicit CCandyBox(const char* str = "Candy") {
		size_t length{ strlen(str) + 1 };
		m_Contents = new char[length];
		strcpy_s(m_Contents,length,str);
	}

	CCandyBox(const CCandyBox& Box) = delete;
	CCandyBox& operator = (const CCandyBox& Box) = delete;

	~CCandyBox() {
		delete[] m_Contents;
	};
};

