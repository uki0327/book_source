
// GdiPlusDemoDoc.cpp : CGdiPlusDemoDoc Ŭ������ ����
//

#include "stdafx.h"
#include "GdiPlusDemo.h"

#include "GdiPlusDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGdiPlusDemoDoc

IMPLEMENT_DYNCREATE(CGdiPlusDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CGdiPlusDemoDoc, CDocument)
END_MESSAGE_MAP()


// CGdiPlusDemoDoc ����/�Ҹ�

CGdiPlusDemoDoc::CGdiPlusDemoDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CGdiPlusDemoDoc::~CGdiPlusDemoDoc()
{
}

BOOL CGdiPlusDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CGdiPlusDemoDoc serialization

void CGdiPlusDemoDoc::Serialize(CArchive& ar)
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


// CGdiPlusDemoDoc ����

#ifdef _DEBUG
void CGdiPlusDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CGdiPlusDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CGdiPlusDemoDoc ���
