
// MdiDemo.h : MdiDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CMdiDemoApp:
// �� Ŭ������ ������ ���ؼ��� MdiDemo.cpp�� �����Ͻʽÿ�.
//

class CMdiDemoApp : public CWinApp
{
public:
	CMdiDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMdiDemoApp theApp;
