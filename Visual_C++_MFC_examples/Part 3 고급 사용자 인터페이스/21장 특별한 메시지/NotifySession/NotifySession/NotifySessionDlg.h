
// NotifySessionDlg.h : ��� ����
//

#pragma once
#include "afxwin.h"


// CNotifySessionDlg ��ȭ ����
class CNotifySessionDlg : public CDialog
{
// �����Դϴ�.
public:
	CNotifySessionDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_NOTIFYSESSION_DIALOG };

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
	CListBox m_List;
	afx_msg void OnDestroy();
	DWORD m_dwSessionID;
	afx_msg void OnSessionChange(UINT nSessionState, UINT nId);
	afx_msg void OnBnClickedButtonLogoff();
};
