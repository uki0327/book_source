
// SdiSeqDoc.h : CSdiSeqDoc Ŭ������ �������̽�
//


#pragma once


class CSdiSeqDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CSdiSeqDoc();
	DECLARE_DYNCREATE(CSdiSeqDoc)

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
	virtual ~CSdiSeqDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


