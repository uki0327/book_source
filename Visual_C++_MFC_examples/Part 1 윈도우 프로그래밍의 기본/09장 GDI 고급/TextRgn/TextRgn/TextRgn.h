
// TextRgn.h : TextRgn ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CTextRgnApp:
// �� Ŭ������ ������ ���ؼ��� TextRgn.cpp�� �����Ͻʽÿ�.
//

class CTextRgnApp : public CWinApp
{
public:
	CTextRgnApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CTextRgnApp theApp;
