
// GdiplusBrush.h : GdiplusBrush ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CGdiplusBrushApp:
// �� Ŭ������ ������ ���ؼ��� GdiplusBrush.cpp�� �����Ͻʽÿ�.
//

class CGdiplusBrushApp : public CWinApp
{
public:
	CGdiplusBrushApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
	virtual int ExitInstance();
};

extern CGdiplusBrushApp theApp;
