
// PaneDemoDoc.h : CPaneDemoDoc Ŭ������ �������̽�
//


#pragma once


class CPaneDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CPaneDemoDoc();
	DECLARE_DYNCREATE(CPaneDemoDoc)

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
	virtual ~CPaneDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


