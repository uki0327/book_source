
// EditDemo.h : EditDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CEditDemoApp:
// �� Ŭ������ ������ ���ؼ��� EditDemo.cpp�� �����Ͻʽÿ�.
//

class CEditDemoApp : public CWinApp
{
public:
	CEditDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEditDemoApp theApp;
