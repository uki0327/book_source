
// StaticDemo.h : StaticDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CStaticDemoApp:
// �� Ŭ������ ������ ���ؼ��� StaticDemo.cpp�� �����Ͻʽÿ�.
//

class CStaticDemoApp : public CWinApp
{
public:
	CStaticDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CStaticDemoApp theApp;
