
// RangeDemoDlg.h : ��� ����
//

#pragma once
#include "afxcmn.h"

#include "MySliderCtrl.h"


// CRangeDemoDlg ��ȭ ����
class CRangeDemoDlg : public CDialog
{
// �����Դϴ�.
public:
	CRangeDemoDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_RANGEDEMO_DIALOG };

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
	CProgressCtrl m_Progress;
	CMySliderCtrl m_Slider;
	afx_msg void OnNMReleasedcaptureSlider(NMHDR *pNMHDR, LRESULT *pResult);
	CSpinButtonCtrl m_Spin;
	afx_msg void OnEnUpdateEditValue();
};
