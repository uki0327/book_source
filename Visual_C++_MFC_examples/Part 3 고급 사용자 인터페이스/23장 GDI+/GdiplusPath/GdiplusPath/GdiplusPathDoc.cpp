
// GdiplusPathDoc.cpp : CGdiplusPathDoc Ŭ������ ����
//

#include "stdafx.h"
#include "GdiplusPath.h"

#include "GdiplusPathDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGdiplusPathDoc

IMPLEMENT_DYNCREATE(CGdiplusPathDoc, CDocument)

BEGIN_MESSAGE_MAP(CGdiplusPathDoc, CDocument)
END_MESSAGE_MAP()


// CGdiplusPathDoc ����/�Ҹ�

CGdiplusPathDoc::CGdiplusPathDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CGdiplusPathDoc::~CGdiplusPathDoc()
{
}

BOOL CGdiplusPathDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CGdiplusPathDoc serialization

void CGdiplusPathDoc::Serialize(CArchive& ar)
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


// CGdiplusPathDoc ����

#ifdef _DEBUG
void CGdiplusPathDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CGdiplusPathDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CGdiplusPathDoc ���
