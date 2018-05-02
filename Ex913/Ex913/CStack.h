#pragma once
#include "CBox.h"

class CStack
{
public:
	CStack()=default;
	CStack(const CStack& stack) = delete;
	CStack& operator=(const CStack stack) = delete;

	void push(CBox* pBox) {
		pTop = new CItem(pBox, pTop);
	}

	CBox* pop() {
		if (!pTop) {
			return nullptr;
		}
		CBox* pBox = pTop->pBox;
		CItem* pTemp = pTop;
		pTop = pTop->pNext;
		delete pTemp;
		return pBox;
	}

	virtual ~CStack() {
		CItem* pTemp{};
		while (pTop) {
			pTemp = pTop;
			pTop = pTop->pNext;
			delete pTemp;
		}
	}
private:

	//items to store in the stack
	struct CItem {
		CBox* pBox;
		CItem* pNext;
		CItem(CBox* p8,CItem* pN):pBox{p8},pNext{pN}{}
	};

	CItem* pTop{};
};

