
// HtmlDlgDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CHtmlDlgDemoApp:
// �� Ŭ������ ������ ���ؼ��� HtmlDlgDemo.cpp�� �����Ͻʽÿ�.
//

class CHtmlDlgDemoApp : public CWinAppEx
{
public:
	CHtmlDlgDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CHtmlDlgDemoApp theApp;