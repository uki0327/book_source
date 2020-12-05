
// MouseMsgView.h : CMouseMsgView Ŭ������ �������̽�
//


#pragma once


class CMouseMsgView : public CView
{
protected: // serialization������ ��������ϴ�.
	CMouseMsgView();
	DECLARE_DYNCREATE(CMouseMsgView)

// Ư���Դϴ�.
public:
	CMouseMsgDoc* GetDocument() const;

// �۾��Դϴ�.
public:
	CPoint		m_ptMouse;		//���콺 �������� ��ǥ
	CPoint		m_ptLeft;		//���콺 ���� ��ư�� ���� ��ǥ
	CPoint		m_ptRight;		//���콺 ������ ��ư�� ���� ��ǥ

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
	virtual ~CMouseMsgView();
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
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
};

#ifndef _DEBUG  // MouseMsgView.cpp�� ����� ����
inline CMouseMsgDoc* CMouseMsgView::GetDocument() const
   { return reinterpret_cast<CMouseMsgDoc*>(m_pDocument); }
#endif

