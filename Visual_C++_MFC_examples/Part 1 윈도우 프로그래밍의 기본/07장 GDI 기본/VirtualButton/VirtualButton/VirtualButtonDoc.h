
// VirtualButtonDoc.h : CVirtualButtonDoc Ŭ������ �������̽�
//


#pragma once


class CVirtualButtonDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CVirtualButtonDoc();
	DECLARE_DYNCREATE(CVirtualButtonDoc)

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
	virtual ~CVirtualButtonDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


