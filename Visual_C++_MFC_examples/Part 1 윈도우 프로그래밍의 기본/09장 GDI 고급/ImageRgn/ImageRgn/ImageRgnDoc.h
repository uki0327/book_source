
// ImageRgnDoc.h : CImageRgnDoc Ŭ������ �������̽�
//


#pragma once


class CImageRgnDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CImageRgnDoc();
	DECLARE_DYNCREATE(CImageRgnDoc)

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
	virtual ~CImageRgnDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


