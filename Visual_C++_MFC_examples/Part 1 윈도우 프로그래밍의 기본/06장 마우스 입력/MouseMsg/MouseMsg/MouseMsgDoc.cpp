
// MouseMsgDoc.cpp : CMouseMsgDoc Ŭ������ ����
//

#include "stdafx.h"
#include "MouseMsg.h"

#include "MouseMsgDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMouseMsgDoc

IMPLEMENT_DYNCREATE(CMouseMsgDoc, CDocument)

BEGIN_MESSAGE_MAP(CMouseMsgDoc, CDocument)
END_MESSAGE_MAP()


// CMouseMsgDoc ����/�Ҹ�

CMouseMsgDoc::CMouseMsgDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CMouseMsgDoc::~CMouseMsgDoc()
{
}

BOOL CMouseMsgDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CMouseMsgDoc serialization

void CMouseMsgDoc::Serialize(CArchive& ar)
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


// CMouseMsgDoc ����

#ifdef _DEBUG
void CMouseMsgDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMouseMsgDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CMouseMsgDoc ���
