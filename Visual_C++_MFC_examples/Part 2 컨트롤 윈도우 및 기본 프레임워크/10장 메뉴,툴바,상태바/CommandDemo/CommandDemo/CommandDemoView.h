
// CommandDemoView.h : CCommandDemoView Ŭ������ �������̽�
//


#pragma once


class CCommandDemoView : public CView
{
protected: // serialization������ ��������ϴ�.
	CCommandDemoView();
	DECLARE_DYNCREATE(CCommandDemoView)

// Ư���Դϴ�.
public:
	CCommandDemoDoc* GetDocument() const;

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
	virtual ~CCommandDemoView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMenuStart();
};

#ifndef _DEBUG  // CommandDemoView.cpp�� ����� ����
inline CCommandDemoDoc* CCommandDemoView::GetDocument() const
   { return reinterpret_cast<CCommandDemoDoc*>(m_pDocument); }
#endif

