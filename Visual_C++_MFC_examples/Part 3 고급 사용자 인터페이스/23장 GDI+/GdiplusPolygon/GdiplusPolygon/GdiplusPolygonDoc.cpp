
// GdiplusPolygonDoc.cpp : CGdiplusPolygonDoc Ŭ������ ����
//

#include "stdafx.h"
#include "GdiplusPolygon.h"

#include "GdiplusPolygonDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGdiplusPolygonDoc

IMPLEMENT_DYNCREATE(CGdiplusPolygonDoc, CDocument)

BEGIN_MESSAGE_MAP(CGdiplusPolygonDoc, CDocument)
END_MESSAGE_MAP()


// CGdiplusPolygonDoc ����/�Ҹ�

CGdiplusPolygonDoc::CGdiplusPolygonDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CGdiplusPolygonDoc::~CGdiplusPolygonDoc()
{
}

BOOL CGdiplusPolygonDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CGdiplusPolygonDoc serialization

void CGdiplusPolygonDoc::Serialize(CArchive& ar)
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


// CGdiplusPolygonDoc ����

#ifdef _DEBUG
void CGdiplusPolygonDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CGdiplusPolygonDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CGdiplusPolygonDoc ���
