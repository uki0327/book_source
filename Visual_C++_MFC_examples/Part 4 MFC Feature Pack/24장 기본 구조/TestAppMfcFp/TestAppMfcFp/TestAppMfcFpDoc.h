
// TestAppMfcFpDoc.h : CTestAppMfcFpDoc Ŭ������ �������̽�
//


#pragma once


class CTestAppMfcFpDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CTestAppMfcFpDoc();
	DECLARE_DYNCREATE(CTestAppMfcFpDoc)

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
	virtual ~CTestAppMfcFpDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


