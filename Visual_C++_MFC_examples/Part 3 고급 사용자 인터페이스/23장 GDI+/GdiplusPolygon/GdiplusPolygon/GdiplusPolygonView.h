
// GdiplusPolygonView.h : CGdiplusPolygonView Ŭ������ �������̽�
//


#pragma once


class CGdiplusPolygonView : public CView
{
protected: // serialization������ ��������ϴ�.
	CGdiplusPolygonView();
	DECLARE_DYNCREATE(CGdiplusPolygonView)

// Ư���Դϴ�.
public:
	CGdiplusPolygonDoc* GetDocument() const;

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
	virtual ~CGdiplusPolygonView();
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

#ifndef _DEBUG  // GdiplusPolygonView.cpp�� ����� ����
inline CGdiplusPolygonDoc* CGdiplusPolygonView::GetDocument() const
   { return reinterpret_cast<CGdiplusPolygonDoc*>(m_pDocument); }
#endif

