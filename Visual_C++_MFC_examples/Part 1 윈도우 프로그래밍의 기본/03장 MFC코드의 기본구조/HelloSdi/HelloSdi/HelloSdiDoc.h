
// HelloSdiDoc.h : CHelloSdiDoc Ŭ������ �������̽�
//


#pragma once


class CHelloSdiDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CHelloSdiDoc();
	DECLARE_DYNCREATE(CHelloSdiDoc)

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
	virtual ~CHelloSdiDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnOpenDocument(LPCTSTR lpszPathName);
};


