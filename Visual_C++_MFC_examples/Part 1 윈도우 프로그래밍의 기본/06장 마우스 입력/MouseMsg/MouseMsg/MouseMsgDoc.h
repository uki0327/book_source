
// MouseMsgDoc.h : CMouseMsgDoc Ŭ������ �������̽�
//


#pragma once


class CMouseMsgDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CMouseMsgDoc();
	DECLARE_DYNCREATE(CMouseMsgDoc)

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
	virtual ~CMouseMsgDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


