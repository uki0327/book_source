
// SaveGrayDemoDoc.cpp : CSaveGrayDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "SaveGrayDemo.h"

#include "SaveGrayDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSaveGrayDemoDoc

IMPLEMENT_DYNCREATE(CSaveGrayDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CSaveGrayDemoDoc, CDocument)
END_MESSAGE_MAP()


// CSaveGrayDemoDoc ����/�Ҹ�

CSaveGrayDemoDoc::CSaveGrayDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CSaveGrayDemoDoc::~CSaveGrayDemoDoc()
{
}

BOOL CSaveGrayDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CSaveGrayDemoDoc serialization

void CSaveGrayDemoDoc::Serialize(CArchive& ar)
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


// CSaveGrayDemoDoc ����

#ifdef _DEBUG
void CSaveGrayDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CSaveGrayDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CSaveGrayDemoDoc ���
