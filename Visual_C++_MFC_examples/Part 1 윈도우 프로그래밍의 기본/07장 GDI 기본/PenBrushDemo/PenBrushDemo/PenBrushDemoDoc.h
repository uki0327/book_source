
// PenBrushDemoDoc.h : CPenBrushDemoDoc Ŭ������ �������̽�
//


#pragma once


class CPenBrushDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CPenBrushDemoDoc();
	DECLARE_DYNCREATE(CPenBrushDemoDoc)

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
	virtual ~CPenBrushDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


