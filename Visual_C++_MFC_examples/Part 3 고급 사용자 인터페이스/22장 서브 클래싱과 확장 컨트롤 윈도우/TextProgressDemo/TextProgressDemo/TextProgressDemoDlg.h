
// TextProgressDemoDlg.h : ��� ����
//

#pragma once
#include "afxcmn.h"
#include "TextProgressCtrl.h"

// CTextProgressDemoDlg ��ȭ ����
class CTextProgressDemoDlg : public CDialog
{
// �����Դϴ�.
public:
	CTextProgressDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_TEXTPROGRESSDEMO_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CTextProgressCtrl m_Progress;
};
