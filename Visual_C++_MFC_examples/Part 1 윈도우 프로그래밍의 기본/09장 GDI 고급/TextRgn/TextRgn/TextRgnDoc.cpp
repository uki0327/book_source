
// TextRgnDoc.cpp : CTextRgnDoc Ŭ������ ����
//

#include "stdafx.h"
#include "TextRgn.h"

#include "TextRgnDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTextRgnDoc

IMPLEMENT_DYNCREATE(CTextRgnDoc, CDocument)

BEGIN_MESSAGE_MAP(CTextRgnDoc, CDocument)
END_MESSAGE_MAP()


// CTextRgnDoc ����/�Ҹ�

CTextRgnDoc::CTextRgnDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CTextRgnDoc::~CTextRgnDoc()
{
}

BOOL CTextRgnDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CTextRgnDoc serialization

void CTextRgnDoc::Serialize(CArchive& ar)
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


// CTextRgnDoc ����

#ifdef _DEBUG
void CTextRgnDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTextRgnDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CTextRgnDoc ���
