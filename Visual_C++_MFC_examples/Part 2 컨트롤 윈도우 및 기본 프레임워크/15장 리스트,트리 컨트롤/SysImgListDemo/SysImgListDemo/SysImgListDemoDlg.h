
// SysImgListDemoDlg.h : ��� ����
//

#pragma once
#include "afxcmn.h"


// CSysImgListDemoDlg ��ȭ ����
class CSysImgListDemoDlg : public CDialog
{
// �����Դϴ�.
public:
	CSysImgListDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_SYSIMGLISTDEMO_DIALOG };

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
	int GetIconIndexFromFile(CString strFilePath);
};
