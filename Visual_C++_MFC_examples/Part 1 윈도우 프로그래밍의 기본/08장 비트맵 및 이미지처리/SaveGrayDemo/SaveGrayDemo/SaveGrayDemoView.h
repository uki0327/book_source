
// SaveGrayDemoView.h : CSaveGrayDemoView Ŭ������ �������̽�
//


#pragma once


class CSaveGrayDemoView : public CView
{
protected: // serialization������ ��������ϴ�.
	CSaveGrayDemoView();
	DECLARE_DYNCREATE(CSaveGrayDemoView)

// Ư���Դϴ�.
public:
	CSaveGrayDemoDoc* GetDocument() const;

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
	virtual ~CSaveGrayDemoView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // SaveGrayDemoView.cpp�� ����� ����
inline CSaveGrayDemoDoc* CSaveGrayDemoView::GetDocument() const
   { return reinterpret_cast<CSaveGrayDemoDoc*>(m_pDocument); }
#endif

