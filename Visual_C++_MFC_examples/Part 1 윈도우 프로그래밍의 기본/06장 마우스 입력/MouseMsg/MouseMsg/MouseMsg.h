
// MouseMsg.h : MouseMsg ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CMouseMsgApp:
// �� Ŭ������ ������ ���ؼ��� MouseMsg.cpp�� �����Ͻʽÿ�.
//

class CMouseMsgApp : public CWinApp
{
public:
	CMouseMsgApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMouseMsgApp theApp;
