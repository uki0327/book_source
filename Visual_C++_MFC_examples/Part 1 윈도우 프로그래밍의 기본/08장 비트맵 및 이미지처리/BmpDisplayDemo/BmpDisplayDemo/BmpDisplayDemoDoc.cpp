
// BmpDisplayDemoDoc.cpp : CBmpDisplayDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "BmpDisplayDemo.h"

#include "BmpDisplayDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CBmpDisplayDemoDoc

IMPLEMENT_DYNCREATE(CBmpDisplayDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CBmpDisplayDemoDoc, CDocument)
END_MESSAGE_MAP()


// CBmpDisplayDemoDoc ����/�Ҹ�

CBmpDisplayDemoDoc::CBmpDisplayDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CBmpDisplayDemoDoc::~CBmpDisplayDemoDoc()
{
}

BOOL CBmpDisplayDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CBmpDisplayDemoDoc serialization

void CBmpDisplayDemoDoc::Serialize(CArchive& ar)
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


// CBmpDisplayDemoDoc ����

#ifdef _DEBUG
void CBmpDisplayDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CBmpDisplayDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CBmpDisplayDemoDoc ���
