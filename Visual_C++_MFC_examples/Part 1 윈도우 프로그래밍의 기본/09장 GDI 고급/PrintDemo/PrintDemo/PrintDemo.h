
// PrintDemo.h : PrintDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CPrintDemoApp:
// �� Ŭ������ ������ ���ؼ��� PrintDemo.cpp�� �����Ͻʽÿ�.
//

class CPrintDemoApp : public CWinApp
{
public:
	CPrintDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CPrintDemoApp theApp;
