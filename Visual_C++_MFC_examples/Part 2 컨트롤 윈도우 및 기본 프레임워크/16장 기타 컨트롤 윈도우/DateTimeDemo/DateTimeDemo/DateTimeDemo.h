
// DateTimeDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CDateTimeDemoApp:
// �� Ŭ������ ������ ���ؼ��� DateTimeDemo.cpp�� �����Ͻʽÿ�.
//

class CDateTimeDemoApp : public CWinAppEx
{
public:
	CDateTimeDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CDateTimeDemoApp theApp;