
// DockingDemoDoc.h : CDockingDemoDoc Ŭ������ �������̽�
//


#pragma once


class CDockingDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CDockingDemoDoc();
	DECLARE_DYNCREATE(CDockingDemoDoc)

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
	virtual ~CDockingDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


