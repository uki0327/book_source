
// UserMsgDemoView.h : CUserMsgDemoView Ŭ������ �������̽�
//


#pragma once


class CUserMsgDemoView : public CView
{
protected: // serialization������ ��������ϴ�.
	CUserMsgDemoView();
	DECLARE_DYNCREATE(CUserMsgDemoView)

// Ư���Դϴ�.
public:
	CUserMsgDemoDoc* GetDocument() const;

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
	virtual ~CUserMsgDemoView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
	LRESULT  OnTestMessage(WPARAM wParam, LPARAM lParam);
};

#ifndef _DEBUG  // UserMsgDemoView.cpp�� ����� ����
inline CUserMsgDemoDoc* CUserMsgDemoView::GetDocument() const
   { return reinterpret_cast<CUserMsgDemoDoc*>(m_pDocument); }
#endif

