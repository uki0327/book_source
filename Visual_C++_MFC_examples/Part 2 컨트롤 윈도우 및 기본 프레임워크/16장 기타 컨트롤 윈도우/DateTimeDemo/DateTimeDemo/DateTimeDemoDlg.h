
// DateTimeDemoDlg.h : ��� ����
//

#pragma once


// CDateTimeDemoDlg ��ȭ ����
class CDateTimeDemoDlg : public CDialog
{
// �����Դϴ�.
public:
	CDateTimeDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DATETIMEDEMO_DIALOG };

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
	COleDateTime m_timeLeft;
	COleDateTime m_timeRight;
	afx_msg void OnBnClickedButtonCalc();
};
