
// ImageRgn.h : ImageRgn ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CImageRgnApp:
// �� Ŭ������ ������ ���ؼ��� ImageRgn.cpp�� �����Ͻʽÿ�.
//

class CImageRgnApp : public CWinApp
{
public:
	CImageRgnApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CImageRgnApp theApp;
