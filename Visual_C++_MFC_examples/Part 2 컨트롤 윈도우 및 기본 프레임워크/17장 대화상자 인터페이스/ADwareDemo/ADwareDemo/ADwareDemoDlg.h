
// ADwareDemoDlg.h : ��� ����
//

#pragma once
#include "ADwareDlg.h"


// CADwareDemoDlg ��ȭ ����
class CADwareDemoDlg : public CDialog
{
// �����Դϴ�.
public:
	CADwareDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

	CADwareDlg		m_wndAD;

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_ADWAREDEMO_DIALOG };

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
};
