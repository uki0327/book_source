
// BmpDisplayDemoDoc.h : CBmpDisplayDemoDoc Ŭ������ �������̽�
//


#pragma once


class CBmpDisplayDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CBmpDisplayDemoDoc();
	DECLARE_DYNCREATE(CBmpDisplayDemoDoc)

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
	virtual ~CBmpDisplayDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


