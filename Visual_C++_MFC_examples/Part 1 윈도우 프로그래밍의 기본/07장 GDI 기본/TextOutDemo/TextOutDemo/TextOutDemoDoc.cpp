
// TextOutDemoDoc.cpp : CTextOutDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "TextOutDemo.h"

#include "TextOutDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTextOutDemoDoc

IMPLEMENT_DYNCREATE(CTextOutDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CTextOutDemoDoc, CDocument)
END_MESSAGE_MAP()


// CTextOutDemoDoc ����/�Ҹ�

CTextOutDemoDoc::CTextOutDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CTextOutDemoDoc::~CTextOutDemoDoc()
{
}

BOOL CTextOutDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CTextOutDemoDoc serialization

void CTextOutDemoDoc::Serialize(CArchive& ar)
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


// CTextOutDemoDoc ����

#ifdef _DEBUG
void CTextOutDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTextOutDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CTextOutDemoDoc ���
