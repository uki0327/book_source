
// HeadCtrlDemoDlg.h : ��� ����
//

#pragma once
#include "afxcmn.h"


// CHeadCtrlDemoDlg ��ȭ ����
class CHeadCtrlDemoDlg : public CDialog
{
// �����Դϴ�.
public:
	CHeadCtrlDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_HEADCTRLDEMO_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.

	BOOL		m_bAscending;


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
	afx_msg void OnHdnItemclickList1(NMHDR *pNMHDR, LRESULT *pResult);
	static int CALLBACK CompareItem(LPARAM lParam1, LPARAM lParam2, LPARAM lParamSort);
	void UpdateArrow(void);
};
