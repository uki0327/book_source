
// DynSplitDemo.h : DynSplitDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CDynSplitDemoApp:
// �� Ŭ������ ������ ���ؼ��� DynSplitDemo.cpp�� �����Ͻʽÿ�.
//

class CDynSplitDemoApp : public CWinApp
{
public:
	CDynSplitDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDynSplitDemoApp theApp;
