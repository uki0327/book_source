
// DynSplitDemoDoc.h : CDynSplitDemoDoc Ŭ������ �������̽�
//


#pragma once


class CDynSplitDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CDynSplitDemoDoc();
	DECLARE_DYNCREATE(CDynSplitDemoDoc)

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
	virtual ~CDynSplitDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


