
// GdiplusStringDoc.h : CGdiplusStringDoc Ŭ������ �������̽�
//


#pragma once


class CGdiplusStringDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CGdiplusStringDoc();
	DECLARE_DYNCREATE(CGdiplusStringDoc)

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
	virtual ~CGdiplusStringDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


