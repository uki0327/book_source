
// BmpOutDemoDoc.h : CBmpOutDemoDoc Ŭ������ �������̽�
//


#pragma once


class CBmpOutDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CBmpOutDemoDoc();
	DECLARE_DYNCREATE(CBmpOutDemoDoc)

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
	virtual ~CBmpOutDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


