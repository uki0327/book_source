
// DockingDemoDoc.cpp : CDockingDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "DockingDemo.h"

#include "DockingDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDockingDemoDoc

IMPLEMENT_DYNCREATE(CDockingDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CDockingDemoDoc, CDocument)
END_MESSAGE_MAP()


// CDockingDemoDoc ����/�Ҹ�

CDockingDemoDoc::CDockingDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CDockingDemoDoc::~CDockingDemoDoc()
{
}

BOOL CDockingDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CDockingDemoDoc serialization

void CDockingDemoDoc::Serialize(CArchive& ar)
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


// CDockingDemoDoc ����

#ifdef _DEBUG
void CDockingDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CDockingDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CDockingDemoDoc ���
