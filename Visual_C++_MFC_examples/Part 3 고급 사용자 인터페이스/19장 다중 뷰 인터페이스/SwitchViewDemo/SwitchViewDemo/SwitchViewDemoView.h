
// SwitchViewDemoView.h : CSwitchViewDemoView Ŭ������ �������̽�
//


#pragma once


class CSwitchViewDemoView : public CView
{
protected: // serialization������ ��������ϴ�.
	CSwitchViewDemoView();
	DECLARE_DYNCREATE(CSwitchViewDemoView)

// Ư���Դϴ�.
public:
	CSwitchViewDemoDoc* GetDocument() const;

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
	virtual ~CSwitchViewDemoView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // SwitchViewDemoView.cpp�� ����� ����
inline CSwitchViewDemoDoc* CSwitchViewDemoView::GetDocument() const
   { return reinterpret_cast<CSwitchViewDemoDoc*>(m_pDocument); }
#endif

