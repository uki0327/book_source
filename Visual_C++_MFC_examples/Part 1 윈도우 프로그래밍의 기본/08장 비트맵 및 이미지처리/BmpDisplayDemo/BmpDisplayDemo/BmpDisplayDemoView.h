
// BmpDisplayDemoView.h : CBmpDisplayDemoView Ŭ������ �������̽�
//


#pragma once


class CBmpDisplayDemoView : public CView
{
protected: // serialization������ ��������ϴ�.
	CBmpDisplayDemoView();
	DECLARE_DYNCREATE(CBmpDisplayDemoView)

// Ư���Դϴ�.
public:
	CBmpDisplayDemoDoc* GetDocument() const;

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
	virtual ~CBmpDisplayDemoView();
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

#ifndef _DEBUG  // BmpDisplayDemoView.cpp�� ����� ����
inline CBmpDisplayDemoDoc* CBmpDisplayDemoView::GetDocument() const
   { return reinterpret_cast<CBmpDisplayDemoDoc*>(m_pDocument); }
#endif

