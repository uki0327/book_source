
// ButtonDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CButtonDemoApp:
// �� Ŭ������ ������ ���ؼ��� ButtonDemo.cpp�� �����Ͻʽÿ�.
//

class CButtonDemoApp : public CWinAppEx
{
public:
	CButtonDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CButtonDemoApp theApp;