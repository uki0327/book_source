
// SwitchViewDemo.h : SwitchViewDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CSwitchViewDemoApp:
// �� Ŭ������ ������ ���ؼ��� SwitchViewDemo.cpp�� �����Ͻʽÿ�.
//

class CSwitchViewDemoApp : public CWinApp
{
public:
	CSwitchViewDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CSwitchViewDemoApp theApp;
