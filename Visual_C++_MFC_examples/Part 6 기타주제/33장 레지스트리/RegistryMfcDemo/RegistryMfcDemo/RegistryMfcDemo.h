
// RegistryMfcDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.

typedef struct _TEST_DATA
{
	int			nType;
	DWORD		dwData;
	TCHAR		szData[64];
} TEST_DATA;


// CRegistryMfcDemoApp:
// �� Ŭ������ ������ ���ؼ��� RegistryMfcDemo.cpp�� �����Ͻʽÿ�.
//

class CRegistryMfcDemoApp : public CWinAppEx
{
public:
	CRegistryMfcDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CRegistryMfcDemoApp theApp;