
// SerializeDemo.h : SerializeDemo ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CSerializeDemoApp:
// �� Ŭ������ ������ ���ؼ��� SerializeDemo.cpp�� �����Ͻʽÿ�.
//

class CSerializeDemoApp : public CWinApp
{
public:
	CSerializeDemoApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CSerializeDemoApp theApp;
