
// NotifySession.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CNotifySessionApp:
// �� Ŭ������ ������ ���ؼ��� NotifySession.cpp�� �����Ͻʽÿ�.
//

class CNotifySessionApp : public CWinAppEx
{
public:
	CNotifySessionApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CNotifySessionApp theApp;