
// GdiplusLine.h : GdiplusLine ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CGdiplusLineApp:
// �� Ŭ������ ������ ���ؼ��� GdiplusLine.cpp�� �����Ͻʽÿ�.
//

class CGdiplusLineApp : public CWinApp
{
public:
	CGdiplusLineApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
	virtual int ExitInstance();
};

extern CGdiplusLineApp theApp;
