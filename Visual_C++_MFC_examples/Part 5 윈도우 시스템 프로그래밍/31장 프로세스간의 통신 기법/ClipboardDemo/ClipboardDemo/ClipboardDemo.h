
// ClipboardDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CClipboardDemoApp:
// �� Ŭ������ ������ ���ؼ��� ClipboardDemo.cpp�� �����Ͻʽÿ�.
//

class CClipboardDemoApp : public CWinAppEx
{
public:
	CClipboardDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CClipboardDemoApp theApp;