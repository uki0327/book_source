
// PaneDemoDoc.cpp : CPaneDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "PaneDemo.h"

#include "PaneDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CPaneDemoDoc

IMPLEMENT_DYNCREATE(CPaneDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CPaneDemoDoc, CDocument)
END_MESSAGE_MAP()


// CPaneDemoDoc ����/�Ҹ�

CPaneDemoDoc::CPaneDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CPaneDemoDoc::~CPaneDemoDoc()
{
}

BOOL CPaneDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CPaneDemoDoc serialization

void CPaneDemoDoc::Serialize(CArchive& ar)
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


// CPaneDemoDoc ����

#ifdef _DEBUG
void CPaneDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CPaneDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CPaneDemoDoc ���
