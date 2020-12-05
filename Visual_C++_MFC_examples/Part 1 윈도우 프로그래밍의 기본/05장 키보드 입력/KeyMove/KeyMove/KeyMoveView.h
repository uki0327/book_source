
// KeyMoveView.h : CKeyMoveView Ŭ������ �������̽�
//


#pragma once


class CKeyMoveView : public CView
{
protected: // serialization������ ��������ϴ�.
	CKeyMoveView();
	DECLARE_DYNCREATE(CKeyMoveView)

// Ư���Դϴ�.
public:
	CKeyMoveDoc* GetDocument() const;

// �۾��Դϴ�.
public:
	CWnd		m_wndChild;

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
	virtual ~CKeyMoveView();
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
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnSysKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnSysChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // KeyMoveView.cpp�� ����� ����
inline CKeyMoveDoc* CKeyMoveView::GetDocument() const
   { return reinterpret_cast<CKeyMoveDoc*>(m_pDocument); }
#endif

