
// StaticDemoDoc.h : CStaticDemoDoc Ŭ������ �������̽�
//


#pragma once


class CStaticDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CStaticDemoDoc();
	DECLARE_DYNCREATE(CStaticDemoDoc)

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
	virtual ~CStaticDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


