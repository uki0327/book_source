
// FrameRgnView.h : CFrameRgnView Ŭ������ �������̽�
//


#pragma once


class CFrameRgnView : public CView
{
protected: // serialization������ ��������ϴ�.
	CFrameRgnView();
	DECLARE_DYNCREATE(CFrameRgnView)

// Ư���Դϴ�.
public:
	CFrameRgnDoc* GetDocument() const;

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
	virtual ~CFrameRgnView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // FrameRgnView.cpp�� ����� ����
inline CFrameRgnDoc* CFrameRgnView::GetDocument() const
   { return reinterpret_cast<CFrameRgnDoc*>(m_pDocument); }
#endif

