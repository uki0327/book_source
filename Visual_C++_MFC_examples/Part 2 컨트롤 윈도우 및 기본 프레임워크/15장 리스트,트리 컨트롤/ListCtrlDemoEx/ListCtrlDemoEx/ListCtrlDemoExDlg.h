
// ListCtrlDemoExDlg.h : ��� ����
//

#pragma once
#include "afxcmn.h"


// CListCtrlDemoExDlg ��ȭ ����
class CListCtrlDemoExDlg : public CDialog
{
// �����Դϴ�.
public:
	CListCtrlDemoExDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_LISTCTRLDEMOEX_DIALOG };

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
	CListCtrl m_List;
	afx_msg void OnBnClickedButtonDelete();
};
