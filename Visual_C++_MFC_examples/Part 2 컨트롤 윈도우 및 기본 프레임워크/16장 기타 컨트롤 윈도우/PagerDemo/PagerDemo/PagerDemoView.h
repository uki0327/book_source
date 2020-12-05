
// PagerDemoView.h : CPagerDemoView Ŭ������ �������̽�
//


#pragma once


class CPagerDemoView : public CView
{
protected: // serialization������ ��������ϴ�.
	CPagerDemoView();
	DECLARE_DYNCREATE(CPagerDemoView)

// Ư���Դϴ�.
public:
	CPagerDemoDoc* GetDocument() const;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// �����Դϴ�.
public:
	virtual ~CPagerDemoView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()

public:
	CPagerCtrl		m_wndPager;
	CToolBar		m_wndToolBar;
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnCalcSize(NMHDR * pNotifyStruct, LRESULT * result);
};

#ifndef _DEBUG  // PagerDemoView.cpp�� ����� ����
inline CPagerDemoDoc* CPagerDemoView::GetDocument() const
   { return reinterpret_cast<CPagerDemoDoc*>(m_pDocument); }
#endif

