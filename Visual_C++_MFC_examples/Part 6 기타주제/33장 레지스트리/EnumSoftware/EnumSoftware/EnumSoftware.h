
// EnumSoftware.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CEnumSoftwareApp:
// �� Ŭ������ ������ ���ؼ��� EnumSoftware.cpp�� �����Ͻʽÿ�.
//

class CEnumSoftwareApp : public CWinAppEx
{
public:
	CEnumSoftwareApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CEnumSoftwareApp theApp;