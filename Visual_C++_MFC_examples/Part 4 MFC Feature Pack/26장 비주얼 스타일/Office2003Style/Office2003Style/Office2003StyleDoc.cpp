
// Office2003StyleDoc.cpp : COffice2003StyleDoc Ŭ������ ����
//

#include "stdafx.h"
#include "Office2003Style.h"

#include "Office2003StyleDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COffice2003StyleDoc

IMPLEMENT_DYNCREATE(COffice2003StyleDoc, CDocument)

BEGIN_MESSAGE_MAP(COffice2003StyleDoc, CDocument)
END_MESSAGE_MAP()


// COffice2003StyleDoc ����/�Ҹ�

COffice2003StyleDoc::COffice2003StyleDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

COffice2003StyleDoc::~COffice2003StyleDoc()
{
}

BOOL COffice2003StyleDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// COffice2003StyleDoc serialization

void COffice2003StyleDoc::Serialize(CArchive& ar)
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


// COffice2003StyleDoc ����

#ifdef _DEBUG
void COffice2003StyleDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void COffice2003StyleDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// COffice2003StyleDoc ���
