
// MdiDemoDoc.h : CMdiDemoDoc Ŭ������ �������̽�
//


#pragma once


class CMdiDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CMdiDemoDoc();
	DECLARE_DYNCREATE(CMdiDemoDoc)

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
	virtual ~CMdiDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


