
// ImgOutDemo.h : ImgOutDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CImgOutDemoApp:
// �� Ŭ������ ������ ���ؼ��� ImgOutDemo.cpp�� �����Ͻʽÿ�.
//

class CImgOutDemoApp : public CWinApp
{
public:
	CImgOutDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CImgOutDemoApp theApp;
