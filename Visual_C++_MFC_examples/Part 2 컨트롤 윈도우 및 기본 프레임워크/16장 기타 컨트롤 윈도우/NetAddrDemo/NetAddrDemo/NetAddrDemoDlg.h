
// NetAddrDemoDlg.h : ��� ����
//

#pragma once
#include "afxcmn.h"


// CNetAddrDemoDlg ��ȭ ����
class CNetAddrDemoDlg : public CDialog
{
// �����Դϴ�.
public:
	CNetAddrDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_NETADDRDEMO_DIALOG };

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
	CNetAddressCtrl m_NetAddrCtrl;
	afx_msg void OnBnClickedButtonGetaddress();
};
