
// PenBrushDemo.h : PenBrushDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CPenBrushDemoApp:
// �� Ŭ������ ������ ���ؼ��� PenBrushDemo.cpp�� �����Ͻʽÿ�.
//

class CPenBrushDemoApp : public CWinApp
{
public:
	CPenBrushDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CPenBrushDemoApp theApp;
