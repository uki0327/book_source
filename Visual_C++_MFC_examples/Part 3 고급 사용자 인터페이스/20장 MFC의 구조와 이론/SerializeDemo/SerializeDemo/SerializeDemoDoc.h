
// SerializeDemoDoc.h : CSerializeDemoDoc Ŭ������ �������̽�
//


#pragma once


class CSerializeDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CSerializeDemoDoc();
	DECLARE_DYNCREATE(CSerializeDemoDoc)

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
	virtual ~CSerializeDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


