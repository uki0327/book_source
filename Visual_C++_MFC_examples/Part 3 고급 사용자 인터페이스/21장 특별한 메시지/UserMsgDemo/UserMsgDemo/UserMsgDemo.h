
// UserMsgDemo.h : UserMsgDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CUserMsgDemoApp:
// �� Ŭ������ ������ ���ؼ��� UserMsgDemo.cpp�� �����Ͻʽÿ�.
//

class CUserMsgDemoApp : public CWinApp
{
public:
	CUserMsgDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CUserMsgDemoApp theApp;
