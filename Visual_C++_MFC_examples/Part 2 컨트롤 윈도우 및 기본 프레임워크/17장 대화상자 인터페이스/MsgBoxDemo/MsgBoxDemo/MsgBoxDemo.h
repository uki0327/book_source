
// MsgBoxDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CMsgBoxDemoApp:
// �� Ŭ������ ������ ���ؼ��� MsgBoxDemo.cpp�� �����Ͻʽÿ�.
//

class CMsgBoxDemoApp : public CWinAppEx
{
public:
	CMsgBoxDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CMsgBoxDemoApp theApp;