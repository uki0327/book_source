
// ADwareDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CADwareDemoApp:
// �� Ŭ������ ������ ���ؼ��� ADwareDemo.cpp�� �����Ͻʽÿ�.
//

class CADwareDemoApp : public CWinAppEx
{
public:
	CADwareDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CADwareDemoApp theApp;