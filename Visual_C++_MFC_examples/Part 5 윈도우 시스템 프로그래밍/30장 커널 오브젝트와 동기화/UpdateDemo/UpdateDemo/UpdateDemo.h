
// UpdateDemo.h : UpdateDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CUpdateDemoApp:
// �� Ŭ������ ������ ���ؼ��� UpdateDemo.cpp�� �����Ͻʽÿ�.
//

class CUpdateDemoApp : public CWinAppEx
{
public:
	CUpdateDemoApp();

	CEvent		m_ExitEvent;
	CEvent		m_UpdateEvent;


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
	static UINT ThreadUpdate(LPVOID pParam);
	virtual int ExitInstance();
};

extern CUpdateDemoApp theApp;
