
// IPAddrDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CIPAddrDemoApp:
// �� Ŭ������ ������ ���ؼ��� IPAddrDemo.cpp�� �����Ͻʽÿ�.
//

class CIPAddrDemoApp : public CWinAppEx
{
public:
	CIPAddrDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CIPAddrDemoApp theApp;