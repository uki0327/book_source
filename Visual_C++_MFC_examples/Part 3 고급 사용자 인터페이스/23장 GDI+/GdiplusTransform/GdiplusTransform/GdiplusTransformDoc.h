
// GdiplusTransformDoc.h : CGdiplusTransformDoc Ŭ������ �������̽�
//


#pragma once


class CGdiplusTransformDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CGdiplusTransformDoc();
	DECLARE_DYNCREATE(CGdiplusTransformDoc)

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
	virtual ~CGdiplusTransformDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


