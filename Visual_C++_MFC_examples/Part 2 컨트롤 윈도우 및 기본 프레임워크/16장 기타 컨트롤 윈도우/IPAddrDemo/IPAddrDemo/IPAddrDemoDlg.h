
// IPAddrDemoDlg.h : ��� ����
//

#pragma once


// CIPAddrDemoDlg ��ȭ ����
class CIPAddrDemoDlg : public CDialog
{
// �����Դϴ�.
public:
	CIPAddrDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_IPADDRDEMO_DIALOG };

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
	DWORD m_dwAddress;
	afx_msg void OnBnClickedButtonGetaddress();
};
