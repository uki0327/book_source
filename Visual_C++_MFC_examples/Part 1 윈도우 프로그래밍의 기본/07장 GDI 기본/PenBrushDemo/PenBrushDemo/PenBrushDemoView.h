
// PenBrushDemoView.h : CPenBrushDemoView Ŭ������ �������̽�
//


#pragma once


class CPenBrushDemoView : public CView
{
protected: // serialization������ ��������ϴ�.
	CPenBrushDemoView();
	DECLARE_DYNCREATE(CPenBrushDemoView)

// Ư���Դϴ�.
public:
	CPenBrushDemoDoc* GetDocument() const;

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
	virtual ~CPenBrushDemoView();
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

#ifndef _DEBUG  // PenBrushDemoView.cpp�� ����� ����
inline CPenBrushDemoDoc* CPenBrushDemoView::GetDocument() const
   { return reinterpret_cast<CPenBrushDemoDoc*>(m_pDocument); }
#endif

