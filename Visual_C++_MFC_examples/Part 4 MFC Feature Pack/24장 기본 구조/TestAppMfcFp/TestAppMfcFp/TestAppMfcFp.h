
// TestAppMfcFp.h : TestAppMfcFp ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CTestAppMfcFpApp:
// �� Ŭ������ ������ ���ؼ��� TestAppMfcFp.cpp�� �����Ͻʽÿ�.
//

class CTestAppMfcFpApp : public CWinAppEx
{
public:
	CTestAppMfcFpApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CTestAppMfcFpApp theApp;
