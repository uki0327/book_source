
// FrameRgnDoc.h : CFrameRgnDoc Ŭ������ �������̽�
//


#pragma once


class CFrameRgnDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CFrameRgnDoc();
	DECLARE_DYNCREATE(CFrameRgnDoc)

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
	virtual ~CFrameRgnDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


