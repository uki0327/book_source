
// CreateDemoDoc.h : CCreateDemoDoc Ŭ������ �������̽�
//


#pragma once


class CCreateDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CCreateDemoDoc();
	DECLARE_DYNCREATE(CCreateDemoDoc)

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
	virtual ~CCreateDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


