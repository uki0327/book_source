
// NetAddrDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CNetAddrDemoApp:
// �� Ŭ������ ������ ���ؼ��� NetAddrDemo.cpp�� �����Ͻʽÿ�.
//

class CNetAddrDemoApp : public CWinAppEx
{
public:
	CNetAddrDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CNetAddrDemoApp theApp;