
// DrawTextDemoView.h : CDrawTextDemoView Ŭ������ �������̽�
//


#pragma once


class CDrawTextDemoView : public CView
{
protected: // serialization������ ��������ϴ�.
	CDrawTextDemoView();
	DECLARE_DYNCREATE(CDrawTextDemoView)

// Ư���Դϴ�.
public:
	CDrawTextDemoDoc* GetDocument() const;

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
	virtual ~CDrawTextDemoView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};

#ifndef _DEBUG  // DrawTextDemoView.cpp�� ����� ����
inline CDrawTextDemoDoc* CDrawTextDemoView::GetDocument() const
   { return reinterpret_cast<CDrawTextDemoDoc*>(m_pDocument); }
#endif

