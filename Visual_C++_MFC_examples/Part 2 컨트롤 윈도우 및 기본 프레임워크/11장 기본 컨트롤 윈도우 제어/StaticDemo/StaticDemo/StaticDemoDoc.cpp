
// StaticDemoDoc.cpp : CStaticDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "StaticDemo.h"

#include "StaticDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CStaticDemoDoc

IMPLEMENT_DYNCREATE(CStaticDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CStaticDemoDoc, CDocument)
END_MESSAGE_MAP()


// CStaticDemoDoc ����/�Ҹ�

CStaticDemoDoc::CStaticDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CStaticDemoDoc::~CStaticDemoDoc()
{
}

BOOL CStaticDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CStaticDemoDoc serialization

void CStaticDemoDoc::Serialize(CArchive& ar)
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


// CStaticDemoDoc ����

#ifdef _DEBUG
void CStaticDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CStaticDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CStaticDemoDoc ���
