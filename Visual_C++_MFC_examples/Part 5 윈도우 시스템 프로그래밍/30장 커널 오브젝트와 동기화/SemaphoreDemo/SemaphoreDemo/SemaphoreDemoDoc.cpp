
// SemaphoreDemoDoc.cpp : CSemaphoreDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "SemaphoreDemo.h"

#include "SemaphoreDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSemaphoreDemoDoc

IMPLEMENT_DYNCREATE(CSemaphoreDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CSemaphoreDemoDoc, CDocument)
END_MESSAGE_MAP()


// CSemaphoreDemoDoc ����/�Ҹ�

CSemaphoreDemoDoc::CSemaphoreDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CSemaphoreDemoDoc::~CSemaphoreDemoDoc()
{
}

BOOL CSemaphoreDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CSemaphoreDemoDoc serialization

void CSemaphoreDemoDoc::Serialize(CArchive& ar)
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


// CSemaphoreDemoDoc ����

#ifdef _DEBUG
void CSemaphoreDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CSemaphoreDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CSemaphoreDemoDoc ���
