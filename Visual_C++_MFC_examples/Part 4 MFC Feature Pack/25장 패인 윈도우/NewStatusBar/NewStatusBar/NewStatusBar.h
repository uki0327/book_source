
// NewStatusBar.h : NewStatusBar ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CNewStatusBarApp:
// �� Ŭ������ ������ ���ؼ��� NewStatusBar.cpp�� �����Ͻʽÿ�.
//

class CNewStatusBarApp : public CWinAppEx
{
public:
	CNewStatusBarApp();


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

extern CNewStatusBarApp theApp;
