
// ModalDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CModalDemoApp:
// �� Ŭ������ ������ ���ؼ��� ModalDemo.cpp�� �����Ͻʽÿ�.
//

class CModalDemoApp : public CWinAppEx
{
public:
	CModalDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CModalDemoApp theApp;