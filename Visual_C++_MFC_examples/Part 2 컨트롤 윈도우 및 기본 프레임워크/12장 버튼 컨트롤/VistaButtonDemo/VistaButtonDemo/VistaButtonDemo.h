
// VistaButtonDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CVistaButtonDemoApp:
// �� Ŭ������ ������ ���ؼ��� VistaButtonDemo.cpp�� �����Ͻʽÿ�.
//

class CVistaButtonDemoApp : public CWinAppEx
{
public:
	CVistaButtonDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CVistaButtonDemoApp theApp;