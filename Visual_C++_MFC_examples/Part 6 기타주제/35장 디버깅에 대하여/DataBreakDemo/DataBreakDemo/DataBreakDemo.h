
// DataBreakDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CDataBreakDemoApp:
// �� Ŭ������ ������ ���ؼ��� DataBreakDemo.cpp�� �����Ͻʽÿ�.
//

class CDataBreakDemoApp : public CWinAppEx
{
public:
	CDataBreakDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CDataBreakDemoApp theApp;