
// ImageButtonDemoDlg.h : ��� ����
//

#pragma once
#include "afxwin.h"
#include "ImageButton.h"

// CImageButtonDemoDlg ��ȭ ����
class CImageButtonDemoDlg : public CDialog
{
// �����Դϴ�.
public:
	CImageButtonDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_IMAGEBUTTONDEMO_DIALOG };

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
	CImageButton m_Btn_Image;
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
};
