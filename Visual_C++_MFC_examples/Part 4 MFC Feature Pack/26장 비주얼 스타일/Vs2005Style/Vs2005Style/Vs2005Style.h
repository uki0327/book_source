
// Vs2005Style.h : Vs2005Style ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CVs2005StyleApp:
// �� Ŭ������ ������ ���ؼ��� Vs2005Style.cpp�� �����Ͻʽÿ�.
//

class CVs2005StyleApp : public CWinAppEx
{
public:
	CVs2005StyleApp();


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

extern CVs2005StyleApp theApp;
