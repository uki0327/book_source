
// BmpOutDemoView.h : CBmpOutDemoView Ŭ������ �������̽�
//


#pragma once


class CBmpOutDemoView : public CView
{
protected: // serialization������ ��������ϴ�.
	CBmpOutDemoView();
	DECLARE_DYNCREATE(CBmpOutDemoView)

// Ư���Դϴ�.
public:
	CBmpOutDemoDoc* GetDocument() const;

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
	virtual ~CBmpOutDemoView();
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
};

#ifndef _DEBUG  // BmpOutDemoView.cpp�� ����� ����
inline CBmpOutDemoDoc* CBmpOutDemoView::GetDocument() const
   { return reinterpret_cast<CBmpOutDemoDoc*>(m_pDocument); }
#endif

