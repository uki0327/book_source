
// KeyMove.h : KeyMove ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CKeyMoveApp:
// �� Ŭ������ ������ ���ؼ��� KeyMove.cpp�� �����Ͻʽÿ�.
//

class CKeyMoveApp : public CWinApp
{
public:
	CKeyMoveApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CKeyMoveApp theApp;
