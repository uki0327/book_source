
// RemoteDebugDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CRemoteDebugDemoApp:
// �� Ŭ������ ������ ���ؼ��� RemoteDebugDemo.cpp�� �����Ͻʽÿ�.
//

class CRemoteDebugDemoApp : public CWinAppEx
{
public:
	CRemoteDebugDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CRemoteDebugDemoApp theApp;