
// TextProgressDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CTextProgressDemoApp:
// �� Ŭ������ ������ ���ؼ��� TextProgressDemo.cpp�� �����Ͻʽÿ�.
//

class CTextProgressDemoApp : public CWinAppEx
{
public:
	CTextProgressDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CTextProgressDemoApp theApp;