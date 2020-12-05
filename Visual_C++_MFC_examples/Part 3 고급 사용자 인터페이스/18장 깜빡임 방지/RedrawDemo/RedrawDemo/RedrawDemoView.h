
// RedrawDemoView.h : CRedrawDemoView Ŭ������ �������̽�
//


#pragma once


class CRedrawDemoView : public CView
{
protected: // serialization������ ��������ϴ�.
	CRedrawDemoView();
	DECLARE_DYNCREATE(CRedrawDemoView)

// Ư���Դϴ�.
public:
	CRedrawDemoDoc* GetDocument() const;

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
	virtual ~CRedrawDemoView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
};

#ifndef _DEBUG  // RedrawDemoView.cpp�� ����� ����
inline CRedrawDemoDoc* CRedrawDemoView::GetDocument() const
   { return reinterpret_cast<CRedrawDemoDoc*>(m_pDocument); }
#endif

