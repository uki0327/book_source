
// NewStatusBarDoc.cpp : CNewStatusBarDoc Ŭ������ ����
//

#include "stdafx.h"
#include "NewStatusBar.h"

#include "NewStatusBarDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CNewStatusBarDoc

IMPLEMENT_DYNCREATE(CNewStatusBarDoc, CDocument)

BEGIN_MESSAGE_MAP(CNewStatusBarDoc, CDocument)
END_MESSAGE_MAP()


// CNewStatusBarDoc ����/�Ҹ�

CNewStatusBarDoc::CNewStatusBarDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CNewStatusBarDoc::~CNewStatusBarDoc()
{
}

BOOL CNewStatusBarDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CNewStatusBarDoc serialization

void CNewStatusBarDoc::Serialize(CArchive& ar)
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


// CNewStatusBarDoc ����

#ifdef _DEBUG
void CNewStatusBarDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CNewStatusBarDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CNewStatusBarDoc ���
