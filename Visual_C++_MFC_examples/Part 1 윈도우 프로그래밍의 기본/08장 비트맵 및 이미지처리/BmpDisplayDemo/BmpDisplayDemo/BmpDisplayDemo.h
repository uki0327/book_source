
// BmpDisplayDemo.h : BmpDisplayDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CBmpDisplayDemoApp:
// �� Ŭ������ ������ ���ؼ��� BmpDisplayDemo.cpp�� �����Ͻʽÿ�.
//

class CBmpDisplayDemoApp : public CWinApp
{
public:
	CBmpDisplayDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CBmpDisplayDemoApp theApp;
