
// HelloSdi.h : HelloSdi ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CHelloSdiApp:
// �� Ŭ������ ������ ���ؼ��� HelloSdi.cpp�� �����Ͻʽÿ�.
//

class CHelloSdiApp : public CWinApp
{
public:
	CHelloSdiApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CHelloSdiApp theApp;
