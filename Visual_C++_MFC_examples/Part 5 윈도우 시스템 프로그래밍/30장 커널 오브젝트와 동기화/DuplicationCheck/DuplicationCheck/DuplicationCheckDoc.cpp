
// DuplicationCheckDoc.cpp : CDuplicationCheckDoc Ŭ������ ����
//

#include "stdafx.h"
#include "DuplicationCheck.h"

#include "DuplicationCheckDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDuplicationCheckDoc

IMPLEMENT_DYNCREATE(CDuplicationCheckDoc, CDocument)

BEGIN_MESSAGE_MAP(CDuplicationCheckDoc, CDocument)
END_MESSAGE_MAP()


// CDuplicationCheckDoc ����/�Ҹ�

CDuplicationCheckDoc::CDuplicationCheckDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CDuplicationCheckDoc::~CDuplicationCheckDoc()
{
}

BOOL CDuplicationCheckDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CDuplicationCheckDoc serialization

void CDuplicationCheckDoc::Serialize(CArchive& ar)
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


// CDuplicationCheckDoc ����

#ifdef _DEBUG
void CDuplicationCheckDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CDuplicationCheckDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CDuplicationCheckDoc ���
