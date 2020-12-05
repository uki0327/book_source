
// RegistryApiDemoDlg.h : ��� ����
//

#pragma once

typedef struct _TEST_DATA
{
	int			nType;
	DWORD		dwData;
	TCHAR		szData[64];
} TEST_DATA;


// CRegistryApiDemoDlg ��ȭ ����
class CRegistryApiDemoDlg : public CDialog
{
// �����Դϴ�.
public:
	CRegistryApiDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_REGISTRYAPIDEMO_DIALOG };

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
	afx_msg void OnBnClickedButtonCreatekey();
	afx_msg void OnBnClickedButtonSetname();
	CString m_strName;
	DWORD m_dwNumber;
	afx_msg void OnBnClickedButtonSetnumber();
	afx_msg void OnBnClickedButtonSetdata();
	afx_msg void OnBnClickedButtonLoadall();
};
