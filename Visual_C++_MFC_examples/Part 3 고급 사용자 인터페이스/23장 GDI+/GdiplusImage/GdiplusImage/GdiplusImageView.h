
// GdiplusImageView.h : CGdiplusImageView Ŭ������ �������̽�
//


#pragma once


class CGdiplusImageView : public CView
{
protected: // serialization������ ��������ϴ�.
	CGdiplusImageView();
	DECLARE_DYNCREATE(CGdiplusImageView)

// Ư���Դϴ�.
public:
	CGdiplusImageDoc* GetDocument() const;

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
	virtual ~CGdiplusImageView();
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

#ifndef _DEBUG  // GdiplusImageView.cpp�� ����� ����
inline CGdiplusImageDoc* CGdiplusImageView::GetDocument() const
   { return reinterpret_cast<CGdiplusImageDoc*>(m_pDocument); }
#endif

