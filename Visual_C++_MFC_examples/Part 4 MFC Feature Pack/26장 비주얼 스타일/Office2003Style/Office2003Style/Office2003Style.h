
// Office2003Style.h : Office2003Style ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// COffice2003StyleApp:
// �� Ŭ������ ������ ���ؼ��� Office2003Style.cpp�� �����Ͻʽÿ�.
//

class COffice2003StyleApp : public CWinAppEx
{
public:
	COffice2003StyleApp();


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

extern COffice2003StyleApp theApp;
