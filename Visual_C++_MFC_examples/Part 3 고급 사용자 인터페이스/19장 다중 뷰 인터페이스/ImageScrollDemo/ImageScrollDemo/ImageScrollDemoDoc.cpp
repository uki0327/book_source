
// ImageScrollDemoDoc.cpp : CImageScrollDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "ImageScrollDemo.h"

#include "ImageScrollDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CImageScrollDemoDoc

IMPLEMENT_DYNCREATE(CImageScrollDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CImageScrollDemoDoc, CDocument)
END_MESSAGE_MAP()


// CImageScrollDemoDoc ����/�Ҹ�

CImageScrollDemoDoc::CImageScrollDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CImageScrollDemoDoc::~CImageScrollDemoDoc()
{
}

BOOL CImageScrollDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CImageScrollDemoDoc serialization

void CImageScrollDemoDoc::Serialize(CArchive& ar)
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


// CImageScrollDemoDoc ����

#ifdef _DEBUG
void CImageScrollDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CImageScrollDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CImageScrollDemoDoc ���
