
// TriangleDemo.h : TriangleDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CTriangleDemoApp:
// �� Ŭ������ ������ ���ؼ��� TriangleDemo.cpp�� �����Ͻʽÿ�.
//

class CTriangleDemoApp : public CWinApp
{
public:
	CTriangleDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CTriangleDemoApp theApp;
