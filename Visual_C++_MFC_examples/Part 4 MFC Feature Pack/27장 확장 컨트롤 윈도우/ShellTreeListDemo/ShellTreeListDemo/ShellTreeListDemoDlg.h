
// ShellTreeListDemoDlg.h : ��� ����
//

#pragma once
#include "afxshelltreectrl.h"
#include "afxshelllistctrl.h"


// CShellTreeListDemoDlg ��ȭ ����
class CShellTreeListDemoDlg : public CDialog
{
// �����Դϴ�.
public:
	CShellTreeListDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_SHELLTREELISTDEMO_DIALOG };

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
	CMFCShellTreeCtrl m_wndShellTree;
	CMFCShellListCtrl m_wndShellList;
};
