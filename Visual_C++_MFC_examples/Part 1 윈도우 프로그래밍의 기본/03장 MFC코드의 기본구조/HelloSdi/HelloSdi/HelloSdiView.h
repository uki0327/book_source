
// HelloSdiView.h : CHelloSdiView Ŭ������ �������̽�
//


#pragma once


class CHelloSdiView : public CEditView
{
protected: // serialization������ ��������ϴ�.
	CHelloSdiView();
	DECLARE_DYNCREATE(CHelloSdiView)

// Ư���Դϴ�.
public:
	CHelloSdiDoc* GetDocument() const;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// �����Դϴ�.
public:
	virtual ~CHelloSdiView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // HelloSdiView.cpp�� ����� ����
inline CHelloSdiDoc* CHelloSdiView::GetDocument() const
   { return reinterpret_cast<CHelloSdiDoc*>(m_pDocument); }
#endif

