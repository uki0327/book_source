
// MapModeDemoDoc.cpp : CMapModeDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "MapModeDemo.h"

#include "MapModeDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMapModeDemoDoc

IMPLEMENT_DYNCREATE(CMapModeDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CMapModeDemoDoc, CDocument)
END_MESSAGE_MAP()


// CMapModeDemoDoc ����/�Ҹ�

CMapModeDemoDoc::CMapModeDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CMapModeDemoDoc::~CMapModeDemoDoc()
{
}

BOOL CMapModeDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CMapModeDemoDoc serialization

void CMapModeDemoDoc::Serialize(CArchive& ar)
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


// CMapModeDemoDoc ����

#ifdef _DEBUG
void CMapModeDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMapModeDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CMapModeDemoDoc ���
