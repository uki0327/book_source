
// UserMsgDemoDoc.cpp : CUserMsgDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "UserMsgDemo.h"

#include "UserMsgDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CUserMsgDemoDoc

IMPLEMENT_DYNCREATE(CUserMsgDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CUserMsgDemoDoc, CDocument)
END_MESSAGE_MAP()


// CUserMsgDemoDoc ����/�Ҹ�

CUserMsgDemoDoc::CUserMsgDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CUserMsgDemoDoc::~CUserMsgDemoDoc()
{
}

BOOL CUserMsgDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CUserMsgDemoDoc serialization

void CUserMsgDemoDoc::Serialize(CArchive& ar)
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


// CUserMsgDemoDoc ����

#ifdef _DEBUG
void CUserMsgDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CUserMsgDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CUserMsgDemoDoc ���
