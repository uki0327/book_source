
// PagerDemoDoc.cpp : CPagerDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "PagerDemo.h"

#include "PagerDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CPagerDemoDoc

IMPLEMENT_DYNCREATE(CPagerDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CPagerDemoDoc, CDocument)
END_MESSAGE_MAP()


// CPagerDemoDoc ����/�Ҹ�

CPagerDemoDoc::CPagerDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CPagerDemoDoc::~CPagerDemoDoc()
{
}

BOOL CPagerDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CPagerDemoDoc serialization

void CPagerDemoDoc::Serialize(CArchive& ar)
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


// CPagerDemoDoc ����

#ifdef _DEBUG
void CPagerDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CPagerDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CPagerDemoDoc ���
