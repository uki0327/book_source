
// TextOutDemoDoc.h : CTextOutDemoDoc Ŭ������ �������̽�
//


#pragma once


class CTextOutDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CTextOutDemoDoc();
	DECLARE_DYNCREATE(CTextOutDemoDoc)

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
	virtual ~CTextOutDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


