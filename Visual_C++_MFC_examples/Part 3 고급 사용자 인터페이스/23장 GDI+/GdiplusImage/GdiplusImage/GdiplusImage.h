
// GdiplusImage.h : GdiplusImage ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CGdiplusImageApp:
// �� Ŭ������ ������ ���ؼ��� GdiplusImage.cpp�� �����Ͻʽÿ�.
//

class CGdiplusImageApp : public CWinApp
{
public:
	CGdiplusImageApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
	virtual int ExitInstance();
};

extern CGdiplusImageApp theApp;
