
// TextRgnDoc.h : CTextRgnDoc Ŭ������ �������̽�
//


#pragma once


class CTextRgnDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CTextRgnDoc();
	DECLARE_DYNCREATE(CTextRgnDoc)

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
	virtual ~CTextRgnDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


