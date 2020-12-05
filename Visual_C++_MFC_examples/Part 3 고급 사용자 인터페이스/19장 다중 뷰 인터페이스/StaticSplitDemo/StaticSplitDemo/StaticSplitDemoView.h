
// StaticSplitDemoView.h : CStaticSplitDemoView Ŭ������ �������̽�
//


#pragma once


class CStaticSplitDemoView : public CView
{
protected: // serialization������ ��������ϴ�.
	CStaticSplitDemoView();
	DECLARE_DYNCREATE(CStaticSplitDemoView)

// Ư���Դϴ�.
public:
	CStaticSplitDemoDoc* GetDocument() const;

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
	virtual ~CStaticSplitDemoView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // StaticSplitDemoView.cpp�� ����� ����
inline CStaticSplitDemoDoc* CStaticSplitDemoView::GetDocument() const
   { return reinterpret_cast<CStaticSplitDemoDoc*>(m_pDocument); }
#endif

