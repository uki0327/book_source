
// RedrawDemo.h : RedrawDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CRedrawDemoApp:
// �� Ŭ������ ������ ���ؼ��� RedrawDemo.cpp�� �����Ͻʽÿ�.
//

class CRedrawDemoApp : public CWinApp
{
public:
	CRedrawDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CRedrawDemoApp theApp;
