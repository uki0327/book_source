
// GdiplusStringDoc.cpp : CGdiplusStringDoc Ŭ������ ����
//

#include "stdafx.h"
#include "GdiplusString.h"

#include "GdiplusStringDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGdiplusStringDoc

IMPLEMENT_DYNCREATE(CGdiplusStringDoc, CDocument)

BEGIN_MESSAGE_MAP(CGdiplusStringDoc, CDocument)
END_MESSAGE_MAP()


// CGdiplusStringDoc ����/�Ҹ�

CGdiplusStringDoc::CGdiplusStringDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CGdiplusStringDoc::~CGdiplusStringDoc()
{
}

BOOL CGdiplusStringDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CGdiplusStringDoc serialization

void CGdiplusStringDoc::Serialize(CArchive& ar)
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


// CGdiplusStringDoc ����

#ifdef _DEBUG
void CGdiplusStringDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CGdiplusStringDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CGdiplusStringDoc ���
