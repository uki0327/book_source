
// PagerDemoDoc.h : CPagerDemoDoc Ŭ������ �������̽�
//


#pragma once


class CPagerDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CPagerDemoDoc();
	DECLARE_DYNCREATE(CPagerDemoDoc)

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
	virtual ~CPagerDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


