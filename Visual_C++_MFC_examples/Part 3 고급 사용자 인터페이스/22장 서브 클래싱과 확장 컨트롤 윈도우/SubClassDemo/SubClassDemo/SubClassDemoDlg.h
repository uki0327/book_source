
// SubClassDemoDlg.h : ��� ����
//

#pragma once
#include "afxcmn.h"
#include "SubClassTestWnd.h"


// CSubClassDemoDlg ��ȭ ����
class CSubClassDemoDlg : public CDialog
{
// �����Դϴ�.
public:
	CSubClassDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

	CSubClassTestWnd	m_wndTest;

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_SUBCLASSDEMO_DIALOG };

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
	CListCtrl m_List;
};
