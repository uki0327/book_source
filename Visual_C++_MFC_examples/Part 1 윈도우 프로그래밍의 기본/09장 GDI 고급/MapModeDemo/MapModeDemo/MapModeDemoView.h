
// MapModeDemoView.h : CMapModeDemoView Ŭ������ �������̽�
//


#pragma once


class CMapModeDemoView : public CView
{
protected: // serialization������ ��������ϴ�.
	CMapModeDemoView();
	DECLARE_DYNCREATE(CMapModeDemoView)

// Ư���Դϴ�.
public:
	CMapModeDemoDoc* GetDocument() const;

	int		m_nZoomRate;		//Ȯ��/��� ����

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
	virtual ~CMapModeDemoView();
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
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
};

#ifndef _DEBUG  // MapModeDemoView.cpp�� ����� ����
inline CMapModeDemoDoc* CMapModeDemoView::GetDocument() const
   { return reinterpret_cast<CMapModeDemoDoc*>(m_pDocument); }
#endif

