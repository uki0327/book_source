
// DragDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CDragDemoApp:
// �� Ŭ������ ������ ���ؼ��� DragDemo.cpp�� �����Ͻʽÿ�.
//

class CDragDemoApp : public CWinAppEx
{
public:
	CDragDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CDragDemoApp theApp;