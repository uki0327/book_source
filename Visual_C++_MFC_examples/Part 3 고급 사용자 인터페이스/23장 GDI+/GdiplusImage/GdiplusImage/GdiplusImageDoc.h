
// GdiplusImageDoc.h : CGdiplusImageDoc Ŭ������ �������̽�
//


#pragma once


class CGdiplusImageDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CGdiplusImageDoc();
	DECLARE_DYNCREATE(CGdiplusImageDoc)

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
	virtual ~CGdiplusImageDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


