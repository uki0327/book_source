
// Vs2005StyleView.h : CVs2005StyleView Ŭ������ �������̽�
//


#pragma once


class CVs2005StyleView : public CView
{
protected: // serialization������ ��������ϴ�.
	CVs2005StyleView();
	DECLARE_DYNCREATE(CVs2005StyleView)

// Ư���Դϴ�.
public:
	CVs2005StyleDoc* GetDocument() const;

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
	virtual ~CVs2005StyleView();
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

#ifndef _DEBUG  // Vs2005StyleView.cpp�� ����� ����
inline CVs2005StyleDoc* CVs2005StyleView::GetDocument() const
   { return reinterpret_cast<CVs2005StyleDoc*>(m_pDocument); }
#endif

