
// DrawModeDemoDoc.h : CDrawModeDemoDoc Ŭ������ �������̽�
//


#pragma once


class CDrawModeDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CDrawModeDemoDoc();
	DECLARE_DYNCREATE(CDrawModeDemoDoc)

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
	virtual ~CDrawModeDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


