
// GdiplusLineDoc.h : CGdiplusLineDoc Ŭ������ �������̽�
//


#pragma once


class CGdiplusLineDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CGdiplusLineDoc();
	DECLARE_DYNCREATE(CGdiplusLineDoc)

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
	virtual ~CGdiplusLineDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


