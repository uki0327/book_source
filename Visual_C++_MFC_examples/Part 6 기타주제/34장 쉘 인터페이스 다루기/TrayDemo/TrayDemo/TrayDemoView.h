
// TrayDemoView.h : CTrayDemoView Ŭ������ �������̽�
//


#pragma once


class CTrayDemoView : public CView
{
protected: // serialization������ ��������ϴ�.
	CTrayDemoView();
	DECLARE_DYNCREATE(CTrayDemoView)

// Ư���Դϴ�.
public:
	CTrayDemoDoc* GetDocument() const;

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
	virtual ~CTrayDemoView();
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
public:
	virtual void OnInitialUpdate();
};

#ifndef _DEBUG  // TrayDemoView.cpp�� ����� ����
inline CTrayDemoDoc* CTrayDemoView::GetDocument() const
   { return reinterpret_cast<CTrayDemoDoc*>(m_pDocument); }
#endif

