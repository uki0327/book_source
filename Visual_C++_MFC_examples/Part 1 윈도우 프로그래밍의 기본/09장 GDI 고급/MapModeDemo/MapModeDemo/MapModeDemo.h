
// MapModeDemo.h : MapModeDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CMapModeDemoApp:
// �� Ŭ������ ������ ���ؼ��� MapModeDemo.cpp�� �����Ͻʽÿ�.
//

class CMapModeDemoApp : public CWinApp
{
public:
	CMapModeDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMapModeDemoApp theApp;
