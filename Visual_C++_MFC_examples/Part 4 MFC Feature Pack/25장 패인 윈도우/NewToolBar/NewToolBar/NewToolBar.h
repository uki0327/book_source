
// NewToolBar.h : NewToolBar ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CNewToolBarApp:
// �� Ŭ������ ������ ���ؼ��� NewToolBar.cpp�� �����Ͻʽÿ�.
//

class CNewToolBarApp : public CWinAppEx
{
public:
	CNewToolBarApp();


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

extern CNewToolBarApp theApp;
