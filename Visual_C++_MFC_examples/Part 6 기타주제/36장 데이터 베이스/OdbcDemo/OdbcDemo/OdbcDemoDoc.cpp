
// OdbcDemoDoc.cpp : COdbcDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "OdbcDemo.h"

#include "OdbcDemoSet.h"
#include "OdbcDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COdbcDemoDoc

IMPLEMENT_DYNCREATE(COdbcDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(COdbcDemoDoc, CDocument)
END_MESSAGE_MAP()


// COdbcDemoDoc ����/�Ҹ�

COdbcDemoDoc::COdbcDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

COdbcDemoDoc::~COdbcDemoDoc()
{
}

BOOL COdbcDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// COdbcDemoDoc serialization

void COdbcDemoDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
	}
	else
	{
		// TODO: ���⿡ �ε� �ڵ带 �߰��մϴ�.
	}
}


// COdbcDemoDoc ����

#ifdef _DEBUG
void COdbcDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void COdbcDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// COdbcDemoDoc ���
