
// DebugMacroDlg.h : ��� ����
//

#pragma once


// CDebugMacroDlg ��ȭ ����
class CDebugMacroDlg : public CDialog
{
// �����Դϴ�.
public:
	CDebugMacroDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DEBUGMACRO_DIALOG };

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
	afx_msg void OnBnClickedButtonTrace();
	afx_msg void OnBnClickedButtonAssert();
	afx_msg void OnBnClickedButtonDebugdefine();
};
