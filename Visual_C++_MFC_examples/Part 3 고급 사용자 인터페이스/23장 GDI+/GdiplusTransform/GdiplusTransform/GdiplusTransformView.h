
// GdiplusTransformView.h : CGdiplusTransformView Ŭ������ �������̽�
//


#pragma once


class CGdiplusTransformView : public CView
{
protected: // serialization������ ��������ϴ�.
	CGdiplusTransformView();
	DECLARE_DYNCREATE(CGdiplusTransformView)

// Ư���Դϴ�.
public:
	CGdiplusTransformDoc* GetDocument() const;

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
	virtual ~CGdiplusTransformView();
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

#ifndef _DEBUG  // GdiplusTransformView.cpp�� ����� ����
inline CGdiplusTransformDoc* CGdiplusTransformView::GetDocument() const
   { return reinterpret_cast<CGdiplusTransformDoc*>(m_pDocument); }
#endif

