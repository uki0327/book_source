
// DateTimeBtnDoc.h : CDateTimeBtnDoc Ŭ������ �������̽�
//


#pragma once


class CDateTimeBtnDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CDateTimeBtnDoc();
	DECLARE_DYNCREATE(CDateTimeBtnDoc)

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
	virtual ~CDateTimeBtnDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


