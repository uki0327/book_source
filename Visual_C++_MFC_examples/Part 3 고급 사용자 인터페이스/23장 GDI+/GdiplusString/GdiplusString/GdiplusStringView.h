
// GdiplusStringView.h : CGdiplusStringView Ŭ������ �������̽�
//


#pragma once


class CGdiplusStringView : public CView
{
protected: // serialization������ ��������ϴ�.
	CGdiplusStringView();
	DECLARE_DYNCREATE(CGdiplusStringView)

// Ư���Դϴ�.
public:
	CGdiplusStringDoc* GetDocument() const;

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
	virtual ~CGdiplusStringView();
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

#ifndef _DEBUG  // GdiplusStringView.cpp�� ����� ����
inline CGdiplusStringDoc* CGdiplusStringView::GetDocument() const
   { return reinterpret_cast<CGdiplusStringDoc*>(m_pDocument); }
#endif

