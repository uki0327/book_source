
// TriangleDemoDoc.cpp : CTriangleDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "TriangleDemo.h"

#include "TriangleDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTriangleDemoDoc

IMPLEMENT_DYNCREATE(CTriangleDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CTriangleDemoDoc, CDocument)
END_MESSAGE_MAP()


// CTriangleDemoDoc ����/�Ҹ�

CTriangleDemoDoc::CTriangleDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CTriangleDemoDoc::~CTriangleDemoDoc()
{
}

BOOL CTriangleDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CTriangleDemoDoc serialization

void CTriangleDemoDoc::Serialize(CArchive& ar)
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


// CTriangleDemoDoc ����

#ifdef _DEBUG
void CTriangleDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTriangleDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CTriangleDemoDoc ���
