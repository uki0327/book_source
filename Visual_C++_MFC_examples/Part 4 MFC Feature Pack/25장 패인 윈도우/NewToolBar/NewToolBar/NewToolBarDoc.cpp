
// NewToolBarDoc.cpp : CNewToolBarDoc Ŭ������ ����
//

#include "stdafx.h"
#include "NewToolBar.h"

#include "NewToolBarDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CNewToolBarDoc

IMPLEMENT_DYNCREATE(CNewToolBarDoc, CDocument)

BEGIN_MESSAGE_MAP(CNewToolBarDoc, CDocument)
END_MESSAGE_MAP()


// CNewToolBarDoc ����/�Ҹ�

CNewToolBarDoc::CNewToolBarDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CNewToolBarDoc::~CNewToolBarDoc()
{
}

BOOL CNewToolBarDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CNewToolBarDoc serialization

void CNewToolBarDoc::Serialize(CArchive& ar)
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


// CNewToolBarDoc ����

#ifdef _DEBUG
void CNewToolBarDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CNewToolBarDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CNewToolBarDoc ���
