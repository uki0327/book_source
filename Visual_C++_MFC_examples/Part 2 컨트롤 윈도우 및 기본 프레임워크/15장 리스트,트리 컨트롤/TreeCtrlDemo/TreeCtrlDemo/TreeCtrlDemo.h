
// TreeCtrlDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CTreeCtrlDemoApp:
// �� Ŭ������ ������ ���ؼ��� TreeCtrlDemo.cpp�� �����Ͻʽÿ�.
//

class CTreeCtrlDemoApp : public CWinAppEx
{
public:
	CTreeCtrlDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CTreeCtrlDemoApp theApp;