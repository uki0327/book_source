
// DrawModeDemoDoc.cpp : CDrawModeDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "DrawModeDemo.h"

#include "DrawModeDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDrawModeDemoDoc

IMPLEMENT_DYNCREATE(CDrawModeDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CDrawModeDemoDoc, CDocument)
END_MESSAGE_MAP()


// CDrawModeDemoDoc ����/�Ҹ�

CDrawModeDemoDoc::CDrawModeDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CDrawModeDemoDoc::~CDrawModeDemoDoc()
{
}

BOOL CDrawModeDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CDrawModeDemoDoc serialization

void CDrawModeDemoDoc::Serialize(CArchive& ar)
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


// CDrawModeDemoDoc ����

#ifdef _DEBUG
void CDrawModeDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CDrawModeDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CDrawModeDemoDoc ���
