
// ComboExDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CComboExDemoApp:
// �� Ŭ������ ������ ���ؼ��� ComboExDemo.cpp�� �����Ͻʽÿ�.
//

class CComboExDemoApp : public CWinAppEx
{
public:
	CComboExDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CComboExDemoApp theApp;