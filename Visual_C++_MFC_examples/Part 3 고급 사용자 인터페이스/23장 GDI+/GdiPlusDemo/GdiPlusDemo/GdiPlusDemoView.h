
// GdiPlusDemoView.h : CGdiPlusDemoView Ŭ������ �������̽�
//


#pragma once


class CGdiPlusDemoView : public CView
{
protected: // serialization������ ��������ϴ�.
	CGdiPlusDemoView();
	DECLARE_DYNCREATE(CGdiPlusDemoView)

// Ư���Դϴ�.
public:
	CGdiPlusDemoDoc* GetDocument() const;

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
	virtual ~CGdiPlusDemoView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // GdiPlusDemoView.cpp�� ����� ����
inline CGdiPlusDemoDoc* CGdiPlusDemoView::GetDocument() const
   { return reinterpret_cast<CGdiPlusDemoDoc*>(m_pDocument); }
#endif

