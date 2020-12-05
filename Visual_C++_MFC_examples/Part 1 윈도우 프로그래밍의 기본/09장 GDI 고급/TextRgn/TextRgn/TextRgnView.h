
// TextRgnView.h : CTextRgnView Ŭ������ �������̽�
//


#pragma once


class CTextRgnView : public CView
{
protected: // serialization������ ��������ϴ�.
	CTextRgnView();
	DECLARE_DYNCREATE(CTextRgnView)

// Ư���Դϴ�.
public:
	CTextRgnDoc* GetDocument() const;

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
	virtual ~CTextRgnView();
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

#ifndef _DEBUG  // TextRgnView.cpp�� ����� ����
inline CTextRgnDoc* CTextRgnView::GetDocument() const
   { return reinterpret_cast<CTextRgnDoc*>(m_pDocument); }
#endif

