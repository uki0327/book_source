
// MapModeDemoDoc.h : CMapModeDemoDoc Ŭ������ �������̽�
//


#pragma once


class CMapModeDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CMapModeDemoDoc();
	DECLARE_DYNCREATE(CMapModeDemoDoc)

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
	virtual ~CMapModeDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


