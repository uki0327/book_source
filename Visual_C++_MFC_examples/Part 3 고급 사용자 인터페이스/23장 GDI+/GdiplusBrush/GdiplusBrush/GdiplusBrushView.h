
// GdiplusBrushView.h : CGdiplusBrushView Ŭ������ �������̽�
//


#pragma once


class CGdiplusBrushView : public CView
{
protected: // serialization������ ��������ϴ�.
	CGdiplusBrushView();
	DECLARE_DYNCREATE(CGdiplusBrushView)

// Ư���Դϴ�.
public:
	CGdiplusBrushDoc* GetDocument() const;

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
	virtual ~CGdiplusBrushView();
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

#ifndef _DEBUG  // GdiplusBrushView.cpp�� ����� ����
inline CGdiplusBrushDoc* CGdiplusBrushView::GetDocument() const
   { return reinterpret_cast<CGdiplusBrushDoc*>(m_pDocument); }
#endif

