
// GdiplusPolygon.h : GdiplusPolygon ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CGdiplusPolygonApp:
// �� Ŭ������ ������ ���ؼ��� GdiplusPolygon.cpp�� �����Ͻʽÿ�.
//

class CGdiplusPolygonApp : public CWinApp
{
public:
	CGdiplusPolygonApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
	virtual int ExitInstance();
};

extern CGdiplusPolygonApp theApp;
