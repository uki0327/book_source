
// PropGridDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CPropGridDemoApp:
// �� Ŭ������ ������ ���ؼ��� PropGridDemo.cpp�� �����Ͻʽÿ�.
//

class CPropGridDemoApp : public CWinAppEx
{
public:
	CPropGridDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CPropGridDemoApp theApp;