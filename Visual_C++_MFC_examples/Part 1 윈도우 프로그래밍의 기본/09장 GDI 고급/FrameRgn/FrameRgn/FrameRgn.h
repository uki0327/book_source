
// FrameRgn.h : FrameRgn ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CFrameRgnApp:
// �� Ŭ������ ������ ���ؼ��� FrameRgn.cpp�� �����Ͻʽÿ�.
//

class CFrameRgnApp : public CWinApp
{
public:
	CFrameRgnApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CFrameRgnApp theApp;
