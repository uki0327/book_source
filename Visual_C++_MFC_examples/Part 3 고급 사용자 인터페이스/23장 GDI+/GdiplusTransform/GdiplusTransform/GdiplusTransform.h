
// GdiplusTransform.h : GdiplusTransform ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CGdiplusTransformApp:
// �� Ŭ������ ������ ���ؼ��� GdiplusTransform.cpp�� �����Ͻʽÿ�.
//

class CGdiplusTransformApp : public CWinApp
{
public:
	CGdiplusTransformApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
	virtual int ExitInstance();
};

extern CGdiplusTransformApp theApp;
