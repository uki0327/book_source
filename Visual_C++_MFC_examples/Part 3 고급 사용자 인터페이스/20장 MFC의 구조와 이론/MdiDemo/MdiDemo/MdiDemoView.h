
// MdiDemoView.h : CMdiDemoView Ŭ������ �������̽�
//


#pragma once


class CMdiDemoView : public CView
{
protected: // serialization������ ��������ϴ�.
	CMdiDemoView();
	DECLARE_DYNCREATE(CMdiDemoView)

// Ư���Դϴ�.
public:
	CMdiDemoDoc* GetDocument() const;

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
	virtual ~CMdiDemoView();
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

#ifndef _DEBUG  // MdiDemoView.cpp�� ����� ����
inline CMdiDemoDoc* CMdiDemoView::GetDocument() const
   { return reinterpret_cast<CMdiDemoDoc*>(m_pDocument); }
#endif

