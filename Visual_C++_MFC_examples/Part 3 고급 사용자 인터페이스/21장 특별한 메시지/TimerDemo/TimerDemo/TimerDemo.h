
// TimerDemo.h : TimerDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CTimerDemoApp:
// �� Ŭ������ ������ ���ؼ��� TimerDemo.cpp�� �����Ͻʽÿ�.
//

class CTimerDemoApp : public CWinApp
{
public:
	CTimerDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CTimerDemoApp theApp;
