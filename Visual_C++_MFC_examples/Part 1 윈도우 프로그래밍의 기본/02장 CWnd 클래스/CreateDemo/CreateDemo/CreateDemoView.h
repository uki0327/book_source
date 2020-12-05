
// CreateDemoView.h : CCreateDemoView Ŭ������ �������̽�
//


#pragma once


class CCreateDemoView : public CView
{
protected: // serialization������ ��������ϴ�.
	CCreateDemoView();
	DECLARE_DYNCREATE(CCreateDemoView)

// Ư���Դϴ�.
public:
	CCreateDemoDoc* GetDocument() const;

// �۾��Դϴ�.
public:
	CWnd	m_wndChild;

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
	virtual ~CCreateDemoView();
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
};

#ifndef _DEBUG  // CreateDemoView.cpp�� ����� ����
inline CCreateDemoDoc* CCreateDemoView::GetDocument() const
   { return reinterpret_cast<CCreateDemoDoc*>(m_pDocument); }
#endif

