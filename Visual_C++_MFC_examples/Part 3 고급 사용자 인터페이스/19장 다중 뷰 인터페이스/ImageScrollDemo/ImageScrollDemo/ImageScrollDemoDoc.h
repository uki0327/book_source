
// ImageScrollDemoDoc.h : CImageScrollDemoDoc Ŭ������ �������̽�
//


#pragma once


class CImageScrollDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CImageScrollDemoDoc();
	DECLARE_DYNCREATE(CImageScrollDemoDoc)

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
	virtual ~CImageScrollDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


