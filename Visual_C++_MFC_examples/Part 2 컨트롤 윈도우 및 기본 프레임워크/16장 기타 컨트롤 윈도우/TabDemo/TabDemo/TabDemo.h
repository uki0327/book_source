
// TabDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CTabDemoApp:
// �� Ŭ������ ������ ���ؼ��� TabDemo.cpp�� �����Ͻʽÿ�.
//

class CTabDemoApp : public CWinAppEx
{
public:
	CTabDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CTabDemoApp theApp;