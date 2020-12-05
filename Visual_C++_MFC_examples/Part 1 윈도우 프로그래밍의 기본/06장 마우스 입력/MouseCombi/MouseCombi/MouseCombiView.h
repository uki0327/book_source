
// MouseCombiView.h : CMouseCombiView Ŭ������ �������̽�
//


#pragma once

#include "TrackWnd.h"


class CMouseCombiView : public CView
{
protected: // serialization������ ��������ϴ�.
	CMouseCombiView();
	DECLARE_DYNCREATE(CMouseCombiView)

// Ư���Դϴ�.
public:
	CMouseCombiDoc* GetDocument() const;

// �۾��Դϴ�.
public:
	CPoint		m_ptItemText;		//Ư�� ������ �ؽ�Ʈ�� ��ǥ
	bool		m_bDragFlag;		//�巡�װ� ���۵��� �˸��� �÷���
	CTrackWnd	m_wndTrack;			//���콺 �̺�Ʈ�� ������ ���ϵ� ������

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
	virtual ~CMouseCombiView();
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
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnPaint();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};

#ifndef _DEBUG  // MouseCombiView.cpp�� ����� ����
inline CMouseCombiDoc* CMouseCombiView::GetDocument() const
   { return reinterpret_cast<CMouseCombiDoc*>(m_pDocument); }
#endif

