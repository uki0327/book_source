
// Office2003StyleDoc.h : COffice2003StyleDoc Ŭ������ �������̽�
//


#pragma once


class COffice2003StyleDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	COffice2003StyleDoc();
	DECLARE_DYNCREATE(COffice2003StyleDoc)

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
	virtual ~COffice2003StyleDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


