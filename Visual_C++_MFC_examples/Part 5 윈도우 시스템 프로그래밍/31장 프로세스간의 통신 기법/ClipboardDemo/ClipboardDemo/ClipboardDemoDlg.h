
// ClipboardDemoDlg.h : ��� ����
//

#pragma once


// CClipboardDemoDlg ��ȭ ����
class CClipboardDemoDlg : public CDialog
{
// �����Դϴ�.
public:
	CClipboardDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_CLIPBOARDDEMO_DIALOG };

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
	afx_msg void OnBnClickedButtoCopytoclipboard();
	afx_msg void OnBnClickedButtoReadfromclipboard();
	CString m_strText;
};
