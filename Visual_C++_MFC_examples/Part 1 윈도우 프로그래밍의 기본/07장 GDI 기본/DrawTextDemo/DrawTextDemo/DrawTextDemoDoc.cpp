
// DrawTextDemoDoc.cpp : CDrawTextDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "DrawTextDemo.h"

#include "DrawTextDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDrawTextDemoDoc

IMPLEMENT_DYNCREATE(CDrawTextDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CDrawTextDemoDoc, CDocument)
END_MESSAGE_MAP()


// CDrawTextDemoDoc ����/�Ҹ�

CDrawTextDemoDoc::CDrawTextDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CDrawTextDemoDoc::~CDrawTextDemoDoc()
{
}

BOOL CDrawTextDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CDrawTextDemoDoc serialization

void CDrawTextDemoDoc::Serialize(CArchive& ar)
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


// CDrawTextDemoDoc ����

#ifdef _DEBUG
void CDrawTextDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CDrawTextDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CDrawTextDemoDoc ���
