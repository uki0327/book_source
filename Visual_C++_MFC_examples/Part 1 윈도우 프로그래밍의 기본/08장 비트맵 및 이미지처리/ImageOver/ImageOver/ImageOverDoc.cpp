
// ImageOverDoc.cpp : CImageOverDoc Ŭ������ ����
//

#include "stdafx.h"
#include "ImageOver.h"

#include "ImageOverDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CImageOverDoc

IMPLEMENT_DYNCREATE(CImageOverDoc, CDocument)

BEGIN_MESSAGE_MAP(CImageOverDoc, CDocument)
END_MESSAGE_MAP()


// CImageOverDoc ����/�Ҹ�

CImageOverDoc::CImageOverDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CImageOverDoc::~CImageOverDoc()
{
}

BOOL CImageOverDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CImageOverDoc serialization

void CImageOverDoc::Serialize(CArchive& ar)
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


// CImageOverDoc ����

#ifdef _DEBUG
void CImageOverDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CImageOverDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CImageOverDoc ���
