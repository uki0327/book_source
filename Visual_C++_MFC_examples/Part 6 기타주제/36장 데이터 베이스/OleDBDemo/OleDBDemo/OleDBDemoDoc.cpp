
// OleDBDemoDoc.cpp : COleDBDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "OleDBDemo.h"

#include "OleDBDemoSet.h"
#include "OleDBDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COleDBDemoDoc

IMPLEMENT_DYNCREATE(COleDBDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(COleDBDemoDoc, CDocument)
END_MESSAGE_MAP()


// COleDBDemoDoc ����/�Ҹ�

COleDBDemoDoc::COleDBDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

COleDBDemoDoc::~COleDBDemoDoc()
{
}

BOOL COleDBDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// COleDBDemoDoc serialization

void COleDBDemoDoc::Serialize(CArchive& ar)
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


// COleDBDemoDoc ����

#ifdef _DEBUG
void COleDBDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void COleDBDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// COleDBDemoDoc ���
