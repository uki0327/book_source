
// MouseCombi.h : MouseCombi ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CMouseCombiApp:
// �� Ŭ������ ������ ���ؼ��� MouseCombi.cpp�� �����Ͻʽÿ�.
//

class CMouseCombiApp : public CWinApp
{
public:
	CMouseCombiApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMouseCombiApp theApp;
