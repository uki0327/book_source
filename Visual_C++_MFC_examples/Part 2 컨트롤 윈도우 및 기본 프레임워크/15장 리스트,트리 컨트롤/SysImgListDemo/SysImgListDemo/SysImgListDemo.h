
// SysImgListDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CSysImgListDemoApp:
// �� Ŭ������ ������ ���ؼ��� SysImgListDemo.cpp�� �����Ͻʽÿ�.
//

class CSysImgListDemoApp : public CWinAppEx
{
public:
	CSysImgListDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CSysImgListDemoApp theApp;