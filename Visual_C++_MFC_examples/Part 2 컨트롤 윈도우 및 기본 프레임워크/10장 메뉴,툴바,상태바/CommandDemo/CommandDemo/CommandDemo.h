
// CommandDemo.h : CommandDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CCommandDemoApp:
// �� Ŭ������ ������ ���ؼ��� CommandDemo.cpp�� �����Ͻʽÿ�.
//

class CCommandDemoApp : public CWinApp
{
public:
	CCommandDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
	afx_msg void OnMenuStart();
};

extern CCommandDemoApp theApp;
