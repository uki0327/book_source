
// ImageButtonDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CImageButtonDemoApp:
// �� Ŭ������ ������ ���ؼ��� ImageButtonDemo.cpp�� �����Ͻʽÿ�.
//

class CImageButtonDemoApp : public CWinAppEx
{
public:
	CImageButtonDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CImageButtonDemoApp theApp;