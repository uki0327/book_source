
// SharedMemDemoDlg.h : ��� ����
//

#pragma once
#include "afxwin.h"


// CSharedMemDemoDlg ��ȭ ����
class CSharedMemDemoDlg : public CDialog
{
// �����Դϴ�.
public:
	CSharedMemDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_SHAREDMEMDEMO_DIALOG };

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

	afx_msg LRESULT OnRecvEvent(WPARAM wParam, LPARAM lParam);
public:
	afx_msg void OnBnClickedButtonSend();
	CListBox m_List;
	CString m_csMessage;
};
