
// SerializeDemoView.h : CSerializeDemoView Ŭ������ �������̽�
//


#pragma once


class CSerializeDemoView : public CEditView
{
protected: // serialization������ ��������ϴ�.
	CSerializeDemoView();
	DECLARE_DYNCREATE(CSerializeDemoView)

// Ư���Դϴ�.
public:
	CSerializeDemoDoc* GetDocument() const;

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
	virtual ~CSerializeDemoView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
public:
	virtual void Serialize(CArchive& ar);
};

#ifndef _DEBUG  // SerializeDemoView.cpp�� ����� ����
inline CSerializeDemoDoc* CSerializeDemoView::GetDocument() const
   { return reinterpret_cast<CSerializeDemoDoc*>(m_pDocument); }
#endif

