
// KeyMoveDoc.cpp : CKeyMoveDoc Ŭ������ ����
//

#include "stdafx.h"
#include "KeyMove.h"

#include "KeyMoveDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CKeyMoveDoc

IMPLEMENT_DYNCREATE(CKeyMoveDoc, CDocument)

BEGIN_MESSAGE_MAP(CKeyMoveDoc, CDocument)
END_MESSAGE_MAP()


// CKeyMoveDoc ����/�Ҹ�

CKeyMoveDoc::CKeyMoveDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CKeyMoveDoc::~CKeyMoveDoc()
{
}

BOOL CKeyMoveDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CKeyMoveDoc serialization

void CKeyMoveDoc::Serialize(CArchive& ar)
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


// CKeyMoveDoc ����

#ifdef _DEBUG
void CKeyMoveDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CKeyMoveDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CKeyMoveDoc ���
