
// GdiplusPathDoc.h : CGdiplusPathDoc Ŭ������ �������̽�
//


#pragma once


class CGdiplusPathDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CGdiplusPathDoc();
	DECLARE_DYNCREATE(CGdiplusPathDoc)

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
	virtual ~CGdiplusPathDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


