
// ListCtrlDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CListCtrlDemoApp:
// �� Ŭ������ ������ ���ؼ��� ListCtrlDemo.cpp�� �����Ͻʽÿ�.
//

class CListCtrlDemoApp : public CWinAppEx
{
public:
	CListCtrlDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CListCtrlDemoApp theApp;