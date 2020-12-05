
// ImageRgnView.h : CImageRgnView Ŭ������ �������̽�
//


#pragma once

#include <atlimage.h>


class CImageRgnView : public CView
{
protected: // serialization������ ��������ϴ�.
	CImageRgnView();
	DECLARE_DYNCREATE(CImageRgnView)

// Ư���Դϴ�.
public:
	CImageRgnDoc* GetDocument() const;

	CImage		m_ImgSample;		//����̹���
	CRect		m_rectVisible;		//ȭ�鿡 ���̴� ����

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
	virtual ~CImageRgnView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnPaint();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ImageRgnView.cpp�� ����� ����
inline CImageRgnDoc* CImageRgnView::GetDocument() const
   { return reinterpret_cast<CImageRgnDoc*>(m_pDocument); }
#endif

