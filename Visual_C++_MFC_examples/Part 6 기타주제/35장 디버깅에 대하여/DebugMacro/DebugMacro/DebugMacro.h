
// DebugMacro.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CDebugMacroApp:
// �� Ŭ������ ������ ���ؼ��� DebugMacro.cpp�� �����Ͻʽÿ�.
//

class CDebugMacroApp : public CWinAppEx
{
public:
	CDebugMacroApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CDebugMacroApp theApp;