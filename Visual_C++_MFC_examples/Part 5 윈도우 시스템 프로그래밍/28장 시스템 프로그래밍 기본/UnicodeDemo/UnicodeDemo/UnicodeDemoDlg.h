
// UnicodeDemoDlg.h : ��� ����
//

#pragma once


// CUnicodeDemoDlg ��ȭ ����
class CUnicodeDemoDlg : public CDialog
{
// �����Դϴ�.
public:
	CUnicodeDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_UNICODEDEMO_DIALOG };

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
	afx_msg void OnBnClickedButtonMessage();
	afx_msg void OnBnClickedButtonLength();
	afx_msg void OnBnClickedButtonCstring();
	afx_msg void OnBnClickedButtonUnitombcs();
	afx_msg void OnBnClickedButtonMbcstounicode();
	afx_msg void OnBnClickedButtonNetusergetinfo();
};
