
// RangeDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CRangeDemoApp:
// �� Ŭ������ ������ ���ؼ��� RangeDemo.cpp�� �����Ͻʽÿ�.
//

class CRangeDemoApp : public CWinAppEx
{
public:
	CRangeDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CRangeDemoApp theApp;