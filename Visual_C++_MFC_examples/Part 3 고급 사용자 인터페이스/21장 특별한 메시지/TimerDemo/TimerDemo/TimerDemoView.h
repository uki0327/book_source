
// TimerDemoView.h : CTimerDemoView Ŭ������ �������̽�
//


#pragma once


class CTimerDemoView : public CView
{
protected: // serialization������ ��������ϴ�.
	CTimerDemoView();
	DECLARE_DYNCREATE(CTimerDemoView)

// Ư���Դϴ�.
public:
	CTimerDemoDoc* GetDocument() const;

	int		m_nImageX;
	int		m_nImageY;

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
	virtual ~CTimerDemoView();
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
	afx_msg void OnClose();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnPaint();
};

#ifndef _DEBUG  // TimerDemoView.cpp�� ����� ����
inline CTimerDemoDoc* CTimerDemoView::GetDocument() const
   { return reinterpret_cast<CTimerDemoDoc*>(m_pDocument); }
#endif

