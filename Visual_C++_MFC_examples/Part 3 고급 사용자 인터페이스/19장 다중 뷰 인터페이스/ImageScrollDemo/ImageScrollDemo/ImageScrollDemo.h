
// ImageScrollDemo.h : ImageScrollDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CImageScrollDemoApp:
// �� Ŭ������ ������ ���ؼ��� ImageScrollDemo.cpp�� �����Ͻʽÿ�.
//

class CImageScrollDemoApp : public CWinApp
{
public:
	CImageScrollDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CImageScrollDemoApp theApp;
