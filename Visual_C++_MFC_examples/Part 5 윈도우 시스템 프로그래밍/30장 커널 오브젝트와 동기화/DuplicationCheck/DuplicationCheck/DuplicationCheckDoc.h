
// DuplicationCheckDoc.h : CDuplicationCheckDoc Ŭ������ �������̽�
//


#pragma once


class CDuplicationCheckDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CDuplicationCheckDoc();
	DECLARE_DYNCREATE(CDuplicationCheckDoc)

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
	virtual ~CDuplicationCheckDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


