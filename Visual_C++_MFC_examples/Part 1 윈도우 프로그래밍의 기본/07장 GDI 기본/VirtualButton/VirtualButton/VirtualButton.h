
// VirtualButton.h : VirtualButton ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CVirtualButtonApp:
// �� Ŭ������ ������ ���ؼ��� VirtualButton.cpp�� �����Ͻʽÿ�.
//

class CVirtualButtonApp : public CWinApp
{
public:
	CVirtualButtonApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CVirtualButtonApp theApp;
