
// ThreadCrashDemoDlg.h : ��� ����
//

#pragma once


// CThreadCrashDemoDlg ��ȭ ����
class CThreadCrashDemoDlg : public CDialog
{
// �����Դϴ�.
public:
	CThreadCrashDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_THREADCRASHDEMO_DIALOG };

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
	afx_msg void OnBnClickedButtonBeginthread1();
	afx_msg void OnBnClickedButtonBeginthread2();
	afx_msg void OnBnClickedButtonGetstring();
};
