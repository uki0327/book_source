
// StaticSplitDemoDoc.h : CStaticSplitDemoDoc Ŭ������ �������̽�
//


#pragma once


class CStaticSplitDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CStaticSplitDemoDoc();
	DECLARE_DYNCREATE(CStaticSplitDemoDoc)

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
	virtual ~CStaticSplitDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


