
// OdbcDemo.h : OdbcDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// COdbcDemoApp:
// �� Ŭ������ ������ ���ؼ��� OdbcDemo.cpp�� �����Ͻʽÿ�.
//

class COdbcDemoApp : public CWinAppEx
{
public:
	COdbcDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern COdbcDemoApp theApp;
