
// FileIoDemo.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CFileIoDemoApp:
// �� Ŭ������ ������ ���ؼ��� FileIoDemo.cpp�� �����Ͻʽÿ�.
//

class CFileIoDemoApp : public CWinAppEx
{
public:
	CFileIoDemoApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CFileIoDemoApp theApp;