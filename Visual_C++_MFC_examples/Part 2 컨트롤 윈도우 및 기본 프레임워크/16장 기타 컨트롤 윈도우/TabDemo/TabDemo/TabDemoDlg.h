
// TabDemoDlg.h : ��� ����
//

#pragma once
#include "afxcmn.h"

#include "FormOne.h"
#include "FormSecond.h"
#include "FormThird.h"


// CTabDemoDlg ��ȭ ����
class CTabDemoDlg : public CDialog
{
// �����Դϴ�.
public:
	CTabDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

	CFormOne		m_formOne;
	CFormSecond		m_formSecond;
	CFormThird		m_formThird;
	CWnd*			m_pwndShow;

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_TABDEMO_DIALOG };

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
	CTabCtrl m_Tab;
	afx_msg void OnTcnSelchangeTab(NMHDR *pNMHDR, LRESULT *pResult);
};
