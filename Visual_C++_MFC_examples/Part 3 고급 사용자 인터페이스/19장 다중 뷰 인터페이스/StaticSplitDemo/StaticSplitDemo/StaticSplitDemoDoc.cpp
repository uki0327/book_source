
// StaticSplitDemoDoc.cpp : CStaticSplitDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "StaticSplitDemo.h"

#include "StaticSplitDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CStaticSplitDemoDoc

IMPLEMENT_DYNCREATE(CStaticSplitDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CStaticSplitDemoDoc, CDocument)
END_MESSAGE_MAP()


// CStaticSplitDemoDoc ����/�Ҹ�

CStaticSplitDemoDoc::CStaticSplitDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CStaticSplitDemoDoc::~CStaticSplitDemoDoc()
{
}

BOOL CStaticSplitDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CStaticSplitDemoDoc serialization

void CStaticSplitDemoDoc::Serialize(CArchive& ar)
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


// CStaticSplitDemoDoc ����

#ifdef _DEBUG
void CStaticSplitDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CStaticSplitDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CStaticSplitDemoDoc ���
