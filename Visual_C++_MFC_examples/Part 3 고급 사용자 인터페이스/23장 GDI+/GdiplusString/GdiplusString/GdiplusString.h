
// GdiplusString.h : GdiplusString ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CGdiplusStringApp:
// �� Ŭ������ ������ ���ؼ��� GdiplusString.cpp�� �����Ͻʽÿ�.
//

class CGdiplusStringApp : public CWinApp
{
public:
	CGdiplusStringApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
	virtual int ExitInstance();
};

extern CGdiplusStringApp theApp;
