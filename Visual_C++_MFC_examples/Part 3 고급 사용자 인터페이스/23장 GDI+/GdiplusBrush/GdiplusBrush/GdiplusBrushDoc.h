
// GdiplusBrushDoc.h : CGdiplusBrushDoc Ŭ������ �������̽�
//


#pragma once


class CGdiplusBrushDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CGdiplusBrushDoc();
	DECLARE_DYNCREATE(CGdiplusBrushDoc)

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
	virtual ~CGdiplusBrushDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


