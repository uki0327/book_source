
// SubClassDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CSubClassDemoApp:
// �� Ŭ������ ������ ���ؼ��� SubClassDemo.cpp�� �����Ͻʽÿ�.
//

class CSubClassDemoApp : public CWinAppEx
{
public:
	CSubClassDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CSubClassDemoApp theApp;