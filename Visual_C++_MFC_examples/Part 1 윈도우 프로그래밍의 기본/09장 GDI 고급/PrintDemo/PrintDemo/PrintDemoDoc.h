
// PrintDemoDoc.h : CPrintDemoDoc Ŭ������ �������̽�
//


#pragma once


class CPrintDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CPrintDemoDoc();
	DECLARE_DYNCREATE(CPrintDemoDoc)

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
	virtual ~CPrintDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


