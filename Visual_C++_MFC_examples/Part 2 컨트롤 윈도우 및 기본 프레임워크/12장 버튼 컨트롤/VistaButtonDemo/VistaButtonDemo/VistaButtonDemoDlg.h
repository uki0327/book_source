
// VistaButtonDemoDlg.h : ��� ����
//

#pragma once
#include "afxwin.h"


// CVistaButtonDemoDlg ��ȭ ����
class CVistaButtonDemoDlg : public CDialog
{
// �����Դϴ�.
public:
	CVistaButtonDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_VISTABUTTONDEMO_DIALOG };

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
	CSplitButton m_SplitButton;
	afx_msg void OnBnClickedSplitButton();
	CButton m_Command_Button;
	afx_msg void OnBnClickedCommandButton();
};
