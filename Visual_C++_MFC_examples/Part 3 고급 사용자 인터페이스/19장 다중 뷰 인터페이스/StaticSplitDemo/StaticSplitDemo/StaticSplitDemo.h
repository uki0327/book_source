
// StaticSplitDemo.h : StaticSplitDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CStaticSplitDemoApp:
// �� Ŭ������ ������ ���ؼ��� StaticSplitDemo.cpp�� �����Ͻʽÿ�.
//

class CStaticSplitDemoApp : public CWinApp
{
public:
	CStaticSplitDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CStaticSplitDemoApp theApp;
