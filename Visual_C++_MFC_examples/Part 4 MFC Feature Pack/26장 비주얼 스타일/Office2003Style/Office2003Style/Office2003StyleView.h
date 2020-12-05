
// Office2003StyleView.h : COffice2003StyleView Ŭ������ �������̽�
//


#pragma once


class COffice2003StyleView : public CView
{
protected: // serialization������ ��������ϴ�.
	COffice2003StyleView();
	DECLARE_DYNCREATE(COffice2003StyleView)

// Ư���Դϴ�.
public:
	COffice2003StyleDoc* GetDocument() const;

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
	virtual ~COffice2003StyleView();
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

#ifndef _DEBUG  // Office2003StyleView.cpp�� ����� ����
inline COffice2003StyleDoc* COffice2003StyleView::GetDocument() const
   { return reinterpret_cast<COffice2003StyleDoc*>(m_pDocument); }
#endif

