
// ImgOutDemoView.h : CImgOutDemoView Ŭ������ �������̽�
//


#pragma once


class CImgOutDemoView : public CView
{
protected: // serialization������ ��������ϴ�.
	CImgOutDemoView();
	DECLARE_DYNCREATE(CImgOutDemoView)

// Ư���Դϴ�.
public:
	CImgOutDemoDoc* GetDocument() const;

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
	virtual ~CImgOutDemoView();
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

#ifndef _DEBUG  // ImgOutDemoView.cpp�� ����� ����
inline CImgOutDemoDoc* CImgOutDemoView::GetDocument() const
   { return reinterpret_cast<CImgOutDemoDoc*>(m_pDocument); }
#endif

