
// CreateDemo.h : CreateDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CCreateDemoApp:
// �� Ŭ������ ������ ���ؼ��� CreateDemo.cpp�� �����Ͻʽÿ�.
//

class CCreateDemoApp : public CWinApp
{
public:
	CCreateDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCreateDemoApp theApp;
