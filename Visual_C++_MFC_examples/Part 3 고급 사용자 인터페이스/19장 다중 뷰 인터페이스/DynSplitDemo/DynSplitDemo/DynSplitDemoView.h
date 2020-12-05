
// DynSplitDemoView.h : CDynSplitDemoView Ŭ������ �������̽�
//


#pragma once


class CDynSplitDemoView : public CHtmlView
{
protected: // serialization������ ��������ϴ�.
	CDynSplitDemoView();
	DECLARE_DYNCREATE(CDynSplitDemoView)

// Ư���Դϴ�.
public:
	CDynSplitDemoDoc* GetDocument() const;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void OnInitialUpdate(); // ���� �� ó�� ȣ��Ǿ����ϴ�.

// �����Դϴ�.
public:
	virtual ~CDynSplitDemoView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // DynSplitDemoView.cpp�� ����� ����
inline CDynSplitDemoDoc* CDynSplitDemoView::GetDocument() const
   { return reinterpret_cast<CDynSplitDemoDoc*>(m_pDocument); }
#endif

