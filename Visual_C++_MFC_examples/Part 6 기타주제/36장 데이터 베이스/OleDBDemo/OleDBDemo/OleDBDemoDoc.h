
// OleDBDemoDoc.h : COleDBDemoDoc Ŭ������ �������̽�
//


#pragma once
#include "OleDBDemoSet.h"


class COleDBDemoDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	COleDBDemoDoc();
	DECLARE_DYNCREATE(COleDBDemoDoc)

// Ư���Դϴ�.
public:
	COleDBDemoSet m_OleDBDemoSet;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// �����Դϴ�.
public:
	virtual ~COleDBDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


