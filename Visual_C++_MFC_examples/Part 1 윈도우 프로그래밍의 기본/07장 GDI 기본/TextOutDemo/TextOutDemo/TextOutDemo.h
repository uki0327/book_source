
// TextOutDemo.h : TextOutDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CTextOutDemoApp:
// �� Ŭ������ ������ ���ؼ��� TextOutDemo.cpp�� �����Ͻʽÿ�.
//

class CTextOutDemoApp : public CWinApp
{
public:
	CTextOutDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CTextOutDemoApp theApp;
