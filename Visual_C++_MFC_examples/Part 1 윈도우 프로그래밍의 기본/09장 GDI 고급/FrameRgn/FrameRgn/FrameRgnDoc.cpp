
// FrameRgnDoc.cpp : CFrameRgnDoc Ŭ������ ����
//

#include "stdafx.h"
#include "FrameRgn.h"

#include "FrameRgnDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CFrameRgnDoc

IMPLEMENT_DYNCREATE(CFrameRgnDoc, CDocument)

BEGIN_MESSAGE_MAP(CFrameRgnDoc, CDocument)
END_MESSAGE_MAP()


// CFrameRgnDoc ����/�Ҹ�

CFrameRgnDoc::CFrameRgnDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CFrameRgnDoc::~CFrameRgnDoc()
{
}

BOOL CFrameRgnDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CFrameRgnDoc serialization

void CFrameRgnDoc::Serialize(CArchive& ar)
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


// CFrameRgnDoc ����

#ifdef _DEBUG
void CFrameRgnDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CFrameRgnDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CFrameRgnDoc ���
