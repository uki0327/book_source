
// EditDemoDoc.cpp : CEditDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "EditDemo.h"

#include "EditDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEditDemoDoc

IMPLEMENT_DYNCREATE(CEditDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CEditDemoDoc, CDocument)
END_MESSAGE_MAP()


// CEditDemoDoc ����/�Ҹ�

CEditDemoDoc::CEditDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CEditDemoDoc::~CEditDemoDoc()
{
}

BOOL CEditDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CEditDemoDoc serialization

void CEditDemoDoc::Serialize(CArchive& ar)
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


// CEditDemoDoc ����

#ifdef _DEBUG
void CEditDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEditDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CEditDemoDoc ���
