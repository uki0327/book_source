
// MouseCombiDoc.cpp : CMouseCombiDoc Ŭ������ ����
//

#include "stdafx.h"
#include "MouseCombi.h"

#include "MouseCombiDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMouseCombiDoc

IMPLEMENT_DYNCREATE(CMouseCombiDoc, CDocument)

BEGIN_MESSAGE_MAP(CMouseCombiDoc, CDocument)
END_MESSAGE_MAP()


// CMouseCombiDoc ����/�Ҹ�

CMouseCombiDoc::CMouseCombiDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CMouseCombiDoc::~CMouseCombiDoc()
{
}

BOOL CMouseCombiDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CMouseCombiDoc serialization

void CMouseCombiDoc::Serialize(CArchive& ar)
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


// CMouseCombiDoc ����

#ifdef _DEBUG
void CMouseCombiDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMouseCombiDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CMouseCombiDoc ���
