
// MouseCombiDoc.h : CMouseCombiDoc Ŭ������ �������̽�
//


#pragma once


class CMouseCombiDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CMouseCombiDoc();
	DECLARE_DYNCREATE(CMouseCombiDoc)

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
	virtual ~CMouseCombiDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


