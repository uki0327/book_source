
// CommandDemoDoc.cpp : CCommandDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "CommandDemo.h"

#include "CommandDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCommandDemoDoc

IMPLEMENT_DYNCREATE(CCommandDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CCommandDemoDoc, CDocument)
//	ON_COMMAND(ID_Menu_Start, &CCommandDemoDoc::OnMenuStart)
END_MESSAGE_MAP()


// CCommandDemoDoc ����/�Ҹ�

CCommandDemoDoc::CCommandDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CCommandDemoDoc::~CCommandDemoDoc()
{
}

BOOL CCommandDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CCommandDemoDoc serialization

void CCommandDemoDoc::Serialize(CArchive& ar)
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


// CCommandDemoDoc ����

#ifdef _DEBUG
void CCommandDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCommandDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCommandDemoDoc ���

void CCommandDemoDoc::OnMenuStart()
{
	AfxMessageBox(_T("���� �޴��� �����Ͽ����ϴ�. - CCommandDemoDoc"));
}
