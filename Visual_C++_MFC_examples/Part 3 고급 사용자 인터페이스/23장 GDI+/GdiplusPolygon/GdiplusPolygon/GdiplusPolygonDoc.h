
// GdiplusPolygonDoc.h : CGdiplusPolygonDoc Ŭ������ �������̽�
//


#pragma once


class CGdiplusPolygonDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CGdiplusPolygonDoc();
	DECLARE_DYNCREATE(CGdiplusPolygonDoc)

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
	virtual ~CGdiplusPolygonDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


