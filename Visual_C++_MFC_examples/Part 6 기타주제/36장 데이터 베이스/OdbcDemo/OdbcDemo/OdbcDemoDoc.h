
// OdbcDemoDoc.h : COdbcDemoDoc Ŭ������ �������̽�
//


#pragma once
#include "OdbcDemoSet.h"


class COdbcDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	COdbcDemoDoc();
	DECLARE_DYNCREATE(COdbcDemoDoc)

// Ư���Դϴ�.
public:
	COdbcDemoSet m_OdbcDemoSet;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// �����Դϴ�.
public:
	virtual ~COdbcDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


