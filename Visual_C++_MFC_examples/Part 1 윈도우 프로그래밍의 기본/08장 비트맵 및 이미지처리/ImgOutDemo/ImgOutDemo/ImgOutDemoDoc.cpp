
// ImgOutDemoDoc.cpp : CImgOutDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "ImgOutDemo.h"

#include "ImgOutDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CImgOutDemoDoc

IMPLEMENT_DYNCREATE(CImgOutDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CImgOutDemoDoc, CDocument)
END_MESSAGE_MAP()


// CImgOutDemoDoc ����/�Ҹ�

CImgOutDemoDoc::CImgOutDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CImgOutDemoDoc::~CImgOutDemoDoc()
{
}

BOOL CImgOutDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CImgOutDemoDoc serialization

void CImgOutDemoDoc::Serialize(CArchive& ar)
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


// CImgOutDemoDoc ����

#ifdef _DEBUG
void CImgOutDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CImgOutDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CImgOutDemoDoc ���
