
// GdiplusLineDoc.cpp : CGdiplusLineDoc Ŭ������ ����
//

#include "stdafx.h"
#include "GdiplusLine.h"

#include "GdiplusLineDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGdiplusLineDoc

IMPLEMENT_DYNCREATE(CGdiplusLineDoc, CDocument)

BEGIN_MESSAGE_MAP(CGdiplusLineDoc, CDocument)
END_MESSAGE_MAP()


// CGdiplusLineDoc ����/�Ҹ�

CGdiplusLineDoc::CGdiplusLineDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CGdiplusLineDoc::~CGdiplusLineDoc()
{
}

BOOL CGdiplusLineDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CGdiplusLineDoc serialization

void CGdiplusLineDoc::Serialize(CArchive& ar)
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


// CGdiplusLineDoc ����

#ifdef _DEBUG
void CGdiplusLineDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CGdiplusLineDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CGdiplusLineDoc ���
