
// OdbcDemoView.h : COdbcDemoView Ŭ������ �������̽�
//


#pragma once
#include "afxcmn.h"

class COdbcDemoSet;

class COdbcDemoView : public CRecordView
{
protected: // serialization������ ��������ϴ�.
	COdbcDemoView();
	DECLARE_DYNCREATE(COdbcDemoView)

public:
	enum{ IDD = IDD_ODBCDEMO_FORM };
	COdbcDemoSet* m_pSet;

// Ư���Դϴ�.
public:
	COdbcDemoDoc* GetDocument() const;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.
	virtual void OnInitialUpdate(); // ���� �� ó�� ȣ��Ǿ����ϴ�.
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// �����Դϴ�.
public:
	virtual ~COdbcDemoView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_List;
	void ListupAllRecords(void);
	CString m_strName;
	CString m_strPhoneNumber;
	CString m_strAddress;
	long m_lAge;
	void DisplayRecord(void);
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordLast();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordPrev();
	afx_msg void OnBnClickedButtonAddnew();
	afx_msg void OnBnClickedButtonUpdatecurrent();
	afx_msg void OnBnClickedButtonDeletecurrent();
	afx_msg void OnBnClickedButtonFindrecord();
};

#ifndef _DEBUG  // OdbcDemoView.cpp�� ����� ����
inline COdbcDemoDoc* COdbcDemoView::GetDocument() const
   { return reinterpret_cast<COdbcDemoDoc*>(m_pDocument); }
#endif

