
// CommonDlgDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CCommonDlgDemoApp:
// �� Ŭ������ ������ ���ؼ��� CommonDlgDemo.cpp�� �����Ͻʽÿ�.
//

class CCommonDlgDemoApp : public CWinAppEx
{
public:
	CCommonDlgDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CCommonDlgDemoApp theApp;