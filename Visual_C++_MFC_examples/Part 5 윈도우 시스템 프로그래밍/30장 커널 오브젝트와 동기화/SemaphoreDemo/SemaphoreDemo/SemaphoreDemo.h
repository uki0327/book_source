
// SemaphoreDemo.h : SemaphoreDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CSemaphoreDemoApp:
// �� Ŭ������ ������ ���ؼ��� SemaphoreDemo.cpp�� �����Ͻʽÿ�.
//

class CSemaphoreDemoApp : public CWinAppEx
{
public:
	CSemaphoreDemoApp();
	CEvent		m_ExitEvent;


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
	static UINT ThreadSemaphore(LPVOID pParam);
	virtual int ExitInstance();
};

extern CSemaphoreDemoApp theApp;
