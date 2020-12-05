
// DateTimeBtnView.h : CDateTimeBtnView Ŭ������ �������̽�
//


#pragma once


class CDateTimeBtnView : public CView
{
protected: // serialization������ ��������ϴ�.
	CDateTimeBtnView();
	DECLARE_DYNCREATE(CDateTimeBtnView)

// Ư���Դϴ�.
public:
	CDateTimeBtnDoc* GetDocument() const;

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
	virtual ~CDateTimeBtnView();
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

#ifndef _DEBUG  // DateTimeBtnView.cpp�� ����� ����
inline CDateTimeBtnDoc* CDateTimeBtnView::GetDocument() const
   { return reinterpret_cast<CDateTimeBtnDoc*>(m_pDocument); }
#endif

