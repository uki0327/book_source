
// ExitWinDemoView.h : CExitWinDemoView Ŭ������ �������̽�
//


#pragma once


class CExitWinDemoView : public CView
{
protected: // serialization������ ��������ϴ�.
	CExitWinDemoView();
	DECLARE_DYNCREATE(CExitWinDemoView)

// Ư���Դϴ�.
public:
	CExitWinDemoDoc* GetDocument() const;

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
	virtual ~CExitWinDemoView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ExitWinDemoView.cpp�� ����� ����
inline CExitWinDemoDoc* CExitWinDemoView::GetDocument() const
   { return reinterpret_cast<CExitWinDemoDoc*>(m_pDocument); }
#endif

