
// ImageOverView.h : CImageOverView Ŭ������ �������̽�
//


#pragma once


class CImageOverView : public CView
{
protected: // serialization������ ��������ϴ�.
	CImageOverView();
	DECLARE_DYNCREATE(CImageOverView)

// Ư���Դϴ�.
public:
	CImageOverDoc* GetDocument() const;

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
	virtual ~CImageOverView();
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

#ifndef _DEBUG  // ImageOverView.cpp�� ����� ����
inline CImageOverDoc* CImageOverView::GetDocument() const
   { return reinterpret_cast<CImageOverDoc*>(m_pDocument); }
#endif

