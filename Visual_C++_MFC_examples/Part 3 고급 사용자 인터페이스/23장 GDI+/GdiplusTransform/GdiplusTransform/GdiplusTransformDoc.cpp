
// GdiplusTransformDoc.cpp : CGdiplusTransformDoc Ŭ������ ����
//

#include "stdafx.h"
#include "GdiplusTransform.h"

#include "GdiplusTransformDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGdiplusTransformDoc

IMPLEMENT_DYNCREATE(CGdiplusTransformDoc, CDocument)

BEGIN_MESSAGE_MAP(CGdiplusTransformDoc, CDocument)
END_MESSAGE_MAP()


// CGdiplusTransformDoc ����/�Ҹ�

CGdiplusTransformDoc::CGdiplusTransformDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CGdiplusTransformDoc::~CGdiplusTransformDoc()
{
}

BOOL CGdiplusTransformDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CGdiplusTransformDoc serialization

void CGdiplusTransformDoc::Serialize(CArchive& ar)
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


// CGdiplusTransformDoc ����

#ifdef _DEBUG
void CGdiplusTransformDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CGdiplusTransformDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CGdiplusTransformDoc ���
