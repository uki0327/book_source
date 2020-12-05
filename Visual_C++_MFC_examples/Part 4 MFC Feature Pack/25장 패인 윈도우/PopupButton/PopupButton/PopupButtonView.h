
// PopupButtonView.h : CPopupButtonView Ŭ������ �������̽�
//


#pragma once


class CPopupButtonView : public CView
{
protected: // serialization������ ��������ϴ�.
	CPopupButtonView();
	DECLARE_DYNCREATE(CPopupButtonView)

// Ư���Դϴ�.
public:
	CPopupButtonDoc* GetDocument() const;

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
	virtual ~CPopupButtonView();
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

#ifndef _DEBUG  // PopupButtonView.cpp�� ����� ����
inline CPopupButtonDoc* CPopupButtonView::GetDocument() const
   { return reinterpret_cast<CPopupButtonDoc*>(m_pDocument); }
#endif

