
// ExitWinDemo.h : ExitWinDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CExitWinDemoApp:
// �� Ŭ������ ������ ���ؼ��� ExitWinDemo.cpp�� �����Ͻʽÿ�.
//

class CExitWinDemoApp : public CWinApp
{
public:
	CExitWinDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CExitWinDemoApp theApp;
