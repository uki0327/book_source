
// TrayDemoDoc.cpp : CTrayDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "TrayDemo.h"

#include "TrayDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTrayDemoDoc

IMPLEMENT_DYNCREATE(CTrayDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CTrayDemoDoc, CDocument)
END_MESSAGE_MAP()


// CTrayDemoDoc ����/�Ҹ�

CTrayDemoDoc::CTrayDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CTrayDemoDoc::~CTrayDemoDoc()
{
}

BOOL CTrayDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CTrayDemoDoc serialization

void CTrayDemoDoc::Serialize(CArchive& ar)
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


// CTrayDemoDoc ����

#ifdef _DEBUG
void CTrayDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTrayDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CTrayDemoDoc ���
