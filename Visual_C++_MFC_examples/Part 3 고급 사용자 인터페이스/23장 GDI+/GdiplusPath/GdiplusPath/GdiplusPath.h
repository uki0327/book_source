
// GdiplusPath.h : GdiplusPath ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CGdiplusPathApp:
// �� Ŭ������ ������ ���ؼ��� GdiplusPath.cpp�� �����Ͻʽÿ�.
//

class CGdiplusPathApp : public CWinApp
{
public:
	CGdiplusPathApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
	virtual int ExitInstance();
};

extern CGdiplusPathApp theApp;
