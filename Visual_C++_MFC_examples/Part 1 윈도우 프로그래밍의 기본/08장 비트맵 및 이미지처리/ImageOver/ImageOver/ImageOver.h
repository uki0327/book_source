
// ImageOver.h : ImageOver ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CImageOverApp:
// �� Ŭ������ ������ ���ؼ��� ImageOver.cpp�� �����Ͻʽÿ�.
//

class CImageOverApp : public CWinApp
{
public:
	CImageOverApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CImageOverApp theApp;
