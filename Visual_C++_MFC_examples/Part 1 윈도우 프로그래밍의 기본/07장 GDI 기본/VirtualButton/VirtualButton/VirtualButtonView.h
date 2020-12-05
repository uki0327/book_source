
// VirtualButtonView.h : CVirtualButtonView Ŭ������ �������̽�
//


#pragma once


class CVirtualButtonView : public CView
{
protected: // serialization������ ��������ϴ�.
	CVirtualButtonView();
	DECLARE_DYNCREATE(CVirtualButtonView)

// Ư���Դϴ�.
public:
	CVirtualButtonDoc* GetDocument() const;

	CRect	m_BtnRect;		//��ư�� �׷��� ��ġ
	BOOL	m_bClicked;		//��ư�� Ŭ���� �������� ��Ÿ���� �÷���

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
	virtual ~CVirtualButtonView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnPaint();
};

#ifndef _DEBUG  // VirtualButtonView.cpp�� ����� ����
inline CVirtualButtonDoc* CVirtualButtonView::GetDocument() const
   { return reinterpret_cast<CVirtualButtonDoc*>(m_pDocument); }
#endif

