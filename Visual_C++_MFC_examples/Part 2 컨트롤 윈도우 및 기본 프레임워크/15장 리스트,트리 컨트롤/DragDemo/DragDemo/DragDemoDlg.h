
// DragDemoDlg.h : ��� ����
//

#pragma once
#include "afxcmn.h"


// CDragDemoDlg ��ȭ ����
class CDragDemoDlg : public CDialog
{
// �����Դϴ�.
public:
	CDragDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DRAGDEMO_DIALOG };

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
	CListCtrl m_List_Left;
	CListCtrl m_List_Right;

	CImageList*		m_pImgListDrag;
	int				m_nIndexLeftSel;

	afx_msg void OnLvnBegindragListLeft(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);

	afx_msg void OnBnClickedRstRightlist();
};
