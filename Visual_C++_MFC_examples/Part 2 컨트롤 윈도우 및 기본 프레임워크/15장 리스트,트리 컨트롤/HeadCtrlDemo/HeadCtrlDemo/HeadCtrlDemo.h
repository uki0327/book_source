
// HeadCtrlDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CHeadCtrlDemoApp:
// �� Ŭ������ ������ ���ؼ��� HeadCtrlDemo.cpp�� �����Ͻʽÿ�.
//

class CHeadCtrlDemoApp : public CWinAppEx
{
public:
	CHeadCtrlDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CHeadCtrlDemoApp theApp;