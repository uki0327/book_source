
// NewToolBarDoc.h : CNewToolBarDoc Ŭ������ �������̽�
//


#pragma once


class CNewToolBarDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CNewToolBarDoc();
	DECLARE_DYNCREATE(CNewToolBarDoc)

// Ư���Դϴ�.
public:

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// �����Դϴ�.
public:
	virtual ~CNewToolBarDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


