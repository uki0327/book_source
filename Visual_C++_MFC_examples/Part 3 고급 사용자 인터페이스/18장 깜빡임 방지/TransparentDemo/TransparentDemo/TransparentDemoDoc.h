
// TransparentDemoDoc.h : CTransparentDemoDoc Ŭ������ �������̽�
//


#pragma once


class CTransparentDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CTransparentDemoDoc();
	DECLARE_DYNCREATE(CTransparentDemoDoc)

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
	virtual ~CTransparentDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


