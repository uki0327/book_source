
// ModeDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CModeDemoApp:
// �� Ŭ������ ������ ���ؼ��� ModeDemo.cpp�� �����Ͻʽÿ�.
//

class CModeDemoApp : public CWinAppEx
{
public:
	CModeDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CModeDemoApp theApp;