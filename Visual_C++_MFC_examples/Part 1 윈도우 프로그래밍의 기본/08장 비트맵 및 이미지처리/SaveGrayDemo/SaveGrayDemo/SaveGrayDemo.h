
// SaveGrayDemo.h : SaveGrayDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CSaveGrayDemoApp:
// �� Ŭ������ ������ ���ؼ��� SaveGrayDemo.cpp�� �����Ͻʽÿ�.
//

class CSaveGrayDemoApp : public CWinApp
{
public:
	CSaveGrayDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CSaveGrayDemoApp theApp;
