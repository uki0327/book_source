
// RedrawDemoDoc.h : CRedrawDemoDoc Ŭ������ �������̽�
//


#pragma once


class CRedrawDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CRedrawDemoDoc();
	DECLARE_DYNCREATE(CRedrawDemoDoc)

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
	virtual ~CRedrawDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


