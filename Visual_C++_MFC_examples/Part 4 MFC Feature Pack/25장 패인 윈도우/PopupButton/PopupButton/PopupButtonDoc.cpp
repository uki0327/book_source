
// PopupButtonDoc.cpp : CPopupButtonDoc Ŭ������ ����
//

#include "stdafx.h"
#include "PopupButton.h"

#include "PopupButtonDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CPopupButtonDoc

IMPLEMENT_DYNCREATE(CPopupButtonDoc, CDocument)

BEGIN_MESSAGE_MAP(CPopupButtonDoc, CDocument)
END_MESSAGE_MAP()


// CPopupButtonDoc ����/�Ҹ�

CPopupButtonDoc::CPopupButtonDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CPopupButtonDoc::~CPopupButtonDoc()
{
}

BOOL CPopupButtonDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CPopupButtonDoc serialization

void CPopupButtonDoc::Serialize(CArchive& ar)
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


// CPopupButtonDoc ����

#ifdef _DEBUG
void CPopupButtonDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CPopupButtonDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CPopupButtonDoc ���
