
// ImageRgnDoc.cpp : CImageRgnDoc Ŭ������ ����
//

#include "stdafx.h"
#include "ImageRgn.h"

#include "ImageRgnDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CImageRgnDoc

IMPLEMENT_DYNCREATE(CImageRgnDoc, CDocument)

BEGIN_MESSAGE_MAP(CImageRgnDoc, CDocument)
END_MESSAGE_MAP()


// CImageRgnDoc ����/�Ҹ�

CImageRgnDoc::CImageRgnDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CImageRgnDoc::~CImageRgnDoc()
{
}

BOOL CImageRgnDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CImageRgnDoc serialization

void CImageRgnDoc::Serialize(CArchive& ar)
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


// CImageRgnDoc ����

#ifdef _DEBUG
void CImageRgnDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CImageRgnDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CImageRgnDoc ���
