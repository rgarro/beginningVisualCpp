// Ex1102.h : main header file for the Ex1102 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CEx1102App
// See Ex1102.cpp for the implementation of this class
//

class CEx1102App : public CWinApp
{
public:
	CEx1102App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
