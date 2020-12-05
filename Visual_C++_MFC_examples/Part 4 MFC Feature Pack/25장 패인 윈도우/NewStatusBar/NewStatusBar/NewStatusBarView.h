
// NewStatusBarView.h : CNewStatusBarView Ŭ������ �������̽�
//


#pragma once


class CNewStatusBarView : public CView
{
protected: // serialization������ ��������ϴ�.
	CNewStatusBarView();
	DECLARE_DYNCREATE(CNewStatusBarView)

// Ư���Դϴ�.
public:
	CNewStatusBarDoc* GetDocument() const;

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
	virtual ~CNewStatusBarView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // NewStatusBarView.cpp�� ����� ����
inline CNewStatusBarDoc* CNewStatusBarView::GetDocument() const
   { return reinterpret_cast<CNewStatusBarDoc*>(m_pDocument); }
#endif

