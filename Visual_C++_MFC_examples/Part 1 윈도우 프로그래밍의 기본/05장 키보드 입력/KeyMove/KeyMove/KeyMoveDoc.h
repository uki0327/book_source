
// KeyMoveDoc.h : CKeyMoveDoc Ŭ������ �������̽�
//


#pragma once


class CKeyMoveDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CKeyMoveDoc();
	DECLARE_DYNCREATE(CKeyMoveDoc)

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
	virtual ~CKeyMoveDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


