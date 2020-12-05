
// TextOutDemoView.h : CTextOutDemoView Ŭ������ �������̽�
//


#pragma once


class CTextOutDemoView : public CView
{
protected: // serialization������ ��������ϴ�.
	CTextOutDemoView();
	DECLARE_DYNCREATE(CTextOutDemoView)

// Ư���Դϴ�.
public:
	CTextOutDemoDoc* GetDocument() const;

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
	virtual ~CTextOutDemoView();
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

#ifndef _DEBUG  // TextOutDemoView.cpp�� ����� ����
inline CTextOutDemoDoc* CTextOutDemoView::GetDocument() const
   { return reinterpret_cast<CTextOutDemoDoc*>(m_pDocument); }
#endif

