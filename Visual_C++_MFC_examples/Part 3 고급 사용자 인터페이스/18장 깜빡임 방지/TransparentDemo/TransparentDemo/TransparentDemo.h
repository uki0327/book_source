
// TransparentDemo.h : TransparentDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CTransparentDemoApp:
// �� Ŭ������ ������ ���ؼ��� TransparentDemo.cpp�� �����Ͻʽÿ�.
//

class CTransparentDemoApp : public CWinApp
{
public:
	CTransparentDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CTransparentDemoApp theApp;
