
// ListComboDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CListComboDemoApp:
// �� Ŭ������ ������ ���ؼ��� ListComboDemo.cpp�� �����Ͻʽÿ�.
//

class CListComboDemoApp : public CWinAppEx
{
public:
	CListComboDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CListComboDemoApp theApp;