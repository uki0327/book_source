
// PrintDemoView.h : CPrintDemoView Ŭ������ �������̽�
//


#pragma once


class CPrintDemoView : public CView
{
protected: // serialization������ ��������ϴ�.
	CPrintDemoView();
	DECLARE_DYNCREATE(CPrintDemoView)

// Ư���Դϴ�.
public:
	CPrintDemoDoc* GetDocument() const;

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
	virtual ~CPrintDemoView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
};

#ifndef _DEBUG  // PrintDemoView.cpp�� ����� ����
inline CPrintDemoDoc* CPrintDemoView::GetDocument() const
   { return reinterpret_cast<CPrintDemoDoc*>(m_pDocument); }
#endif

