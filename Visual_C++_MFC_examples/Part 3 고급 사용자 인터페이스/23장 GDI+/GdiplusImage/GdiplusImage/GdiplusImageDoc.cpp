
// GdiplusImageDoc.cpp : CGdiplusImageDoc Ŭ������ ����
//

#include "stdafx.h"
#include "GdiplusImage.h"

#include "GdiplusImageDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGdiplusImageDoc

IMPLEMENT_DYNCREATE(CGdiplusImageDoc, CDocument)

BEGIN_MESSAGE_MAP(CGdiplusImageDoc, CDocument)
END_MESSAGE_MAP()


// CGdiplusImageDoc ����/�Ҹ�

CGdiplusImageDoc::CGdiplusImageDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CGdiplusImageDoc::~CGdiplusImageDoc()
{
}

BOOL CGdiplusImageDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CGdiplusImageDoc serialization

void CGdiplusImageDoc::Serialize(CArchive& ar)
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


// CGdiplusImageDoc ����

#ifdef _DEBUG
void CGdiplusImageDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CGdiplusImageDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CGdiplusImageDoc ���
