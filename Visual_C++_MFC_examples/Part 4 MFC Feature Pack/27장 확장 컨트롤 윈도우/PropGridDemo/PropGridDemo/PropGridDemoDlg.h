
// PropGridDemoDlg.h : ��� ����
//

#pragma once


// CPropGridDemoDlg ��ȭ ����
class CPropGridDemoDlg : public CDialog
{
// �����Դϴ�.
public:
	CPropGridDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

	CMFCPropertyGridCtrl		m_wndPropGrid;

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_PROPGRIDDEMO_DIALOG };

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
	void InitPropGrid(void);
};
