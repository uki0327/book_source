
// Vs2005StyleDoc.h : CVs2005StyleDoc Ŭ������ �������̽�
//


#pragma once


class CVs2005StyleDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CVs2005StyleDoc();
	DECLARE_DYNCREATE(CVs2005StyleDoc)

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
	virtual ~CVs2005StyleDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


