
// GdiPlusDemoDoc.h : CGdiPlusDemoDoc Ŭ������ �������̽�
//


#pragma once


class CGdiPlusDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CGdiPlusDemoDoc();
	DECLARE_DYNCREATE(CGdiPlusDemoDoc)

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
	virtual ~CGdiPlusDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


