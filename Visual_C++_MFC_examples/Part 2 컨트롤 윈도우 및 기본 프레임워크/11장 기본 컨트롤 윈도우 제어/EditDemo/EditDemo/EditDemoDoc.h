
// EditDemoDoc.h : CEditDemoDoc Ŭ������ �������̽�
//


#pragma once


class CEditDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CEditDemoDoc();
	DECLARE_DYNCREATE(CEditDemoDoc)

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
	virtual ~CEditDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


