
// UpdateDemoDoc.h : CUpdateDemoDoc Ŭ������ �������̽�
//


#pragma once


class CUpdateDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CUpdateDemoDoc();
	DECLARE_DYNCREATE(CUpdateDemoDoc)

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
	virtual ~CUpdateDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


