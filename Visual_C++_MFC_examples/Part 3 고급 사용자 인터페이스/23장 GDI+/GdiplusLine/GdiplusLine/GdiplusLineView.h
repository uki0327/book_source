
// GdiplusLineView.h : CGdiplusLineView Ŭ������ �������̽�
//


#pragma once


class CGdiplusLineView : public CView
{
protected: // serialization������ ��������ϴ�.
	CGdiplusLineView();
	DECLARE_DYNCREATE(CGdiplusLineView)

// Ư���Դϴ�.
public:
	CGdiplusLineDoc* GetDocument() const;

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
	virtual ~CGdiplusLineView();
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

#ifndef _DEBUG  // GdiplusLineView.cpp�� ����� ����
inline CGdiplusLineDoc* CGdiplusLineView::GetDocument() const
   { return reinterpret_cast<CGdiplusLineDoc*>(m_pDocument); }
#endif

