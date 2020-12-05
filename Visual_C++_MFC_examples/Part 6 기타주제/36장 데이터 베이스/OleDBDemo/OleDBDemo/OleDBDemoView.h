
// OleDBDemoView.h : COleDBDemoView Ŭ������ �������̽�
//


#pragma once
#include "afxcmn.h"

class COleDBDemoSet;

class COleDBDemoView : public COleDBRecordView
{
protected: // serialization������ ��������ϴ�.
	COleDBDemoView();
	DECLARE_DYNCREATE(COleDBDemoView)

public:
	enum{ IDD = IDD_OLEDBDEMO_FORM };
	COleDBDemoSet* m_pSet;

// Ư���Դϴ�.
public:
	COleDBDemoDoc* GetDocument() const;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual CRowset<>* OnGetRowset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.
	virtual void OnInitialUpdate(); // ���� �� ó�� ȣ��Ǿ����ϴ�.
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// �����Դϴ�.
public:
	virtual ~COleDBDemoView();
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
	afx_msg void OnBnClickedButtonAddnew();
	afx_msg void OnBnClickedButtonModifyrecord();
	afx_msg void OnBnClickedButtonDeleterecord();
};

#ifndef _DEBUG  // OleDBDemoView.cpp�� ����� ����
inline COleDBDemoDoc* COleDBDemoView::GetDocument() const
   { return reinterpret_cast<COleDBDemoDoc*>(m_pDocument); }
#endif

