
// AniDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CAniDemoApp:
// �� Ŭ������ ������ ���ؼ��� AniDemo.cpp�� �����Ͻʽÿ�.
//

class CAniDemoApp : public CWinAppEx
{
public:
	CAniDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CAniDemoApp theApp;