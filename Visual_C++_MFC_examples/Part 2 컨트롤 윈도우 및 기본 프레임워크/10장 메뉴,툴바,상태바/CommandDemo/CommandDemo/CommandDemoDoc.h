
// CommandDemoDoc.h : CCommandDemoDoc Ŭ������ �������̽�
//


#pragma once


class CCommandDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CCommandDemoDoc();
	DECLARE_DYNCREATE(CCommandDemoDoc)

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
	virtual ~CCommandDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMenuStart();
};


