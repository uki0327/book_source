
// CommonDlgDemoDlg.h : ��� ����
//

#pragma once


// CCommonDlgDemoDlg ��ȭ ����
class CCommonDlgDemoDlg : public CDialog
{
// �����Դϴ�.
public:
	CCommonDlgDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_COMMONDLGDEMO_DIALOG };

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
	afx_msg void OnBnClickedButtonFiledialog();
	afx_msg void OnBnClickedButtonFontdialog();
	afx_msg void OnBnClickedButtonColordialog();
	afx_msg void OnBnClickedButtonFolderdialog();
};
