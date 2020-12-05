
// StaticDemoView.h : CStaticDemoView Ŭ������ �������̽�
//


#pragma once


class CStaticDemoView : public CView
{
protected: // serialization������ ��������ϴ�.
	CStaticDemoView();
	DECLARE_DYNCREATE(CStaticDemoView)

// Ư���Դϴ�.
public:
	CStaticDemoDoc* GetDocument() const;

	CStatic		m_wndStatic;		//����ƽ ��Ʈ�� ������

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
	virtual ~CStaticDemoView();
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

#ifndef _DEBUG  // StaticDemoView.cpp�� ����� ����
inline CStaticDemoDoc* CStaticDemoView::GetDocument() const
   { return reinterpret_cast<CStaticDemoDoc*>(m_pDocument); }
#endif

