
// DockingDemo.h : DockingDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CDockingDemoApp:
// �� Ŭ������ ������ ���ؼ��� DockingDemo.cpp�� �����Ͻʽÿ�.
//

class CDockingDemoApp : public CWinAppEx
{
public:
	CDockingDemoApp();


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

extern CDockingDemoApp theApp;
