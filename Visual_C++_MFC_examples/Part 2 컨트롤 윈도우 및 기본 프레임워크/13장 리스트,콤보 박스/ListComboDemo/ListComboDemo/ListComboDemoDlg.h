
// ListComboDemoDlg.h : ��� ����
//

#pragma once
#include "afxwin.h"


// CListComboDemoDlg ��ȭ ����
class CListComboDemoDlg : public CDialog
{
// �����Դϴ�.
public:
	CListComboDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_LISTCOMBODEMO_DIALOG };

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
	CListBox m_List;
	CString m_strInput;
	afx_msg void OnBnClickedButtonInsertstring();
	afx_msg void OnBnClickedButtonAddstring();
	afx_msg void OnBnClickedButtonFind();
	afx_msg void OnBnClickedButtonFindexact();
	CString m_strSelected;
	afx_msg void OnLbnSelchangeList1();
	CComboBox m_Combo_Address;
	CString m_strAddress;
	afx_msg void OnBnClickedButtonAddaddress();
};
