
// DynSplitDemoDoc.cpp : CDynSplitDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "DynSplitDemo.h"

#include "DynSplitDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDynSplitDemoDoc

IMPLEMENT_DYNCREATE(CDynSplitDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CDynSplitDemoDoc, CDocument)
END_MESSAGE_MAP()


// CDynSplitDemoDoc ����/�Ҹ�

CDynSplitDemoDoc::CDynSplitDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CDynSplitDemoDoc::~CDynSplitDemoDoc()
{
}

BOOL CDynSplitDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CDynSplitDemoDoc serialization

void CDynSplitDemoDoc::Serialize(CArchive& ar)
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


// CDynSplitDemoDoc ����

#ifdef _DEBUG
void CDynSplitDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CDynSplitDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CDynSplitDemoDoc ���
