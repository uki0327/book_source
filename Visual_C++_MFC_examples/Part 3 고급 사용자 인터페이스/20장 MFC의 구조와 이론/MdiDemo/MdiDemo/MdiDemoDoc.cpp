
// MdiDemoDoc.cpp : CMdiDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "MdiDemo.h"

#include "MdiDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMdiDemoDoc

IMPLEMENT_DYNCREATE(CMdiDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CMdiDemoDoc, CDocument)
END_MESSAGE_MAP()


// CMdiDemoDoc ����/�Ҹ�

CMdiDemoDoc::CMdiDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CMdiDemoDoc::~CMdiDemoDoc()
{
}

BOOL CMdiDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CMdiDemoDoc serialization

void CMdiDemoDoc::Serialize(CArchive& ar)
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


// CMdiDemoDoc ����

#ifdef _DEBUG
void CMdiDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMdiDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CMdiDemoDoc ���
