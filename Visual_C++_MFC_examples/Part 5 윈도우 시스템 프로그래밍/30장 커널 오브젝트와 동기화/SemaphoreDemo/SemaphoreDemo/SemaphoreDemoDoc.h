
// SemaphoreDemoDoc.h : CSemaphoreDemoDoc Ŭ������ �������̽�
//


#pragma once


class CSemaphoreDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CSemaphoreDemoDoc();
	DECLARE_DYNCREATE(CSemaphoreDemoDoc)

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
	virtual ~CSemaphoreDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


