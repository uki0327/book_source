
// RegistryMfcDemoDlg.h : ��� ����
//

#pragma once


// CRegistryMfcDemoDlg ��ȭ ����
class CRegistryMfcDemoDlg : public CDialog
{
// �����Դϴ�.
public:
	CRegistryMfcDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_REGISTRYMFCDEMO_DIALOG };

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
	CString m_strName;
	DWORD m_dwNumber;
	CString m_strLastDate;
	afx_msg void OnBnClickedOk();
};
