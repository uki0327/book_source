
// GroupListDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CGroupListDemoApp:
// �� Ŭ������ ������ ���ؼ��� GroupListDemo.cpp�� �����Ͻʽÿ�.
//

class CGroupListDemoApp : public CWinAppEx
{
public:
	CGroupListDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CGroupListDemoApp theApp;