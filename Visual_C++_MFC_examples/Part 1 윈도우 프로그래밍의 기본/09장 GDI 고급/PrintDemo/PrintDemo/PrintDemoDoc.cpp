
// PrintDemoDoc.cpp : CPrintDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "PrintDemo.h"

#include "PrintDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CPrintDemoDoc

IMPLEMENT_DYNCREATE(CPrintDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CPrintDemoDoc, CDocument)
END_MESSAGE_MAP()


// CPrintDemoDoc ����/�Ҹ�

CPrintDemoDoc::CPrintDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CPrintDemoDoc::~CPrintDemoDoc()
{
}

BOOL CPrintDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CPrintDemoDoc serialization

void CPrintDemoDoc::Serialize(CArchive& ar)
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


// CPrintDemoDoc ����

#ifdef _DEBUG
void CPrintDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CPrintDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CPrintDemoDoc ���
