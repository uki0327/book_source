
// UserMsgDemoDoc.h : CUserMsgDemoDoc Ŭ������ �������̽�
//


#pragma once


class CUserMsgDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CUserMsgDemoDoc();
	DECLARE_DYNCREATE(CUserMsgDemoDoc)

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
	virtual ~CUserMsgDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


