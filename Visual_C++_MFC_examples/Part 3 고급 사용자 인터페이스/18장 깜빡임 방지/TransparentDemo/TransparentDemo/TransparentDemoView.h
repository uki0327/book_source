
// TransparentDemoView.h : CTransparentDemoView Ŭ������ �������̽�
//


#pragma once
#include "TransparentWnd.h"


class CTransparentDemoView : public CView
{
protected: // serialization������ ��������ϴ�.
	CTransparentDemoView();
	DECLARE_DYNCREATE(CTransparentDemoView)

// Ư���Դϴ�.
public:
	CTransparentDemoDoc* GetDocument() const;

	CTransparentWnd		m_wndChild;

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
	virtual ~CTransparentDemoView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnPaint();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // TransparentDemoView.cpp�� ����� ����
inline CTransparentDemoDoc* CTransparentDemoView::GetDocument() const
   { return reinterpret_cast<CTransparentDemoDoc*>(m_pDocument); }
#endif

