
// UpdateDemoDoc.cpp : CUpdateDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "UpdateDemo.h"

#include "UpdateDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CUpdateDemoDoc

IMPLEMENT_DYNCREATE(CUpdateDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CUpdateDemoDoc, CDocument)
END_MESSAGE_MAP()


// CUpdateDemoDoc ����/�Ҹ�

CUpdateDemoDoc::CUpdateDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CUpdateDemoDoc::~CUpdateDemoDoc()
{
}

BOOL CUpdateDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CUpdateDemoDoc serialization

void CUpdateDemoDoc::Serialize(CArchive& ar)
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


// CUpdateDemoDoc ����

#ifdef _DEBUG
void CUpdateDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CUpdateDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CUpdateDemoDoc ���
