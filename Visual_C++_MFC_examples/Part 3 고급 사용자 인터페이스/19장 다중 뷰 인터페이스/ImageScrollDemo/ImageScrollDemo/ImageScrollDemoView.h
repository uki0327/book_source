
// ImageScrollDemoView.h : CImageScrollDemoView Ŭ������ �������̽�
//


#pragma once


class CImageScrollDemoView : public CScrollView
{
protected: // serialization������ ��������ϴ�.
	CImageScrollDemoView();
	DECLARE_DYNCREATE(CImageScrollDemoView)

// Ư���Դϴ�.
public:
	CImageScrollDemoDoc* GetDocument() const;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void OnInitialUpdate(); // ���� �� ó�� ȣ��Ǿ����ϴ�.
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// �����Դϴ�.
public:
	virtual ~CImageScrollDemoView();
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

#ifndef _DEBUG  // ImageScrollDemoView.cpp�� ����� ����
inline CImageScrollDemoDoc* CImageScrollDemoView::GetDocument() const
   { return reinterpret_cast<CImageScrollDemoDoc*>(m_pDocument); }
#endif

