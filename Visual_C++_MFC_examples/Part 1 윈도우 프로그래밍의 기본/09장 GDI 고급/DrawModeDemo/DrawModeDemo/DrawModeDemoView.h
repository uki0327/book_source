
// DrawModeDemoView.h : CDrawModeDemoView Ŭ������ �������̽�
//


#pragma once


class CDrawModeDemoView : public CView
{
protected: // serialization������ ��������ϴ�.
	CDrawModeDemoView();
	DECLARE_DYNCREATE(CDrawModeDemoView)

// Ư���Դϴ�.
public:
	CDrawModeDemoDoc* GetDocument() const;

	CPoint		m_ptBegin;			//���� �Ǽ��� ������ǥ.
	CPoint		m_ptEnd;			//���� �Ǽ��� ����ǥ.

	CPoint		m_ptDragBegin;		//�巡�װ� ���۵� ��ǥ.
	CPoint		m_ptDragEnd;		//�巡�װ� �������� ��ǥ.

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
	virtual ~CDrawModeDemoView();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	void DrawInvertLine(CPoint point);
	afx_msg void OnPaint();
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // DrawModeDemoView.cpp�� ����� ����
inline CDrawModeDemoDoc* CDrawModeDemoView::GetDocument() const
   { return reinterpret_cast<CDrawModeDemoDoc*>(m_pDocument); }
#endif

