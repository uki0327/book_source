
// SaveGrayDemoDoc.h : CSaveGrayDemoDoc Ŭ������ �������̽�
//


#pragma once


class CSaveGrayDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CSaveGrayDemoDoc();
	DECLARE_DYNCREATE(CSaveGrayDemoDoc)

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
	virtual ~CSaveGrayDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


