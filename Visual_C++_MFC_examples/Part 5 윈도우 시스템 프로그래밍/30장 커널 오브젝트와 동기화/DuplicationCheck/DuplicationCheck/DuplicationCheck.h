
// DuplicationCheck.h : DuplicationCheck ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CDuplicationCheckApp:
// �� Ŭ������ ������ ���ؼ��� DuplicationCheck.cpp�� �����Ͻʽÿ�.
//

class CDuplicationCheckApp : public CWinAppEx
{
public:
	CDuplicationCheckApp();
	HANDLE	m_hDupCheck;


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
	virtual int ExitInstance();
};

extern CDuplicationCheckApp theApp;
