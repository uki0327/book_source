
// RedrawDemoDoc.cpp : CRedrawDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "RedrawDemo.h"

#include "RedrawDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CRedrawDemoDoc

IMPLEMENT_DYNCREATE(CRedrawDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CRedrawDemoDoc, CDocument)
END_MESSAGE_MAP()


// CRedrawDemoDoc ����/�Ҹ�

CRedrawDemoDoc::CRedrawDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CRedrawDemoDoc::~CRedrawDemoDoc()
{
}

BOOL CRedrawDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CRedrawDemoDoc serialization

void CRedrawDemoDoc::Serialize(CArchive& ar)
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


// CRedrawDemoDoc ����

#ifdef _DEBUG
void CRedrawDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CRedrawDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CRedrawDemoDoc ���
