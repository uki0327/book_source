
// ImageOverDoc.h : CImageOverDoc Ŭ������ �������̽�
//


#pragma once


class CImageOverDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CImageOverDoc();
	DECLARE_DYNCREATE(CImageOverDoc)

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
	virtual ~CImageOverDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


