
// TransparentDemoDoc.cpp : CTransparentDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "TransparentDemo.h"

#include "TransparentDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTransparentDemoDoc

IMPLEMENT_DYNCREATE(CTransparentDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CTransparentDemoDoc, CDocument)
END_MESSAGE_MAP()


// CTransparentDemoDoc ����/�Ҹ�

CTransparentDemoDoc::CTransparentDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CTransparentDemoDoc::~CTransparentDemoDoc()
{
}

BOOL CTransparentDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CTransparentDemoDoc serialization

void CTransparentDemoDoc::Serialize(CArchive& ar)
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


// CTransparentDemoDoc ����

#ifdef _DEBUG
void CTransparentDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTransparentDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CTransparentDemoDoc ���
