
// DateTimeBtnDoc.cpp : CDateTimeBtnDoc Ŭ������ ����
//

#include "stdafx.h"
#include "DateTimeBtn.h"

#include "DateTimeBtnDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDateTimeBtnDoc

IMPLEMENT_DYNCREATE(CDateTimeBtnDoc, CDocument)

BEGIN_MESSAGE_MAP(CDateTimeBtnDoc, CDocument)
END_MESSAGE_MAP()


// CDateTimeBtnDoc ����/�Ҹ�

CDateTimeBtnDoc::CDateTimeBtnDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CDateTimeBtnDoc::~CDateTimeBtnDoc()
{
}

BOOL CDateTimeBtnDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CDateTimeBtnDoc serialization

void CDateTimeBtnDoc::Serialize(CArchive& ar)
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


// CDateTimeBtnDoc ����

#ifdef _DEBUG
void CDateTimeBtnDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CDateTimeBtnDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CDateTimeBtnDoc ���
