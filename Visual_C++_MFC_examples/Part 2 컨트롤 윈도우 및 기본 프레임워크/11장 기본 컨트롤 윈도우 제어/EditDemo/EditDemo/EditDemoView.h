
// EditDemoView.h : CEditDemoView Ŭ������ �������̽�
//


#pragma once


class CEditDemoView : public CView
{
protected: // serialization������ ��������ϴ�.
	CEditDemoView();
	DECLARE_DYNCREATE(CEditDemoView)

// Ư���Դϴ�.
public:
	CEditDemoDoc* GetDocument() const;

	CEdit		m_wndEdit;

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
	virtual ~CEditDemoView();
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

#ifndef _DEBUG  // EditDemoView.cpp�� ����� ����
inline CEditDemoDoc* CEditDemoView::GetDocument() const
   { return reinterpret_cast<CEditDemoDoc*>(m_pDocument); }
#endif

