
// SwitchViewDemoDoc.cpp : CSwitchViewDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "SwitchViewDemo.h"

#include "SwitchViewDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSwitchViewDemoDoc

IMPLEMENT_DYNCREATE(CSwitchViewDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CSwitchViewDemoDoc, CDocument)
END_MESSAGE_MAP()


// CSwitchViewDemoDoc ����/�Ҹ�

CSwitchViewDemoDoc::CSwitchViewDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CSwitchViewDemoDoc::~CSwitchViewDemoDoc()
{
}

BOOL CSwitchViewDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CSwitchViewDemoDoc serialization

void CSwitchViewDemoDoc::Serialize(CArchive& ar)
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


// CSwitchViewDemoDoc ����

#ifdef _DEBUG
void CSwitchViewDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CSwitchViewDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CSwitchViewDemoDoc ���
