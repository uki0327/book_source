
// DrawTextDemoDoc.h : CDrawTextDemoDoc Ŭ������ �������̽�
//


#pragma once


class CDrawTextDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CDrawTextDemoDoc();
	DECLARE_DYNCREATE(CDrawTextDemoDoc)

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
	virtual ~CDrawTextDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


