
// PagerDemo.h : PagerDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CPagerDemoApp:
// �� Ŭ������ ������ ���ؼ��� PagerDemo.cpp�� �����Ͻʽÿ�.
//

class CPagerDemoApp : public CWinApp
{
public:
	CPagerDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CPagerDemoApp theApp;
