
// DrawTextDemo.h : DrawTextDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CDrawTextDemoApp:
// �� Ŭ������ ������ ���ؼ��� DrawTextDemo.cpp�� �����Ͻʽÿ�.
//

class CDrawTextDemoApp : public CWinApp
{
public:
	CDrawTextDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDrawTextDemoApp theApp;
