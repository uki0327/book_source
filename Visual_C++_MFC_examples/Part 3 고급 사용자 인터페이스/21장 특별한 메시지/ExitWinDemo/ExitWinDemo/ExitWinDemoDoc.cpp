
// ExitWinDemoDoc.cpp : CExitWinDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "ExitWinDemo.h"

#include "ExitWinDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExitWinDemoDoc

IMPLEMENT_DYNCREATE(CExitWinDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CExitWinDemoDoc, CDocument)
END_MESSAGE_MAP()


// CExitWinDemoDoc ����/�Ҹ�

CExitWinDemoDoc::CExitWinDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CExitWinDemoDoc::~CExitWinDemoDoc()
{
}

BOOL CExitWinDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CExitWinDemoDoc serialization

void CExitWinDemoDoc::Serialize(CArchive& ar)
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


// CExitWinDemoDoc ����

#ifdef _DEBUG
void CExitWinDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CExitWinDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CExitWinDemoDoc ���
