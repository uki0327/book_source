
// ComboExDemoDlg.h : ��� ����
//

#pragma once
#include "afxcmn.h"


// CComboExDemoDlg ��ȭ ����
class CComboExDemoDlg : public CDialog
{
// �����Դϴ�.
public:
	CComboExDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_COMBOEXDEMO_DIALOG };

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
	//Ȯ�� �޺� �ڽ��� ���� �̹��� ����Ʈ
	CImageList		m_ImgList;
	//Ȯ�� �޺� �ڽ�
	CComboBoxEx		m_ComboEx;
};
