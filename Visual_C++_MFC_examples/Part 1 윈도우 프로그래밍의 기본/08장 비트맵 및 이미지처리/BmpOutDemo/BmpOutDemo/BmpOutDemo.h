
// BmpOutDemo.h : BmpOutDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CBmpOutDemoApp:
// �� Ŭ������ ������ ���ؼ��� BmpOutDemo.cpp�� �����Ͻʽÿ�.
//

class CBmpOutDemoApp : public CWinApp
{
public:
	CBmpOutDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CBmpOutDemoApp theApp;
