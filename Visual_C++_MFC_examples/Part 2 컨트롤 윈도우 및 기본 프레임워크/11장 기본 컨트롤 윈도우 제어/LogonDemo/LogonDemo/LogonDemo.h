
// LogonDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CLogonDemoApp:
// �� Ŭ������ ������ ���ؼ��� LogonDemo.cpp�� �����Ͻʽÿ�.
//

class CLogonDemoApp : public CWinAppEx
{
public:
	CLogonDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CLogonDemoApp theApp;