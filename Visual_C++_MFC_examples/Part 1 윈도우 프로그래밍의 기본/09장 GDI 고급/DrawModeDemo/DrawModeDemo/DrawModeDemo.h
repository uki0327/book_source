
// DrawModeDemo.h : DrawModeDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CDrawModeDemoApp:
// �� Ŭ������ ������ ���ؼ��� DrawModeDemo.cpp�� �����Ͻʽÿ�.
//

class CDrawModeDemoApp : public CWinApp
{
public:
	CDrawModeDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDrawModeDemoApp theApp;
