
// UnicodeDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CUnicodeDemoApp:
// �� Ŭ������ ������ ���ؼ��� UnicodeDemo.cpp�� �����Ͻʽÿ�.
//

class CUnicodeDemoApp : public CWinAppEx
{
public:
	CUnicodeDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CUnicodeDemoApp theApp;