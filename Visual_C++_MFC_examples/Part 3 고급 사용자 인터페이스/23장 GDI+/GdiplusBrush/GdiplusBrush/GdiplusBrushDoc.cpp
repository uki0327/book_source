
// GdiplusBrushDoc.cpp : CGdiplusBrushDoc Ŭ������ ����
//

#include "stdafx.h"
#include "GdiplusBrush.h"

#include "GdiplusBrushDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGdiplusBrushDoc

IMPLEMENT_DYNCREATE(CGdiplusBrushDoc, CDocument)

BEGIN_MESSAGE_MAP(CGdiplusBrushDoc, CDocument)
END_MESSAGE_MAP()


// CGdiplusBrushDoc ����/�Ҹ�

CGdiplusBrushDoc::CGdiplusBrushDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CGdiplusBrushDoc::~CGdiplusBrushDoc()
{
}

BOOL CGdiplusBrushDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CGdiplusBrushDoc serialization

void CGdiplusBrushDoc::Serialize(CArchive& ar)
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


// CGdiplusBrushDoc ����

#ifdef _DEBUG
void CGdiplusBrushDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CGdiplusBrushDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CGdiplusBrushDoc ���
