
// NewStatusBarDoc.h : CNewStatusBarDoc Ŭ������ �������̽�
//


#pragma once


class CNewStatusBarDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CNewStatusBarDoc();
	DECLARE_DYNCREATE(CNewStatusBarDoc)

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
	virtual ~CNewStatusBarDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


