
// BmpOutDemoDoc.cpp : CBmpOutDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "BmpOutDemo.h"

#include "BmpOutDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CBmpOutDemoDoc

IMPLEMENT_DYNCREATE(CBmpOutDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CBmpOutDemoDoc, CDocument)
END_MESSAGE_MAP()


// CBmpOutDemoDoc ����/�Ҹ�

CBmpOutDemoDoc::CBmpOutDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CBmpOutDemoDoc::~CBmpOutDemoDoc()
{
}

BOOL CBmpOutDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CBmpOutDemoDoc serialization

void CBmpOutDemoDoc::Serialize(CArchive& ar)
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


// CBmpOutDemoDoc ����

#ifdef _DEBUG
void CBmpOutDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CBmpOutDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CBmpOutDemoDoc ���
