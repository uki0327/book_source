
// CreateDemoDoc.cpp : CCreateDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "CreateDemo.h"

#include "CreateDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCreateDemoDoc

IMPLEMENT_DYNCREATE(CCreateDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CCreateDemoDoc, CDocument)
END_MESSAGE_MAP()


// CCreateDemoDoc ����/�Ҹ�

CCreateDemoDoc::CCreateDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CCreateDemoDoc::~CCreateDemoDoc()
{
}

BOOL CCreateDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CCreateDemoDoc serialization

void CCreateDemoDoc::Serialize(CArchive& ar)
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


// CCreateDemoDoc ����

#ifdef _DEBUG
void CCreateDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCreateDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCreateDemoDoc ���
