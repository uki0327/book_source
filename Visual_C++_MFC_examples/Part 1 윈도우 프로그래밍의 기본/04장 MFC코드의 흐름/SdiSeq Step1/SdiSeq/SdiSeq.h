
// SdiSeq.h : SdiSeq ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CSdiSeqApp:
// �� Ŭ������ ������ ���ؼ��� SdiSeq.cpp�� �����Ͻʽÿ�.
//

class CSdiSeqApp : public CWinApp
{
public:
	CSdiSeqApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
	virtual int ExitInstance();
	virtual int Run();
};

extern CSdiSeqApp theApp;
