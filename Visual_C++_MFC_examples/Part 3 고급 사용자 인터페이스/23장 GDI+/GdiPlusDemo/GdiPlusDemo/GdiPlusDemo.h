
// GdiPlusDemo.h : GdiPlusDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CGdiPlusDemoApp:
// �� Ŭ������ ������ ���ؼ��� GdiPlusDemo.cpp�� �����Ͻʽÿ�.
//

class CGdiPlusDemoApp : public CWinApp
{
public:
	CGdiPlusDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
	virtual int ExitInstance();
};

extern CGdiPlusDemoApp theApp;
