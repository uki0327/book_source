
// TriangleDemoDoc.h : CTriangleDemoDoc Ŭ������ �������̽�
//


#pragma once


class CTriangleDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CTriangleDemoDoc();
	DECLARE_DYNCREATE(CTriangleDemoDoc)

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
	virtual ~CTriangleDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


