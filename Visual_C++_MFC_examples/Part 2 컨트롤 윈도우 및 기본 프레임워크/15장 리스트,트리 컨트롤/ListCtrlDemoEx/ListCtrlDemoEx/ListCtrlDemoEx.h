
// ListCtrlDemoEx.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CListCtrlDemoExApp:
// �� Ŭ������ ������ ���ؼ��� ListCtrlDemoEx.cpp�� �����Ͻʽÿ�.
//

class CListCtrlDemoExApp : public CWinAppEx
{
public:
	CListCtrlDemoExApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CListCtrlDemoExApp theApp;